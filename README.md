## Doc: Please read the eiffel_rename.pdf

### Abstract

We discovered a loophole in Eiffel's field renaming mechanism 
when applied to the diamond problem of multiple inheritance. 
To fix the loophole we propose to abandon the renaming's 
reference identity semantics; we introduce
a concept called virtual field, and propose two methods:
the first method is manual fix with help from enhanced programming 
rules, e.g.  
direct virtual field access is only allowed in accessor methods 
(among other rules); 
and the second method is automatic, we introduce rename 
dispatching based on the object's runtime view stack, hence 
providing an improved solution to
multiple inheritance (esp. for unplanned MI).


## Software: Please make sure you have following Eiffel compilers installed on your system:

1. ISE EiffelStudio 22.12.10.6463 (released in 2022)
2. Gobo Eiffel compiler gec version 22.01.09.4 (released in 2022)
3. GNU SmartEiffel version 1.1 (released in 2003), the source distribution is included here: SmartEiffel-1.1.tar.bz2


For our demo, we used Linux system.

## Demo:

### For Section 2: the Eiffel’s field renaming problem we found

```
$ cd  eiffel_bug

# test ISE EiffelStudio 22.12.10.6463 (released in 2022)
$ make ise
$ cat  ise.out   # to see the output

# test Gobo Eiffel compiler gec version 22.01.09.4 (released in 2022)
# make gobo
# cat  gobo.out  # to see the output

# test SmartEiffel version 1.1 (released in 2003)
$ cd se
$ make se
$ cat  se.out   # to see the output
```


### For Section 3, manual fix with virtual field accessor
```
$ cd  eiffel_fix

# then repeat the same commands as above
```
