#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#define ESC 27
#define ENTER 13
#define BKSP 8
#define FUNCTION       int passwordsecure(char pswd[])
#define DECLATION      int a=0, A=0, num=0, spe=0;
#define LOOP           for(int i=0; i<strlen(pswd); i++)
#define LENGTH         if(strlen(pswd)<7)  return 2;
#define SMALL          if(pswd[i]>='a' && pswd[i]<='z') a=1;
#define LARGE          else if(pswd[i]>='A' && pswd[i]<='Z') A=1;
#define NUMBER         else if(pswd[i]>='0' && pswd[i]<='9')  num=1;
#define SEP_CHAR       else if( (pswd[i]>='!' && pswd[i]<='/') || pswd[i]=='@' || pswd[i] == '_') spe=1;
#define INVALIDCHAR   else if( (pswd[i]>=':' && pswd[i]<='?') || (pswd[i]>='[' && pswd[i]<='`') || (pswd[i]>='{' && pswd[i]<='~') ) return 3;
#define blue "\e[0;34m"
#define yellow "\e[0;33m]"
#define red "\e[0;31m]"
#define cyan "\e[0;36m]"
#define green "\e[0;32m]"
#define purple "\e[0;35m]"
#define reset "\e[0m"
#define redbold "\e[1;31m"
#define greenbold "\e[1;32m"
#define yellowbold "\e[1;33m"
#define bluebold "\e[1;34m"
#define purplebold "\e[1;35m"
#define cyanbold "\e[1;36m"
#define whiteback "\e[47m"
#define STRENGTH       if(a==1 && A==1 && num==1 && spe==1) return 1;
#define INLOOP        { SMALL LARGE NUMBER SEP_CHAR INVALIDCHAR }
#define RETURN         return 2;
#define SPE_CHAR      (( (uname[i]>='!' && uname[i]<='/') || uname[i]=='@' || uname[i]==' ')
#define INVALID_CHAR  ( (uname[i]>=':' && uname[i]<='?') || (uname[i]>='[' && uname[i]<='`') || (uname[i]>='{' && uname[i]<='~') ) )
int i;
char pswd[];
struct { char name[20]; char pswd[20]; }user;     
struct{char name[20];char pswd[20];}use;
FILE *fptr;
char uname[30];

int main()
{ 
    system("cls"); 
    int n;
    system("color 70");                                   /// CAN USE TO CHANGE INTERFACE AND TEXT COLOUR

    while(1)
    {
        n= logprompt();
        switch(n)
        {
            case 68 :
             login(); 
               break; 
            case 80 :
             userreg(); 
             break;
            case 81 : 
            about ();  
            break;
            case ESC :
             escape();
        }
        system("cls");                                       /// CLEARS SCREEN
    }
}



void gotoxy(int x, int y)                               /// Sets co-ordinates in console according to parameters passed
{
    COORD c;
    c.X = x;
    c.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}



void delay(ms)                                          /// DELAY's printing output statements by  milliseconds
{
    clock_t timeDelay=ms+ clock();
    while(timeDelay>clock());
}


int logprompt()                                        /// opening initial window For the user
{
    int n;
    gotoxy(9,6);
    printf( whiteback cyanbold "............M Y...J O U R N A L... S P A C E.........."reset  );
    gotoxy(18,10);
    for(int i=0; i<61; i++)
    { 
        printf("=");
        }
    gotoxy(38,13);
    printf( whiteback yellowbold "** ENTER D TO LOGIN **" reset );
    gotoxy(36,15);
    printf( whiteback yellow "** PRESS P TO REGISTER ** " reset );
    gotoxy(35,17);
    printf( whiteback yellow  "** PRESS Q TO SEE ABOUT **" reset );
    gotoxy(37,19);
    printf( whiteback yellow "** PRESS ESC TO EXIT **" reset);
    gotoxy(25,21);
    printf( whiteback cyan "---------------------------------------------\n\n " reset);
    gotoxy(18,24);
    for(int i=0; i<61; i++)
    {
         printf("=");
    }
     printf("\n\n\n");
    n=getch();
    return n;
}


void escape()                                              // Ends program
{
    system("cls");

    gotoxy(10,12);
    for(int i=0; i<85; i++)
    { printf("=");
     delay(10);}
    delay(50);
    gotoxy(30,16); 
    delay(400);
    printf( whiteback red "....J O U R N A L ....C L O S E D.....\n\n\n\n"reset);
    gotoxy(10,20);
    for(int i=0; i<85; i++)
    { 
        printf("="); 
    delay(20);
    }
    gotoxy(0,30);
     getch();
    exit(1);
}
                                                     
