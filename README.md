# eiffel_rename

## Doc: eiffel_rename.pdf

## Demo:

### For Section 2: the Eiffel’s field renaming problem we found

#### Please make sure you have follow Eiffel compiler installed on your system:

-- ISE EiffelStudio4 22.12.10.6463 (released in 2022)
-- Gobo Eiffel compiler gec version 22.01.09.45 (released in 2022)
-- SmartEiffel version 1.16 (released in 2003)
```
$ cd  eiffel_bug

# test ISE EiffelStudio4 22.12.10.6463 (released in 2022)
$ make ise
$ cat  ise.out   # to see the output

# test Gobo Eiffel compiler gec version 22.01.09.45 (released in 2022)
# make gobo
# cat  gobo.out  # to see the output

# test SmartEiffel version 1.16 (released in 2003)
$ cd se
$ make se
$ cat  se.out   # to see the output
```


### For Section 3, manual fix with virtual field accessor
```
$ cd  eiffel_fix


# then repeat the same command as above
```

