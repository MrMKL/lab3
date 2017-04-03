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