///   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
///   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void about()
{
    system("cls");
    printf("\n\n\n\n");
    printf( whiteback cyan " ================  *   ===  *  === *...... M Y  J O U R N A L  S P A C E.... * ===  *  ===  * ==================== \n\n\n");
    printf( whiteback cyan  "     ============================================================================================\n\n");

    printf( whiteback blue "    ABOUT PROJECT :\n\n");

    printf( whiteback yellow  "    A BRIEF OVERVIEW OF 'My Journal Space'\n");
    printf( whiteback yellow  "    PROJECT BY VEDA,VARSHITHA,MOHITHA, I year UG.\n\n");
    delay(30);
    printf( whiteback yellow  "    This Project is fully coded in C Language using concepts like: FILE HANDLING , FUNCTION, POINTERS, HEADER FILE, TIME etc ...\n\n \n");
    printf( whiteback yellow  "  My Journal Space provides a user-friendly interface which he/she can use to access their text from\n");
    printf(  whiteback yellow "    It has a password protected, and a USER can either Login or Register themselves accordingly\n");
    delay(30);
    printf( whiteback yellow  "  login()   performs Login task\n");
    printf(  whiteback yellow "userreg() performs REGISTERATION task \n\n");
    printf(  whiteback yellow  " gotoxy() helps to set co-ordinate on console\n");
    printf(  whiteback yellow"delay()  is used in a manner such that it provides a little animation\n\n");
    printf ( whiteback blue  " AFTER USER CREATES ACCOUNT OR LOGIN HE CAN ACCESS TO HIS PERSONAL TEXT SERVICE \n\n\n");
    delay(30);
    printf("                              --------------------------------------------\n\n\n");
    printf( whiteback yellow "    OVERWRITE - It deletes all the previous memory and starts storing everything again\n");
    printf( whiteback yellow "                'NOTEPAD_WRITE' has all functionalities of OVERWRITE MODE\n");
    printf(  whiteback yellow "    ADD MODE  - It add more data after previously stored data.\n");
    printf( whiteback yellow "                'NOTEPAD_ADDTEXT' has all functionalities of ADD MODE\n");
    printf( whiteback yellow "    DEMO MODE - It provides a user-friendly interface where a user can check how everything works.\n");
    printf( whiteback yellow "                'NOTEPAD_DEMO' has all functionalities of DEMO MODE\n\n\n");
    printf("                       -------------------------------------------------------------\n\n\n\n");
    delay(30);
    printf(  whiteback blue "    NOTEPAD & INTERFACE PROVIDED ARE DIFFERENT IN BEHAVIOUR AND HAVE CERTAIN SET OF RULES TO USE\n\n");
    printf( whiteback yellow "    1. NOTES CAN BE SAVED WITH TIMESTAP\n");
    printf( whiteback yellow "    2. BACKSPACE HIT IS SPECIFIED WITH <- SYMBOL\n");
    printf( whiteback yellow "    3. ONLY UNIQUE USERS EXIST 4. OVERWRITE MODE DELETES PREXISTING FILE AND ADD NEW TEXT\n");
    printf( whiteback yellow "    5. TEXT EDITOR MODE CONTINUES TO WRITE AFTER LAST LEFT\n");
    printf( whiteback yellow"    6. TO END INSERTION MODE HIT ESC KEY\n");
    printf( whiteback yellow "    7. READ MODE SHOWS ALL TEXT USER LAST ENTERED IN FILE\n");
    printf( whiteback yellow "    8. DEMO MODE PROVIDES VISUAL DEMO OF HOW TEXT IS INSERTED\n");
    printf(whiteback yellow "    9. DEMO MODE DOESN'T SAVE TEXT TO FILE\n");
    printf( whiteback yellow  "    10. IT DOESN'T SUPPORT KEYBORD SHORTCUTS ( CTRL+V, CTR+S) ETC\n");
    printf(whiteback yellow "    11. HIT ENTER IF LESS SPACE IS AVAILABLE TO MAINTAIN MARGIN\n\n");
    printf( whiteback yellow "    THEY ARE PROVIDED IN 'NOTEPAD_HELP' FILE\n\n");
delay(30);
    printf("                                  -------------------------------------------\n\n");
    printf( whiteback blue "    It also provides many other functionalities like\n");
    printf( whiteback yellow "    i)   securepassword() : IT CHECKS WEATHER PASSWORD ENTERED IS STRONG OR NOT\n");
    printf(whiteback yellow "    ii)  timestamp()      : IT STORES THE TIMING WHEN DATA IS ENTERED\n");
    printf(whiteback yellow "    iii) username_valid() : ALLOWS ONLY VALID USERNAME WITHOUT ANY SPECIAL CHAR OTHER THAN  ' _ '\n");
    printf(whiteback yellow "    iv)  userchk()        : IT MAKES SURE THAT ONLY UNIQUE USERNAME EXISTS. IF USERNAME EXITS ALREADY\n");
    printf(whiteback yellow "                            IT DISALLOWS TO MAKE CHANGES AND ASK TO LOGIN\n");
    printf(whiteback yellow "    v)   inputuser()      : Stores userdata credentials to a file\n\n");
delay(30);
    printf("    ================================================================================================= \n\n\n\n");
    gotoxy(37,73);
     printf(whiteback purple"** PRESS ESC TO GO BACK **\n\n\n" reset);
    printf("    ================================================================================================= \n\n\n\n");
    while(1)
    {
        int k=getch();
     if(k==27)//27 is ascii code oF ESC
      main();
      }
}
//                      L  O  G  I  N  _  U  S  E  R
// ================================================================================

// ALL LOGIN FUNCTIONALITIES ARE PRESENT IN THIS HEADERFILE
// login()       : It is main function that calls other additional functions
// checkuser()   : It checks weather enter credentials match or not
// register()    : It is called when there exists no user record

// =================================================================================

