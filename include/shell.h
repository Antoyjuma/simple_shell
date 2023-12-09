#ifndef SHELL_H
#define SHELL_H

/* Setting Custom Macros && Using Default Standard Libraries */
#define PRINT(c) (write(STDERR_FILENO, c, __strlen(c)))
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
char *_getline();
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
void _perror(char **argv, int c, char **cmd);
void error_opening(char **argv, int c);

/* Functions */
void prnt_num(unsigned int n);
void prnt_num_int(int n);
int prnt_echo(char **cmd);

/* Builts */
int check_builtins(char **cmd);
int builtins_handlers(char **cmd, int st);
void exit_builtins(char **cmd, char *input, char **argv, int c,
		int stat);
int change_directory(char **cmd, __attribute__((unused))int st);
int dis_env(__attribute__((unused)) char **cmd,
		__attribute__((unused)) int st);
int echo_cases(char **cmd, int st);
int history_dis(__attribute__((unused))char **c,
		__attribute__((unused)) int st);

/* Handlers && Stings */

void env_help(void);
void setenv_help(void);
void unsetenv_help(void);
void history_help(void);
void all_help(void);
void alias_help(void);
void cd_help(void);
void exit_help(void);
void helpers(void);
int display_help(char **cmd, __attribute__((unused))int st);
/**/
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);
int _putchar(char c);
int _atoi(char *s);
void _puts(char *str);
int _strcmp(char *s1, char *s2);
int _isalpha(int c);
void array_rev(char *arr, int len);
int intlen(int num);
char *_itoa(unsigned int n);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
char *_strchr(char *s, char c);
int _strncmp(const char *s1, const char *s2, size_t n);
char *_strdup(char *str);


#endif /* SHELL_H */