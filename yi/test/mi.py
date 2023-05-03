#!/usr/bin/python3

class A(object):
  def __init__(self):
    self.a = "a"

class B(A):
  pass

class C(A):
  pass

class D(B, C):
  pass

def main():
  d = D()
  print(d.__dict__)

if __name__ == "__main__":
  main()
