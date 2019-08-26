/*
			AUTHOR : TAPAN DABRAI
			LAST UPDATED : 21/7/19
			OBJECTIVE : HOTEL MENU
									*/
/*
	todo
		tabular display

	to update
		inner comments
*/

#include<stdio.h>
#include<conio.h>
#define SOUTH 1
#define IDLI 40
#define DOSA 50
#define UTTAPAM 40
#define MEDU 30
#define SEVT 50
#define DAL 60
#define FAFDA 70
#define DHOKLA 60
#define SAM 20
#define PAV 80
#define PUL 70
#define PUFF 20
#define ITP 90
#define MARP 100
#define CHP 110
#define DCP 140
#define MEXS 190
#define MEXSS 200
#define MEXP 150
#define MEXSAND 100
#define VAN 90
#define CHOC 100
#define COC 110
#define MAN 100
#define HAK 120
#define SCH 120
#define MANCH 150
#define FR 130
#define TOM 60
#define SC 70
#define NS 60
#define CHINS 70
#define OILD 20
#define BUTD 25
#define JAIND 20
#define SPD 30
#define OILW 25
#define BUTW 35
#define JAINW 20
#define SPW 40
void main(){
	int choice,idliQuantity=0,idliPrice=0,totalPrice=0,dosaQuantity=0,dosaPrice=0,uttapamQuantity=0,uttapamPrice=0,meduQuantity=0,meduPrice=0,sevTQuantity=0,sevTPrice=0,dalDQuantity=0,dalDPrice=0,fafdaQuantity=0,fafdaPrice=0,dhoklaPrice=0,dhoklaQuantity=0;
	int samQuantity=0,samPrice=0,pavQuantity=0,pavPrice=0,puffPrice=0,puffQuantity=0,pulQuantity=0,pulPrice=0,itPPrice=0,itPQuantity=0,marPPrice=0,marPQuantity=0,chPPrice=0,chPQuantity=0,dcPQuantity=0,dcPPrice=0;
	int mexSQuantity=0,mexSPrice=0,mexSSQuantity=0,mexSSPrice=0,mexPPrice=0,mexPQuantity=0,mexSandQuantity=0,mexSandPrice=0,vanPrice=0,vanQuantity=0,chocPrice=0,chocQuantity=0,cocPrice=0,cocQuantity=0,manPrice=0,manQuantity=0;
	int hakQuantity=0,hakPrice=0,schQuantity=0,schPrice=0,manchQuantity=0,manchPrice=0,frQuantity=0,frPrice=0,tomQuantity=0,tomPrice=0,chinSQuantity=0,chinSPrice=0,nsQuantity=0,nsPrice=0,scPrice=0,scQuantity=0;
	int oilDQuantity=0,oilDPrice=0,butDQuantity=0,butDPrice=0,jainDQuantity=0,jainDPrice=0,spDQuantity=0,spDPrice=0,oilWQuantity=0,oilWPrice=0,butWQuantity=0,butWPrice=0,jainWQuantity=0,jainWPrice=0,spWQuantity=0,spWPrice=0;
	int south=0,guj=0,punjabi=0,italian=0,mexican=0,iceCream=0,chinese=0,soup=0,dabeli=0,vadapav=0;  // for case bills
	clrscr();
	start:
	clrscr();
	printf("\n1.South Indian");
	printf("\n2.Gujarati");
	printf("\n3.Punjabi");
	printf("\n4.Italian");
	printf("\n5.Mexican");
	printf("\n6.Ice Cream");
	printf("\n7.Chinese");
	printf("\n8.Soup");
	printf("\n9.Dabeli");
	printf("\n10.Vadapav");
	printf("\n11.Maggi");
	printf("\n12.Tea");
	printf("\n13.Coffee");
	printf("\n14.Dal Pakvan");
	printf("\n15.Puff");
	printf("\n16.Muskaban");
	printf("\n17.Continental");
	printf("\n18.American");
	printf("\n19.African");
	printf("\n20.Japanese") ;
	printf("\nPress 0 for bill summary and exit");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice){
		case SOUTH:inSouth:
			clrscr();
			printf("\nYou have selected South Indian");
			printf("\n1.Idli %d",IDLI);
			printf("\n2.Dosa Rs.%d",DOSA);
			printf("\n3.Uttapam Rs.%d",UTTAPAM);
			printf("\n4.Meduvada Rs.%d",MEDU);
			printf("\n5.return to main menu");
			scanf("%d",&choice);
			switch(choice){
				case 1: printf("\nYou have selected Idli in South Indian menu");
					printf("\nSelect quantity");
					scanf("%d",&idliQuantity);
					idliPrice+=(idliQuantity*IDLI);
					printf("\nThe quantity of idli selected is %d and it's price is %d",idliQuantity,idliPrice);
					totalPrice+=idliPrice;
					south+=idliPrice;
					break;  //end of idli in south menu
				case 2: printf("\nYou have selected dosa in South Indian menu");
					printf("\nSelect quantity");
					scanf("%d",&dosaQuantity);
					dosaPrice+=(dosaQuantity*DOSA);
					printf("\nThe quantity of dosa selected is %d and it's price is %d",dosaQuantity,dosaPrice);
					totalPrice+=dosaPrice;
					south+=dosaPrice;
					break;  //end of dosa in south menu
				case 3: printf("\nYou have selected uttapam in South Indian menu");
					printf("\nSelect quantity");
					scanf("%d",&uttapamQuantity);
					uttapamPrice+=(uttapamQuantity*UTTAPAM);
					printf("\nThe quantity of uttapam selected is %d and it's price is %d",uttapamQuantity,uttapamPrice);
					totalPrice+=uttapamPrice;
					south+=uttapamPrice;
					break;  //end of uttapam in south menu
				case 4: printf("\nYou have selected meduvada in South Indian menu");
					printf("\nSelect quantity");
					scanf("%d",&meduQuantity);
					meduPrice+=(meduQuantity*MEDU);
					printf("\nThe quantity of meduvada selected is %d and it's price is %d",meduQuantity,meduPrice);
					totalPrice+=meduPrice;
					south+=meduPrice;
					break;  //end of medu in south menu
				case 5:	goto start;
					//end of start label in inner south menu
			}//end of inner south indian switch
			getch();
			goto inSouth;
		       //	break; //end of South case:
		case 2:inGuj:
			printf("You have selected Gujarati");
			clrscr();
			printf("\n1.Sev Tomato Rs.%d",SEVT);
			printf("\n2.Dal Dhokli,Rs.%d",DAL);
			printf("\n3.Fafda Rs.%d",FAFDA);
			printf("\n4.Dhokla Rs.%d",DHOKLA);
			printf("\n5.return to main menu");
			scanf("%d",&choice);
			switch(choice){
				case 1: printf("\nYou have selected Sev Tomato in Gujarati menu");
					printf("\nSelect quantity");
					scanf("%d",&sevTQuantity);
					sevTPrice+=(sevTQuantity*SEVT);
					printf("\nThe quantity of Sev Tomato selected is %d and it's price is %d",sevTQuantity,sevTPrice);
					totalPrice+=sevTPrice;
					guj+=sevTPrice;
					break;  //end of sev in guj menu
				case 2: printf("\nYou have selected dal dhokli in South Gujarati menu");
					printf("\nSelect quantity");
					scanf("%d",&dalDQuantity);
					dalDPrice+=(dalDQuantity*DAL);
					printf("\nThe quantity of dal dhokli selected is %d and it's price is %d",dalDQuantity,dalDPrice);
					totalPrice+=dalDPrice;
					guj+=dalDPrice;
					break;  //end of dal in guj menu
				case 3: printf("\nYou have selected fafda in Gujarati menu");
					printf("\nSelect quantity");
					scanf("%d",&fafdaQuantity);
					fafdaPrice+=(fafdaQuantity*FAFDA);
					printf("\nThe quantity of fafda selected is %d and it's price is %d",fafdaQuantity,fafdaPrice);
					totalPrice+=fafdaPrice;
					guj+=fafdaPrice;
					break;  //end of fafda in guj menu
				case 4: printf("\nYou have selected dhokla in Gujarati menu");
					printf("\nSelect quantity");
					scanf("%d",&dhoklaQuantity);
					dhoklaPrice+=(dhoklaQuantity*DHOKLA);
					printf("\nThe quantity of dhokla selected is %d and it's price is %d",dhoklaQuantity,dhoklaPrice);
					totalPrice+=dhoklaPrice;
					guj+=dhoklaPrice;
					break;  //end of dhokla in guj menu
				case 5:	goto start;
					//end of start label in inner guj menu
			}//end of inner guj switch
			getch();
			goto inGuj;
		       //	break;
		case 3:inPun:
			printf("You have selected Punjabi");
			clrscr();
			printf("\n1.Samosa Rs.%d",SAM);
			printf("\n2.Puff Rs.%d",PUFF);
			printf("\n3.PavBhaji Rs.%d",PAV);
			printf("\n4.Pulav Rs.%d",PUL);
			printf("\n5.return to main menu");
			scanf("%d",&choice);
			switch(choice){
				case 1: printf("\nYou have selected Samosa in Punjabi menu");
					printf("\nSelect quantity");
					scanf("%d",&samQuantity);
					samPrice+=(samQuantity*SAM);
					printf("\nThe quantity of Samosa selected is %d and it's price is %d",samQuantity,samPrice);
					totalPrice+=samPrice;
					punjabi+=samPrice;
					break;  //end of sam in pun menu
				case 2: printf("\nYou have selected puff in Punjabi menu");
					printf("\nSelect quantity");
					scanf("%d",&puffQuantity);
					puffPrice+=(puffQuantity*PUFF);
					printf("\nThe quantity of puff selected is %d and it's price is %d",puffQuantity,puffPrice);
					totalPrice+=puffPrice;
					punjabi+=puffPrice;
					break;  //end of dal in guj menu
				case 3: printf("\nYou have selected pavBhaji in Punjabi menu");
					printf("\nSelect quantity");
					scanf("%d",&pavQuantity);
					pavPrice+=(pavQuantity*PAV);
					printf("\nThe quantity of pav selected is %d and it's price is %d",pavQuantity,pavPrice);
					totalPrice+=pavPrice;
					punjabi+=pavPrice;
					break;  //end of fafda in guj menu
				case 4: printf("\nYou have selected pulav in Punjabi menu");
					printf("\nSelect quantity");
					scanf("%d",&pulQuantity);
					pulPrice+=(pulQuantity*PUL);
					printf("\nThe quantity of pulav selected is %d and it's price is %d",pulQuantity,pulPrice);
					totalPrice+=pulPrice;
					punjabi+=pulPrice;
					break;  //end of pul in pun menu
				case 5:	goto start;
					//end of start label in inner pun menu
			}//end of inner pun switch
			getch();
			goto inPun;
		       //	break;
		case 4:inItalian:

			printf("You have selected Italian");
			clrscr();
			printf("\n1.Italian Pizza Rs.%d",ITP);
			printf("\n2.Margarita Pizza Rs.%d",MARP);
			printf("\n3.Cheese Pizza Rs.%d",CHP);
			printf("\n4.Double Cheese Rs.%d",DCP);
			printf("\n5.return to main menu");
			scanf("%d",&choice);
			switch(choice){
				case 1: printf("\nYou have selected Italian Pizza in Italian menu");
					printf("\nSelect quantity");
					scanf("%d",&itPQuantity);
					itPPrice+=(itPQuantity*ITP);
					printf("\nThe quantity of italian pizza selected is %d and it's price is %d",itPQuantity,itPPrice);
					totalPrice+=itPPrice;
					italian+=itPPrice;
					break;  //end of sev in guj menu
				case 2: printf("\nYou have selected Margarita Italian menu");
					printf("\nSelect quantity");
					scanf("%d",&marPQuantity);
					marPPrice+=(marPQuantity*MARP);
					printf("\nThe quantity of margarita Pizza selected is %d and it's price is %d",marPQuantity,marPPrice);
					totalPrice+=marPPrice;
					italian+=marPPrice;
					break;  //end of dal in guj menu
				case 3: printf("\nYou have selected cheese pizza in Italian menu");
					printf("\nSelect quantity");
					scanf("%d",&chPQuantity);
					chPPrice+=(chPQuantity*CHP);
					printf("\nThe quantity of cheese pizza selected is %d and it's price is %d",chPQuantity,chPPrice);
					totalPrice+=chPPrice;
					italian+=chPPrice;
					break;  //end of fafda in guj menu
				case 4: printf("\nYou have selected double cheese pizza in Italian menu");
					printf("\nSelect quantity");
					scanf("%d",&dcPQuantity);
					dcPPrice+=(dcPQuantity*DCP);
					printf("\nThe quantity of double cheese pizza selected is %d and it's price is %d",dcPQuantity,dcPPrice);
					totalPrice+=dcPPrice;
					italian+=dcPPrice;
					break;  //end of dhokla in guj menu
				case 5:	goto start;
					//end of start label in inner guj menu
			}//end of inner it switch
			getch();
			goto inItalian;
		       //	break;
		case 5:inMexican:
			printf("You have selected Mexican");
			clrscr();
			printf("\n1.Mex Sizzler Rs.%d",MEXS);
			printf("\n2.Mex Special Sizzler Rs.%d",MEXSS);
			printf("\n3.Mex Pizza Rs.%d",MEXP);
			printf("\n4.Mex Special Sandwich Rs.%d",MEXSAND);
			printf("\n5.return to main menu");
			scanf("%d",&choice);
			switch(choice){
				case 1: printf("\nYou have selected Mex Sizzler in Mexican menu");
					printf("\nSelect quantity");
					scanf("%d",&mexSQuantity);
					mexSPrice+=(mexSQuantity*MEXS);
					printf("\nThe quantity of Mex Sizzler selected is %d and it's price is %d",mexSQuantity,mexSPrice);
					totalPrice+=mexSPrice;
					mexican+=mexSPrice;
					break;  //end of sev in guj menu
				case 2: printf("\nYou have selected Mex Special Sizzler in Mexican menu");
					printf("\nSelect quantity");
					scanf("%d",&mexSSQuantity);
					mexSSPrice+=(mexSSQuantity*MEXSS);
					printf("\nThe quantity of mex special sizzler selected is %d and it's price is %d",mexSSQuantity,mexSSPrice);
					totalPrice+=mexSSPrice;
					mexican+=mexSSPrice;
					break;  //end of dal in guj menu
				case 3: printf("\nYou have selected mex Pizza in Italian menu");
					printf("\nSelect quantity");
					scanf("%d",&mexPQuantity);
					mexPPrice+=(mexPQuantity*MEXP);
					printf("\nThe quantity of mex Pizza selected is %d and it's price is %d",mexPQuantity,mexPPrice);
					totalPrice+=mexPPrice;
					mexican+=mexPPrice;
					break;  //end of fafda in guj menu
				case 4: printf("\nYou have selected mex special sandwich in Mexican menu");
					printf("\nSelect quantity");
					scanf("%d",&mexSandQuantity);
					mexSandPrice+=(mexSandQuantity*MEXSAND);
					printf("\nThe quantity of mex special sandwich selected is %d and it's price is %d",mexSandQuantity,mexSandPrice);
					totalPrice+=mexSandPrice;
					mexican+=mexSandPrice;
					break;  //end of dhokla in guj menu
				case 5:	goto start;
					//end of start label in inner guj menu
			}//end of inner mex switch
			getch();
			goto inMexican;
		      //	break;
		case 6:inIceCream:
			printf("You have selected ice cream");
			clrscr();
			printf("\n1.Vanilla Rs.%d",VAN);
			printf("\n2.Chocolate Rs.%d",CHOC);
			printf("\n3.Cookie Cream Rs.%d",COC);
			printf("\n4.Mango Rs.%d",MAN);
			printf("\n5.return to main menu");
			scanf("%d",&choice);
			switch(choice){
				case 1: printf("\nYou have selected vanilla in ice cream menu");
					printf("\nSelect quantity");
					scanf("%d",&vanQuantity);
					vanPrice+=(vanQuantity*VAN);
					printf("\nThe quantity of Vanilla selected is %d and it's price is %d",vanQuantity,vanPrice);
					totalPrice+=vanPrice;
					iceCream+=vanPrice;
					break;  //end of sev in guj menu
				case 2: printf("\nYou have selected chocolate in ice cream menu");
					printf("\nSelect quantity");
					scanf("%d",&chocQuantity);
					chocPrice+=(chocQuantity*CHOC);
					printf("\nThe quantity of chocolate selected is %d and it's price is %d",chocQuantity,chocPrice);
					totalPrice+=chocPrice;
					iceCream+=chocPrice;
					break;  //end of dal in guj menu
				case 3: printf("\nYou have selected cookie cream in ice cream menu");
					printf("\nSelect quantity");
					scanf("%d",&cocQuantity);
					cocPrice+=(cocQuantity*COC);
					printf("\nThe quantity of cookie cream selected is %d and it's price is %d",cocQuantity,cocPrice);
					totalPrice+=cocPrice;
					iceCream+=cocPrice;
					break;  //end of fafda in guj menu
				case 4: printf("\nYou have selected mango in ice cream menu");
					printf("\nSelect quantity");
					scanf("%d",&manQuantity);
					manPrice+=(manQuantity*MAN);
					printf("\nThe quantity of mango ice cream selected is %d and it's price is %d",manQuantity,manPrice);
					totalPrice+=manPrice;
					iceCream+=manPrice;
					break;  //end of dhokla in guj menu
				case 5:	goto start;
					//end of start label in inner guj menu
			}//end of inner ice switch
			getch();
			goto inIceCream;

		       //	break;
		case 7:inChinese:
			printf("You have selected Chinese");
			clrscr();
			printf("\n1.Hakka Noodles Rs.%d",HAK);
			printf("\n2.Schewan Noodles Rs.%d",SCH);
			printf("\n3.Manchurian Rs.%d",MANCH);
			printf("\n4.Fried Rice Rs.%d",FR);
			printf("\n5.return to main menu");
			scanf("%d",&choice);
			switch(choice){
				case 1: printf("\nYou have selected Hakka Noodles in chinese menu");
					printf("\nSelect quantity");
					scanf("%d",&hakQuantity);
					hakPrice+=(hakQuantity*HAK);
					printf("\nThe quantity of Hakka noodles selected is %d and it's price is %d",hakQuantity,hakPrice);
					totalPrice+=hakPrice;
					chinese+=hakPrice;
					break;  //end of sev in guj menu
				case 2: printf("\nYou have selected Schewan noodles in Chinese menu");
					printf("\nSelect quantity");
					scanf("%d",&schQuantity);
					schPrice+=(schQuantity*SCH);
					printf("\nThe quantity of schewan noodles selected is %d and it's price is %d",schQuantity,schPrice);
					totalPrice+=schPrice;
					chinese+=schPrice;
					break;  //end of dal in guj menu
				case 3: printf("\nYou have selected manchurian in chinese menu");
					printf("\nSelect quantity");
					scanf("%d",&manchQuantity);
					manchPrice+=(manchQuantity*MANCH);
					printf("\nThe quantity of manchurian selected is %d and it's price is %d",manchQuantity,manchPrice);
					totalPrice+=manchPrice;
					chinese+=manchPrice;
					break;  //end of fafda in guj menu
				case 4: printf("\nYou have selected fried rice in Mexican menu");
					printf("\nSelect quantity");
					scanf("%d",&frQuantity);
					frPrice+=(frQuantity*FR);
					printf("\nThe quantity of fried rice selected is %d and it's price is %d",frQuantity,frPrice);
					totalPrice+=frPrice;
					chinese+=frPrice;
					break;  //end of dhokla in guj menu
				case 5:	goto start;
					//end of start label in inner guj menu
			}//end of inner chin switch
			getch();
			goto inChinese;
		      //	break;
		case 8:inSoup:
			printf("You have selected Soup");
			clrscr();
			printf("\n1.Tomato Soup Rs.%d",TOM);
			printf("\n2.Chinese Soup",CHINS);
			printf("\n3.Sweet Corn Rs.%d",SC);
			printf("\n4.Noodle Soup Rs.%d",NS);
			printf("\n5.return to main menu");
			scanf("%d",&choice);
			switch(choice){
				case 1: printf("\nYou have selected Tomato Soup in Soup menu");
					printf("\nSelect quantity");
					scanf("%d",&tomQuantity);
					tomPrice+=(tomQuantity*TOM);
					printf("\nThe quantity of tomato soup selected is %d and it's price is %d",tomQuantity,tomPrice);
					totalPrice+=tomPrice;
					soup+=tomPrice;
					break;  //end of sev in guj menu
				case 2: printf("\nYou have selected chinese soup in soup menu");
					printf("\nSelect quantity");
					scanf("%d",&chinSQuantity);
					chinSPrice+=(chinSQuantity*CHINS);
					printf("\nThe quantity of chinese soup selected is %d and it's price is %d",chinSQuantity,chinSPrice);
					totalPrice+=chinSPrice;
					soup+=chinSPrice;
					break;  //end of dal in guj menu
				case 3: printf("\nYou have selected sweet corn in soup menu");
					printf("\nSelect quantity");
					scanf("%d",&scQuantity);
					scPrice+=(scQuantity*SC);
					printf("\nThe quantity of sweet corn selected is %d and it's price is %d",scQuantity,scPrice);
					totalPrice+=scPrice;
					soup+=scPrice;
					break;  //end of fafda in guj menu
				case 4: printf("\nYou have selected noodle soup in soup menu");
					printf("\nSelect quantity");
					scanf("%d",&nsQuantity);
					nsPrice+=(nsQuantity*NS);
					printf("\nThe quantity of noodle soup selected is %d and it's price is %d",nsQuantity,nsPrice);
					totalPrice+=nsPrice;
					soup+=nsPrice;
					break;  //end of dhokla in guj menu
				case 5:	goto start;
					//end of start label in inner soup menu
			}//end of inner soup switch
			getch();
			goto inSoup;
		       //	break;
		case 9:inDabeli:
			printf("You have selected Dabeli");
			clrscr();
			printf("\n1.Oil Dabeli Rs.%d",OILD);
			printf("\n2.Butter Dabeli Rs.%d",BUTD);
			printf("\n3.Jain Dabeli Rs.%d",JAIND);
			printf("\n4.Special Dabeli Rs,%d",SPD);
			printf("\n5.return to main menu");
			scanf("%d",&choice);
			switch(choice){
				case 1: printf("\nYou have selected oil dabeli in dabeli menu");
					printf("\nSelect quantity");
					scanf("%d",&oilDQuantity);
					oilDPrice+=(oilDQuantity*OILD);
					printf("\nThe quantity of oil dabeli selected is %d and it's price is %d",oilDQuantity,oilDPrice);
					totalPrice+=oilDPrice;
					dabeli+=oilDPrice;
					break;  //end of sev in guj menu
				case 2: printf("\nYou have selected butter dabeli in dabeli menu");
					printf("\nSelect quantity");
					scanf("%d",&butDQuantity);
					butDPrice+=(butDQuantity*BUTD);
					printf("\nThe quantity of butter dabeli selected is %d and it's price is %d",butDQuantity,butDPrice);
					totalPrice+=butDPrice;
					dabeli+=butDPrice;
					break;  //end of dal in guj menu
				case 3: printf("\nYou have selected jain dabeli in dabeli menu");
					printf("\nSelect quantity");
					scanf("%d",&jainDQuantity);
					jainDPrice+=(jainDQuantity*JAIND);
					printf("\nThe quantity of jain dabeli selected is %d and it's price is %d",jainDQuantity,jainDPrice);
					totalPrice+=jainDPrice;
					dabeli+=jainDPrice;
					break;  //end of fafda in guj menu
				case 4: printf("\nYou have selected special dabeli in dabeli menu");
					printf("\nSelect quantity");
					scanf("%d",&spDQuantity);
					spDPrice+=(spDQuantity*SPD);
					printf("\nThe quantity of special dabeli selected is %d and it's price is %d",spDQuantity,spDPrice);
					totalPrice+=spDPrice;
					dabeli+=spDPrice;
					break;  //end of dhokla in guj menu
				case 5:	goto start;
					//end of start label in inner guj menu
			}//end of inner dabeli switch
			getch();
			goto inDabeli;
			//break;
		case 10:inVadapav:
			printf("You have selected Vadapav");
			clrscr();
			printf("\n1.Oil VadaPav Rs.%d",OILW);
			printf("\n2.Butter VadaPav Rs.%d",BUTW);
			printf("\n3.Jain VadaPav Rs.%d",JAINW);
			printf("\n4.Special VadaPav Rs.%d",SPW);
			printf("\n5.return to main menu");
			scanf("%d",&choice);
			switch(choice){
				case 1: printf("\nYou have selected oil vadapav in vadapav menu");
					printf("\nSelect quantity");
					scanf("%d",&oilWQuantity);
					oilWPrice+=(oilWQuantity*OILW);
					printf("\nThe quantity of oil wadapav selected is %d and it's price is %d",oilWQuantity,oilWPrice);
					totalPrice+=oilWPrice;
					vadapav+=oilWPrice;
					break;  //end of sev in guj menu
				case 2: printf("\nYou have selected butter vadapav in vadapav menu");
					printf("\nSelect quantity");
					scanf("%d",&butWQuantity);
					butWPrice+=(butWQuantity*BUTW);
					printf("\nThe quantity of butter vadapav selected is %d and it's price is %d",butWQuantity,butWPrice);
					totalPrice+=butWPrice;
					vadapav+=butWPrice;
					break;  //end of dal in guj menu
				case 3: printf("\nYou have selected jain vadapav in vadapav menu");
					printf("\nSelect quantity");
					scanf("%d",&jainWQuantity);
					jainWPrice+=(jainWQuantity*JAINW);
					printf("\nThe quantity of jain vadapav selected is %d and it's price is %d",jainWQuantity,jainWPrice);
					totalPrice+=jainWPrice;
					vadapav+=jainWPrice;
					break;  //end of fafda in guj menu
				case 4: printf("\nYou have selected special vadapav in vadapav menu");
					printf("\nSelect quantity");
					scanf("%d",&spWQuantity);
					spWPrice+=(spWQuantity*SPW);
					printf("\nThe quantity of special vadapav selected is %d and it's price is %d",spWQuantity,spWPrice);
					totalPrice+=spWPrice;
					vadapav+=spWPrice;
					break;  //end of dhokla in guj menu
				case 5:	goto start;
					//end of start label in inner vadapav menu
			}//end of inner vadapav switch
			getch();
			goto inVadapav;
		       //	break;
		case 11:
			printf("You have selected Maggi");
			break;
		case 12:
			printf("You have selected Tea");
			break;
		case 13:
			printf("You have selected Coffee");
			break;
		case 14:
			printf("You have selected Dal");
			break;
		case 15:
			printf("You have selected Puff");
			break;
		case 16:
			printf("You have selected Maskabun");
			break;
		case 17:printf("You have selected Continental");
			break;
		case 18:printf("American");
			break;
		case 19:printf("African");
			break;
		case 20:printf("Japanese");
			break;
		case 0:
			clrscr();
			printf("\n\t\tDABRAI HOTEL\n");
			printf("\nBill RECEIPT");
			printf("\nTotal Price: Rs.%d",totalPrice);
			if(south!=0){
				printf("\n\tSouth Indian Bill: Rs.%d",south);
				if(idliPrice!=0){
					printf("\n\t\tIdli ordered: %d, price: %d",idliQuantity,idliPrice);
				}
				if(dosaPrice!=0){
					printf("\n\t\tDosa ordered: %d, price: %d",dosaQuantity,dosaPrice);
				}
				if(uttapamPrice!=0){
					printf("\n\t\tUttapam ordered: %d, price: %d",uttapamQuantity,uttapamPrice);
				}
				if(meduPrice!=0){
					printf("\n\t\tMeduVada ordered: %d, price: %d",meduQuantity,meduPrice);
				}

			}
			if(guj!=0){
				printf("\n\tGujarati Bill: Rs.%d",guj);
				if(idliPrice!=0){
					printf("\n\t\tSev Tomato ordered: %d, price: %d",sevTQuantity,sevTPrice);
				}
				if(dalDPrice!=0){
					printf("\n\t\tDal Dhokla ordered: %d, price: %d",dalDQuantity,dalDPrice);
				}
				if(fafdaPrice!=0){
					printf("\n\t\tfafda ordered: %d, price: %d",fafdaQuantity,dalDPrice);
				}
				if(dhoklaPrice!=0){
					printf("\n\t\tDhokla ordered: %d, price: %d",dhoklaQuantity,dhoklaPrice);
				}
			}
			if(punjabi!=0){
				printf("\n\tPunjabi Bill: Rs.%d",punjabi);
				if(samPrice!=0){
					printf("\n\t\tSamosa ordered: %d, price: %d",samQuantity,samPrice);
				}
				if(puffPrice!=0){
					printf("\n\t\tPuff ordered: %d, price: %d",puffQuantity,puffPrice);
				}
				if(pavPrice!=0){
					printf("\n\t\tPav Bhaji ordered: %d, price: %d",pavQuantity,pavPrice);
				}
				if(pulPrice!=0){
					printf("\n\t\tPulav ordered: %d, price: %d",pulQuantity,pulPrice);
				}
			}

			if(italian!=0){
				printf("\n\tItalian Bill: Rs.%d",italian);
				if(itPPrice!=0){
					printf("\n\t\tItalian Pizza ordered: %d, price: %d",itPQuantity,itPPrice);
				}
				if(marPPrice!=0){
					printf("\n\t\tMargareta ordered: %d, price: %d",marPQuantity,marPPrice);
				}
				if(chPPrice!=0){
					printf("\n\t\tCheese Pizza ordered: %d, price: %d",chPQuantity,chPPrice);
				}
				if(dcPPrice!=0){
					printf("\n\t\tDouble Cheese Pizza ordered: %d, price: %d",dcPQuantity,dcPPrice);
				}
			}
			if(mexican!=0){
				printf("\n\tMexican Bill: Rs.%d",mexican);
				if(mexSPrice!=0){
					printf("\n\t\tSizzler ordered: %d, price: %d",samQuantity,samPrice);
				}
				if(mexSSPrice!=0){
					printf("\n\t\tSpecial Sizzler ordered: %d, price: %d",mexSSQuantity,mexSSPrice);
				}
				if(mexPPrice!=0){
					printf("\n\t\tPav Mex Pizza ordered: %d, price: %d",mexPQuantity,mexPPrice);
				}
				if(mexSandPrice!=0){
					printf("\n\t\tMex Sandwich ordered: %d, price: %d",mexSandQuantity,mexSandPrice);
				}
			}
			if(iceCream!=0){
				printf("\n\tIceCream Bill: Rs.%d",iceCream);
				if(vanPrice!=0){
					printf("\n\t\tVanilla ordered: %d, price: %d",vanQuantity,vanPrice);
				}
				if(chocPrice!=0){
					printf("\n\t\tChocolate ordered: %d, price: %d",chocQuantity,chocPrice);
				}
				if(cocPrice!=0){
					printf("\n\t\tCookie Cream ordered: %d, price: %d",cocQuantity,cocPrice);
				}
				if(manPrice!=0){
					printf("\n\t\tMango icecream ordered: %d, price: %d",manQuantity,manPrice);
				}
			}
			if(chinese!=0){
				printf("\n\tChinese Bill: Rs.%d",chinese);
				if(hakPrice!=0){
					printf("\n\t\tHakka ordered: %d, price: %d",hakQuantity,hakPrice);
				}
				if(schPrice!=0){
					printf("\n\t\tSchezwan ordered: %d, price: %d",schQuantity,schPrice);
				}
				if(manchPrice!=0){
					printf("\n\t\tManchurian ordered: %d, price: %d",manchQuantity,manchPrice);
				}
				if(frPrice!=0){
					printf("\n\t\tFried Rice ordered: %d, price: %d",frQuantity,frPrice);
				}
			}
			if(soup!=0){
				printf("\n\tSoup Bill: Rs.%d",soup);
				if(tomPrice!=0){
					printf("\n\t\tSamosa ordered: %d, price: %d",tomQuantity,tomPrice);
				}
				if(chinSPrice!=0){
					printf("\n\t\tChinese soup ordered: %d, price: %d",chinSQuantity,chinSPrice);
				}
				if(scPrice!=0){
					printf("\n\t\tSweet Corn ordered: %d, price: %d",scQuantity,scPrice);
				}
				if(nsPrice!=0){
					printf("\n\t\tNoodle ordered: %d, price: %d",nsQuantity,nsPrice);
				}
			}
			if(dabeli!=0){
				printf("\n\tDabeli Bill: Rs.%d",dabeli);
				if(oilDPrice!=0){
					printf("\n\t\tOil Dabeli ordered: %d, price: %d",oilDQuantity,oilDPrice);
				}
				if(butDPrice!=0){
					printf("\n\t\tButter Dabeli ordered: %d, price: %d",butDQuantity,butDPrice);
				}
				if(jainDPrice!=0){
					printf("\n\t\tJain Dabeli ordered: %d, price: %d",jainDQuantity,jainDPrice);
				}
				if(spDPrice!=0){
					printf("\n\t\tSpecial Dabeli ordered: %d, price: %d",spDQuantity,spDPrice);
				}
			}
			if(vadapav!=0){
				printf("\n\tVadapav Bill: Rs.%d",vadapav);
				if(oilWPrice!=0){
					printf("\n\t\tOil Vadapav ordered: %d, price: %d",oilWQuantity,oilWPrice);
				}
				if(butWPrice!=0){
					printf("\n\t\tButter Vadapav ordered: %d, price: %d",butWQuantity,butWPrice);
				}
				if(jainWPrice!=0){
					printf("\n\t\tJain Vadapav ordered: %d, price: %d",jainWQuantity,jainWPrice);
				}
				if(spWPrice!=0){
					printf("\n\t\tSpecial Vadapav ordered: %d, price: %d",spWQuantity,spWPrice);
				}
			}
			printf("\n\nThank you for using our services.\nYour food will be prepared soon !\nHave a good day");
			getch();
			exit(0);
			break;
		default:
			printf("Wrong choice...");
	}//end of switch:
	getch();
	goto start;


}//end of main