//  WHEN NO USERFILE DATA IS FOUND THIS FUNCTION IS CALLED
//  IT TELLS USER TO FIRST REGISTER THEM & THEN LOGIN
void registe()
{   gotoxy(22,12);
    {   printf("-");
     delay(10);}
    gotoxy(27,14);
     printf(whiteback red"---x---xx--xx- NO USERFILE EXIT -xx--xx---x---" reset);
    gotoxy(38, 16);
     printf(whiteback purple "-- REGISTER FIRST --" reset);
    gotoxy(32, 18);
     delay(800);
    printf(whiteback yellow "---- PRESS P FOR REGISTERATION ----\n"reset);
    while(1)
    {
        int k=getch(); 
        if(k==80) //80 is ascii code oF P
        userreg();
        }  
} //  CHECKS WEATHER ENTERED CREDENTIALS ARE VALID OR NOT
void checkuser(char uname[], char upass[])
{   fptr = fopen("userrecord.bin", "rb");         // opens file in read mode
    if(fptr==NULL) 
     registe();
    int chku, chkp, found=0;
    while(!feof(fptr))
    {   fread(&use, sizeof(use), 1,fptr);
        chku= check(uname, use.name);             // check() is defined in REGISTER_USER file
        chkp= check(upass, use.pswd);             // takes parameter and tells weather string are equal or not

        if(chku==1 && chkp==1)
        {  
             found=1;
         fclose(fptr);                
            for(int i=0; i<53; i++)
            gotoxy(22,12);
            for(int i=0; i<53; i++)
            { 
                printf("-");
            delay( 10);
             }          
            gotoxy(27,14);
            printf( whiteback green "---x---xx--xx- DETAILS MATCHED -xx--xx---x---");
            gotoxy(29,16); 
            delay(300);
            printf(whiteback green"---- PRESS ENTER TO OPEN NOTEPAD ----\n" reset);
            gotoxy(22,18);
            for(int i=0; i<53; i++)
            {
                printf("-");
                delay(10);
            }  
             printf("\n");
            int k=getch();
            while(1)
            { 
                if(k==13) //carriage return
            notepadinput(uname);
             k= getch();
             }   // notepadinput() is defined in NOTEPAD file
        } 
          else 
        continue;
    }

    if(found==0)                                            /// When Details did'nt match
    {  
         gotoxy(22,12);
        for(int i=0; i<53; i++)
        { 
            printf("-");
        delay(10); 
        }
        gotoxy(26,14);
        printf(whiteback red "---x---xx--xx- INVALID LOGIN -xx--xx---x---" reset);
        gotoxy(34, 16); 
        delay(800);
        printf(whiteback purple "---- PRESS D TO TRY AGAIN ----\n"reset);
        while(1)
        {
            int k=getch(); 
        if(k==68)// ascii code oF D is 68
         login();
         }
    }
}
void login()                                                //  MAIN LOGIN FUNCTION    
{   char uname[20], upass[20], c;
    int i;
    gotoxy(25, 26);
    for(int i=0; i<46; i++)
    {
         printf(">");
     delay(15);
     }
    system("cls");
     gotoxy(25, 6);
    printf(whiteback cyan "------------------ LOGIN PROMPT ----------------\n \n " reset );
    gotoxy(38,8);
    printf(whiteback yellow"ENTER USERNAME: ");
     scanf("%s", uname);
    gotoxy(36,10);
      printf(whiteback yellow "ENTER PASSWORD: "reset);
    for(i=0; c!=13; i++)
    {  
         c=getch();
        if(c==8) 
        {
             i-=2;
              continue;
               }
        upass[i]=c;
         printf("*");
    }  
     upass[i-1]='\0';
    gotoxy(30,10); 
    checkuser(uname, upass);
     return;
}
FUNCTION
{
    DECLATION
    LENGTH
    LOOP
    SMALL
    LARGE
    NUMBER
    SEP_CHAR
    INVALIDCHAR
    INLOOP
    STRENGTH
    RETURN
}


///                      R E G I S T E R _USER
///  ========================================================================

///   ALL REGISTERATION FUNCTIONALITIES ARE PRESENT IN THIS HEADERFILE
///   userreg()         :   Main reg. function that calls other function
///   username_valid()  :   Checks weather username entered is valid or not
///  =========================================================================
                
int check(char upass[], char rpass[])                               // CHECKS WEATHER STRING PASSED ARE EQUAL
{  
     if(strlen(upass)==strlen(rpass))
    {  
         for(int i=0; i<strlen(upass); i++)
        { 
            if(upass[i]!=rpass[i]) 
        return 0;
         } 
        return 1;
    } 
    else
     return 0;
}



void inputuser()                                                   // ADDS USERDATA TO RECORD FOR LATER USE 
{ //  Enters userdata to a file.
    fptr = fopen("userrecord.bin", "ab");                          // .bin is binary file & 'ab' opens
    fwrite(&user,sizeof(user),1,fptr);                             // file in binary mode and append data
    fclose(fptr);
    gotoxy(37,18);
    printf(whiteback green "USER SUCCESSFULLY ADDED" reset);
    delay(400); 
    printf("  :");
    delay(400);
     printf("-");
    delay(400); 
    printf(")\n\n");
    gotoxy(33,20); 
    delay(300);
    printf(whiteback yellow "--- PRESS ENTER TO OPEN NOTEPAD ---\n\n"reset);
    while(1)
    {
        int k=getch(); 
        if(k==13)
         notepadinput(user.name);
         }
}



void userchk(FILE *usercheck, char uname[])                      ///  CHECKS WEATHER USERNAME ALREADY EXISTS  ///
{
    int chku;
    while(!feof(usercheck))
    {
        fread(&use, sizeof(use), 1,usercheck);
        chku= check(uname, use.name);
        if(chku==1)
        {   fclose(usercheck); 
        gotoxy(22,10);
            for(int i=0; i<62; i++) 
            {
                 printf("-"); 
                 delay(10);}
            gotoxy(28,14);
            printf(whiteback red "---x---xx--xx- USER ALREDY EXISTS -xx--xx---x----" reset);
            gotoxy(22,18);
            for(int i=0; i<61; i++)
             {
                 printf("-");
                  delay(10) ;}
            gotoxy(38,20); 
            delay(600);
            printf(whiteback yellow"---- PRESS D TO LOGIN ----");
            gotoxy(36,22); 
            delay(600);
            printf(whiteback yellow "---- PRESS P TO TRY AGAIN ----"reset);
            gotoxy(22,24);
            for(int i=0; i<61; i++)
            { 
                printf("-"); 
            delay(10) ;
            }
            printf("\n");
            getch();
            while(1)
            {  
                 int k=getch();
             if(k==68)
              login();
                else if(k==80)
                 userreg();
            }
        }
         else 
        continue;
    }
}


