#ifndef _CRADLE_H_
    #define _CRADLE_H_

/*
 * Global data;
 */
char *look;
char *regexData;
char *file;

char *getChars(int argc, char **argv);

char getCurrChar();

char getNextChar();

int isAlpha(char alpha);

int isDigit(char digit);

int isUpperCase(char alpha);

int isLowerCase(char alpha);

int isRepOp(char op);

void parseError(char *s);

#endif

