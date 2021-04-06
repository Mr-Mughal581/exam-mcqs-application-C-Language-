#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//BasicInfo
char studName[50];
char studRoll[25];
int yearSel;
float percentage;

int correctAnswer=0;

// CLock Time
int sec=30;


int subSelection;
char ready;


int main()
{
BasicInfo();
system("cls");

percentage =(float)correctAnswer/10*100;

printf("\t\t ===============================================\n");
printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
printf("\t\t ===============================================\n\n");
printf("\t\t Name                    : %s\n",studName);
printf("\t\t Roll No                 : %s\n\n",studRoll);
printf("\t\t Your Correct Answers    : %d/10\n",correctAnswer);
printf("\t\t Your Percentage         : %.2f\n",percentage);
printf("\t\t ===============================================\n\n");


FILE *z;

z = fopen("E:/result.txt","a+");

fprintf(z,"Name            : %s. \n",studName);
fprintf(z,"Roll No         : %s. \n",studRoll);
fprintf(z,"Correct Answers : %d/10. \n",correctAnswer);
fprintf(z,"Your Percentage : %.2f. \n\n",percentage);
fclose(z);

}

//timer

void delay(ms){
    clock_t rahim = ms + clock();
    while(rahim > clock());
}


BasicInfo(){

    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
    printf("\t\t Enter Your Name     : ");
    gets(studName);
    printf("\t\t Enter You Roll No   : ");
    gets(studRoll);

    system("cls");

    Sel();
}

Sel(){
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");

    printf("\t\t Select You Year :\n");

    printf("\t\t Part 1 \n");
    printf("\t\t Part 2 \n");
    printf("\t\t Part 3 \n");
    printf("\t\t Part 4 \n");

    printf("\t\t Selection : ");
    scanf("%d",&yearSel);

        if(yearSel==1){
            system("cls");
            partOne();

        }
        else if(yearSel==2){
            system("cls");
            partTwo();
        }
        else if(yearSel==3){
            system("cls");
            partThree();
        }
        else if(yearSel==4){
            system("cls");
            partFour();
        }
        else{

        printf("\n\t\t This Part Is Not Available (*_*) \n\t\t Have A Good Day\n\n");
        exit(1);

        }
}

