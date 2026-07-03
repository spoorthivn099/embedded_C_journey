#include <stdio.h>

int global_var =10;

void show_address(){
static int static_var=20;
int local_variable=30;
printf("gloabal: %p \n"(void*)&global_var);
printf("static: %p \n"(void*)&static_var);
printf("local: %p \n"(void*)&local_var);
}

int main(){
show_address();
show_address();
return 0;
} 