void username_valid()                                           //  CHECKS WEATHER USERNAME IS VAILD OR NOT 
{
    int k=0;
     char uname[30];
     strcpy(uname, user.name);
    if(strlen(uname)<7)
    {  
         gotoxy(22,12);
        for(int i=0; i<61; i++)
        { 
            printf("-"); 
        delay(10); 
        }
         k=1;
        gotoxy(34, 15);
         printf(whiteback red  "USER NAME MUST BE OF ATLEAST 7 CHARACKTERS\n\n"reset);
    }
    else
    { 
          for(int i=0; uname[i]!='\0'; i++)
        {  
             if SPE_CHAR || INVALID_CHAR
            {  
                 gotoxy(22,12);
                if(uname[i]=='_') 
                continue;
                for(int i=0; i<61; i++)
                { 
                    printf("-"); 
                delay(10) ;
                }
                k=1;
                gotoxy(38, 14); 
                printf(whiteback red "xxxx INVALID USERNAME xxxx\n\n");
                gotoxy(28,16); 
                 printf(whiteback red "USERNAME CAN ONLY HAVE 1 , A , a , _ CHAR & NO SPACE "reset); 
                  break;
            }
               else
             continue;
        }
    }
    if(k==1)
    {  
         gotoxy(22,18);
        for(int i=0; i<61; i++)
        {
             printf("-");
         delay(10) ;
         }
        gotoxy(36,20);
         delay(600);
        printf(whiteback purple"---- PRESS P TO TRY AGAIN ----\n"reset);
        gotoxy(33,22);
        for(int i=0; i<19; i++)
        {
            printf("/");
             delay(10);
            printf("\\");
             delay(10);
        } 
          printf("\n");
        getch();
        while(1)
        { 
            int k=getch();
         if(k==80)
          userreg();
          }
    }
    else
     return;
}



void userreg()                                                  ///  MAIN REGISTERATION FUNCTION, IT CALLS ALL OTHER FUNCTIONS  ///
{   FILE *usercheck= fopen("userrecord.bin", "rb");
    char c, repass[20]; int n, i;
    gotoxy(25,26);
    for(int i=0; i<46; i++)
    {
        printf("~"); 
    delay(20);
    }
    system("cls");
     gotoxy(25, 6);
    printf(whiteback cyan "------------------ REGISTERATION PROMPT -----------------" reset);
    gotoxy(40,8); 
    printf(whiteback yellow  "ENTER USERNAME: "reset);
    scanf("%s", user.name); 
    username_valid();

    if(usercheck!=NULL)
        userchk(usercheck, user.name);
    gotoxy(40,10);
    printf(whiteback yellow"ENTER PASSWORD: "reset); 
    scanf("%s", user.pswd);
    int j= passwordsecure(user.pswd);
    if(j==1)
    {
        gotoxy(38,12);
        printf(whiteback purple "RE-ENTER PASSWORD: "reset);
        for(i=0; c!=13; i++)
        { 
              c=getch();
            if(c==8) 
            {
                i-=2;
                 printf("<-");
                 continue;
                 }
            repass[i]=c; 
            printf("*");
        } 
          repass[i-1]='\0';
        int ch= check(user.pswd, repass);
        gotoxy(22,14);
        for(int i=0; i<61; i++)
        {
             printf("-");
        delay(10)
        ;}

        if(ch==1)
        { 
              gotoxy(40, 16);
            printf(whiteback yellow"PRESS ENTER TO CONTINUE\n\n"reset);
            while(1)
            { 
                int n=getch(); 
                if(n==13) 
                inputuser();
                }
        }
        else
        { 
              gotoxy(40, 16);
            printf(whiteback red "PASSWORD DOES'NT MATCH\n\n");
            gotoxy(22,18);
            for(int i=0; i<61; i++)
            {
                 printf("-"); 
            delay(10) ;
            }
            gotoxy(34,20);
             delay(600);
            printf(whiteback red "---- PRESS P TO TRY AGAIN ----\n"reset);
            gotoxy(33,22);
            for(int i=0; i<19; i++)
            {
                printf("/");
                 delay(10);
                printf("\\");
                 delay(10);
            } 
              printf("\n");
            while(1)
            {
                int n=getch(); 
                if(n==80)
                 userreg();
                 }
        }
    }
    else if(j==2)
    {  
         gotoxy(30,12);
        for(int i=0; i<46; i++)
        
        {
            printf("-");
        delay(20);
        }
        gotoxy(45,14);
         printf(whiteback red  "WEAK PASSWORD" reset);
        gotoxy(24, 16);
        printf(whiteback purple " PASSWORDS MUST HAVE ATLEAST 7 CHAR & ALL CHAR A , a , 1 , @ \n"reset);
        gotoxy(22,18);
        for(int i=0; i<61; i++)
        {
             printf("-");
         delay(10) ;
         }
        gotoxy(36, 20);
         delay(800);
        printf(whiteback purple "---- PRESS P TO TRY AGAIN ----\n"reset);
        gotoxy(33,22);
        for(int i=0; i<19; i++)
        {
               printf("/");
         delay(10);
            printf("\\");
             delay(10);
        } 
          printf("\n");
        while(1)
        {
            int n=getch(); 
            if(n==80)
             userreg();
             }
    }
    else if(j==3)
    { 
          gotoxy(22,12);
        for(int i=0; i<61; i++)
        {
             printf("-");
        delay(20);
        }
        gotoxy(30,14);
        printf(whiteback purple "CHAR LIKE = , ^ , ~ , ~ , \" , ' , ARE INVALID\n" reset );
        gotoxy(34, 16);
         delay(800);
        printf(whiteback red "---- PRESS P TO TRY AGAIN ----\n"reset);
        while(1)
        {
            int n=getch(); 
            if(n==80)
             userreg();
             }
    } 
      return;
}

