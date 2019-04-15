#ifndef RANDOM_H

#define RANDOM_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <time.h>
#include <ctype.h>

/* For uuid_generate() and uuid_unparse() */
#include <uuid/uuid.h>

#define lowercaseuuid true
#define BANK_NUMBER "40305"

extern int global_account_number;


/* Uncomment to always generate capital UUIDs. */
//#define capitaluuid true


int uuid_gen(const char* uuid);
int* login_id_generator(int *code);
int login_id_decoder(int* login_id);
int indicatif_gen(const char **indicatif_agence, size_t nb_ids); //5chiffres
int iban_gen(const char *iban, const char *indicatif_agence, const char* code_postale);

#endif