#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
    int length;
    int *arr;
}intArray;

typedef struct {
    int length;
    double *arr;
}doubleArray;

typedef struct {
    int length;
    char **arr;
}charArray;

int append(char type[], void *strct, void *value){
    if (strcmp("%d",type) == 0){

        int *reallocated_array;
        int val = *(int *)value;

        intArray *inst = (intArray *)strct;
        if (inst->length==NULL){
            reallocated_array = malloc(sizeof(int));
            inst->length=0;
        } else {
            reallocated_array = realloc(inst->arr,(inst->length+1)*sizeof(int));
        }
        inst->arr = reallocated_array;
        inst->arr[inst->length] = val;
        inst->length++;

    } else if (strcmp("%lf",type)==0){

        double *reallocated_array;
        double val = *(double*)value;

        doubleArray *inst = (doubleArray *)strct;
        if (inst->length == NULL){
            reallocated_array = malloc(sizeof(double));
            inst->length=0;
        } else {
            reallocated_array = realloc(inst->arr,(inst->length+1)*sizeof(double));
        }
        inst->arr = reallocated_array;
        inst->arr[inst->length] = val;
        inst->length++;

    } else if (strcmp("%s",type)==0){

        char **realocated_array;
        char *val = (char *)value;

        charArray *inst = (charArray*)strct;
        if (inst->length == NULL){
            realocated_array = malloc(sizeof(char*));
            inst->length=0;
        } else {
            realocated_array = realloc(inst->arr,(inst->length+1)*sizeof(char*));
        }
        inst->arr = realocated_array;
        inst->arr[inst->length] = val;
        inst->length++;

    } else {
        return 1;
    }
    return 0;
}
