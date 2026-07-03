#include <stdio.h>
int global_var= 10;
void some_other_function(){
int filler[20];
filler[0]=1;
}
void show_address(){
static int static_var= 20;
int local_var= 30;
printf("global: %p \n", (void*)&global_var);
printf("static: %p \n", (void*)&static_var);
printf("local: %p \n", (void*)&local_var);
}
int main(){
show_address();
some_other_function();
show_address();
return 0;
}

