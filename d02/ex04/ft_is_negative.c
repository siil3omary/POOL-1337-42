#include <stdio.h>
#include <unistd.h>
void ft_putchar(char c){
    putchar(c);

}
void ft_is_negative(int n) {
    if (n < 0)
    {
        
         ft_putchar('N');

    }else 
    {
        
          ft_putchar('P');
    }
 
    
}
int main(){
    int num;
    printf("enter");
    scanf("%d", &num);
    ft_is_negative(num);
    return 0;
}