///   """"""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""

///   It has main notepad functionalities and call functions from other notepad file
///   notepadinput()  :  Presents opening window of NOTEPAD
///   choice()        :  Presents different functionalities to perform

///  """""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
void notepadinput(char name[])                      /// MAIN NOTEPAD FUNCTION
{
    system("cls");
    strcpy(uname, name);
    gotoxy(14, 4);
    printf(whiteback cyan "---^---x--^x^--- WELCOME %s , TO THE WORLD OF TEXT ---^x^--x---^---", name);
    gotoxy(37, 6);
     printf(whiteback cyan "e x p l o r e . f r e e l y " reset);
    gotoxy(29,10);
     printf(whiteback green "-+-+-+-+- ENTER YOUR CHOICE -+-+-+-+-"reset);
    gotoxy(20,12);
    for(int i=0; i<57; i++)
     {
         printf("-");
         delay(15);
          }
    gotoxy(34,14);
     printf(whiteback yellow ">>> PRESS D FOR HELP <<<");
    gotoxy(34,16);
     printf(whiteback yellow ">>> PRESS  P FOR DEMO <<<");
    gotoxy(31,18);
     printf(whiteback yellow  ">>> PRESS Q TO DISPLAY TEXT <<<");
    gotoxy(33,20); 
    printf(whiteback yellow ">>> PRESS R TO ADD TEXT <<<\n\n");
    gotoxy(29,22);
    printf(whiteback yellow ">>>> PRESS S TO OVERWRITE FILE <<<<\n\n");
    gotoxy(34,24);
     printf(whiteback yellow ">>> PRESS ESC TO EXIT <<<"reset);
      gotoxy(20,26);

    for(int i=0; i<57; i++)
     {
         printf("-"); 
         delay(10);
         }
          gotoxy(3, 30);
    while(1)
    {  
         int n=getch();
        switch(n)
        {
            case 68 :
             notehelp();
             break;
            case 80 : 
            notedemo();
            break;
            case 81:  
            notedisplay();
            break;
            case 82: 
             noteadd(); 
             break;
            case 83: 
             notewrite();
              break;
            case ESC:
             escape();
              break;
        }
    }
}


///  ````````````````````````````````````````````````````````````````````````````
///  It tells all important instructions regarding the use of notepad

///  ````````````````````````````````````````````````````````````````````````````

