#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{

	char karakterler[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','r','s','t','u','v','y','z'};
	int karaktersayilari[25] = {0}; 
	int i,j,k;
	char kelime[100];
	int uzunluk = sizeof(karakterler) / sizeof(char);
    int gecicibelleksayicin;
    char gecicibellekharficin;
    int kelimeuzunluk=0;

  printf("metin giriniz\n");
 scanf("%s",kelime);


 for(i=0;kelime[i]!='\0';i++)
  {
  	kelimeuzunluk++;
  }
  
  
for(j=0;j<kelimeuzunluk;j++)  //for(j=0;kelime[j]!='\0';j++) 
 {
 	for(k=0;k<uzunluk;k++)
   {
 	if(kelime[j]==karakterler[k]) 
 {
 	karaktersayilari[k]++;
 }
 
   }
 }

 for(i=0;i<uzunluk;i++)
 {
 	for(j=0;j<uzunluk-i;j++)
 	{
 		if(karaktersayilari[j]<karaktersayilari[j+1])
 		{
 			gecicibelleksayicin = karaktersayilari[j];
 			karaktersayilari[j]=karaktersayilari[j+1];
 			karaktersayilari[j+1]=gecicibelleksayicin;
 			
 		gecicibellekharficin = karakterler[j];
 		karakterler[j] = karakterler[j+1];
 		karakterler[j+1] = gecicibellekharficin;
 			
		 }
 		
	 }
 }
 
 
 
 for(i=0;i<uzunluk;i++)
 {
 	printf("---------%c karakteri :  %d\n",karakterler[i],karaktersayilari[i]);   
 }
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}