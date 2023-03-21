#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information
 * @name: dog name
 * @age: dog age
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}

/**
 * dog_t - typedef of struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *i, char *name, float age, char *owner);

#endif
