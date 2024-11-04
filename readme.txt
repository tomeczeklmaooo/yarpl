Yet Another Ridiculous Programming Language

Now, I don't know what I was thinking when I came up with this idea, but well it is what it is.
This language is not supposed to be used professionally, because (1) it doesn't exist yet and (2)
I'm not a professional developer. Quite the opposite.

--> Well, here's the idea:
* The language will be interpreted, which means the performance will not be amazing, but who cares
* There will be like 16 keywords, all doing different things obviously
* Datatypes like INT, FLOAT, BOOL, STRING, CHAR will be supported
* All the basic operators
* Functions maybe later idk
* Hopefully Turing Complete
(I know that's a lot of stuff to do for my first programming language but oh well...)

--> And here's the draft of everything mentioned above:
:: Interpreter
Written in C (very amazing choice), will do whatever an interpreter needs to do (i.e. interpret the code).
And yes, I've chosen the programming language name to be what it is, just because its acronym is yarpl
and then I can name the interpreter executable 'yarp'.

:: Keywords
01 print <value>                    : print <value> to screen
02 decl <variable>: <type>          : declare a <variable> with <type>
03 set <variable> <value>           : set a <value> to <variable>
04 scan <variable>                  : get the user input, and store it in <variable>
05 inc <variable> <n>               : increment a <variable> by <n>
06 for (<condition>)                : begin a loop with <condition> (variable to increment, increment until, increment)
07 if (<condition>)                 : execute when the <condition> was met
08 elif (<condition)                : execute when the <condition> was met, but not any above conditions
09 else                             : execute when no conditions were met
10 swap <variable_a> <variable_b>   : swap values of two variables
11 conv <variable>: <type>          : convert a <variable> to new <type>
12 ret <value>                      : return a <value> from a function
13 continue                         : continue executing code
14 func <name>: <type> (<params>)   : declare a function with <name> of <type> with <params>
15 end                              : end a code block (for, if, elif, else, func)
16 break                            : break out of the loop

:: Datatypes
01 int                              : integer, signed 32-bit (-2,147,483,648 -> 2,147,483,647)
02 float                            : floating-point, 32-bit
03 bool                             : boolean, true or false
04 string                           : character string, max. 2^16 bytes (0 -> 65535 chars)
05 char                             : single character, ASCII (0 -> 127)

:: Operators
01 AND                              : both inputs must be true                            (&&)
02 OR                               : one input must be true                              (||)
03 NOT                              : negation                                            (!)
04 EQUAL                            : check if values are equal                           (==)
05 NOTEQUAL                         : check if values are not equal                       (!=)
06 GREATERTHAN                      : check if value is greater than other value          (>)
07 GREATERTHANEQUAL                 : check if value is greater than or equal other value (>=)
08 LESSTHAN                         : check if value is less than other value             (<)
09 LESSTHANEQUAL                    : check if value is greater than or equal other value (<=)

:: Functions
(idk)

--> Approximate completion time-frame
I'm not giving even an approximation of finishing this, as I know it's a very time consuming project.
I'm hoping on at least getting a somewhat working demo of the language done before the end of 2024.
Well, would be nice to finish the language before July 2025, but I just know it won't happen.
It's a long term project, not something to finish in a week or two, and I know my previous projects
were supposed to be long term as well (I'm looking at you toasterscriptloader), but I just lost any
motivation to develop them any further. I still don't know why I chose to create a programming language
but hey, it's a project nonetheless and maybe I'll learn something along the way.

--> Platforms
The language will run on any platform the interpreter will run, which is basically any platform.
I know the community very well and there are some people that will willingly spend their precious
time porting the interpreter to a Samsung Smart Fridge or something.

--> Other notes
I don't know what I'm doing basically. I just want to inflict psychological pain on myself.
And some of the keywords are stupid (conv and swap), but I called this language 'ridiculous' for a reason.

--> Compiling
I'll create a proper Makefile later, but for now use: ./make.sh
Make sure to have the bin directory created or else it won't compile.

--> Acknowledgements
Base of the language (lexer, parser) will be based on https://github.com/davidcallanan/py-myopl-code,
but written in C instead of Python and with multiple changes to fit my vision of the language.

--> Supporters
Literally no one.