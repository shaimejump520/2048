#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QKeyEvent>
#include <cstdio>
int l[16];

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    start();
    printout();



}
void MainWindow::start()
{

    ui->Final->setPixmap(QPixmap(""));

    for(int i=1;i<17;i++)
        l[i]=0;
    srand((unsigned)time(NULL));
    l[rand()%16+1]=2;
    l[rand()%16+1]=2;
    l[rand()%16+1]=2;
    l[rand()%16+1]=2;
    l[rand()%16+1]=2;
    l[rand()%16+1]=4;
    l[rand()%16+1]=4;


}
void MainWindow::left()
{
    int w=0;
    for(int i=1;i<17;i++){
        if(l[i]==0)
            w++;}
    for(int j=0;j<4;j++){
            for(int i=1;i<4;i++){
                if(l[4*j+i]==l[4*j+i+1]){
                w++;
                }
            }
        }
    for(int j=0;j<4;j++){
            for(int i=4;i>1;i--){
                if(l[4*j+i]==l[4*j+i-1]){
                  w++;
                    }
                }
            }
    for(int i=1;i<5;i++){
            for(int j=0;j<3;j++){
                               if(l[i+j*4]==l[i+(j+1)*4]){
                   w++;
                 }
            }
        }
    for(int i=1;i<5;i++){
                for(int j=3;j>0;j--){
                         if(l[i+j*4]==l[i+(j-1)*4]){
                   w++;
                     }
                }
            }
    if(w==0)
        ui->Final->setPixmap(QPixmap(":/pics/game-over.jpg"));

    int q=0;
    for(int j=0;j<4;j++){
        int t=0;

        for(int i=1;i<4;i++){

            for(int k=i;k>0;k--){
        if((l[4*j+k]==0)&&(l[4*j+k+1]!=0)){
            l[4*j+k]=l[4*j+k+1];
            l[4*j+k+1]=0;
            q++;
        }
        else if((l[4*j+k]!=0)&&(l[4*j+k]==l[4*j+k+1])&&t==0){
            if((l[4*j+1]==l[4*j+2])&&(l[4*j+3]==l[4*j+4]))
                t--;
            l[4*j+k]=l[4*j+k]*2;
            l[4*j+k+1]=0;
            t++;

            q++;
        }
        }
        }
    }

srand((unsigned)time(NULL));
int k;
int s=0;
while(k=rand()%16+1){for(int i=1;i<17;i++){
        if(l[i]!=0)
            s++;
    }

    if(q==0)
        break;
    if(l[k]==0){

      l[k]=2;
    break;}
}

}
void MainWindow::right()
{
    int w=0;
    for(int i=1;i<17;i++){
        if(l[i]==0)
            w++;}
    for(int j=0;j<4;j++){
            for(int i=1;i<4;i++){
                if(l[4*j+i]==l[4*j+i+1]){
                w++;
                }
            }
        }
    for(int j=0;j<4;j++){
            for(int i=4;i>1;i--){
                if(l[4*j+i]==l[4*j+i-1]){
                  w++;
                    }
                }
            }
    for(int i=1;i<5;i++){
            for(int j=0;j<3;j++){
                               if(l[i+j*4]==l[i+(j+1)*4]){
                   w++;
                 }
            }
        }
    for(int i=1;i<5;i++){
                for(int j=3;j>0;j--){
                         if(l[i+j*4]==l[i+(j-1)*4]){
                   w++;
                     }
                }
            }
    if(w==0)
        ui->Final->setPixmap(QPixmap(":/pics/game-over.jpg"));


    int q=0;
    for(int j=0;j<4;j++){
            int t=0;
            for(int i=4;i>1;i--){

                for(int k=i;k<5;k++){
            if((l[4*j+k]==0)&&(l[4*j+k-1]!=0)){
                l[4*j+k]=l[4*j+k-1];
                l[4*j+k-1]=0;
                q++;
            }
            else if((l[4*j+k]!=0)&&(l[4*j+k]==l[4*j+k-1])&&t==0){
                if((l[4*j+1]==l[4*j+2])&&(l[4*j+3]==l[4*j+4]))
                    t--;
                l[4*j+k]=l[4*j+k]*2;
                l[4*j+k-1]=0;
                t++;
                q++;
            }
            }
            }
        }


srand((unsigned)time(NULL));
int k;
int s=0;
while(k=rand()%16+1){
    for(int i=1;i<17;i++){
        if(l[i]!=0)
            s++;
    }
    if(q==0)
        break;
    if(l[k]==0){
      l[k]=2;
    break;}
}

}
void MainWindow::up()
{
    int w=0;
    for(int i=1;i<17;i++){
        if(l[i]==0)
            w++;}
    for(int j=0;j<4;j++){
            for(int i=1;i<4;i++){
                if(l[4*j+i]==l[4*j+i+1]){
                w++;
                }
            }
        }
    for(int j=0;j<4;j++){
            for(int i=4;i>1;i--){
                if(l[4*j+i]==l[4*j+i-1]){
                  w++;
                    }
                }
            }
    for(int i=1;i<5;i++){
            for(int j=0;j<3;j++){
                               if(l[i+j*4]==l[i+(j+1)*4]){
                   w++;
                 }
            }
        }
    for(int i=1;i<5;i++){
                for(int j=3;j>0;j--){
                         if(l[i+j*4]==l[i+(j-1)*4]){
                   w++;
                     }
                }
            }
    if(w==0)
        ui->Final->setPixmap(QPixmap(":/pics/game-over.jpg"));

    int q=0;
    for(int i=1;i<5;i++){
        int t=0;
        for(int j=0;j<3;j++){
            for(int k=j;k>=0;k--){
                if(l[i+k*4]==0&&l[i+(k+1)*4]){
                        l[i+k*4]=l[i+(k+1)*4];
                        l[i+(k+1)*4]=0;
                        q++;
                    }
                else if(l[i+k*4]!=0&&l[i+k*4]==l[i+(k+1)*4]&&t==0){
                    if((l[i]==l[i+4])&&(l[i+8]==l[i+12]))
                        t--;
                            l[i+k*4]=l[i+k*4]*2;
                            l[i+(k+1)*4]=0;
                            t++;
                            q++;
                }
            }
        }
    }

srand((unsigned)time(NULL));
int k;
int s=0;
while(k=rand()%16+1){
    for(int i=1;i<17;i++){
        if(l[i]!=0)
            s++;
    }
    if(q==0)
        break;
    if(l[k]==0){
      l[k]=2;
    break;}
}

}
void MainWindow::down()
{
    int w=0;
    for(int i=1;i<17;i++){
        if(l[i]==0)
            w++;}
    for(int j=0;j<4;j++){
            for(int i=1;i<4;i++){
                if(l[4*j+i]==l[4*j+i+1]){
                w++;
                }
            }
        }
    for(int j=0;j<4;j++){
            for(int i=4;i>1;i--){
                if(l[4*j+i]==l[4*j+i-1]){
                  w++;
                    }
                }
            }
    for(int i=1;i<5;i++){
            for(int j=0;j<3;j++){
                               if(l[i+j*4]==l[i+(j+1)*4]){
                   w++;
                 }
            }
        }
    for(int i=1;i<5;i++){
                for(int j=3;j>0;j--){
                         if(l[i+j*4]==l[i+(j-1)*4]){
                   w++;
                     }
                }
            }
    if(w==0)
        ui->Final->setPixmap(QPixmap(":/pics/game-over.jpg"));

    int q=0;
    for(int i=1;i<5;i++){
            int t=0;
            for(int j=3;j>0;j--){
                for(int k=j;k<4;k++){
                    if(l[i+k*4]==0&&l[i+(k-1)*4]){
                            l[i+k*4]=l[i+(k-1)*4];
                            l[i+(k-1)*4]=0;
                            q++;
                        }
                    else if(l[i+k*4]!=0&&l[i+k*4]==l[i+(k-1)*4]&&t==0){
                        if((l[i]==l[i+4])&&(l[i+8]==l[i+12]))
                            t--;
                                l[i+k*4]=l[i+k*4]*2;
                                l[i+(k-1)*4]=0;
                                t++;
                                q++;
                    }
                }
            }
        }
    srand((unsigned)time(NULL));
    int k;
    int s=0;
    while(k=rand()%16+1){
        for(int i=1;i<17;i++){
            if(l[i]!=0)
                s++;
        }

        if(q==0)
            break;
        if(l[k]==0){
          l[k]=2;
        break;}
    }

}

