#ifndef MAIN_H
#define MAIN_H

/**
 * headerfile prototypes
 * void prototype()
 * int prototype()
 * char prototype()
 *
 */

void reverse_array(int *a, int n);
void print_number(int n);
void print_buffer(char *b, int size);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
int _putchar(char c);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *add_string(char *n1, char *n2, char *r, int r_index);
char transform(char x)
char transform_2(char x)


#endif /*MAIN_H*/
