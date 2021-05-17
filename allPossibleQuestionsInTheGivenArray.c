#include <stdio.h>
#include <stdlib.h>
int main ()
{
    do{
  printf ("select an option:\n");
  printf ("Find out(choice option) :\n");
  printf ("1. Find out simple elements in the give array? :\n");
  printf ("2. Find out Sorted Elements in the Given Array? :\n");
  printf ("3. Find  out Even possible elements in the given array? :\n");
  printf ("4. Find  out odd possible elements in the given array? :\n");
  printf ("5. Find out Greatest Number in the given array\n");
  printf("6.  Find out Smallest Number in the given array? :\n");
  printf("7. Exit.\n");
  char userChoiceForMenu , index;
 
 printf ("Select a option (1, 2, 3, 4 , 5, 6 , 7):");
 scanf ("%c", &userChoiceForMenu);
 int array[]={2,4,7,1,7,9,3,5,7,2,5,7,8,9,12,15};
     int n=sizeof(array)/sizeof(array[0]);

  switch (userChoiceForMenu)
    {
    case '1':
    
    
     printf(" Printing Simple All element in the Give Array :- ");
     printf("{");
     for( index=0;index<n;index++){
     printf("%d",array[index]);
     if(index<n-1)
      printf(",");
     }
     printf("}\n");
     break;
     case '2':
     printf(" Printing sorted All element in the Give Array :- ");
     printf("{");

       for( int i=0;i<=n-2;i++){
           for(int j=0;j<n-1-i;j++){
               if(array[j]  < array[j+1]){
                   int temp=array[j];
                   array[j]=array[j+1];
                   array[j+1]=temp;
               }
           }
       }
     for( index=0;index<n;index++){
   printf("%d",array[index]);
   if(index<n-1)
   printf(",");
     }
     printf("}\n");
     break;
     case '3':
     printf("Printing Even possible elements in the given array");
    printf("{");

    for( index=0;index<n;index++){
        if( index%2==0){
            printf("%d",array[index]);
            if(index<n-2)
            printf(",");
        }

    }
    printf("}\n");
    break;
    case '4':
    printf("Printing odd possible elements in the given array");
    printf("{");

    for( index=0;index<n;index++){
        if( index%2!=0){
            printf("%d",array[index]);
            if(index<n-1)
            printf(",");
        }

    }
    printf("}\n");
    break;
    case '5':
    
     printf("Printing Gretest Number in the given array : ");
     int  greatestElement=array[0];
     for(index=0;index<n;index++){
         if(greatestElement < array[index]){
             greatestElement=array[index];

         }
     }
      printf("%d",greatestElement);
      printf("\n");
      break;
      case '6':
       printf("Printing smallest Number in the given array : ");

     int smallestElement=array[0];
     for(  index=0;index<n;index++){
         if(smallestElement > array[index]){
             smallestElement=array[index];

         }
     }
      printf("%d",smallestElement);
      printf("\n");
      break;
      default:
      printf ("\nError: Invalid Choice. Please choose corect option.");
    
    }
    
      char garbageChar;
    scanf("%c", &garbageChar);
}while (1);
  return 0;
}
    
    
