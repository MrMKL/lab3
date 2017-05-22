makefile
```
lab3: lab3.o
	g++ -o lab3 lab3.o
lab3.o: lab3.cpp
	g++ -c lab3.cpp
clean:
	rm -rf lab3.o	
```

How To Start
---

```
git clone https://github.com/MrMKL/lab3.git
cd lab3
make clean && make
```

Results of different way to sort a vector
---

```
size values: 1000
sort(): 0.000243 seconds
v1/v2 are different.
insertion_sort(): 0.010079 seconds
v1/v2 are the same.
```

```
size values: 10000
sort(): 0.002491 seconds
v1/v2 are different.
insertion_sort(): 0.941769 seconds
v1/v2 are the same.
```

```
size values: 100000
sort(): 0.030984 seconds
v1/v2 are different.
insertion_sort(): 95.2915 seconds
v1/v2 are the same.
```

```
size values: 1000000
sort(): 0.400857 seconds
v1/v2 are different.
insertion_sort(): 9020.8 seconds
v1/v2 are the same.
```

Explanation
---

```
As we can see in our results, the time difference between two methods is not too large in size values of 1000 and also 10000, just lesser than a second. By the size value increasing, the sorting time of n square grows much faster than n logn, in the case of size values of 100000 and 1000000, sorting time that n square used is thousands times of n logn used, n square even used almost 3 hours to sort a vector in size of 1000000!
```
