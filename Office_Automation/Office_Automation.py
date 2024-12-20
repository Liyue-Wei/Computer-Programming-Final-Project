flag = False
while not flag:
    try:
        import os
        import tkinter as tk
        from tkinter import messagebox
        import ttkbootstrap as ttk
        from PIL import Image, ImageTk
        import pandas as pd
        import numpy as np
        import openpyxl
        import matplotlib
        from matplotlib import pyplot as plt
        import mplfinance as mpf
        import yfinance as yf
        import time
        import selenium
        from selenium import webdriver
        flag = True

    except ImportError :
        print("ERROR : Essential components missed. Automatically installing...")
        from Extension_Modules import install
        install.main()
        # print("Press any key to continue...")
        os.system("PAUSE")

from Extension_Modules import file_directory as fd
from Extension_Modules import get_username as gu
print("Application booting up successfully.")

global ticker_list, outFile_1, outFile_2
ticker_list = []

path_1 = fd.path_function("/rect_stock.dat")
path_2 = fd.path_function("/email_info.dat")
outFile_1 = open(path_1, "a+") if os.path.exists(path_1) else open(path_1, "w")
outFile_2 = open(path_2, "a+") if os.path.exists(path_2) else open(path_2, "w")

def check_ticker_exists(ticker):
    try:
        stock = yf.Ticker(ticker)
        info = stock.info
        # print(info)  
        if 'regularMarketPrice' in info or 'previousClose' in info:
            return True
        
        else:
            return False
        
    except Exception as e:
        print(f"Error: {e}")  
        return False

def status_output_func(index):
    status_output.config(state="normal")
    status_output.delete("1.0", "end")
    status_output.insert("end", index)
    status_output.config(state="disabled")

def rect_stock_output_func(index):
    rect_stock_output.config(state="normal")
    rect_stock_output.delete("1.0", "end")
    rect_stock_output.insert("end", index)
    rect_stock_output.config(state="disabled")

def apply():
    symbol = stc_sym.get()
    flag = check_ticker_exists(symbol)
    # print(flag)
    if flag:
        ticker_list.append(symbol)
        status_output_func("Stock symbol {} has been added to the list.\n".format(symbol))
        rect_stock_output_func("\n".join(ticker_list))

    else:
        status_output_func("The {} does not exist in Yahoo Finance.\n".format(symbol))
        messagebox.showerror("Error", "The stock symbol does not exist in Yahoo Finance.")

    stc_sym.set('')

def main():
    win = ttk.Window(themename="cerculean")
    win.title("Office Automation - Automatic Stock Data Analysis")
    win.geometry("1280x720")
    win.resizable(False, False)
    ico_path = fd.path_function("/NTTU_LOGO.ico")
    win.iconbitmap(ico_path)
    pic_bg_path = fd.path_function("/background.png")
    pic_bg = Image.open(pic_bg_path)
    pic = ImageTk.PhotoImage(pic_bg)
    tk.Label(win, image=pic).place(x=-2, y=-2)

    global stc_sym, date_from, date_to, status_output, rect_stock_output, PTC, VC, CC, MAC, RSI, BOL, email_func, SMTP, email_add, password
    stc_sym = tk.StringVar()
    date_from = tk.StringVar()
    date_to = tk.StringVar()
    PTC = tk.BooleanVar()
    VC = tk.BooleanVar()
    CC = tk.BooleanVar()
    MAC = tk.BooleanVar()
    RSI = tk.BooleanVar()
    BOL = tk.BooleanVar()
    email_func = tk.BooleanVar()
    SMTP = tk.StringVar()
    email_add = tk.StringVar()
    password = tk.StringVar()

    date_from.set("YYYY/MM/DD")
    date_to.set("YYYY/MM/DD")
    PTC.set(True)
    SMTP.set("SMTP Server")
    email_add.set("Email Address")
    password.set("Password")

    tk.Label(win, text="Symbol", font=("Arial", 20)).place(x=10, y=85)
    tk.Entry(win, font=("Arial", 20), textvariable=stc_sym).place(x=10, y=130, width=430, height=40)
    tk.Button(win, text="Apply", font=("Arial", 20), command=apply).place(x=450, y=130, width=180, height=40)

    tk.Label(win, text="Recently Searched", font=("Arial", 20)).place(x=10, y=190)
    rect_stock_output = tk.Text(win, font=("Arial", 20))
    rect_stock_output.place(x=10, y=235, width=620, height=175)
    rect_stock_output.config(state="disabled")
    tk.Button(win, text="Apply All", font=("Arial", 20)).place(x=10, y=420, width=620, height=40)

    tk.Label(win, text="Date From", font=("Arial", 20)).place(x=640, y=85)
    tk.Entry(win, font=("Arial", 20), textvariable=date_from).place(x=640, y=130, width=310, height=40)
    tk.Label(win, text="Date To", font=("Arial", 20)).place(x=960, y=85)
    tk.Entry(win, font=("Arial", 20), textvariable=date_to).place(x=960, y=130, width=310, height=40)

    tk.Label(win, text="Functions", font=("Arial", 20)).place(x=640, y=190)
    CB_PTC = tk.Checkbutton(win, text="Price Trend Chart", font=("Arial", 18), variable=PTC).place(x=640, y=235)
    CB_VC = tk.Checkbutton(win, text="Volume Chart", font=("Arial", 18), variable=VC).place(x=640, y=270)
    CB_CC = tk.Checkbutton(win, text="Candlestick Chart", font=("Arial", 18), variable=CC).place(x=640, y=305)
    CB_MAC = tk.Checkbutton(win, text="Moving Average Chart", font=("Arial", 18), variable=MAC).place(x=640, y=340)
    CB_RSI = tk.Checkbutton(win, text="RSI Chart", font=("Arial", 18), variable=RSI).place(x=640, y=375)
    CB_BOL = tk.Checkbutton(win, text="Bollinger Band Chart", font=("Arial", 18), variable=BOL).place(x=640, y=410)
    CB_email_func = tk.Checkbutton(win, text="Email Notification", font=("Arial", 18), variable=email_func).place(x=640, y=445)

    tk.Label(win, text="Mail Settings", font=("Arial", 20)).place(x=960, y=190)
    tk.Entry(win, font=("Arial", 20), textvariable=SMTP).place(x=960, y=235, width=310, height=40)
    tk.Entry(win, font=("Arial", 20), textvariable=email_add).place(x=960, y=285, width=310, height=40)
    tk.Entry(win, font=("Arial", 20), show='*', textvariable=password).place(x=960, y=335, width=310, height=40)
    tk.Button(win, text="Save to Default", font=("Arial", 20)).place(x=960, y=390, width=310, height=40)
    tk.Button(win, text="Load Default", font=("Arial", 20)).place(x=960, y=435, width=310, height=40)

    tk.Label(win, text="Status", font=("Arial", 20)).place(x=10, y=475)
    status_output = tk.Text(win, font=("Arial", 20))
    status_output.place(x=10, y=520, width=1260, height=100)
    status_output.config(state="disabled")

    tk.Button(win, text="Stock List", font=("Arial", 20)).place(x=10, y=635, width=200, height=40)
    tk.Button(win, text="Search - Yahoo Finance", font=("Arial", 20)).place(x=220, y=635, width=400, height=40)
    tk.Button(win, text="Run Application", font=("Arial", 20)).place(x=630, y=635, width=640, height=40)

    win.mainloop()

if __name__ == "__main__":
    main()