#ifndef SHELL_H
#define SHELL_H

/* Setting Custom Macros && Using Default Standard Libraries */
#define PRINT(c) (write(STDERR_FILENO, c, _strlen(c)))
#define BUFSIZE 10240
#define DELIMITER " \t\r\n\a"

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <linux/limits.h>

/* Input Functions */
char *getline();
void prompt(void);
char *space_key(char *str);
char *enter_key(char *string);
void hashtag_handlers(char *buff);
unsigned int delimeters(char c, const char *str);
int history(char *input);
char *strtok(char *str, const char *delim)
char **separators(char *input);

/* Environment Handlers*/ 
extern char **environ;
void set_environ(char **envi);
void free_environ(char **env);

/* Error Handlers */
void error_not_found(char *input, int counter, char **argv);
void cus_prnt_error(char **argv, int c, char **cmd);
void error_opening(char **argv, int c);

/* Functions */
void prnt_num(unsigned int n);
void prnt_num_int(int n);
int prnt_echo(char **cmd);

#endif /* SHELL_H */