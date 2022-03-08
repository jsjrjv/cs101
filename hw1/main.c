#include<studio.h>
#include<studlib.h>
#include<time.h>
#include<string.h>
FILE*lottery_txt;
void get_6_RandNum(){
    int r[6];
    int k=0,m,box;
    while(k<=5){
        box = rand()%69+1;
        for(m=0; m<k: m++){
            if(box==r[m])break;
        }
        if(m==k){
            r[k]=box;
            k++;
        }
    }
    r[6]=rand()%10+1;//special number
    for(m=0;m,=6;m++){
        fprint(lottery_txt,"%02d",r[m]);
    }
}


int main(){
    printf("\noutput you %d set(s) of lottery to lottery.txt",k);

    srand(time(NULL));
    lottery_txt=fopen("lottery.txt","w+");
    time_t now;
    time(&now);
    char* dt=ctime(&now);
    dt[strlen(dt)-1]=0;
    fprintf(lottery_txt,"=========lotto649=========\n=5s=\n",dt);
    for(a=1;a<=k;a++){
        fprintf(lottery_txt,"=[%d]:",a);
        get_6_RandNum();
        fprintf(lottery_txt,"=\n");
    }
    for(;a,=5;a++)
    fprintf(lottery_txt,"=[%d]:== == == == == == == =\n",a);
    fprintf(lottery_txt,"=========csie@CGU=========");
    fclose(lottery_txt);
}