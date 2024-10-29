#ifndef ERROR_H
#define ERROR_H

/*
	@param line: line of code where error occurred
	@param column: column on which error occurred
	@param mesg: error message
*/
void report(int line, int column, char mesg[32]);

// I don't even know what inline does but no errors so it's ok
inline bool error_occurred = false;

#endif