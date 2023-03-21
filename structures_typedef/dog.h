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
#endif
