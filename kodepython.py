import matplotlib.pyplot as plt 
import numpy as np 
import math


def f(x):
  y = math.tan(x) - x - 1
  return y

def calc(x1, x2):
  i = 1
  while True:
    print(f"Iterasi ke-{i} : ")
    print(f"x1 = {x1}")
    print(f"x2 = {x2}")
    xr = (x1 + x2) / 2
    print(f"xr = {xr}")
    print(f"f(x1) = {f(x1)}")
    print(f"f(x2) = {f(x2)}")
    print(f"f(xr) = {f(xr)}")
    check = f(x1) * f(xr)
    if check > 0:
      x1 = xr
      cond = "> 0\nx1 = xr"
    elif check < 0:
      x2 = xr
      cond = "< 0\nx2 = xr"
    print(f"f(x1) * f(xr) = {check} {cond}\n")
    if abs(f(xr)) < 0.001:
      break
    i += 1
  return xr
  

def main():
  x1 = float(input("x1: "))
  x2 = float(input("x2: "))
  print()
  xr = calc(x1, x2)
  print("The root of equation is =", xr)
  x = np.linspace(-10, 10, 100)
  y = list(map(f, x))
  plt.plot(x, y)
  plt.xlabel('x values')
  plt.ylabel('y values')
  plt.title('Graph of tan(x) - x - 1')
  plt.grid(True)
  plt.show()

if __name__=="__main__":
    main()