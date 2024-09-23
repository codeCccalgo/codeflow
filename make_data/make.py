import math 
import random 
def make_int_arr(n, l, r): 
    a = [] 
    for i in range(n): 
        x = random.randint(l, r) 
        a.append(x) 
    return a 

def make_int(l, r): 
    a = random.randint(l, r)  
    return a 

def make_double(l, r):
    a = random.uniform(l,r) 
    return a 

def make_double_arr(n, l, r): 
    a = [] 
    for i in range(n): 
        x = random.uniform(l, r) 
        a.append(x) 
    return a    

# def make_str(): 
import random
import string

def make_str1(n):
    characters = string.ascii_letters + string.digits  # 包含所有字母和数字
    return ''.join(random.choice(characters) for _ in range(n))
