#!/usr/bin/env python3.9

import libyc

def test_rename():
  rn = libyc.Rename("addr", "dorm")
  print(str(rn))

def main():
  test_rename()

if __name__ == '__main__':
  main()