void MainWindow::printout()
{
    int score=0;
        for(int i=1;i<17;i++){
            score=score+l[i];
        }
        ui->score->display(score);
       if(l[1]==0)
            ui->L1->setPixmap(QPixmap(":/pics/0.jpg"));
       else if(l[1]==2)
            ui->L1->setPixmap(QPixmap(":/pics/2.jpg"));
       else if(l[1]==4)
            ui->L1->setPixmap(QPixmap(":/pics/4.jpg"));
       else if(l[1]==8)
            ui->L1->setPixmap(QPixmap(":/pics/8.jpg"));
       else if(l[1]==16)
            ui->L1->setPixmap(QPixmap(":/pics/16.jpg"));
       else if(l[1]==32)
            ui->L1->setPixmap(QPixmap(":/pics/32.jpg"));
       else if(l[1]==64)
            ui->L1->setPixmap(QPixmap(":/pics/64.jpg"));
       else if(l[1]==128)
            ui->L1->setPixmap(QPixmap(":/pics/128.jpg"));
       else if(l[1]==256)
            ui->L1->setPixmap(QPixmap(":/pics/256.jpg"));
       else if(l[1]==512)
            ui->L1->setPixmap(QPixmap(":/pics/512.jpg"));
       else if(l[1]==1024)
            ui->L1->setPixmap(QPixmap(":/pics/1024.jpg"));
       else if(l[1]==2048)
            ui->L1->setPixmap(QPixmap(":/pics/NOSTRIL.jpg"));


       if(l[2]==0)
            ui->L2->setPixmap(QPixmap(":/pics/0.jpg"));
       else if(l[2]==2)
            ui->L2->setPixmap(QPixmap(":/pics/2.jpg"));
       else if(l[2]==4)
            ui->L2->setPixmap(QPixmap(":/pics/4.jpg"));
       else if(l[2]==8)
            ui->L2->setPixmap(QPixmap(":/pics/8.jpg"));
       else if(l[2]==16)
            ui->L2->setPixmap(QPixmap(":/pics/16.jpg"));
       else if(l[2]==32)
            ui->L2->setPixmap(QPixmap(":/pics/32.jpg"));
       else if(l[2]==64)
            ui->L2->setPixmap(QPixmap(":/pics/64.jpg"));
       else if(l[2]==128)
            ui->L2->setPixmap(QPixmap(":/pics/128.jpg"));
       else if(l[2]==256)
            ui->L2->setPixmap(QPixmap(":/pics/256.jpg"));
       else if(l[2]==512)
            ui->L2->setPixmap(QPixmap(":/pics/512.jpg"));
       else if(l[2]==1024)
            ui->L2->setPixmap(QPixmap(":/pics/1024.jpg"));
       else if(l[2]==2048)
            ui->L2->setPixmap(QPixmap(":/pics/NOSTRIL.jpg"));


       if(l[3]==0)
            ui->L3->setPixmap(QPixmap(":/pics/0.jpg"));
              else if(l[3]==2)
                   ui->L3->setPixmap(QPixmap(":/pics/2.jpg"));
              else if(l[3]==4)
                   ui->L3->setPixmap(QPixmap(":/pics/4.jpg"));
              else if(l[3]==8)
                   ui->L3->setPixmap(QPixmap(":/pics/8.jpg"));
              else if(l[3]==16)
                   ui->L3->setPixmap(QPixmap(":/pics/16.jpg"));
              else if(l[3]==32)
                   ui->L3->setPixmap(QPixmap(":/pics/32.jpg"));
              else if(l[3]==64)
                   ui->L3->setPixmap(QPixmap(":/pics/64.jpg"));
              else if(l[3]==128)
                   ui->L3->setPixmap(QPixmap(":/pics/128.jpg"));
              else if(l[3]==256)
                   ui->L3->setPixmap(QPixmap(":/pics/256.jpg"));
              else if(l[3]==512)
                   ui->L3->setPixmap(QPixmap(":/pics/512.jpg"));
              else if(l[3]==1024)
                   ui->L3->setPixmap(QPixmap(":/pics/1024.jpg"));
              else if(l[3]==2048)
                   ui->L3->setPixmap(QPixmap(":/pics/NOSTRIL.jpg"));


       if(l[4]==0)
             ui->L4->setPixmap(QPixmap(":/pics/0.jpg"));
                     else if(l[4]==2)
                          ui->L4->setPixmap(QPixmap(":/pics/2.jpg"));
                    else if(l[4]==4)
                          ui->L4->setPixmap(QPixmap(":/pics/4.jpg"));
                     else if(l[4]==8)
                          ui->L4->setPixmap(QPixmap(":/pics/8.jpg"));
                     else if(l[4]==16)
                          ui->L4->setPixmap(QPixmap(":/pics/16.jpg"));
                     else if(l[4]==32)
                          ui->L4->setPixmap(QPixmap(":/pics/32.jpg"));
                    else  if(l[4]==64)
                          ui->L4->setPixmap(QPixmap(":/pics/64.jpg"));
                     else if(l[4]==128)
                          ui->L4->setPixmap(QPixmap(":/pics/128.jpg"));
                     else if(l[4]==256)
                          ui->L4->setPixmap(QPixmap(":/pics/256.jpg"));
                    else if(l[4]==512)
                          ui->L4->setPixmap(QPixmap(":/pics/512.jpg"));
                     else if(l[4]==1024)
                          ui->L4->setPixmap(QPixmap(":/pics/1024.jpg"));
                     else if(l[4]==2048)
                          ui->L4->setPixmap(QPixmap(":/pics/NOSTRIL.jpg"));

       if(l[5]==0)
           ui->L5->setPixmap(QPixmap(":/pics/0.jpg"));
                            else if(l[5]==2)
                                 ui->L5->setPixmap(QPixmap(":/pics/2.jpg"));
                            else if(l[5]==4)
                                 ui->L5->setPixmap(QPixmap(":/pics/4.jpg"));
                           else if(l[5]==8)
                                 ui->L5->setPixmap(QPixmap(":/pics/8.jpg"));
                          else   if(l[5]==16)
                                 ui->L5->setPixmap(QPixmap(":/pics/16.jpg"));
                         else    if(l[5]==32)
                                 ui->L5->setPixmap(QPixmap(":/pics/32.jpg"));
                           else  if(l[5]==64)
                                 ui->L5->setPixmap(QPixmap(":/pics/64.jpg"));
                           else  if(l[5]==128)
                                 ui->L5->setPixmap(QPixmap(":/pics/128.jpg"));
                            else if(l[5]==256)
                                 ui->L5->setPixmap(QPixmap(":/pics/256.jpg"));
                            else if(l[5]==512)
                                 ui->L5->setPixmap(QPixmap(":/pics/512.jpg"));
                            else if(l[5]==1024)
                                 ui->L5->setPixmap(QPixmap(":/pics/1024.jpg"));
                            else if(l[5]==2048)
                                 ui->L5->setPixmap(QPixmap(":/pics/NOSTRIL.jpg"));


       if(l[6]==0)
                   ui->L6->setPixmap(QPixmap(":/pics/0.jpg"));
                 else  if(l[6]==2)
                 ui->L6->setPixmap(QPixmap(":/pics/2.jpg"));
                                   else if(l[6]==4)
                                        ui->L6->setPixmap(QPixmap(":/pics/4.jpg"));
                                   else if(l[6]==8)
                                        ui->L6->setPixmap(QPixmap(":/pics/8.jpg"));
                                   else if(l[6]==16)
                                        ui->L6->setPixmap(QPixmap(":/pics/16.jpg"));
                                   else if(l[6]==32)
                                        ui->L6->setPixmap(QPixmap(":/pics/32.jpg"));
                                   else if(l[6]==64)
                                        ui->L6->setPixmap(QPixmap(":/pics/64.jpg"));
                                   else if(l[6]==128)
                                        ui->L6->setPixmap(QPixmap(":/pics/128.jpg"));
                                  else  if(l[6]==256)
                                        ui->L6->setPixmap(QPixmap(":/pics/256.jpg"));
                                   else if(l[6]==512)
                                        ui->L6->setPixmap(QPixmap(":/pics/512.jpg"));
                                  else  if(l[6]==1024)
                                        ui->L6->setPixmap(QPixmap(":/pics/1024.jpg"));
               else if(l[6]==2048)
                    ui->L6->setPixmap(QPixmap(":/pics/NOSTRIL.jpg"));


       if(l[7]==0)
                    ui->L7->setPixmap(QPixmap(":/pics/0.jpg"));
               else if(l[7]==2)
                    ui->L7->setPixmap(QPixmap(":/pics/2.jpg"));
              else  if(l[7]==4)
                   ui->L7->setPixmap(QPixmap(":/pics/4.jpg"));
               else if(l[7]==8)
                    ui->L7->setPixmap(QPixmap(":/pics/8.jpg"));
               else if(l[7]==16)
                    ui->L7->setPixmap(QPixmap(":/pics/16.jpg"));
               else if(l[7]==32)
                    ui->L7->setPixmap(QPixmap(":/pics/32.jpg"));
               else if(l[7]==64)
                    ui->L7->setPixmap(QPixmap(":/pics/64.jpg"));
               else if(l[7]==128)
                    ui->L7->setPixmap(QPixmap(":/pics/128.jpg"));
               else if(l[7]==256)
                    ui->L7->setPixmap(QPixmap(":/pics/256.jpg"));
               else if(l[7]==512)
                    ui->L7->setPixmap(QPixmap(":/pics/512.jpg"));
               else if(l[7]==1024)
                    ui->L7->setPixmap(QPixmap(":/pics/1024.jpg"));
               else if(l[7]==2048)
                    ui->L7->setPixmap(QPixmap(":/pics/NOSTRIL.jpg"));

       if(l[8]==0)
                           ui->L8->setPixmap(QPixmap(":/pics/0.jpg"));
               else if(l[8]==2)
                           ui->L8->setPixmap(QPixmap(":/pics/2.jpg"));
               else if(l[8]==4)
                           ui->L8->setPixmap(QPixmap(":/pics/4.jpg"));
               else if(l[8]==8)
                           ui->L8->setPixmap(QPixmap(":/pics/8.jpg"));
               else if(l[8]==16)
                           ui->L8->setPixmap(QPixmap(":/pics/16.jpg"));
               else if(l[8]==32)
                           ui->L8->setPixmap(QPixmap(":/pics/32.jpg"));
               else if(l[8]==64)
                           ui->L8->setPixmap(QPixmap(":/pics/64.jpg"));
               else if(l[8]==128)
                           ui->L8->setPixmap(QPixmap(":/pics/128.jpg"));
               else if(l[8]==256)
                           ui->L8->setPixmap(QPixmap(":/pics/256.jpg"));
               else if(l[8]==512)
                           ui->L8->setPixmap(QPixmap(":/pics/512.jpg"));
               else if(l[8]==1024)
                           ui->L8->setPixmap(QPixmap(":/pics/1024.jpg"));
               else if(l[8]==2048)
                           ui->L8->setPixmap(QPixmap(":/pics/NOSTRIL.jpg"));

             if(l[9]==0)
                           ui->L9->setPixmap(QPixmap(":/pics/0.jpg"));
               else if(l[9]==2)
                           ui->L9->setPixmap(QPixmap(":/pics/2.jpg"));
               else if(l[9]==4)
                           ui->L9->setPixmap(QPixmap(":/pics/4.jpg"));
               else if(l[9]==8)
                           ui->L9->setPixmap(QPixmap(":/pics/8.jpg"));
               else if(l[9]==16)
                           ui->L9->setPixmap(QPixmap(":/pics/16.jpg"));
               else if(l[9]==32)
                           ui->L9->setPixmap(QPixmap(":/pics/32.jpg"));
               else if(l[9]==64)
                           ui->L9->setPixmap(QPixmap(":/pics/64.jpg"));
               else if(l[9]==128)
                           ui->L9->setPixmap(QPixmap(":/pics/128.jpg"));
               else if(l[9]==256)
                           ui->L9->setPixmap(QPixmap(":/pics/256.jpg"));
               else if(l[9]==512)
                           ui->L9->setPixmap(QPixmap(":/pics/512.jpg"));
               else if(l[9]==1024)
                           ui->L9->setPixmap(QPixmap(":/pics/1024.jpg"));
               else if(l[9]==2048)
                           ui->L9->setPixmap(QPixmap(":/pics/NOSTRIL.jpg"));

       if(l[10]==0)
                           ui->L10->setPixmap(QPixmap(":/pics/0.jpg"));
               else if(l[10]==2)
                           ui->L10->setPixmap(QPixmap(":/pics/2.jpg"));
               else if(l[10]==4)
                           ui->L10->setPixmap(QPixmap(":/pics/4.jpg"));
               else if(l[10]==8)
                           ui->L10->setPixmap(QPixmap(":/pics/8.jpg"));
               else if(l[10]==16)
                           ui->L10->setPixmap(QPixmap(":/pics/16.jpg"));
               else if(l[10]==32)
                           ui->L10->setPixmap(QPixmap(":/pics/32.jpg"));
               else if(l[10]==64)
                           ui->L10->setPixmap(QPixmap(":/pics/64.jpg"));
               else if(l[10]==128)
                           ui->L10->setPixmap(QPixmap(":/pics/128.jpg"));
               else if(l[10]==256)
                           ui->L10->setPixmap(QPixmap(":/pics/256.jpg"));
               else if(l[10]==512)
                           ui->L10->setPixmap(QPixmap(":/pics/512.jpg"));
               else if(l[10]==1024)
                           ui->L10->setPixmap(QPixmap(":/pics/1024.jpg"));
               else if(l[10]==2048)
                           ui->L10->setPixmap(QPixmap(":/pics/NOSTRIL.jpg"));

       if(l[11]==0)
                           ui->L11->setPixmap(QPixmap(":/pics/0.jpg"));
               else if(l[11]==2)
                           ui->L11->setPixmap(QPixmap(":/pics/2.jpg"));
               else if(l[11]==4)
                           ui->L11->setPixmap(QPixmap(":/pics/4.jpg"));
               else if(l[11]==8)
                           ui->L11->setPixmap(QPixmap(":/pics/8.jpg"));
               else if(l[11]==16)
                           ui->L11->setPixmap(QPixmap(":/pics/16.jpg"));
               else if(l[11]==32)
                           ui->L11->setPixmap(QPixmap(":/pics/32.jpg"));
               else if(l[11]==64)
                           ui->L11->setPixmap(QPixmap(":/pics/64.jpg"));
               else if(l[11]==128)
                           ui->L11->setPixmap(QPixmap(":/pics/128.jpg"));
               else if(l[11]==256)
                           ui->L11->setPixmap(QPixmap(":/pics/256.jpg"));
               else if(l[11]==512)
                           ui->L11->setPixmap(QPixmap(":/pics/512.jpg"));
               else if(l[11]==1024)
                           ui->L11->setPixmap(QPixmap(":/pics/1024.jpg"));
               else if(l[11]==2048)
                           ui->L11->setPixmap(QPixmap(":/pics/NOSTRIL.jpg"));

       if(l[12]==0)
                           ui->L12->setPixmap(QPixmap(":/pics/0.jpg"));
               else if(l[12]==2)
                           ui->L12->setPixmap(QPixmap(":/pics/2.jpg"));
               else if(l[12]==4)
                           ui->L12->setPixmap(QPixmap(":/pics/4.jpg"));
               else if(l[12]==8)
                           ui->L12->setPixmap(QPixmap(":/pics/8.jpg"));
               else if(l[12]==16)
                           ui->L12->setPixmap(QPixmap(":/pics/16.jpg"));
               else if(l[12]==32)
                           ui->L12->setPixmap(QPixmap(":/pics/32.jpg"));
               else if(l[12]==64)
                           ui->L12->setPixmap(QPixmap(":/pics/64.jpg"));
               else if(l[12]==128)
                           ui->L12->setPixmap(QPixmap(":/pics/128.jpg"));
               else if(l[12]==256)
                           ui->L12->setPixmap(QPixmap(":/pics/256.jpg"));
               else if(l[12]==512)
                           ui->L12->setPixmap(QPixmap(":/pics/512.jpg"));
               else if(l[12]==1024)
                           ui->L12->setPixmap(QPixmap(":/pics/1024.jpg"));
               else if(l[12]==2048)
                           ui->L12->setPixmap(QPixmap(":/pics/NOSTRIL.jpg"));

       if(l[13]==0)
                           ui->L13->setPixmap(QPixmap(":/pics/0.jpg"));
               else if(l[13]==2)
                           ui->L13->setPixmap(QPixmap(":/pics/2.jpg"));
               else if(l[13]==4)
                           ui->L13->setPixmap(QPixmap(":/pics/4.jpg"));
               else if(l[13]==8)
                           ui->L13->setPixmap(QPixmap(":/pics/8.jpg"));
               else if(l[13]==16)
                           ui->L13->setPixmap(QPixmap(":/pics/16.jpg"));
               else if(l[13]==32)
                           ui->L13->setPixmap(QPixmap(":/pics/32.jpg"));
               else if(l[13]==64)
                           ui->L13->setPixmap(QPixmap(":/pics/64.jpg"));
               else if(l[13]==128)
                           ui->L13->setPixmap(QPixmap(":/pics/128.jpg"));
               else if(l[13]==256)
                           ui->L13->setPixmap(QPixmap(":/pics/256.jpg"));
               else if(l[13]==512)
                           ui->L13->setPixmap(QPixmap(":/pics/512.jpg"));
               else if(l[13]==1024)
                           ui->L13->setPixmap(QPixmap(":/pics/1024.jpg"));
               else if(l[13]==2048)
                           ui->L13->setPixmap(QPixmap(":/pics/NOSTRIL.jpg"));

       if(l[14]==0)
                           ui->L14->setPixmap(QPixmap(":/pics/0.jpg"));
               else if(l[14]==2)
                           ui->L14->setPixmap(QPixmap(":/pics/2.jpg"));
               else if(l[14]==4)
                           ui->L14->setPixmap(QPixmap(":/pics/4.jpg"));
               else if(l[14]==8)
                           ui->L14->setPixmap(QPixmap(":/pics/8.jpg"));
               else if(l[14]==16)
                           ui->L14->setPixmap(QPixmap(":/pics/16.jpg"));
               else if(l[14]==32)
                           ui->L14->setPixmap(QPixmap(":/pics/32.jpg"));
               else if(l[14]==64)
                           ui->L14->setPixmap(QPixmap(":/pics/64.jpg"));
               else if(l[14]==128)
                           ui->L14->setPixmap(QPixmap(":/pics/128.jpg"));
               else if(l[14]==256)
                           ui->L14->setPixmap(QPixmap(":/pics/256.jpg"));
               else if(l[14]==512)
                           ui->L14->setPixmap(QPixmap(":/pics/512.jpg"));
               else if(l[14]==1024)
                           ui->L14->setPixmap(QPixmap(":/pics/1024.jpg"));
               else if(l[14]==2048)
                           ui->L14->setPixmap(QPixmap(":/pics/NOSTRIL.jpg"));

       if(l[15]==0)
                           ui->L15->setPixmap(QPixmap(":/pics/0.jpg"));
               else if(l[15]==2)
                           ui->L15->setPixmap(QPixmap(":/pics/2.jpg"));
               else if(l[15]==4)
                           ui->L15->setPixmap(QPixmap(":/pics/4.jpg"));
               else if(l[15]==8)
                           ui->L15->setPixmap(QPixmap(":/pics/8.jpg"));
               else if(l[15]==16)
                           ui->L15->setPixmap(QPixmap(":/pics/16.jpg"));
               else if(l[15]==32)
                           ui->L15->setPixmap(QPixmap(":/pics/32.jpg"));
               else if(l[15]==64)
                           ui->L15->setPixmap(QPixmap(":/pics/64.jpg"));
               else if(l[15]==128)
                           ui->L15->setPixmap(QPixmap(":/pics/128.jpg"));
               else if(l[15]==256)
                           ui->L15->setPixmap(QPixmap(":/pics/256.jpg"));
               else if(l[15]==512)
                           ui->L15->setPixmap(QPixmap(":/pics/512.jpg"));
               else if(l[15]==1024)
                           ui->L15->setPixmap(QPixmap(":/pics/1024.jpg"));
              else  if(l[15]==2048)
                           ui->L15->setPixmap(QPixmap(":/pics/NOSTRIL.jpg"));

       if(l[16]==0)
                           ui->L16->setPixmap(QPixmap(":/pics/0.jpg"));
               else if(l[16]==2)
                           ui->L16->setPixmap(QPixmap(":/pics/2.jpg"));
               else if(l[16]==4)
                           ui->L16->setPixmap(QPixmap(":/pics/4.jpg"));
               else if(l[16]==8)
                           ui->L16->setPixmap(QPixmap(":/pics/8.jpg"));
               else if(l[16]==16)
                           ui->L16->setPixmap(QPixmap(":/pics/16.jpg"));
               else if(l[16]==32)
                           ui->L16->setPixmap(QPixmap(":/pics/32.jpg"));
               else if(l[16]==64)
                           ui->L16->setPixmap(QPixmap(":/pics/64.jpg"));
               else if(l[16]==128)
                           ui->L16->setPixmap(QPixmap(":/pics/128.jpg"));
               else if(l[16]==256)
                           ui->L16->setPixmap(QPixmap(":/pics/256.jpg"));
               else if(l[16]==512)
                           ui->L16->setPixmap(QPixmap(":/pics/512.jpg"));
               else if(l[16]==1024)
                           ui->L16->setPixmap(QPixmap(":/pics/1024.jpg"));
               else if(l[16]==2048)
                           ui->L16->setPixmap(QPixmap(":/pics/NOSTRIL.jpg"));





}

