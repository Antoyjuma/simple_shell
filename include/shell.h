#ifndef _SHELL_H_
#define _SHELL_H_

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

/* Environment Handlers */ 
extern char **environ;
void set_environ(char **envi);
void free_environ(char **env);

#endif /* _SHELL_H_ */