#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_combno(int n, int index, int start, int *arr){
  
  int i ;if(index ==  n){
    for (int i = 0; i < n; i++)
        {
        ft_putchar(arr[i] + '0');
          
   
     
        
        
  }

    if (arr[0] < 10 - index)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}

  
                 }else{
  for (int i = start + 1; i <= 9; i++)
    {
        arr[index] = i; // 0 1
       ft_print_combno(n, index + 1, i, arr);
    }
  }
}

void ft_print_combn(int n){
    int arr[10];
    ft_print_combno(n, 0, -1, arr);
}
int main (){
  
 


   ft_print_combn(9);
 
   return 0;
   
   }