void notehelp()
{
    gotoxy(25,10);
     printf(whiteback green". . . . . .^. I N S T R U C T I O N S .^. . . . . . ." reset);
    gotoxy(33,12);
    for(int i=0; i<19; i++)
    {
        printf("/"); 
        delay(10);
        printf("\\");
         delay(10);
    }

    gotoxy(20,14);
    for(int i=0; i<63; i++)
    {
         printf("-"); 
    delay(10);
     }

    gotoxy(32,16);
     printf(whiteback yellowbold "1. NOTES CAN BE SAVED WITH TIMESTAP ");
    gotoxy(28,18); 
    printf(whiteback yellowbold"2. BACKSPACE HIT IS SPECIFIED WITH <- SYMBOL ");
    gotoxy(34,20);
     printf(whiteback yellowbold "3. ONLY UNIQUE USERS EXIST ");
    gotoxy(19,22);
     printf(whiteback yellowbold "4. OVERWRITE MODE DELETES PREXISTING FILE AND ADD NEW TEXT ");
    gotoxy(22,24); 
    printf(whiteback yellowbold "5. TEXT EDITOR MODE CONTINUES TO WRITE AFTER LAST LEFT ");
    gotoxy(30,26); 
    printf(whiteback yellowbold "6. TO END INSERTION MODE HIT ESC KEY ");
    gotoxy(24,28); 
    printf(whiteback yellowbold"7. READ MODE SHOWS ALL TEXT USER LAST ENTERED IN FILE");
    gotoxy(23,30); 
    printf(whiteback yellowbold "8. DEMO MODE PROVIDES VISUAL DEMO OF HOW TEXT IS INSERTED");
    gotoxy(30,32);
     printf(whiteback yellowbold "9. DEMO MODE DOESN'T SAVE TEXT TO FILE ");
    gotoxy(20,34);
     printf(whiteback yellowbold "10. IT DOESN'T SUPPORT KEYBORD SHORTCUTS ( CTRL+V, CTR+S) ETC ");
    gotoxy(21,36); 
    printf(whiteback yellowbold "11. HIT ENTER IF LESS SPACE IS AVAILABLE TO MAINTAIN MARGIN " reset);
    gotoxy(20,38);
    for(int i=0; i<63; i++)
    {
         printf("-");
     delay(10);
      }

    gotoxy(31,40);
    for(int i=0; i<19; i++)
    {
        printf("\\");
         delay(10);
        printf("/"); 
         delay(10);
    }
    gotoxy(34,42);
     printf(whiteback purple ">>> PRESS ESC TO GO BACK <<<\n\n"reset);
    while(1)
    {
        int k=getch();
        if(k==ESC)
         notepadinput(uname);
        else
         continue;
    }
}
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
void enterhit_demo()                                        // d e m o _ e n t e r _ h i t _ c a l l
{
    system("cls");
     gotoxy(14,4);
    printf(whiteback cyanbold "---^---x--^x^--- WELCOME %s , TO THE WORLD OF TEXT ---^x^--x---^---", uname);
    gotoxy(34,6);
     printf(whiteback cyanbold "e x p l o r e . f r e e l y " reset);
    gotoxy(25,10);
     printf(whiteback greenbold ". . . . . .^. d e m o . w o r l d .^. . . . . . ." reset);
    gotoxy(30,12);
    for(int i=0; i<19; i++)
    {
        printf("/");
         delay(10);
        printf("\\"); 
        delay(10);
    }
    gotoxy(27,46);
     printf(whiteback purple "xx-xx Press esc to exit insertion mode xx-xx" reset);
    gotoxy(4, 14);
     printf(whiteback green "ENTER TEXT: " reset);
    char c;
     int i;
    char str[1800]; 
    int f= 15;
    for(i=0; c!= ESC; i++)
    {
        c= getch(); 
        int j=c;
        if(j== BKSP ) 
        {
             i-=2;
         printf("<-");
          continue;
           }
        if(j==ENTER) 
        {
             str[i]='\n';
              gotoxy(4,f);
               f++;
                continue;
                }
        str[i]=c;
         printf("%c",c);
    }
     str[i-1]='\0';
    gotoxy(10,f+3);
    for(int i=0; i<85; i++)
    {
         printf("="); 
    delay(10);
    }
    f+=6;
     gotoxy(5,f); 
     i=0;
    printf(whiteback green "TEXT ENTERED: " reset );
    gotoxy(18,f);
    while(str[i]!='\0')
    {
      if(str[i]=='\n')
      {
         f++;
          gotoxy(4,f);
          }
      else 
      printf("%c", str[i]);
       i++;
    } 
    printf("\n");
    gotoxy(10,f+3);
    for(int i=0; i<85; i++)
    {
         printf("=");
     delay(10);
     }
    gotoxy(30,f+6);
    for(int i=0; i<19; i++)
    {
        printf("/"); 
        delay(10);
        printf("\\");
         delay(10);
    }

    gotoxy(27,f+8);
     printf(whiteback yellow "---||--||- press D to go back -||-||-||---");
    gotoxy(27,f+10);
     printf(whiteback yellow "||-||-||- press P to test again -||-||-||" reset);
    gotoxy(30,f+12);
    for(int i=0; i<19; i++)
    {
        printf("\\");
         delay(10);
        printf("/");
          delay(10);
    }
     printf("\n\n\n");
    f=getch();
    while(1)
    {
        if(f==68) 
        notepadinput(uname);
        else if(f==80)
         enterhit_demo();
        f=getch();
    }
}
void notedemo()                                           ///   M A I N _ D E M O _ F U N C T I O N
{
    system("cls"); 
    gotoxy(14,4);
    printf( whiteback cyanbold "---^---x--^x^--- WELCOME %s , TO THE WORLD OF TEXT ---^x^--x---^---", uname);
    gotoxy(34,6); 
    printf(whiteback cyanbold "e x p l o r e . f r e e l y " reset);
    gotoxy(24,10); 
    printf(whiteback greenbold  ". . . . . . .^. d e m o . w o r l d .^. . . . . . . ."reset);
    gotoxy(26,15);
    for(int i=0; i<23; i++)
    {
        printf("/");
         delay(10);
        printf("\\"); 
        delay(10);
    }
    gotoxy(30,17);
     printf(whiteback yellow "PRESS ENTER TO START INSERTING TEXT");
    gotoxy(30,19);
     printf(whiteback yellow ">>>>>>  PRESS D TO GO BACK  <<<<<");
    gotoxy(30,21);
     printf(whiteback yellow "* PRESS ESC TO EXIT INSETION MODE *"reset);
    gotoxy(23,23);
    for(int i=0; i<26; i++)
    {
        printf("\\"); 
        delay(10);
        printf("/"); 
         delay(10);
    }
    printf("\n\n\n");
    while(1)
    {
        int k= getch();
        if(k==ENTER) 
        { 
            enterhit_demo();
             break;
             }
        else if(k==68)
        { 
            notepadinput(uname); 
            break;
            }
        else if(k==ESC)
         {
            escape(); 
            break;
             }
    }

}

///                            n o t e p a d _ d i s p l a y 

///   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
///       It prints all previous data user entered till now
///   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


/* DISPLAY ENTER HIT FUNCTIONALITIES */
void enterhit_display()
{
    system("cls"); 
    gotoxy(14,4);
    printf(whiteback cyanbold "---^---x--^x^--- WELCOME %s , TO THE WORLD OF TEXT ---^x^--x---^---", uname);
    gotoxy(37,6); 
    printf(whiteback cyanbold "e x p l o r e . f r e e l y "reset);
    gotoxy(23,10); 
    printf(whiteback yellowbold ". . . . . . .  v i s u a l . w o r l d  . . . . . . . ."reset);
    gotoxy(30,12);
    for(int i=0; i<19; i++)
    {
        printf("/");
         delay(10);
        printf("\\");
         delay(10);
    }
    FILE *userfile= fopen(uname, "rb");
    char text[50]=">>>>>  FILE TEXT  <<<<<", chr; int j= 19;
    gotoxy(4, 16);
    for(int i=0; i<36; i++)
    { 
        printf("-"); 
        delay(10);
        } 
    int i=0;
    while(text[i]!='\0')
    {
        printf("%c",text[i]);
        i++;
        delay(10);
        }
    for(int i=0; i<36; i++)
    {
         printf("-");
     delay(10);
     }

    gotoxy(4,18);
    for(int i=0; !feof(userfile); i++)
    {
        chr=fgetc(userfile);
        if(chr=='\n')
        {
            gotoxy(4,j);
            j++;
             continue;
             }
        printf("%c",chr);
    }  
     j+=5;
    gotoxy(4,j);
    for(int i=0; i<95; i++)
    {
         printf("-");
     delay(5);
     }
    gotoxy(27,j+2); 
    printf(whiteback yellow "---||--||- press D to add text -||-||-||---");
    gotoxy(26,j+4);
    printf(whiteback yellow "---||--||-  press P to overwrite  -||-||-||---");
    gotoxy(27,j+6);
     printf(whiteback yellow "---||--||- press Q to go back -||-||-||---");
    gotoxy(27,j+8); 
    printf(whiteback yellow "---||--||-  press ESC to EXIT  -||-||-||---\n\n"reset);
    gotoxy(4,j+10);
    for(int i=0; i<95; i++)
    { 
        printf("-");
     delay(5);
     }
    fclose(userfile);
    while(1)
    {
        int k= getch();
        if(k==68) 
        { 
            noteadd(); 
            break;
            }
        else if(k==80)
        { 
            notewrite();
            
             break;
             }
        else if(k==81)
         {
            notepadinput(uname);
             break;
             }
        else if(k==ESC)
         {
            escape();
             break;
             }
    }
}

