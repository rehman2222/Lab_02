
# Computer Science I 
## Lab 2.0 Worksheet

Name(s) and Login(s):

Abdur rehman 

rehman2222


1. Dennis Ritchie, the creator of the C programming language,
was born on September 9th, 1941.  If he were still alive,
how old would he be today?  Find out by running the `birthday`
program on the appropriate inputs and enter your solution here.

solution:
Please Enter Your First Name (no spaces) followed by ENTER: DennisRitchie  
Enter the year in which you were born: 1941
Enter the month in which you were born (1-12): 9
Enter the day of the month in which you were born (1-31): 9
Today is 2023/10/18
Your birthday was 1941/09/09
Hello, DennisRitchie.  You are 0 years, 0 weeks, and 0 days old today

solution 2:
Please Enter Your First Name (no spaces) followed by ENTER: Rehman
Enter the year in which you were born: 2003
Enter the month in which you were born (1-12): 3
Enter the day of the month in which you were born (1-31): 29
Today is 2023/10/18
Your birthday was 2003/03/29
Hello, Rehman.  You are 20 years, 29 weeks, and 0 days old today




2. Bjarne Stroustrup, the creator of the C++ programming
language, the object-oriented extension of C, was born on
December 30th, 1950.  How old is he today?

Solution 1:
Please Enter Your First Name (no spaces) followed by ENTER: BjarneStroustrup  
Enter the year in which you were born: 1950
Enter the month in which you were born (1-12): 12
Enter the day of the month in which you were born (1-31): 30
Today is 2023/10/18
Your birthday was 1950/12/30
Hello, BjarneStroustrup.  You are 0 years, 0 weeks, and 0 days old today

solution 2:
Please Enter Your First Name (no spaces) followed by ENTER: Rehman
Enter the year in which you were born: 2003
Enter the month in which you were born (1-12): 3
Enter the day of the month in which you were born (1-31): 29
Today is 2023/10/18
Your birthday was 2003/03/29
Hello, Rehman.  You are 20 years, 29 weeks, and 0 days old today



3. Software testing often involves testing code with known
"bad" input in an attempt to break it (sometimes this is
referred to as *fuzzing*).  Try breaking the `birthday_cli`
program by giving it "bad" input and observe the consequences.
Give at least two examples of potentially bad input and the
results you observe.

Example 1:
Today is 2023/10/18
Your birthday was 1941/09/09
Hello, Dennis.  You are 0 years, 0 weeks, and 0 days old today.

Example 2:
Today is 2023/10/18
Your birthday was 2004/04/04
Hello, Rehman.  You are 19 years, 28 weeks, and 1 days old today.


4. Complete all the size and range entries below.

* `char`
  size: 1 byte
  range: -128 to 127
* `short int`
  size: 2 bytes 
  range: -32768 to 32767
* `int`
  size: 4 bytes 
  range: -2147483648 to 2147483647
* `long int`
  size: 4 bytes 
  range: 0 to 4294967295
* `float`
  size: 4 bytes 
  range: 7 digits of accuracy
* `double`
  size: 8 bytes
  range: 15 digits of accuracy


5. Use your working currency conversion to determine
the exchange amounts for the following inputs:

  a) $250.25
   pleas input the total amount of US Dollar: $250.25
Exchange_rate = 0.000000
JPY = 0.000000
GBP = 0.790000
  b) $1,000.52
   Exchange_rate = 0.000000
JPY = 0.000000
GBP = 0.790000
  c) $968,410.12
Exchange_rate = 0.000000
JPY = 0.000000
GBP = 0.790000


6. Suppose that you had used only `int` types
in your conversion program.  Would you be able
to use it to convert the US national debt
(which as of 2020 was \$26,009,754,625,487)?
Why or why not?




7. Mixed types

a) Run the `area` program with 3 and 4 as inputs.  
What value do you get?  Is this result correct?

No

b) Execute the program again with inputs 3 and 5.
Does the program give correct results?  Why not?

No


c) Fix the program by editing the `area.c` source
code so that the program produces correct results.

correct form:

area = base * height * 1/2