all: college

college: src/app.c 
	gcc src/app.c -o college