MainWindow::~MainWindow()
{
    delete ui;

}
void MainWindow::keyPressEvent(QKeyEvent *event)
{


    if (event->key()==Qt::Key_Right){
        for(int j=1;j<17;j++){
            if(l[j]==2048)
                ui->Final->setPixmap(QPixmap(":/pics/you-win.jpg"));}

            right();

        printout();
    }
   if (event->key()==Qt::Key_Left){
       for(int j=1;j<17;j++){
           if(l[j]==2048)
               ui->Final->setPixmap(QPixmap(":/pics/you-win.jpg"));}

        left();

   printout();

    }
    if (event->key()==Qt::Key_Up){
        for(int j=1;j<17;j++){
            if(l[j]==2048)
                ui->Final->setPixmap(QPixmap(":/pics/you-win.jpg"));}
        up();

    printout();

    }
    if (event->key()==Qt::Key_Down){
        for(int j=1;j<17;j++){
            if(l[j]==2048)
                ui->Final->setPixmap(QPixmap(":/pics/you-win.jpg"));}
            down();

    printout();

    }
    if (event->key()==Qt::Key_Space){

    }
    if (event->key()==Qt::Key_1){

        ui->L1->setPixmap(QPixmap(":/pics/fk.jpg"));
    }
    if (event->key()==Qt::Key_5){

        ui->L1->setPixmap(QPixmap(":/pics/NOSTRIL.jpg"));
    }
    if (event->key()==Qt::Key_2){

        ui->L2->setPixmap(QPixmap(":/pics/fk.jpg"));
    }
    if (event->key()==Qt::Key_6){

        ui->L2->setPixmap(QPixmap(":/pics/NOSTRIL.jpg"));
    }
}

void MainWindow::on_restart_clicked()
{
    start();
    printout();
}