/* DISPLAY FILE TEXT */
void notedisplay()
{   system("cls"); gotoxy(14,4);
    printf(whiteback cyanbold"---^---x--^x^--- WELCOME %s , TO THE WORLD OF TEXT ---^x^--x---^---", uname);
    gotoxy(37,6);
     printf(whiteback cyanbold "e x p l o r e . f r e e l y " reset);
    gotoxy(23,10);
     printf(whiteback green whiteback". . . . . . .  v i s u a l . w o r l d  . . . . . . . ."reset);
    gotoxy(26,13);
    for(int i=0; i<23; i++)
    {
        printf("/");  
        delay(10);
        printf("\\"); 
        delay(10);
    }
    gotoxy(34,15);
     printf(whiteback yellow "PRESS ENTER TO DISPLAY TEXT");
    gotoxy(30,17); 
    printf(whiteback yellow ">>>>>>  PRESS D TO GO BACK  <<<<<"reset);
     gotoxy(23,19);
    for(int i=0; i<26; i++)
    { 
        printf("\\");
     delay(10);
     printf("/"); 
      delay(10);
      } 
      printf("\n\n");
    while(1)
    {
        int k= getch();
         if(k==ENTER) 
         {
             enterhit_display();
          break;
          }
        else if(k==68)
        { 
            notepadinput(uname);
             break;
             }
    }
}


///  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
void noteadd() //adds entered text after last data and gives option r adding timestamp
{
    system("cls"); gotoxy(14,4);
    printf(whiteback cyanbold"---^---x--^x^--- WELCOME %s , TO SECRET WORLD OF TEXT ---^x^--x---^---", uname);
    gotoxy(37,6);
     printf(whiteback cyanbold "e x p l o r e . f r e e l y "reset );
    gotoxy(23,10);
     printf(whiteback yellow ". . . . . . .  c r e a t e . w o r l d  . . . . . . . ." reset);
    gotoxy(30,12);
    for(int i=0; i<19; i++)
    {
        printf("/"); delay(10);
        printf("\\"); delay(10);
    }
    char head[25]=">>>>>  ENTER TEXT  <<<<<", chr; int j= 19;
    gotoxy(4, 16);
    for(int i=0; i<36; i++)
    {
         printf("-"); 
    delay(10);
    } 
    int i=0;
    while(head[i]!='\0')
    {
        printf("%c",head[i]);
    i++;
    delay(10);
    }
    for(int i=0; i<36; i++)
    { 
        printf("-");
     delay(10);
     }
    gotoxy(27,46);
     printf(whiteback yellow "xx-xx press esc to exit insertion mode xx-xx"reset);
    gotoxy(4,18);
     int f= 19;
    fflush(stdin);
    char text[1800], c;
    getch();
    for(i=0; c!= ESC; i++)
    {
        c= getch(); 
        int j=c;
        if(j== BKSP ) 
        { 
            i-=2;
             printf("<-"); 
             continue; 
             }
        if(j== ENTER) 
        {
             text[i]='\n'; 
             gotoxy(4,f);
              f++;
               continue;
               }
        text[i]=c; 
        printf("%c",c);
    } 
    text[i-1]='\0';
     f+=3;
    fflush(stdin); 
    gotoxy(4,f);
    for(int i=0; i<95; i++)
    {
         printf("-");
     delay(5);
     }
    gotoxy(25,f+2);
     printf(whiteback yellow "f---||--||- press D to add timstamp -||-||-||---");
    gotoxy(28,f+4); 
       printf(whiteback yellow "---||--||- press P to add text -||-||-||---");
    gotoxy(29,f+6); 
        printf(whiteback yellow"---||--||- press Q to go back -||-||-||---");
    gotoxy(30,f+8);  
        printf(whiteback yellow "---||--||- press ESC to exit -||-||-||---"reset);
    fflush(stdin);
     gotoxy(4,f+10);
    for(int i=0; i<95; i++)
    { 
        printf("-"); 
    delay(5);
    
    }
    while(1)
    {
        int k= getch();
        if(k==68)  
             { 
            notewrite_timestamp(1, f+12, 2, text);
             break;
             } ///        FUNCTION YET TO ADD
        else if(k==80) 
         { 
            notewrite_timestamp(2, f+12, 2, text); 
            break;
            }    ///         FUNCTION YET TO ADD
        else if(k==81) 
         {
             notepadinput(uname);
              break;
              }
        else if(k==ESC)
         {
             escape();
              break;
              }
    }
}



