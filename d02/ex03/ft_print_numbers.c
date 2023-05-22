#include <unistd.h>
void putchar(char c){
    write(1,&c,1);
}
void ft_print_numbers(void){
    char num = '0';
    while (num <= '9')
    {
        putchar(num);
        num++;
    }
    
}
int main(){   
    

    ft_print_numbers();
}