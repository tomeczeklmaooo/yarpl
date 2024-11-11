
# Yet Another Ridiculous Programming Language
*A stupid programming language I'm trying to develop just for funsies*

## General Idea
- Interpreted language (amazing performance I know)
- 16 keywords, some normal some stupid
- Basic datatypes
- Basic operators
- Functions?
- Turing Complete I hope

## General Draft
**1. Interpreter**
- Written in C, will interpret the code (obviously)

**2. Keywords**
- 01: `print <value>` &mdash; print `<value>` to screen
- 02: `decl <variable>: <type>` &mdash; declare a `<variable>` with `<type>`
- 03: `set <variable> <value>` &mdash; set a `<value>` to `<variable>`
- 04: `scan <variable>` &mdash; get the user input, and store it in `<variable>`
- 05: `inc <variable> <n>` &mdash; increment a `<variable>` by `<n>`
- 06: `for (<condition>)` &mdash; begin a loop with `<condition>` (variable to increment, increment until, increment)
- 07: `if (<condition>)` &mdash; execute when the `<condition>` was met
- 08: `elif (<condition>)` &mdash; execute when the `<condition>` was met, but not any of the above conditions
- 09: `else` &mdash; execute when no conditions were met
- 10: `swap <variable_a> <variable_b>` &mdash; swap values of two variables
- 11: `conv <variable>: <type>` &mdash; convert a `<variable>` to new `<type>`
- 12: `ret <value>` &mdash; return a `<value>` from a function
- 13: `continue` &mdash; continue executing code
- 14: `func <name>: <type> (<params>)` &mdash; declare a function with `<name>` of `<type>` with `<params>`
- 15: `end` &mdash; end a code block (`for`, `if`, `elif`, `else`, `func`)
- 16: `break` &mdash; break out of the loop

**3. Datatypes**
- 01: int &mdash; integer, signed 32-bit (-2,147,483,648 -> 2,147,483,647)
- 02: float &mdash; floating point, 32-bit
- 03: bool &mdash; boolean, true or false
- 04: string &mdash; character string, max. 2^16 bytes (0 -> 65535 chars)
- 05: char &mdash; single character, ASCII (0 -> 127)

**4. Operators**
- 01: AND &mdash; both inputs must be true (&&)
- 02: OR &mdash; one input must be true (||)
- 03: NOT &mdash; negation (!)
- 04: EQUAL &mdash; check if values are equal (==)
- 05: NOTEQUAL &mdash; check if values are not equal (!=)
- 06: GREATERTHAN &mdash; check if value is greater than other value (>)
- 07: GREATERTHANEQUAL &mdash; check if value is greater than or equal other value (>=)
- 08: LESSTHAN &mdash; check if value is less than other value (<)
- 09: LESSTHANEQUAL &mdash; check if value is greater than or equal other value (<=)

**5. Functions**
- (idk)

## Approximate completion time-frame
I don't really know, a working demo before 2025 should be fine, and the whole language maybe before July 2025?

## Platforms
Linux and Windows at first, but I guess it will run on anything.

## Compiling
Use the `make.sh` file for now. Proper Makefile coming soon&trade;.

## Things working right now
- Lexer: recognizes numbers, operators (1 char only) and identifiers

## Other notes
I don't really know what I'm doing, this is all a stupid idea, but oh well.

## Acknowledgements
- davidcallanan's [py-myopl-code](https://github.com/davidcallanan/py-myopl-code)
- ChatGPT

## Supporters
Literally no one.