# Aghik1
//Code Quiz

#include <iostream>
#include <conio.h>
#include <limits>
#include <cstdlib>
#include <cstring>
using namespace std;

//variabel
int point = 0;
char answer;

int main()
{
    char chs1, chs2, chs3, chs4, ans1, ans2, ans3;
    cout << "=====================================================\n";
    cout << "                    KUIS KOMPUTER                    \n";
    cout << "                 Press Enter to Start                        \n";
    cout << "Mau Langsung ke Pertanyaan Pertama ? (y/n)";
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
    cout << " soal pertama coba dulu sudah di perbaiki" << endl;
    cout << "A. jawaban 1\n";
    cout << "B. jawaban 1\n";
    cout << "C. jawaban 1\n";
    cout << "D. jawaban 1\n";
    cin >> ans1;
    switch (ans1)
    {
    case 'A':
    case 'a':
        cout << "jawaban Anda Salah. Silahkan ulang dari awal ! (y/n)\n";
        cin >> chs2;
        {
            if ((chs2 == 'y') || (chs2 == 'Y'))
            {
                goto soal1;
            }
            else if ((chs2 == 'n') || (chs2 == 'N'))
            {
                exit(0);
            }
        }
        break;
    case 'B':
    case 'b':
        cout << "maaf, jawaban masih belum tepat. Silahkan ulang dari awal ! (y/n)\n";
        cin >> chs2;
        {
            if ((chs2 == 'y') || (chs2 == 'Y'))
            {
                goto soal1;
            }
            else if ((chs2 == 'n') || (chs2 == 'N'))
            {
                exit(0);
            }
        }
        break;
    case 'C':
    case 'c':
        cout << "Selamat, jawaban kamu benar. Mau lanjut ke Pertanyaan berikutnya ? (y/n)\n";
        cin >> chs2;
        {
            if ((chs2 == 'y') || (chs2 == 'Y'))
            {
                point = point + 25;
                goto soal2;
            }
            else if ((chs2 == 'n') || (chs2 == 'N'))
            {
                exit(0);
            }
        }
        break;
    default:
        exit(0);
    }

soal2: //soal 2
    system("CLS");
    cout << "Pertanyaan 2 :\n\n";
    cout << "Ada berapa macam-macam Array ?\n";
    cout << "A. jawaban 2\n";
    cout << "B. jawaban 2\n";
    cout << "C. jawaban 2\n";
    cout << "D. jawaban 2\n";
    cin >> ans2;
    switch (ans2)
    {
    case 'A':
    case 'a':
        cout << "Selamat, jawaban kamu benar. Mau lanjut ke pertanyaan berikutnya ? (y/n)\n";
        cin >> chs3;
        {
            if ((chs3 == 'y') || (chs3 == 'Y'))
            {
                point = point + 25;
                goto soal3;
            }
            else if ((chs3 == 'n') || (chs3 == 'N'))
            {
                exit(0);
            }
        }
        break;
    case 'B':
    case 'b':
        cout << "maaf, jawaban masih belum tepat. Silahkan ulang dari awal ! (y/n)\n";
        cin >> chs3;
        {
            if ((chs3 == 'y') || (chs3 == 'Y'))
            {
                goto soal1;
            }
            else if ((chs3 == 'n') || (chs3 == 'N'))
            {
                exit(0);
            }
        }
        break;
    case 'C':
    case 'c':
        cout << "maaf, jawaban masih belum tepat. Silahkan ulang dari awal ! (y/n)\n";
        cin >> chs3;
        {
            if ((chs3 == 'y') || (chs3 == 'Y'))
            {
                goto soal1;
            }
            else if ((chs3 == 'n') || (chs3 == 'N'))
            {
                exit(0);
            }
        }
        break;
    default:
        exit(0);
    }

soal3: //soal 3
    system("CLS");
    cout << "Pertanyaan 3 :\n\n";
    cout << "soal nomber three\n";
    cout << "A. jawaban 3\n";
    cout << "B. jawaban 3\n";
    cout << "C. jawaban 3\n";
    cout << "D. jawaban 3\n";
    cin >> ans3;
    switch (ans3)
    {
    case 'A':
    case 'a':
        cout << "maaf, jawaban masih belum tepat. Silahkan ulang dari awal ! (y/n)\n";
        cin >> chs4;
        {
            if ((chs4 == 'y') || (chs4 == 'Y'))
            {
                goto soal1;
            }
            else if ((chs4 == 'n') || (chs4 == 'N'))
            {
                exit(0);
            }
        }
        break;
    case 'B':
    case 'b':
        point = point + 25;
        goto hasil;
        break;
    default:
        exit(0);
    case 'C':
    case 'c':
        cout << "maaf, jawaban masih belum tepat. Silahkan ulang dari awal ! (y/n)\n";
        cin >> chs4;
        {
            if ((chs4 == 'y') || (chs4 == 'Y'))
            {
                goto soal1;
            }
            else if ((chs4 == 'n') || (chs4 == 'N'))
            {
                exit(0);
            }
        }
        break;
    }
hasil: //hasil
    system("cls");
    system("COLOR 1E");
    cout << "Nilai Kamu Adalah " << point << endl;
    cout << "Selamat, kamu telah menjawab semua pertanyaan dalam game quiz ini\n";
    cout << "Terima kasih sudah bermain";
    getch();
}
