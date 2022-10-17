#include <stdio.h>   //stabil header tanimlaridir.
#include <stdlib.h>
 
 
// Eren Karagül (https://erenkaragul.com) Github : https://github.com/erenkaragul
main()
{
	
    int pazartesi,sali,carsamba,persembe,cuma;
        int gunler;
    

    

     printf("1.Pazartesi\n");
    printf("2.Sali\n");
    printf("3.Carsamba\n");
    printf("4.Persembe\n");
  printf("5.Cuma\n");
  basagit:
  printf("Ders Programi icin sayisal olarak gunu yaziniz (1: pazartesi , 2: sali 3: carsamba , 4:persembe , 5:cuma)  = ");
  
    scanf("%d",&gunler);
   
    if(gunler == 1){
        printf("\n \n \n \nPazartesi Gunune Ait Ders Programi \n");
        printf ("Saat 11.00-14.00 = Algoritma Ve Programlama \n \n \n \n");
    }
    else if(gunler ==2){
        printf("\n \n \n \nSali Gunune Ait Ders Programi \n");
                printf ("Saat 20.00 - 23.00 = Ofis Yazilimlari \n \n \n \n");
    }
    
 else if (gunler ==3){
 	
 	printf ("\n \n \n \nCarsamba Gunune Ait Ders Programi \n");
 	printf ("Saat 14.00 - 17.00 = Matematik \n \n \n \n ");
 	
 	
}

else if (gunler ==4) {
	
	printf ("\n \n \n \nPersembe Gunune Ait Ders Programi \n");
	printf ("Saat 14.00 - 17.00 = Bilgisayar Donanimi \n \n \n \n");
}

else if (gunler ==5) {
	
	printf ("\n \n \n \nCuma Gunune Ait Ders Programi \n");
	printf ("Saat 10.00 - 12.00 =  Turk Dili 1 \n");
    printf ("Saat 12.00 - 14.00 = Ataturk Ilkeleri Ve Inkilap Tarihi 1 \n");
    printf ("Saat 15.00 - 17.00 = Ingilizce \n");
    printf ("Saat 17.00 - 20.00 = Isletim Sistemleri \n \n \n \n");

}
      
     goto basagit;

    return 0; 

}
   
