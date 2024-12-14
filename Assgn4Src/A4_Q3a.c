#include <stdio.h>

int main(){
  int math,phy,che,avg;
  printf("Math: ");
  scanf("%d", &math);
  printf("Physics: ");
  scanf("%d",&phy); 
  printf("Chem: ");
  scanf("%d",&che);
  //START NESTED
  if(math<0 || phy<0 || che<0){
   printf("Marks cant be negative");
  }
  else{
	  avg=(phy+math+che)/3;
	  if (avg>=85){
	   printf("Grade A");
	  }
	  else{
	    if(avg>=75 && avg<85){
		 printf("Grade B");
	    }
	    else{
		 if(avg>=65 && avg<75){
		   printf("Grade C");
		 }
		 else{
		   if(avg>=50 && avg<65){
		      printf("Grade D");
		   }
		   else{
			if(avg>=30 && avg<50){
		       printf("Grade E");
		     }
		     else{
		       printf("Grade F");
		     }
		   }
		 }
	    }
	  }
}

  return 0;
}
