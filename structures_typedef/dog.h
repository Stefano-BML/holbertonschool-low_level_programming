#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information
 * @name: name dog
 * @age: age dog
 * @owner: owner of the dog
 *
 * Description: struct information
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *i, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