int partOne(){


    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");

    printf("\t\t Select Subject :\n");

    printf("\t\t 1: I.C.T \n");
    printf("\t\t 2: English \n");
    printf("\t\t 3: C Programming\n");
    printf("\t\t 4: Pakistan Studies \n");
    printf("\t\t 5: Basic Electronics \n\n");


    printf("\t\t Selection : ");
    scanf("%d",&subSelection);

    //Part 1;
    if(subSelection==1){

        printf("\t\t NOTE: Once you started Test You Can't Quit/Re Take It.\n");
        printf("\t\t       Turn On CAPS LOCK Before Starting The Test, There Are 10 Questions\n ");
        printf("\t\t       are there total, just read the question & press the button of your answer.\n\n");
        printf("\t\t                                 Good Luck %s\n\n",studName);
        printf("\t\t Are you Ready for the Test of I.C.T y/n? :");
        scanf("%s",&ready);

        if(ready=='y' || ready=='Y'){

    while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q1: Which command is used to insert slides from one presentation into another presentation?.\n");
            printf("\t\t  A: Reuse Slides\n");
            printf("\t\t  B: Recycle Slides\n");
            printf("\t\t  C: None of the Above\n");
            printf("\t\t  D: All the above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
    }



if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q2: The central processing unit (CPU) consists of.\n");
            printf("\t\t  A: Input, output and processing\n");
            printf("\t\t  B: Control unit, primary storage, and secondary storage\n");
            printf("\t\t  C: Control unit, arithmetic-logic unit and primary storage\n");
            printf("\t\t  D: Control unit, processing, and primary storage\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q3: A large number of computers in a wide geographical area can be efficiently connected using\n");
            printf("\t\t  A: Twisted pair lines\n");
            printf("\t\t  B: Coaxial cables\n");
            printf("\t\t  C: Communications satellites \n");
            printf("\t\t  D: None of the above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q4: Which of the Following is used in banking industry..........\n");
            printf("\t\t  A: MICR\n");
            printf("\t\t  B: OMR\n");
            printf("\t\t  C: All of above\n");
            printf("\t\t  D: None of the Above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q5: Memory unit is one part of..........?\n");
            printf("\t\t  A: Input Device\n");
            printf("\t\t  B: Control unit\n");
            printf("\t\t  C: Output device\n");
            printf("\t\t  D: Central Processing Unit\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q6: A notation for defining the form and structure of data is known as\n");
            printf("\t\t  A: Binary language\n");
            printf("\t\t  B: Data description language\n");
            printf("\t\t  C: Data channel \n");
            printf("\t\t  D: Data definition language\n");

            printf("\t\t Your Answer: ");
            if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q7: The term MIPS refers to.......... \n");
            printf("\t\t  A: millions of instructions per second\n");
            printf("\t\t  B: megabytes of instructions per seconds\n");
            printf("\t\t  C: millions input processor set \n");
            printf("\t\t  D: multi-inductance processing system\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q8: 'Track and sector' is associated with..........?\n");
            printf("\t\t  A: Data storage on disk\n");
            printf("\t\t  B: Artificial intelligence\n");
            printf("\t\t  C: Display resolution\n");
            printf("\t\t  D: Space in Random Access Memory\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q9: The core of operating system is:\n");
            printf("\t\t  A: Unix\n");
            printf("\t\t  B: Kernel\n");
            printf("\t\t  C: Command.com \n");
            printf("\t\t  D: None of these\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q10: The primary output device for computers is a..........\n");
            printf("\t\t   A: Keyboard\n");
            printf("\t\t   B: Mouse\n");
            printf("\t\t   C: Video Monitor\n");
            printf("\t\t   D: both A & C\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

        }
        }
    //Part 2;
    else if(subSelection==2){

        printf("\t\t NOTE: Once you started Test You Can't Quit/Re Take It.\n");
        printf("\t\t       Turn On CAPS LOCK Before Starting The Test, There Are 10 Questions\n ");
        printf("\t\t       are there total, just read the question & press the button of your answer.\n\n");
        printf("\t\t                                 Good Luck %s\n\n",studName);
        printf("\t\t Are you Ready for the Test of English y/n? :");
        scanf("%s",&ready);

        if(ready=='y' || ready=='Y'){

    while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q1: He writes ___ ink.\n");
            printf("\t\t  A: With\n");
            printf("\t\t  B: In\n");
            printf("\t\t  C: For\n");
            printf("\t\t  D: On\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
    }



if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q2: Please wait for me. I will be finished _______ five or ten minutes.\n");
            printf("\t\t  A: at\n");
            printf("\t\t  B: in\n");
            printf("\t\t  C: by\n");
            printf("\t\t  D: from\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q3: The railway track runs ______ the river.\n");
            printf("\t\t  A: over\n");
            printf("\t\t  B: across\n");
            printf("\t\t  C: by \n");
            printf("\t\t  D: from\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q4: Is this is the bus, ______ goes to the Sadar Bazar?\n");
            printf("\t\t  A: that\n");
            printf("\t\t  B: who\n");
            printf("\t\t  C: which\n");
            printf("\t\t  D: to arrive\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q5: The book is______the mug and pen.\n");
            printf("\t\t  A: in\n");
            printf("\t\t  B: among\n");
            printf("\t\t  C: between\n");
            printf("\t\t  D: of\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q6: A good judge never jumps _________the conclusion.\n");
            printf("\t\t  A: in\n");
            printf("\t\t  B: to\n");
            printf("\t\t  C: on \n");
            printf("\t\t  D: at\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q7: You must bear_______his pranks.\n");
            printf("\t\t  A: with\n");
            printf("\t\t  B: to\n");
            printf("\t\t  C: all \n");
            printf("\t\t  D: some of\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q8: He is serious_______visiting Islamabad.\n");
            printf("\t\t  A: for\n");
            printf("\t\t  B: of\n");
            printf("\t\t  C: on\n");
            printf("\t\t  D: with\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q9: We are accountable _________God for our actions.\n");
            printf("\t\t  A: with\n");
            printf("\t\t  B: on\n");
            printf("\t\t  C: in\n");
            printf("\t\t  D: to\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q10: I’m getting late ______ office.\n");
            printf("\t\t   A: To\n");
            printf("\t\t   B: From\n");
            printf("\t\t   C: For \n");
            printf("\t\t   D: both A & C\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

        }
        }

    // Part 3;
    else if(subSelection==3){

        printf("\t\t NOTE: Once you started Test You Can't Quit/Re Take It.\n");
        printf("\t\t       Turn On CAPS LOCK Before Starting The Test, There Are 10 Questions\n ");
        printf("\t\t       are there total, just read the question & press the button of your answer.\n\n");
        printf("\t\t                                 Good Luck %s\n\n",studName);
        printf("\t\t Are you Ready for the Test of C Programming y/n? :");
        scanf("%s",&ready);

        if(ready=='y' || ready=='Y'){

    while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q1: C is _________ Language.\n");
            printf("\t\t  A: Programming\n");
            printf("\t\t  B: Cloud\n");
            printf("\t\t  C: Markup\n");
            printf("\t\t  D: Machine\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
            printf("\n\n\t\t Your Selected Answer is 'A'");
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
    }



if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q2: Char Takes _________ bit/bits of space.\n");
            printf("\t\t  A: 2\n");
            printf("\t\t  B: 8\n");
            printf("\t\t  C: 1\n");
            printf("\t\t  D: 4\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q3: What is the starting point for a C program?\n");
            printf("\t\t  A: First line\n");
            printf("\t\t  B: The main() function\n");
            printf("\t\t  C: return 0; \n");
            printf("\t\t  D: The <stdio.h> header\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q4: Which choice indicates a single-line comment?\n");
            printf("\t\t  A: // single line comment\n");
            printf("\t\t  B: ** single line comment\n");
            printf("\t\t  C: ## single line comment\n");
            printf("\t\t  D: /* single line comment\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q5: Which of the following is not a data type in C?\n");
            printf("\t\t  A: char\n");
            printf("\t\t  B: int\n");
            printf("\t\t  C: float\n");
            printf("\t\t  D: string\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q6: C Invented by?\n");
            printf("\t\t  A: Thomas Edison\n");
            printf("\t\t  B: Habibullah Nangaj\n");
            printf("\t\t  C: Dennis Riche \n");
            printf("\t\t  D: Einstien\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q7: What is the value of the result variable? \n\t\t\t int a=12;\n\t\t\t b=5;\n\t\t\t int reslut = a%%b;\n\n");
            printf("\t\t  A: 10\n");
            printf("\t\t  B: 2\n");
            printf("\t\t  C: 7 \n");
            printf("\t\t  D: 2.4\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q8: Which of the following Statement is corrent to Print 'Hi Rahim' to the screen?\n");
            printf("\t\t  A: printf(""Hi Rahim"");\n");
            printf("\t\t  B: puts(""Hi Rahim"");\n");
            printf("\t\t  C: printf(""Hi Rahim"")\n");
            printf("\t\t  D: printf(''Hi Rahim'');\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q9: Which of the following are valid data types in C?\n");
            printf("\t\t  A: int, double, char, boolean\n");
            printf("\t\t  B: int, float, string, char\n");
            printf("\t\t  C: int, bool, string \n");
            printf("\t\t  D: int, float, double, char\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q10: C is Case Sensitive?\n");
            printf("\t\t   A: True\n");
            printf("\t\t   B: No\n");
            printf("\t\t   C: Yes \n");
            printf("\t\t   D: both A & C\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

        }
        }
//part 4

 else if(subSelection==4){

        printf("\t\t NOTE: Once you started Test You Can't Quit/Re Take It.\n");
        printf("\t\t       Turn On CAPS LOCK Before Starting The Test, There Are 10 Questions\n ");
        printf("\t\t       are there total, just read the question & press the button of your answer.\n\n");
        printf("\t\t                                 Good Luck %s\n\n",studName);
        printf("\t\t Are you Ready for the Test of Pakistan studies y/n? :");
        scanf("%s",&ready);

        if(ready=='y' || ready=='Y'){

    while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q1: Who became first Prime Minister of Pakistan?\n");
            printf("\t\t  A: Liaquat Ali Khan\n");
            printf("\t\t  B: Khwaja Nazimuddin\n");
            printf("\t\t  C: Mohammad Ali Bogra\n");
            printf("\t\t  D: Ghulam Mohammad\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
    }



if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q2: Collectively how many Governor Generals ruled over Pakistan?\n");
            printf("\t\t  A: 2\n");
            printf("\t\t  B: 3\n");
            printf("\t\t  C: 4\n");
            printf("\t\t  D: 5\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q3: When did Pakistan become member of United Nations? \n");
            printf("\t\t  A: 15th Aug 1947\n");
            printf("\t\t  B: 30th Aug 1947\n");
            printf("\t\t  C: 15th Sep 1947 \n");
            printf("\t\t  D: 30th Sep 1947\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q4: Which country opposed Pakistan's membership in United Nations?\n");
            printf("\t\t  A: India\n");
            printf("\t\t  B: Russia\n");
            printf("\t\t  C: Afghanistan\n");
            printf("\t\t  D: Malaysia\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q5: Who was last Governor General of Pakistan?\n");
            printf("\t\t  A: Quaid-e-Azam\n");
            printf("\t\t  B: Khwaja Nazinuddin\n");
            printf("\t\t  C: Ghulam Mohammad\n");
            printf("\t\t  D: Iskander Mirza\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q6: Which country was paid an official visit by the first Prime Minister of Pakistan in 1950?\n");
            printf("\t\t  A: Saudi Arab\n");
            printf("\t\t  B: Iran\n");
            printf("\t\t  C: USA \n");
            printf("\t\t  D: China\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q7: Which country accepted Pakistan first?\n");
            printf("\t\t  A: China\n");
            printf("\t\t  B: Iran\n");
            printf("\t\t  C: India \n");
            printf("\t\t  D: Saudia Arabia\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q8: When Liaquat Ali Khan was assassinated? \n");
            printf("\t\t  A: 16th Oct 1951\n");
            printf("\t\t  B: 17th Oct 1951\n");
            printf("\t\t  C: 18th Oct 1951\n");
            printf("\t\t  D: 19th Oct 1951\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q9: Who became second Prime Minister of Pakistan?\n");
            printf("\t\t  A: Feroz Khan\n");
            printf("\t\t  B: Ali Bogra\n");
            printf("\t\t  C: Khawaja Nizamuddin\n");
            printf("\t\t  D: Liaquat Ali Kahn\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q10: When did Pakistan apply for membership of UNO?\n");
            printf("\t\t   A: 14th and 15th August, 1947\n");
            printf("\t\t   B: 25th July, 1935\n");
            printf("\t\t   C: 19th December, 1955 \n");
            printf("\t\t   D: 16th August, 1947\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

        }
        }

else if(subSelection==5){

        printf("\t\t NOTE: Once you started Test You Can't Quit/Re Take It.\n");
        printf("\t\t       Turn On CAPS LOCK Before Starting The Test, There Are 10 Questions\n ");
        printf("\t\t       are there total, just read the question & press the button of your answer.\n\n");
        printf("\t\t                                 Good Luck %s\n\n",studName);
        printf("\t\t Are you Ready for the Test of Basic Electronics y/n? :");
        scanf("%s",&ready);

        if(ready=='y' || ready=='Y'){

    while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q1: A tuned amplifier uses ____________load\n");
            printf("\t\t  A: Resistive\n");
            printf("\t\t  B: Capacitive\n");
            printf("\t\t  C: LC tank\n");
            printf("\t\t  D: Inductive\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
    }



if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q2: A tuned amplifier is generally operated in ……………. operation\n");
            printf("\t\t  A: Class A\n");
            printf("\t\t  B: Class C\n");
            printf("\t\t  C: Class B\n");
            printf("\t\t  D: None of the above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q3: A tuned amplifier is used in …………… applications\n");
            printf("\t\t  A: Radio frequency\n");
            printf("\t\t  B: Low frequency\n");
            printf("\t\t  C: Audio frequency\n");
            printf("\t\t  D: None of the above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q4: Frequencies above …………… kHz are called radio frequencies\n");
            printf("\t\t  A: 2\n");
            printf("\t\t  B: 10\n");
            printf("\t\t  C: 75\n");
            printf("\t\t  D: 200\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q5: At series or parallel resonance, the circuit power factor is …………..\n");
            printf("\t\t  A: 0\n");
            printf("\t\t  B: 2\n");
            printf("\t\t  C: 1\n");
            printf("\t\t  D: 3\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q6: The voltage gain of a tuned amplifier is ……………. at resonant frequency\n");
            printf("\t\t  A: Minimum\n");
            printf("\t\t  B: Maximum\n");
            printf("\t\t  C: Half-way between maximum and minimum\n");
            printf("\t\t  D: Zero\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q7: At parallel resistance, the line current is ……………….\n");
            printf("\t\t  A: Minimum\n");
            printf("\t\t  B: Maximum\n");
            printf("\t\t  C: Quite large\n");
            printf("\t\t  D: None of the above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q8: At series resonance, the circuit offers …………….. impedance\n");
            printf("\t\t  A: Zero\n");
            printf("\t\t  B: Maximum\n");
            printf("\t\t  C: Minimum\n");
            printf("\t\t  D: None of the above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q9: A resonant circuit contains ……………… elements\n");
            printf("\t\t  A: R and L only\n");
            printf("\t\t  B: R and C only\n");
            printf("\t\t  C: Only R\n");
            printf("\t\t  D: L and C\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q10: At series or parallel resistance, the circuit behaves as a …………….. load\n");
            printf("\t\t   A: Capacitive\n");
            printf("\t\t   B: Resistive\n");
            printf("\t\t   C: Inductive\n");
            printf("\t\t   D: None of the above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

        }
        }


}

int partTwo(){



    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");

    printf("\t\t Select Subject :\n");

    printf("\t\t 1: DATA STRUCTURES \n");
    printf("\t\t 2: JAVA \n");
    printf("\t\t 3: CALCULUS\n");
    printf("\t\t 4: STATISTICS AND PROBABILITY \n");
    printf("\t\t 5: DISCRETE MATHEMATICS \n\n");


    printf("\t\t Selection : ");
    scanf("%d",&subSelection);

    //Part 1;
    if(subSelection==1){

        printf("\t\t NOTE: Once you started Test You Can't Quit/Re Take It.\n");
        printf("\t\t       Turn On CAPS LOCK Before Starting The Test, There Are 10 Questions\n ");
        printf("\t\t       are there total, just read the question & press the button of your answer.\n\n");
        printf("\t\t                                 Good Luck %s\n\n",studName);
        printf("\t\t Are you Ready for the Test of DATA STRUCTURES y/n? :");
        scanf("%s",&ready);

        if(ready=='y' || ready=='Y'){

    while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q1: The OS of a computer may periodically collect all the free memory space to form contiguous block of free space. This is called\n");
            printf("\t\t  A: Concatenation \n");
            printf("\t\t  B: Garbage collection \n");
            printf("\t\t  C: Collision \n");
            printf("\t\t  D: Dynamic Memory Allocation \n");


            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
    }



if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q2: A mathematical-model with a collection of operations defined on that model is called\n");
            printf("\t\t  A: Data Structure \n");
            printf("\t\t  B: Primitive Data Type \n");
            printf("\t\t  C: Algorithm \n");
            printf("\t\t  D:  Abstract Data Type \n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q3: linear collection of data elements where the linear node is given by means of pointer is called\n");
            printf("\t\t  A: linked list \n");
            printf("\t\t  B: node list \n");
            printf("\t\t  C: primitive list \n");
            printf("\t\t  D: None of these \n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q4: Representation of data structure in memory is known as:\n");
            printf("\t\t  A: recursive \n");
            printf("\t\t  B: abstract data type \n");
            printf("\t\t  C: storage structure \n");
            printf("\t\t  D: file structure \n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q5: O(N) (linear time) is better than O(1) constant time.\n");
            printf("\t\t  A: TRUE \n");
            printf("\t\t  B: CONDITIONAL\n");
            printf("\t\t  C: FALSE \n");
            printf("\t\t  D: Both A & B\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q6: An ADT is defined to be a mathematical model of a user-defined type along with the collection of all ____________ operations on that model.\n");
            printf("\t\t  A: Cardinality \n");
            printf("\t\t  B: Primitive \n");
            printf("\t\t  C: Structured \n");
            printf("\t\t  D: Assignment \n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q7: An algorithm is made up of two independent time complexities f (n) and g (n). Then the complexities of the algorithm is in the order of\n");
            printf("\t\t  A: Max ( f(n),g(n)) \n");
            printf("\t\t  B: f(n) x g(n) \n");
            printf("\t\t  C: f(n) + g(n) \n");
            printf("\t\t  D: Min (f(n),g(n)) \n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q8: Time complexities of three algorithms are given. Which should execute the slowest for large values of N?\n");
            printf("\t\t  A: O(N^1/2) \n");
            printf("\t\t  B: O(log n) \n");
            printf("\t\t  C: O(N) \n");
            printf("\t\t  D: None of these \n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q9: The indirect change of the values of a variable in one module by another module is called\n");
            printf("\t\t  A: internal change \n");
            printf("\t\t  B: inter-module change \n");
            printf("\t\t  C: side-module update \n");
            printf("\t\t  D: side effect \n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q10: Which of the following data structure is linear data structure?\n");
            printf("\t\t   A: Graphs \n");
            printf("\t\t   B: Arrays \n");
            printf("\t\t   C: Trees \n");
            printf("\t\t   D: both A & C\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

        }
        }
    //Part 2;
    else if(subSelection==2){

        printf("\t\t NOTE: Once you started Test You Can't Quit/Re Take It.\n");
        printf("\t\t       Turn On CAPS LOCK Before Starting The Test, There Are 10 Questions\n ");
        printf("\t\t       are there total, just read the question & press the button of your answer.\n\n");
        printf("\t\t                                 Good Luck %s\n\n",studName);
        printf("\t\t Are you Ready for the Test of JAVA y/n? :");
        scanf("%s",&ready);

        if(ready=='y' || ready=='Y'){

    while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q1: What is the range of data type short in Java?\n");
            printf("\t\t  A: -128 to 127\n");
            printf("\t\t  B: -32768 to 32767\n");
            printf("\t\t  C: -2147483648 to 2147483647\n");
            printf("\t\t  D: None of the mentioned\n");
            printf("\t\t  Answer: ");


            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
    }



if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q2: An expression involving byte, int, and literal numbers is promoted to which of these?\n");
            printf("\t\t  A: int\n");
            printf("\t\t  B: long\n");
            printf("\t\t  C: double\n");
            printf("\t\t  D: byte\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q3: Which data type value is returned by all transcendental math functions?\n");
            printf("\t\t  A: int\n");
            printf("\t\t  B: float\n");
            printf("\t\t  C: double\n");
            printf("\t\t  D: long\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q4: Which data type value is returned by all transcendental math functions??\n");
            printf("\t\t  A: double\n");
            printf("\t\t  B: long\n");
            printf("\t\t  C: int\n");
            printf("\t\t  D: float\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q5: Which of these coding types is used for data type characters in Java?\n");
            printf("\t\t  A: ISO-LATIN-1\n");
            printf("\t\t  B: BINARY\n");
            printf("\t\t  C: ASCII\n");
            printf("\t\t  D: UNICODE\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q6: Which of these values can a boolean variable contain?\n");
            printf("\t\t  A: 0 & 1\n");
            printf("\t\t  B: True & False\n");
            printf("\t\t  C: Any integer value.\n");
            printf("\t\t  D: Both a & b\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q7: Which one is a valid declaration of a boolean?\n");
            printf("\t\t  A: boolean b2 = ‘false’;\n");
            printf("\t\t  B: boolean b1 = 1;\n");
            printf("\t\t  C: boolean b4 = ‘true’\n");
            printf("\t\t  D: boolean b3 = false;\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q8: Which of these method can be used to make the main thread to be executed last among all the threads?\n");
            printf("\t\t  A: stop()\n");
            printf("\t\t  B: sleep() \n");
            printf("\t\t  C: join()\n");
            printf("\t\t  D: call()\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q9: Which of these method is used to find out that a thread is still running or not?\n");
            printf("\t\t  A: isAlive()\n");
            printf("\t\t  B: run()\n");
            printf("\t\t  C: checkRun()\n");
            printf("\t\t  D: Alive()\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q10: Which of these method is used to explicitly set the priority of a thread?\n");
            printf("\t\t   A: set()\n");
            printf("\t\t   B: makePriority()\n");
            printf("\t\t   C: make()\n");
            printf("\t\t   D: setPriority()\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

        }
        }

    // Part 3;
    else if(subSelection==3){

        printf("\t\t NOTE: Once you started Test You Can't Quit/Re Take It.\n");
        printf("\t\t       Turn On CAPS LOCK Before Starting The Test, There Are 10 Questions\n ");
        printf("\t\t       are there total, just read the question & press the button of your answer.\n\n");
        printf("\t\t                                 Good Luck %s\n\n",studName);
        printf("\t\t Are you Ready for the Test of CALCULUS y/n? :");
        scanf("%s",&ready);

        if(ready=='y' || ready=='Y'){

    while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q1: The function f(x) = x3 - 6x2 + 9x + 25 has\n");
            printf("\t\t  A: a maxima at x = 1 and a minima at x = 3\n");
            printf("\t\t  B: a maxima at x = 3 and a minima at x = 1\n");
            printf("\t\t  C: no maxima, but a minima at x = 1\n");
            printf("\t\t  D: a maxima at x = 1, but no minima\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
            printf("\n\n\t\t Your Selected Answer is 'A'");
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
    }



if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q2: The interval in which the Lagrange's theorem is applicable for the function f(x) = 1/x is\n");
            printf("\t\t  A: [-3, 3]\n");
            printf("\t\t  B: [-2, 2]\n");
            printf("\t\t  C: [2, 3]\n");
            printf("\t\t  D: [-1, 1]\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q3: If f(x) = | x | , then for interval [-1, 1] ,f(x)\n");
            printf("\t\t  A: satisied all the conditions of Rolle's Theorem\n");
            printf("\t\t  B: satisfied all the conditions of Mean Value Theorem\n");
            printf("\t\t  C: does not satisied the -conditions of Mean Value Theorem \n");
            printf("\t\t  D: None of these\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q4: The minimum value of | x2 _ 5x + 21 | is\n");
            printf("\t\t  A: -5\n");
            printf("\t\t  B: 0\n");
            printf("\t\t  C: -1\n");
            printf("\t\t  D: -2\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q5: The function f(x) = 3x(x - 2) has a\n");
            printf("\t\t  A: minimum at x = 1\n");
            printf("\t\t  B: maximum at x = 1\n");
            printf("\t\t  C: minimum at x = 2\n");
            printf("\t\t  D: maximum at x = 2\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q6: What is the derivative of f(x) =  | x | at x = 0 \n");
            printf("\t\t  A: 1\n");
            printf("\t\t  B: -1\n");
            printf("\t\t  C: 0\n");
            printf("\t\t  D: Not Exist\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q7: If f (0) = 2 and f (x) = 1 /  (5-x2), then lower and upper bound of f(1) estimated by the mean value theorem are\n");
            printf("\t\t  A: 1.9  , 2.2\n");
            printf("\t\t  B: 2.2  , 2.25\n");
            printf("\t\t  C: 2.25 , 2.5\n");
            printf("\t\t  D: N.O.T\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q8: Maxima and Minima occur?\n");
            printf("\t\t  A: simultaneously\n");
            printf("\t\t  B: once\n");
            printf("\t\t  C: alternately\n");
            printf("\t\t  D: rarely\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q9: If x + y = k, x > 0, y > 0, then xy is maximum when\n");
            printf("\t\t  A: x = ky\n");
            printf("\t\t  B: kx = y\n");
            printf("\t\t  C: kx = y\n");
            printf("\t\t  D: None of these\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q10: Let f(x) = lxl, then?\n");
            printf("\t\t   A: f'(0) = 0\n");
            printf("\t\t   B: f(x) is maximum at x = 0\n");
            printf("\t\t   C: f(x) is minimum at x = 0\n");
            printf("\t\t   D: None of these\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

        }
        }
//part 4

 else if(subSelection==4){

        printf("\t\t NOTE: Once you started Test You Can't Quit/Re Take It.\n");
        printf("\t\t       Turn On CAPS LOCK Before Starting The Test, There Are 10 Questions\n ");
        printf("\t\t       are there total, just read the question & press the button of your answer.\n\n");
        printf("\t\t                                 Good Luck %s\n\n",studName);
        printf("\t\t Are you Ready for the Test of STATISTICS AND PROBABILITY y/n? :");
        scanf("%s",&ready);

        if(ready=='y' || ready=='Y'){

    while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q1: In binomial probability distribution, dependents of standard deviations must includes\n");
            printf("\t\t  A: probability of q\n");
            printf("\t\t  B: probability of p\n");
            printf("\t\t  C: trials\n");
            printf("\t\t  D: all of above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
    }



if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q2: In random experiment, observations of random variable are classified as\n");
            printf("\t\t  A: events\n");
            printf("\t\t  B: composition\n");
            printf("\t\t  C: trials\n");
            printf("\t\t  D: functions\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q3: In binomial distribution, formula of calculating standard deviation is \n");
            printf("\t\t  A: square root of p\n");
            printf("\t\t  B: square root of pq\n");
            printf("\t\t  C: square root of npq \n");
            printf("\t\t  D: square root of np\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q4: Mean of binomial probability distribution is 857.6 and probability is 64%% then number of values of binomial distribution\n");
            printf("\t\t  A: 1040\n");
            printf("\t\t  B: 1340\n");
            printf("\t\t  C: 2040\n");
            printf("\t\t  D: 1140\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q5: Tail or head, one or zero and girl and boy are examples of\n");
            printf("\t\t  A: non-functional events\n");
            printf("\t\t  B: complementary events\n");
            printf("\t\t  C: non complementary events\n");
            printf("\t\t  D: functional events\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q6: If value of p is smaller or lesser than 0.5 then binomial distribution is classified as\n");
            printf("\t\t  A: skewed to right\n");
            printf("\t\t  B: skewed to left\n");
            printf("\t\t  C: skewed to infinity\n");
            printf("\t\t  D: skewed to integers\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q7: Value which is obtained by multiplying possible values of random variable with probability of occurrence and is equal to weighted average is called\n");
            printf("\t\t  A: discrete value\n");
            printf("\t\t  B: weighted value\n");
            printf("\t\t  C: expected value\n");
            printf("\t\t  D: cumulative value\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q8: If value of interval a is 2.5 and value of interval b is 3.5 then value of mean for uniform distribution is\n");
            printf("\t\t  A: 0.5\n");
            printf("\t\t  B: 3\n");
            printf("\t\t  C: 2.5\n");
            printf("\t\t  D: 3.5\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q9: In binomial probability distribution, success and failure generated by trial is respectively denoted by\n");
            printf("\t\t  A: p and q\n");
            printf("\t\t  B: a and b\n");
            printf("\t\t  C: p + q\n");
            printf("\t\t  D: p - q\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q10: Class of variable which can accept any value within upper and lower limit is classified as\n");
            printf("\t\t   A: posterior random variable\n");
            printf("\t\t   B: interior random variable\n");
            printf("\t\t   C: discrete random variable\n");
            printf("\t\t   D: continuous random variable\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

        }
        }

else if(subSelection==5){

        printf("\t\t NOTE: Once you started Test You Can't Quit/Re Take It.\n");
        printf("\t\t       Turn On CAPS LOCK Before Starting The Test, There Are 10 Questions\n ");
        printf("\t\t       are there total, just read the question & press the button of your answer.\n\n");
        printf("\t\t                                 Good Luck %s\n\n",studName);
        printf("\t\t Are you Ready for the Test of DISCRETE MATHEMATICS y/n? :");
        scanf("%s",&ready);

        if(ready=='y' || ready=='Y'){

    while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q1: A graph G is called a ..... if it is a connected acyclic graph\n");
            printf("\t\t  A: Cyclic graph\n");
            printf("\t\t  B: Regular graph\n");
            printf("\t\t  C: Tree\n");
            printf("\t\t  D: Not a graph\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
    }



if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q2: In an undirected graph the number of nodes with odd degree must be \n");
            printf("\t\t  A: Zero\n");
            printf("\t\t  B: Odd\n");
            printf("\t\t  C: Prime\n");
            printf("\t\t  D: Even\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q3: A graph is a collection of \n");
            printf("\t\t  A: Row and columns\n");
            printf("\t\t  B: Vertices and edges\n");
            printf("\t\t  C: Equations\n");
            printf("\t\t  D: None of the above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q4: How many relations are there on a set with n elements that are symmetric and a set with n elements that are reflexive and symmetric ? \n");
            printf("\t\t  A: 2n(n+1)/2 and 2n.3n(n–1)/2\n");
            printf("\t\t  B: 3n(n–1)/2 and 2n(n–1)\n");
            printf("\t\t  C: 2n(n+1)/2 and 3n(n–1)/2\n");
            printf("\t\t  D: 2n(n+1)/2 and 2n(n–1)/2\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q5: In how many ways can a president and vice president be chosen from a set of 30 candidates? \n");
            printf("\t\t  A: 820\n");
            printf("\t\t  B: 850\n");
            printf("\t\t  C: 880\n");
            printf("\t\t  D: 870\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q6: Consider an undirected random graph of eight vertices. The probability that there is an edge between a pair of vertices is 1/2. What is the expected number of unordered cycles of length three? \n");
            printf("\t\t  A: 1/8\n");
            printf("\t\t  B: 1\n");
            printf("\t\t  C: 7\n");
            printf("\t\t  D: 8\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q7: A minimal spanning tree of a graph G is \n");
            printf("\t\t  A: A spanning sub graph\n");
            printf("\t\t  B: A tree\n");
            printf("\t\t  C: Minimum weights\n");
            printf("\t\t  D: All of above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q8: The number of leaf nodes in a complete binary tree of depth d is \n");
            printf("\t\t  A: 2d\n");
            printf("\t\t  B: 2d–1+1\n");
            printf("\t\t  C: 2d+1+1\n");
            printf("\t\t  D: 2d+1\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q9: A partial ordered relation is transitive, reflexive and \n");
            printf("\t\t  A: Antisymmetric\n");
            printf("\t\t  B: Bisymmetric\n");
            printf("\t\t  C: Anti reflexive.\n");
            printf("\t\t  D: Asymmetric\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q10: In how many ways can a hungry student choose 3 toppings for his prize from a list of 10 delicious possibilities? \n");
            printf("\t\t   A: 100\n");
            printf("\t\t   B: 120\n");
            printf("\t\t   C: 110\n");
            printf("\t\t   D: 150\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

        }
        }


}

int partThree(){


    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");

    printf("\t\t Select Subject :\n");

    printf("\t\t 1: COMPUTER ARCHITECTURE \n");
    printf("\t\t 2: NUMERICAL ANALYSIS \n");
    printf("\t\t 3: ORACLE SQL\n");
    printf("\t\t 4: OPERATIONS RESEARCH \n");
    printf("\t\t 5: SOFTWARE ENGINEERING  \n\n");


    printf("\t\t Selection : ");
    scanf("%d",&subSelection);

    //Part 1;
    if(subSelection==1){

        printf("\t\t NOTE: Once you started Test You Can't Quit/Re Take It.\n");
        printf("\t\t       Turn On CAPS LOCK Before Starting The Test, There Are 10 Questions\n ");
        printf("\t\t       are there total, just read the question & press the button of your answer.\n\n");
        printf("\t\t                                 Good Luck %s\n\n",studName);
        printf("\t\t Are you Ready for the Test of COMPUTER ARCHITECTURE y/n? :");
        scanf("%s",&ready);

        if(ready=='y' || ready=='Y'){

    while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q1: Which of the following registers is used to keep track of address of the memory location where the next instruction is located?\n");
            printf("\t\t  A: Memory Address Register\n");
            printf("\t\t  B: Memory Data Register\n");
            printf("\t\t  C: Instruction Register\n");
            printf("\t\t  D: Program Register\n");


            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
    }



if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q2: A complete microcomputer system consists of\n");
            printf("\t\t  A: microprocessor\n");
            printf("\t\t  B: memory\n");
            printf("\t\t  C: peripheral equipment\n");
            printf("\t\t  D: all of above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q3: CPU does not perform the operation\n");
            printf("\t\t  A: data transfer\n");
            printf("\t\t  B: logic operation\n");
            printf("\t\t  C: arithmetic operation\n");
            printf("\t\t  D: all of above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q4: Pipelining strategy is called implement\n");
            printf("\t\t  A: instruction execution\n");
            printf("\t\t  B: instruction prefetch\n");
            printf("\t\t  C: instruction decoding\n");
            printf("\t\t  D: instruction manipulation\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q5: A stack is\n");
            printf("\t\t  A: an 8-bit register in the microprocessor\n");
            printf("\t\t  B: a 16-bit register in the microprocessor\n");
            printf("\t\t  C: set of memory locations in R/WM reserved for storing\n");
            printf("\t\t  D: a 16-bit memory address stored in the program counter\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q6: A stack pointer is \n");
            printf("\t\t  A: a 16-bit register in the microprocessor that indicate the beginning of the stack memory.\n");
            printf("\t\t  B: a register that decodes and executes 16-bit arithmetic expression.\n");
            printf("\t\t  C: The first memory location where a subroutine address is stored.\n");
            printf("\t\t  D: a register in which flag bits are stored\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q7: Interrupts which are initiated by an instruction are\n");
            printf("\t\t  A: internal\n");
            printf("\t\t  B: external\n");
            printf("\t\t  C: hardware\n");
            printf("\t\t  D: software\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q8: A time sharing system imply\n");
            printf("\t\t  A: more than one processor in the system\n");
            printf("\t\t  B: more than one program in memory\n");
            printf("\t\t  C: more than one memory in the system\n");
            printf("\t\t  D: None of above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q9: The branch logic that provides decision making capabilities in the control unit is known as\n");
            printf("\t\t  A: controlled transfer\n");
            printf("\t\t  B: conditional transfer\n");
            printf("\t\t  C: unconditional transfer\n");
            printf("\t\t  D: none of above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q10: Where does a computer add and compare data?\n");
            printf("\t\t   A: Hard disk\n");
            printf("\t\t   B: Floppy disk\n");
            printf("\t\t   C: CPU chip\n");
            printf("\t\t   D: Memory chip\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

        }
        }
    //Part 2;
    else if(subSelection==2){

        printf("\t\t NOTE: Once you started Test You Can't Quit/Re Take It.\n");
        printf("\t\t       Turn On CAPS LOCK Before Starting The Test, There Are 10 Questions\n ");
        printf("\t\t       are there total, just read the question & press the button of your answer.\n\n");
        printf("\t\t                                 Good Luck %s\n\n",studName);
        printf("\t\t Are you Ready for the Test of NUMERICAL ANALYSIS y/n? :");
        scanf("%s",&ready);

        if(ready=='y' || ready=='Y'){

    while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q1: In which of the following method, we approximate the curve of solution by the tangent in each interval.\n");
            printf("\t\t  A: Picard’s method\n");
            printf("\t\t  B: Euler’s method\n");
            printf("\t\t  C: Newton’s method\n");
            printf("\t\t  D: Runge Kutta method\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
    }



if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q2: Jacobi’s method is also known as\n");
            printf("\t\t  A: Displacement method\n");
            printf("\t\t  B: Simultaneous displacement method\n");
            printf("\t\t  C: Simultaneous method\n");
            printf("\t\t  D: Diagonal method\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q3: The number of significant digits in the number 204.020050 is\n");
            printf("\t\t  A: 2\n");
            printf("\t\t  B: 6\n");
            printf("\t\t  C: 8\n");
            printf("\t\t  D: 9\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q4: In general the ratio of truncation error to that of round off error is\n");
            printf("\t\t  A: 2:1\n");
            printf("\t\t  B: 1:1\n");
            printf("\t\t  C: 1:2\n");
            printf("\t\t  D: 1:3\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q5: The convergence of which of the following method is sensitive to starting value?\n");
            printf("\t\t  A: False position\n");
            printf("\t\t  B: Gauss seidal method\n");
            printf("\t\t  C: Newton-Raphson method\n");
            printf("\t\t  D: All of theseof\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q6: To perform a Chi-square test\n");
            printf("\t\t  A: Data conform to a normal distribution\n");
            printf("\t\t  B: Data be measured on a nominal scale\n");
            printf("\t\t  C: Each cell has equal number of frequencies \n");
            printf("\t\t  D: All of these\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q7: In the Gauss elimination method for solving a system of linear algebraic equations, triangularzation leads to\n");
            printf("\t\t  A: Diagonal matrix\n");
            printf("\t\t  B: Lower triangular matrix\n");
            printf("\t\t  C: Upper triangular matrix \n");
            printf("\t\t  D: Singular matrix\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q8: Order of convergence of Regula-Falsi method is\n");
            printf("\t\t  A: 1.321\n");
            printf("\t\t  B: 1.618\n");
            printf("\t\t  C: 2.231\n");
            printf("\t\t  D: 2.312\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q9: The expected value of the random variable\n");
            printf("\t\t  A: Will also be the most likely value of the random variable\n");
            printf("\t\t  B: Is another term for the mean value\n");
            printf("\t\t  C: Is also called the variance\n");
            printf("\t\t  D: Cannot be greater than 1\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q10: Simultaneous displacement method also known as.\n");
            printf("\t\t   A: Displacement method\n");
            printf("\t\t   B: Jacobi method\n");
            printf("\t\t   C: Diagonal method \n");
            printf("\t\t   D: both A & C\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

        }
        }

    // Part 3;
    else if(subSelection==3){

        printf("\t\t NOTE: Once you started Test You Can't Quit/Re Take It.\n");
        printf("\t\t       Turn On CAPS LOCK Before Starting The Test, There Are 10 Questions\n ");
        printf("\t\t       are there total, just read the question & press the button of your answer.\n\n");
        printf("\t\t                                 Good Luck %s\n\n",studName);
        printf("\t\t Are you Ready for the Test of ORACLE SQL y/n? :");
        scanf("%s",&ready);

        if(ready=='y' || ready=='Y'){

    while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q1: The default data type for a sequence object is . . . . . . \n");
            printf("\t\t  A: int\n");
            printf("\t\t  B: bigint\n");
            printf("\t\t  C: Mtinyint\n");
            printf("\t\t  D: decimal\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
    }



if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q2: Sequence objects can be used as an optional way to generate unique numeric values in a table. \n");
            printf("\t\t  A: True\n");
            printf("\t\t  B: Not True\n");
            printf("\t\t  C: False\n");
            printf("\t\t  D: B & C\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q3: Sequence objects are not part of any table definition. They can be used across multiple tables. \n");
            printf("\t\t  A: True\n");
            printf("\t\t  B: false\n");
            printf("\t\t  C: Conditional\n");
            printf("\t\t  D: B & C\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q4: Sequence object can be restarted by using . . . . . . . . \n");
            printf("\t\t  A: NO CYCLE \n");
            printf("\t\t  B: CONTROL SEQUENCE\n");
            printf("\t\t  C: ALTER SEQUENCE\n");
            printf("\t\t  D: RESTART SEQUENCE\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q5: Apart from T-SQL, you can create and manage sequence objects using the Sequence folder located under the . . . . . . . . . . node for the database in SSMS. \n");
            printf("\t\t  A: Sequence\n");
            printf("\t\t  B: Programability\n");
            printf("\t\t  C: General\n");
            printf("\t\t  D: Tools\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q6: The . . . . . . . clause specifies that the object should restart from the minimum value when its maximum value is exceeded. \n");
            printf("\t\t  A: Restart\n");
            printf("\t\t  B: MIN_MAX\n");
            printf("\t\t  C: CYCLE\n");
            printf("\t\t  D: None of above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q7: A sequence object can be of the following data types . . . . .\n");
            printf("\t\t  A: tinyint\n");
            printf("\t\t  B: decimal\n");
            printf("\t\t  C: numeric \n");
            printf("\t\t  D: All of Above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q8: Sequence gives you guarantee that you won't have gaps. \n");
            printf("\t\t  A: False\n");
            printf("\t\t  B: Conditional\n");
            printf("\t\t  C: True\n");
            printf("\t\t  D: A & B\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q9: To Put Data in table we use _______\n");
            printf("\t\t  A: put\n");
            printf("\t\t  B: store\n");
            printf("\t\t  C: insert\n");
            printf("\t\t  D: All of above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q10: SQL is Case Sensitive?\n");
            printf("\t\t   A: True\n");
            printf("\t\t   B: No\n");
            printf("\t\t   C: Yes \n");
            printf("\t\t   D: both A & C\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

        }
        }
//part 4

 else if(subSelection==4){

        printf("\t\t NOTE: Once you started Test You Can't Quit/Re Take It.\n");
        printf("\t\t       Turn On CAPS LOCK Before Starting The Test, There Are 10 Questions\n ");
        printf("\t\t       are there total, just read the question & press the button of your answer.\n\n");
        printf("\t\t                                 Good Luck %s\n\n",studName);
        printf("\t\t Are you Ready for the Test of OPERATIONS RESEARCH y/n? :");
        scanf("%s",&ready);

        if(ready=='y' || ready=='Y'){

    while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q1: Which of the following is (are) important consideration(s) concerning activity times?\n");
            printf("\t\t  A: Activity time should be obtained from the person responsible for the completion of an activity\n");
            printf("\t\t  B: Activity time must be independent of any influence which the preceding or succeeding activity may have on it.\n");
            printf("\t\t  C: Activity time may assume that just the normal quantity of resources required to carry out the activity are available.\n");
            printf("\t\t  D: All of The Above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
    }



if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q2: Which of the following are assignable cause?\n");
            printf("\t\t  A: Large variations in hardness of material\n");
            printf("\t\t  B: Tool wear\n");
            printf("\t\t  C: Errors in setting\n");
            printf("\t\t  D: All of the above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q3: What is the reason of excessive friction between parts?\n");
            printf("\t\t  A: Improper or lack of lubrication\n");
            printf("\t\t  B: Material of parts\n");
            printf("\t\t  C: both (A) and (B)\n");
            printf("\t\t  D: N.O.T\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q4: Which kind of labour force is required in case of Jobbing Production?\n");
            printf("\t\t  A: Highly Skilled\n");
            printf("\t\t  B: Semi skilled\n");
            printf("\t\t  C: unskilled\n");
            printf("\t\t  D: All of the Above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q5: What is the location of lower control limit in the X bar-R control chart?\n");
            printf("\t\t  A: 3 standard deviations below central line\n");
            printf("\t\t  B: 2 standard deviations below central line\n");
            printf("\t\t  C: 1 standard deviations below central line\n");
            printf("\t\t  D: All of the above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q6: Which photographic technique is used to record path of motions of the members of the body during method study?\n");
            printf("\t\t  A: Acrograph\n");
            printf("\t\t  B: Cyclograph\n");
            printf("\t\t  C: Cyclogram\n");
            printf("\t\t  D: Cycloscope\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q7: The term ________ implies the foregone profit due to inability of company to produce.\n");
            printf("\t\t  A: Opportunity cost\n");
            printf("\t\t  B: Marginal cost\n");
            printf("\t\t  C: Overhead cost \n");
            printf("\t\t  D:  All of the above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q8: In case of an OC curve, the risk of rejecting a good quality lot may vary between ________. \n");
            printf("\t\t  A: 0.01 to 5%\n");
            printf("\t\t  B: 0.01 to 10%\n");
            printf("\t\t  C: 0.01 to 15%\n");
            printf("\t\t  D: 0.01 to 20%\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q9: Objective of Work Study is to improve _______\n");
            printf("\t\t  A: Cycle time\n");
            printf("\t\t  B: Productivity\n");
            printf("\t\t  C: Production\n");
            printf("\t\t  D: All of the above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q10: Which of the following are activities of corrective maintenance?\n");
            printf("\t\t   A: Overhauling\n");
            printf("\t\t   B: Emergency repairs\n");
            printf("\t\t   C: Modifications and improvements\n");
            printf("\t\t   D: All of the above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

        }
        }

else if(subSelection==5){

        printf("\t\t NOTE: Once you started Test You Can't Quit/Re Take It.\n");
        printf("\t\t       Turn On CAPS LOCK Before Starting The Test, There Are 10 Questions\n ");
        printf("\t\t       are there total, just read the question & press the button of your answer.\n\n");
        printf("\t\t                                 Good Luck %s\n\n",studName);
        printf("\t\t Are you Ready for the Test of 	SOFTWARE ENGINEERING  y/n? :");
        scanf("%s",&ready);

        if(ready=='y' || ready=='Y'){

    while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q1: What is Software ?\n");
            printf("\t\t  A: Set of computer programs, procedures and possibly associated document concerned with the operation of data processing.\n");
            printf("\t\t  B: A set of compiler instructions\n");
            printf("\t\t  C: A mathematical formula  \n");
            printf("\t\t  D: None of above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
    }



if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q2: Which of the following is not the characteristic of software ?\n");
            printf("\t\t  A: Software does not wear out\n");
            printf("\t\t  B: Software is flexible\n");
            printf("\t\t  C: Software is not manufactured\n");
            printf("\t\t  D: Software is always correct\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q3: Which of the following is not a product matrix ?\n");
            printf("\t\t  A: Size\n");
            printf("\t\t  B: Reliability\n");
            printf("\t\t  C: Productivity\n");
            printf("\t\t  D: Functionality\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q4: Which of the following is not a process metric ?\n");
            printf("\t\t  A: Productivity\n");
            printf("\t\t  B: Functionality\n");
            printf("\t\t  C: Quality\n");
            printf("\t\t  D: Efficiency\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q5: Efforts is measured in terms of ?\n");
            printf("\t\t  A: Person - Months\n");
            printf("\t\t  B: Persons\n");
            printf("\t\t  C: Rupees\n");
            printf("\t\t  D: Months\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q6: Infrastructure software are covered under ?\n");
            printf("\t\t  A: Generic Products\n");
            printf("\t\t  B: Customised Products\n");
            printf("\t\t  C: Generic and Customised Products\n");
            printf("\t\t  D: None of the above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q7: Management of software development is dependent upon ?\n");
            printf("\t\t  A: People\n");
            printf("\t\t  B: Product\n");
            printf("\t\t  C: Process\n");
            printf("\t\t  D: All of above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q8: During software development which factor is most crucial ?\n");
            printf("\t\t  A: People\n");
            printf("\t\t  B: Process\n");
            printf("\t\t  C: Product\n");
            printf("\t\t  D: Project\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q9: Milestones are used to ?\n");
            printf("\t\t  A: Know the cost of the project\n");
            printf("\t\t  B: Know the status of the project\n");
            printf("\t\t  C: Know the user expectations\n");
            printf("\t\t  D: None of the above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q10: The term module in the design phase refers to ?\n");
            printf("\t\t   A: Functions\n");
            printf("\t\t   B: Procedures\n");
            printf("\t\t   C: Sub programs\n");
            printf("\t\t   D: All of the above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

        }
        }



}

int partFour(){


    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");

    printf("\t\t Select Subject :\n");

    printf("\t\t 1: OPERATING SYSTEM \n");
    printf("\t\t 2: VISUAL PROGRAMMING \n");
    printf("\t\t 3: COMPILER CONSTRUCTION\n");
    printf("\t\t 4: COMPUTER NETWORKS \n");
    printf("\t\t 5: ARTIFICIAL INTELLIGENCE \n\n");


    printf("\t\t Selection : ");
    scanf("%d",&subSelection);

    //Part 1;
    if(subSelection==1){

        printf("\t\t NOTE: Once you started Test You Can't Quit/Re Take It.\n");
        printf("\t\t       Turn On CAPS LOCK Before Starting The Test, There Are 10 Questions\n ");
        printf("\t\t       are there total, just read the question & press the button of your answer.\n\n");
        printf("\t\t                                 Good Luck %s\n\n",studName);
        printf("\t\t Are you Ready for the Test of OPERATING SYSTEM y/n? :");
        scanf("%s",&ready);

        if(ready=='y' || ready=='Y'){

    while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q1: Dual mode of operating system has\n");
            printf("\t\t  A: 1 mode\n");
            printf("\t\t  B: 2 mode\n");
            printf("\t\t  C: 3 mode\n");
            printf("\t\t  D: 4 mode\n");


            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
    }



if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q2: Multi-processor system gives a\n");
            printf("\t\t  A: Small system\n");
            printf("\t\t  B: Tightly coupled system\n");
            printf("\t\t  C: loosely coupled system\n");
            printf("\t\t  D: Macro system\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q3: When a thread needs to wait for an event it will\n");
            printf("\t\t  A: Block\n");
            printf("\t\t  B: Execute\n");
            printf("\t\t  C: Terminate\n");
            printf("\t\t  D: Update\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q4: Memory tables are used to keep track of\n");
            printf("\t\t  A: Real and Virtual Memory\n");
            printf("\t\t  B: I/O Devices\n");
            printf("\t\t  C: Resources\n");
            printf("\t\t  D: I/O Modules+J77\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q5: Logical extension of multiprogramming operating system is\n");
            printf("\t\t  A: Time sharing\n");
            printf("\t\t  B: multi-tasking\n");
            printf("\t\t  C: single programing\n");
            printf("\t\t  D: both a and b\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q6: With deadlock detection, requested resources are granted to\n");
            printf("\t\t  A: Resources\n");
            printf("\t\t  B: Programs\n");
            printf("\t\t  C: Processes \n");
            printf("\t\t  D: Users\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q7: In a pure Kernel Level Thread facility all of work of thread management is done by the\n");
            printf("\t\t  A: Application\n");
            printf("\t\t  B: Program\n");
            printf("\t\t  C: Kernel\n");
            printf("\t\t  D: Threads\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q8: UNIX was initially developed at\n");
            printf("\t\t  A: Bell Labs\n");
            printf("\t\t  B: NASA Labs\n");
            printf("\t\t  C: Microsoft Labs\n");
            printf("\t\t  D: Kaspersky Labs\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q9: Multiprocessor system have advantage of\n");
            printf("\t\t  A: Increased Throughput\n");
            printf("\t\t  B: Expensive hardware\n");
            printf("\t\t  C: operating system \n");
            printf("\t\t  D: both a and b\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q10: Win32 application programming interfaces is for\n");
            printf("\t\t   A: windows\n");
            printf("\t\t   B: UNIX\n");
            printf("\t\t   C: Linux\n");
            printf("\t\t   D: Solaris\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

        }
        }
    //Part 2;
    else if(subSelection==2){

        printf("\t\t NOTE: Once you started Test You Can't Quit/Re Take It.\n");
        printf("\t\t       Turn On CAPS LOCK Before Starting The Test, There Are 10 Questions\n ");
        printf("\t\t       are there total, just read the question & press the button of your answer.\n\n");
        printf("\t\t                                 Good Luck %s\n\n",studName);
        printf("\t\t Are you Ready for the Test of VISUAL PROGRAMMING y/n? :");
        scanf("%s",&ready);

        if(ready=='y' || ready=='Y'){

    while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q1: Microsoft's object-oriented primary programming languages includes\n");
            printf("\t\t  A: Java\n");
            printf("\t\t  B: Basic\n");
            printf("\t\t  C: Visual Basic\n");
            printf("\t\t  D: Ada\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
    }



if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q2: Programming language used to simplify development of Microsoft Windows applications is\n");
            printf("\t\t  A: Java\n");
            printf("\t\t  B: Basic\n");
            printf("\t\t  C: Visual Basic\n");
            printf("\t\t  D: C#\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q3: Microsoft's Visual Basic language were launched early in\n");
            printf("\t\t  A: 1960s\n");
            printf("\t\t  B: 1970s\n");
            printf("\t\t  C: 1980s\n");
            printf("\t\t  D: 1990s\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q4: GUI stands for\n");
            printf("\t\t  A: Graphics user interaction\n");
            printf("\t\t  B: Graphical user interface\n");
            printf("\t\t  C: Graphics usual interface\n");
            printf("\t\t  D: None of these\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q5: The visual language includes ___________ for representing visual sentences.\n");
            printf("\t\t  A: Visual language\n");
            printf("\t\t  B: Icons\n");
            printf("\t\t  C: Both a & b\n");
            printf("\t\t  D: None of these\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q6: The icons are the_______ image of an object\n");
            printf("\t\t  A: Physical\n");
            printf("\t\t  B: logical\n");
            printf("\t\t  C: both a & b \n");
            printf("\t\t  D: N.O.T\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q7: Operation icons are also known as\n");
            printf("\t\t  A: Program icons\n");
            printf("\t\t  B: Process icons\n");
            printf("\t\t  C: Visual icons\n");
            printf("\t\t  D: Visual icons\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q8: It refers to programming by visual methods\n");
            printf("\t\t  A: Visual programming\n");
            printf("\t\t  B: Visual language\n");
            printf("\t\t  C: Multidimensional language\n");
            printf("\t\t  D: None of these\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q9: VR  stands for\n");
            printf("\t\t  A: Visual reality\n");
            printf("\t\t  B: Virtual relation\n");
            printf("\t\t  C: Virtual reality\n");
            printf("\t\t  D: None of these\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q10: TAOs stands for\n");
            printf("\t\t   A: Teleaction objects\n");
            printf("\t\t   B: Talent objects\n");
            printf("\t\t   C: Teleaction oral\n");
            printf("\t\t   D: None of these\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

        }
        }

    // Part 3;
    else if(subSelection==3){

        printf("\t\t NOTE: Once you started Test You Can't Quit/Re Take It.\n");
        printf("\t\t       Turn On CAPS LOCK Before Starting The Test, There Are 10 Questions\n ");
        printf("\t\t       are there total, just read the question & press the button of your answer.\n\n");
        printf("\t\t                                 Good Luck %s\n\n",studName);
        printf("\t\t Are you Ready for the Test of COMPILER CONSTRUCTION y/n? :");
        scanf("%s",&ready);

        if(ready=='y' || ready=='Y'){

    while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q1: Three address code involves \n");
            printf("\t\t  A: Exactly 3 address\n");
            printf("\t\t  B: At most most 3 address\n");
            printf("\t\t  C: No unary operators\n");
            printf("\t\t  D: None of these\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
    }



if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q2: An intermediate code form is \n");
            printf("\t\t  A: Postfix notation\n");
            printf("\t\t  B: Syntax trees\n");
            printf("\t\t  C: Three address code\n");
            printf("\t\t  D: All of these\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q3: In operator precedence parsing , precedence relations are defoned\n");
            printf("\t\t  A: For all pair of non terminals\n");
            printf("\t\t  B: For all pair of terminals\n");
            printf("\t\t  C: To delimit the handle\n");
            printf("\t\t  D: Only for a certain pair of terminals\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q4: Relocating bits used by relocating loader are specified by \n");
            printf("\t\t  A: Relocating loader itself\n");
            printf("\t\t  B: Linker\n");
            printf("\t\t  C: Assembler\n");
            printf("\t\t  D: Macro processor\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q5: Synthesized attribute can be easily simulated by a \n");
            printf("\t\t  A: LL grammar\n");
            printf("\t\t  B: Ambiguous grammar\n");
            printf("\t\t  C: LR grammar\n");
            printf("\t\t  D: None of the above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q6: The output of a lexical analyzer is\n");
            printf("\t\t  A: Machine code\n");
            printf("\t\t  B: Intermediate code\n");
            printf("\t\t  C: A parse tree\n");
            printf("\t\t  D: A stream of tokens\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q7: Running time of a program depends on \n");
            printf("\t\t  A: The way the registers and addressing modes are used\n");
            printf("\t\t  B: The order in which computations are performed\n");
            printf("\t\t  C: The usage of machine idioms\n");
            printf("\t\t  D: All of these\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q8: Shift reduce parsers are\n");
            printf("\t\t  A: Top down parser\n");
            printf("\t\t  B: Bottom up parser\n");
            printf("\t\t  C: May be top down or bottom up parser\n");
            printf("\t\t  D: None of the above\n");



            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q9: Any description error can be repaired by \n");
            printf("\t\t  A: Insertion alone\n");
            printf("\t\t  B: Deletion alone\n");
            printf("\t\t  C: Insertion and deletion alone\n");
            printf("\t\t  D: Replacement alone\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q10: We can optimize code by \n");
            printf("\t\t   A: Dead code elimination\n");
            printf("\t\t   B: Common subprograms\n");
            printf("\t\t   C: Copy intermediate loop \n");
            printf("\t\t   D: Loop declaration\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

        }
        }
//part 4

 else if(subSelection==4){

        printf("\t\t NOTE: Once you started Test You Can't Quit/Re Take It.\n");
        printf("\t\t       Turn On CAPS LOCK Before Starting The Test, There Are 10 Questions\n ");
        printf("\t\t       are there total, just read the question & press the button of your answer.\n\n");
        printf("\t\t                                 Good Luck %s\n\n",studName);
        printf("\t\t Are you Ready for the Test of COMPUTER NETWORKS y/n? :");
        scanf("%s",&ready);

        if(ready=='y' || ready=='Y'){

    while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q1: Combination of two or more networks are called\n");
            printf("\t\t  A: Internetwork\n");
            printf("\t\t  B: WAN\n");
            printf("\t\t  C: MAN\n");
            printf("\t\t  D: LAN\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
    }



if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q2: Which topology covers security, robust and eliminating traffic factor?\n");
            printf("\t\t  A: Mesh\n");
            printf("\t\t  B: Ring\n");
            printf("\t\t  C: Star\n");
            printf("\t\t  D: Bus\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q3: National Internet Service Provider (ISP) networks are connected to one another by private switching stations called\n");
            printf("\t\t  A: Network Access Points\n");
            printf("\t\t  B: Peering Points\n");
            printf("\t\t  C: National ISP \n");
            printf("\t\t  D: Regional ISP\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q4: Multipoint topology is\n");
            printf("\t\t  A: Bus\n");
            printf("\t\t  B: Star\n");
            printf("\t\t  C: Mesh\n");
            printf("\t\t  D: Ring\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q5: A communication path way that transfers data from one point to another is called\n");
            printf("\t\t  A: Link\n");
            printf("\t\t  B: Node\n");
            printf("\t\t  C: Medium\n");
            printf("\t\t  D: Topology\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q6: Common LAN topologies are\n");
            printf("\t\t  A: Bus and ring\n");
            printf("\t\t  B: Mesh and Ring\n");
            printf("\t\t  C: Star \n");
            printf("\t\t  D: both A & C\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q7: Network providing a high speed connectivity is\n");
            printf("\t\t  A: MAN\n");
            printf("\t\t  B: LAN\n");
            printf("\t\t  C: WAN \n");
            printf("\t\t  D: Internetwork Arabia\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q8: Synonymous of rule is\n");
            printf("\t\t  A: Standard\n");
            printf("\t\t  B: Protocol\n");
            printf("\t\t  C: Forum\n");
            printf("\t\t  D: Agency\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q9: Elapsed time between an inquiry and a response is called.\n");
            printf("\t\t  A: Transit Time\n");
            printf("\t\t  B: Delay Time\n");
            printf("\t\t  C: Processing Time\n");
            printf("\t\t  D: Response time\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q10: Connection in which multi devices share a single link is called?\n");
            printf("\t\t   A: Point to point\n");
            printf("\t\t   B: Multipoint\n");
            printf("\t\t   C: Time Shared \n");
            printf("\t\t   D: Spatially Shared\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

        }
        }

else if(subSelection==5){

        printf("\t\t NOTE: Once you started Test You Can't Quit/Re Take It.\n");
        printf("\t\t       Turn On CAPS LOCK Before Starting The Test, There Are 10 Questions\n ");
        printf("\t\t       are there total, just read the question & press the button of your answer.\n\n");
        printf("\t\t                                 Good Luck %s\n\n",studName);
        printf("\t\t Are you Ready for the Test of ARTIFICIAL INTELLIGENCE y/n? :");
        scanf("%s",&ready);

        if(ready=='y' || ready=='Y'){

    while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q1: The characteristics of the computer system capable of thinking, reasoning and learning is known is\n");
            printf("\t\t  A: machine intelligence\n");
            printf("\t\t  B: human intelligence\n");
            printf("\t\t  C: artificial intelligence\n");
            printf("\t\t  D: virtual intelligence\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
    }



if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q2: In a rule based system,procedural domain knowledge is in the form of\n");
            printf("\t\t  A: Production rules\n");
            printf("\t\t  B: Rule interpreters\n");
            printf("\t\t  C: Control rules\n");
            printf("\t\t  D: Meta rules\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 65:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q3: The explanation facility of an expert system may be used to \n");
            printf("\t\t  A: construct a diagnostic model\n");
            printf("\t\t  B: expedite the debugging process\n");
            printf("\t\t  C: explain the system reasoning process\n");
            printf("\t\t  D: both (b) and (c)\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q4: One definition of AI focuses on problem-solving methods that process:\n");
            printf("\t\t  A: smell\n");
            printf("\t\t  B: symbols\n");
            printf("\t\t  C: touch\n");
            printf("\t\t  D: keys\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q5: Which of the following is being investigated as a means of automating the creation of a knowledge base? \n");
            printf("\t\t  A: automatic knowledge acquisition\n");
            printf("\t\t  B: simpler tools\n");
            printf("\t\t  C: discovery of new concepts\n");
            printf("\t\t  D: All of the above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q6: In LISP, the function assigns . the value of a to b is\n");
            printf("\t\t  A: (setq a b)\n");
            printf("\t\t  B: (setq b a )\n");
            printf("\t\t  C: (b = a)\n");
            printf("\t\t  D: (set b = a)\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q7: To invoke the LISP system, you must enter\n");
            printf("\t\t  A: AI\n");
            printf("\t\t  B: LISP\n");
            printf("\t\t  C: CL (Common Lisp)\n");
            printf("\t\t  D: both b and c\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q8: Elementary linguistic units which are smaller than words are\n");
            printf("\t\t  A: allophones\n");
            printf("\t\t  B: phonemes\n");
            printf("\t\t  C: syllables\n");
            printf("\t\t  D: All of the above\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 68:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q9: The primary method that people use to sense their environment is \n");
            printf("\t\t  A: reading\n");
            printf("\t\t  B: speaking\n");
            printf("\t\t  C: writing\n");
            printf("\t\t  D: listening\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 66:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

if(sec<=1){
        sec=30;
        while(sec>0){
        if(sec >= 1){
            sec--;
        }
        delay(1000);
    system("cls");
    printf("\t\t ===============================================\n");
    printf("\t\t  University   Of   Sindh   Mirpurkhas  Campus  \n");
    printf("\t\t ===============================================\n\n");
            printf("\n\t\t Time Remaining : 00:%d\n",sec);
            printf("\t\t Q10: A robots arm is also known as its: \n");
            printf("\t\t   A: end effector\n");
            printf("\t\t   B: actuator\n");
            printf("\t\t   C: manipulator\n");
            printf("\t\t   D: servomechanism\n");

            printf("\t\t Your Answer: ");if(kbhit()){
            switch(getche()){
                case 67:
            correctAnswer = correctAnswer + 1;
                break;
                default:
            correctAnswer = correctAnswer + 0;
            break;
            }
            sec=0;
            }
}
}

        }
        }



}
