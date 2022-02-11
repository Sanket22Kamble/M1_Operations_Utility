#TargetName : Dependencies
#<TAB>commands

Build : project_main.c calculator.c test_calculator.c unity.c
	gcc project_main.c calculator.c test_calculator.c unity.c -o Calculator.out

Run : Build
	./Calculator.out

Clean:
	rm -rf *.o *.out *.i 