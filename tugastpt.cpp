#aghik
//code quiz

#include <iostream>
#include <conio.h>
#include <limits>
#include <cstdlib>
#include <cstring>
using namespace std;

//variabel
int point = 0;
int ppoint;
char chs1, chs2, chs3, chs4, chs5, ans1, ans2, ans3, ans4;

//tpoint()
//{
// int point = point + ppoint;
//return point;
//}
int main()
{

home:
    point = 0;
    cout << "=====================================================\n";
    cout << "                    KUIS KOMPUTER                    \n\n\n\n\n";
    cout << "                                                     \n";
    cout << "            Want to Start the Quiz? (y/n) ";
    cin >> chs1;
    switch (chs1)
    {
    case 'Y':
    case 'y':
        goto soal1;
        break;
    case 'N':
    case 'n':
        exit(0);
        break;
    default:
        exit(0);
    }
soal1: //soal 1

    system("cls");
    cout << "Pertanyaan 1 :\n\n";
    cout << " Pekerjaan Seorang Programer adalah..." << endl;
    cout << "A. Memancing Ikan\n";
    cout << "B. Memasak\n";
    cout << "C. Coding\n\n";
    cout << "Jawab  :";
    cin >> ans1;
    switch (ans1)
    {
    case 'A':
    case 'a':
        cout << "jawaban Anda Salah ! Lanjut soal berikutnya ? (y/n)\n";
        cin >> chs2;
        {
            if ((chs2 == 'y') || (chs2 == 'Y'))
            {
                ppoint = 0;
                //tpoint();
                point = point + ppoint;
                goto soal2;
            }
            else if ((chs2 == 'n') || (chs2 == 'N'))
            {
                goto home;
                ;
            }
        }
        break;
    case 'B':
    case 'b':
        cout << "jawaban Anda Salah ! Lanjut soal berikutnya ? (y/n)\n";
        cin >> chs2;
        {
            if ((chs2 == 'y') || (chs2 == 'Y'))
            {
                ////ppoint = 0;
                ////tpoint();
                goto soal2;
            }
            else if ((chs2 == 'n') || (chs2 == 'N'))
            {
                ppoint = 0;
                goto home;
            }
        }
        break;
    case 'C':
    case 'c':
        cout << "Selamat, jawaban kamu benar. Lanjut ke soal berikutnya ? (y/n)\n";
        cin >> chs2;
        {
            if ((chs2 == 'y') || (chs2 == 'Y'))
            {
                ppoint = 25;
                //tpoint();
                point = point + ppoint;
                goto soal2;
            }
            else if ((chs2 == 'n') || (chs2 == 'N'))
            {
                goto home;
            }
        }
        break;

    default:
        exit(0);
    }

soal2: //soal 2
    system("CLS");
    cout << "Pertanyaan 2 :\n\n";
    cout << "Software yang digunakan programer untuk menulis dan mengcompile adalah...\n";
    cout << "A. Visual Studio Code\n";
    cout << "B. Adobe Premier Pro\n";
    cout << "C. Steam\n";
    cout << "D. Chrome\n\n";
    cout << "Jawab  :";
    cin >> ans2;
    switch (ans2)
    {
    case 'A':
    case 'a':
        cout << "Selamat, jawaban Kamu benar. Lanjut ke soal berikutnya ? (y/n)\n";
        cin >> chs3;
        {
            if ((chs3 == 'y') || (chs3 == 'Y'))
            {
                ppoint = 25;
                point = point + ppoint;
                //tpoint();
                goto soal3;
            }
            else if ((chs3 == 'n') || (chs3 == 'N'))
            {
                goto home;
            }
        }
        break;
    case 'B':
    case 'b':
        cout << "jawaban Anda Salah ! Lanjut soal berikutnya ? (y/n)\n";
        cin >> chs3;
        {
            if ((chs3 == 'y') || (chs3 == 'Y'))
            {
                //ppoint = 0;
                //tpoint();
                goto soal3;
            }
            else if ((chs3 == 'n') || (chs3 == 'N'))
            {
                goto home;
            }
        }
        break;
    case 'C':
    case 'c':
        cout << "jawaban Anda Salah ! Lanjut soal berikutnya ? (y/n)\n";
        cin >> chs3;
        {
            if ((chs3 == 'y') || (chs3 == 'Y'))
            {
                //ppoint = 0;
                //tpoint();
                goto soal3;
            }
            else if ((chs3 == 'n') || (chs3 == 'N'))
            {
                goto home;
            }
        }
        break;
    default:
        exit(0);
    }

soal3: //soal 3
    system("CLS");
    cout << "Pertanyaan tiga\n\n";
    cout << "Nama lain dari flowchart adalah...\n";
    cout << "A. jawaban 3\n";
    cout << "B. jawaban 3\n";
    cout << "C. jawaban 3\n";
    cout << "D. jawaban 3\n";
    cin >> ans3;
    switch (ans3)
    {
    case 'A':
    case 'a':
        cout << "jawaban Anda Salah ! Lanjut hasil nilai ? (y/n)\n";
        cin >> chs4;
        {
            if ((chs4 == 'y') || (chs4 == 'Y'))
            {
                //ppoint = 0;
                //tpoint();
                goto hasil;
            }
            else if ((chs4 == 'n') || (chs4 == 'N'))
            {
                goto home;
            }
        }
        break;
    case 'B':
    case 'b':
        cout << "Selamat, jawaban Kamu benar. Lanjut ke soal berikutnya ? (y/n)\n";
        cin >> chs3;
        {
            if ((chs3 == 'y') || (chs3 == 'Y'))
            {
                ppoint = 25;
                point = point + ppoint;
                //tpoint();
                goto soal4;
            }
            else if ((chs3 == 'n') || (chs3 == 'N'))
            {
                goto home;
            }
        }
        break;

    case 'C':
    case 'c':
        cout << "jawaban Anda Salah ! Lanjut hasil nilai ? (y/n)\n";
        cin >> chs4;
        {
            if ((chs4 == 'y') || (chs4 == 'Y'))
            {
                ppoint = 0;
                //tpoint();
                point = point + ppoint;
                goto hasil;
            }
            else if ((chs4 == 'n') || (chs4 == 'N'))
            {
                goto home;
            }
        }
        break;
    }
soal4: //soal 4
    system("CLS");
    cout << "Pertanyaan 4\n\n";
    cout << "Yang dimaksud dengan tipe data Double adalah ?\n";
    cout << "A. Bilangan Ganjil\n";
    cout << "B. Bilangan Desimal\n";
    cout << "C. Bilangan bulat\n";
    cin >> ans4;
    switch (ans4)
    {
    case 'A':
    case 'a':
        cout << "jawaban Anda Salah ! Lanjut hasil nilai ? (y/n)\n";
        cin >> chs5;
        {
            if ((chs5 == 'y') || (chs5 == 'Y'))
            {
                //ppoint = 0;
                //tpoint();
                goto hasil;
            }
            else if ((chs5 == 'n') || (chs5 == 'N'))
            {
                goto home;
            }
        }
        break;
    case 'B':
    case 'b':
        ppoint = 25;
        point = point + ppoint;
        //tpoint();
        goto hasil;
        break;

    case 'C':
    case 'c':
        cout << "jawaban Anda Salah ! Lanjut hasil nilai ? (y/n)\n";
        cin >> chs4;
        {
            if ((chs4 == 'y') || (chs4 == 'Y'))
            {
                ppoint = 0;
                //tpoint();
                point = point + ppoint;
                goto hasil;
            }
            else if ((chs4 == 'n') || (chs4 == 'N'))
            {
                goto home;
            }
        }
        break;
    default:
        exit(0);
    }
hasil: //hasil
    system("cls");
    system("COLOR 1E");
    cout << "Nilai Kamu Adalah " << point << endl;
    cout << "Selamat, kamu telah menjawab pertanyaan dalam game quiz ini\n";
    cout << "Terima kasih sudah bermain !";
    getch();
}
