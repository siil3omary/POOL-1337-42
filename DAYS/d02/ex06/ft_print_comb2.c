#include <stdio.h>
#include <unistd.h>
void ft_putchar(char c){
    write(1,&c,1);

}
void ft_print_comb2(void){

for (char a = '0'; a <= '9'; a++)
{
   for (char b = '0'; b <= '9';b++)
   {
    for (char c = '0'; c <= '9'; c++)
    {
       for (char d = '1'; d <= '9'; d++)
       {
       if ((a * 10 + b) < (c * 10 + d))
                    {
     
          ft_putchar(a);
         ft_putchar(b);
         ft_putchar(' ');
           ft_putchar(c);
        ft_putchar(d);
                    
         if (a != '9' || b != '9' || c != '9' || d != '9'){
    ft_putchar(',');
    ft_putchar(' ');
       }
                    }
    }
    
   }
   
}

}
}
int main () {
    ft_print_comb2();
    return 0;
}