void notewrite_timestamp(int t, int f, int a, char text[])
{  // TO  INSERT DATA IN FILE AND GIVE TIMESTAMP WITH CHOICE 
    FILE *userfile;
    if(a==1) 
    { 
        userfile= fopen(uname, "wb"); 
        }
    else if(a==2)
     { 
        userfile= fopen(uname, "ab");
         }
    if(t==1)
    {
        time_t t; time(&t);
        char *j= ctime(&t);
        char curr[200]="\n-+-+-+- TIME STAMP: ";
        strcat(curr,j); curr[45]=' ';
        strcat(curr, "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-");
        curr[93]='\n';curr[94]='\n';
        fwrite(&curr, sizeof(char),95,userfile);
    }
    else
    {
        char j[2]="\n\n"; 
        fwrite(&j, sizeof(char),2,userfile);
         }
    int len= strlen(text);
    gotoxy(30,f);
    for(int i=0; i<19; i++)
    {
        printf("/");
         delay(10);
        printf("\\");
         delay(10);
    }
    fwrite(&text, sizeof(char),len,userfile);
    if(t==1)
    {
        time_t t; time(&t);
        char *j= ctime(&t);
        char curr[200]="\n\n-^-^-^- TIME STAMP: ";
        strcat(curr,j); curr[46]=' ';
        strcat(curr,"-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-");
        fwrite(&curr, sizeof(char),94,userfile);
    }
    gotoxy(36,f+2);
     printf(whiteback purple "***  TEXT - INSERTED  ***\n\n");
    fclose(userfile);
    gotoxy(32,f+4); 
    printf(whiteback purple "***  PRESS ENTER TO GO BACK  ***\n\n"reset);
    while(1)
    {
        int k=getch();
         if(k==13) 
         notepadinput(uname);
         }
}


void enterhit_write()
{
    system("cls"); 
    gotoxy(14,4);
    printf(whiteback cyanbold"---^---x--^x^--- WELCOME %s TO THE WORLD OF TEXT ---^x^--x---^---", uname);
    gotoxy(37,6);
     printf(whiteback cyanbold "e x p l o r e . f r e e l y " reset);
    gotoxy(23,10);
     printf(whiteback blue ". . . . . . .  c r e a t e . w o r l d  . . . . . . . ."reset);
    gotoxy(30,12);
    for(int i=0; i<19; i++)
    {
        printf("/"); 
        delay(10);
        printf("\\");
         delay(10);
    }
    char head[25]=">>>>>  ENTER TEXT  <<<<<", chr; int j= 19;
    gotoxy(4, 16);
    for(int i=0; i<36; i++)
    {
         printf("-"); 
    delay(10);
    } 
    int i=0;
    while(head[i]!='\0')
    {
        printf("%c",head[i]);
        i++;
        delay(10);
        }
    for(int i=0; i<36; i++)
    { 
        printf("-");
     delay(10);}
    gotoxy(27,46);
     printf(whiteback yellow "xx-xx press esc to exit insertion mode xx-xx"reset);
    gotoxy(4,18); 
    int f= 19;
     fflush(stdin);
    char text[1800], c;
    for(i=0; c!= ESC; i++)
    {
        c= getch();
         int j=c;
        if(j== BKSP )
         {
             i-=2; 
             printf("<-");
              continue;
               }
        if(j== ENTER)
         { 
            text[i]='\n';
             gotoxy(4,f); 
             f++; 
             continue;
             }
        text[i]=c; 
        printf("%c",c);
    }
    text[i-1]='\0'; f+=3;
    fflush(stdin); 
    gotoxy(4,f);
    for(int i=0; i<95; i++)
    { 
        printf("-");
     delay(5);
     }
    gotoxy(25,f+2); 
    printf(whiteback yellow "f---||--||- press D to add timstamp -||-||-||---");
    gotoxy(28,f+4);  
      printf(whiteback yellow "---||--||- press P to add text -||-||-||---");
    gotoxy(29,f+6);  
       printf(whiteback yellow "---||--||- press Q to go back -||-||-||---");
    gotoxy(30,f+8); 
         printf(whiteback yellow "---||--||- press ESC to exit -||-||-||---"reset);
    fflush(stdin);
    gotoxy(4,f+10);
    for(int i=0; i<95; i++)
    {
         printf("-");
     delay(5);
     } 
     printf("\n\n");
    while(1)
    {
        int k= getch();
        if     (k==68)
          { 
            notewrite_timestamp(1, f+12, 1, text); 
            break;
            } ///        FUNCTION YET TO ADD
        else if(k==80)
          { 
            notewrite_timestamp(2, f+12, 1, text); 
            break;
            }    ///         FUNCTION YET TO ADD
        else if(k==81)
          { 
            notepadinput(uname); 
            break;
            }
        else if(k==ESC)
         { 
            escape(); 
            break;
            }
    }
}

void notewrite()
{
    system("cls"); 
    gotoxy(14,4);
    printf(whiteback cyanbold "---^---x--^x^--- WELCOME %s , TO SECRET WORLD OF TEXT ---^x^--x---^---", uname);
    gotoxy(37,6); 
    printf(whiteback cyanbold "e x p l o r e . f r e e l y "reset);
    gotoxy(23,10); 
    printf(whiteback blue ". . . . . . .  c r e a t e . w o r l d  . . . . . . . ."reset);
    gotoxy(26,13);
    for(int i=0; i<23; i++)
    {
        printf("/"); 
        delay(10);
        printf("\\");
        delay(10);
    }
    gotoxy(34,15);
     printf(whiteback yellow"PRESS ENTER TO OVERWRITE TEXT");
    gotoxy(30,17);
    
     printf(whiteback yellow ">>>>>>  PRESS D TO GO BACK  <<<<<");
    gotoxy(28,19);
    printf(whiteback yellow ">>>>>>   PRESS P TO ADD TEXt   <<<<<"reset);
    gotoxy(23,21);
    for(int i=0; i<26; i++)
    { 
        printf("\\");
     delay(10);
      printf("/"); 
       delay(10);
       }
    printf("\n\n");
    while(1)
    {
        int k= getch();
        if(k==ENTER)
          { 
             enterhit_write();
              break;
              }
        else if(k==68)
        { 
             notepadinput(uname); 
             break;
             }
        else if(k==80)
        {  
            noteadd();
             break; 
             }
    } //program ends here
}

