#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main(){
char name[50], JnsKel[10];

    string ruangan, an, NamaDr;

    char alamat[50], diagnosa[50];

    int dokter, kamar, lama, rm, PilihDr;

    long int HrgKamar, JasaDr, TotalObat, tindakan;

  int pilih;

  char choice(2);


a:
system("cls");
  cout<<"1. Menu Pasien"<<endl;

  cout<<"2. Menu Poli"<<endl;

  cout<<"3. Menu Transaksi Pendaftaran"<<endl;

  cout<<"Pilih [1 / 2 / 3] = ";

  cin>>pilih;



  if(pilih == 1)

  {
  	system("cls");
    cout<<"Nama            = ";

    cin>>name;

    cout<<endl;



    cout<<"No. Rekam Medis = ";

    cin>>rm;

    cout<<endl;



    cout<<"Alamat          = ";

    cin>>alamat;

    cout<<endl;



    cout<<"Jenis Kelamin   = ";

    cin>>JnsKel;

    cout<<endl;



    cout<<"Lama Menginap     = ";

    cin>>lama;

    cout<<endl;



    cout<<"Diagnosa         = ";

    cin>>diagnosa;

    cout<<endl;
  }

  else if (pilih == 2)

  {
  	system("cls");
    cout<<"Pilih Poli :  "<<endl;

    cout<<"1.Poli Bedah : Dr. Jamie Robert "<<endl;

    cout<<"2.Poli Anak : Dr. Anggi Venusia "<<endl;

    cout<<"3.Poli Mata : Dr. Reyna A Lily"<<endl;

    cout<<"4.Poli Penyakit Dalam : Dr. Ibnu Sina"<<endl;

    cout<<"5.Poli Umum : Dr. Giallyn Geneva C "<<endl;

    cout<<endl;



    cout<<"Pilih [ 1-5 ]= ";

    cin>>PilihDr;



            switch (PilihDr)

            {

            case 1:

                cout<<"--- Poli Bedah ---\n";

                NamaDr="Dr. Jamie Robert";



                JasaDr=150000;

                break;



            case 2:

                cout<<"--- Poli Anak ---\n";

                NamaDr="Dr. Anggi Venusia";



                JasaDr=200000;

                break;



            case 3:

                cout<<"--- Poli Mata ---\n";

                NamaDr="Dr. Reyna A Lily";



                JasaDr=150000;

                break;



            case 4:

                cout<<"--- Poli Penyakit Dalam ---\n";

                NamaDr="Dr. Ibnu Sina";



                JasaDr=175000;

                break;



            case 5:

                cout<<"--- Poli Umum ---\n";

                NamaDr="Dr. Harvey R Horan";



                JasaDr=150000;

                break;



            default:

                cout<<"Tidak Tersedia";

                break;

            }
            
    cout << endl;
	cout<<"Pilih Dokter:\n";

    cout<<"1. Dokter Anak\n";

    cout<<"2. Dokter Penyakit Dalam\n";

    cout<<"3. Dokter Mata\n";

    cout<<"4. Dokter Umum\n";

    cout<<"5. Dokter Bedah Umum\n";

    cout<<"Pilihan Anda [ 1/2/3/4/5 ]= ";

    cin>>dokter;



    switch (dokter)

    {

    case 1:

        NamaDr="Dokter Anak";

        cout<<"--- "<<NamaDr<<" ---";

        JasaDr=145000;

        break;



    case 2:

        NamaDr="Dokter Penyakit Dalam";

        cout<<"--- "<<NamaDr<<" ---";

        JasaDr=200000;

        break;



    case 3:

        NamaDr="Dokter Mata";

        cout<<"--- "<<NamaDr<<" ---";

        JasaDr=170000;

        break;



    case 4:

        NamaDr="Dokter Umum";

        cout<<"--- "<<NamaDr<<" ---";

        JasaDr=150000;

        break;



    case 5:

        NamaDr="Dokter Bedah Umum";

        cout<<"--- "<<NamaDr<<" ---";

        JasaDr=150000;

        break;

    }
  }

  else if(pilih == 3){
  		system("cls");
        cout<<"Nama             = "<<name<<endl;

        cout<<"No. Rekam Medis  = "<<rm<<endl;

        cout<<"Jenis Kelamin    = "<<JnsKel<<endl;

        cout<<"Dokter Tujuan    = "<<dokter<<endl;



        cout<<"========================================\n";



        cout<<"     TOTAL YANG HARUS DIBAYAR        \n";

        cout<<"Nama Pasien      = "<<name<<endl;

        cout<<"No. Rekam Medis  = "<<rm<<endl;

        cout<<"Atas Nama        = ";

        cin>>an;



        cout<<"Dokter           = "<<NamaDr<<endl;

        cout<<"Jasa Dokter      = Rp. "<<JasaDr<<endl;

        cout<<"Total Obat       = Rp. ";

        cin>>TotalObat;

        cout<<"Biaya Admin      = Rp. ";

        cin>>tindakan;



        long int TotalBiaya;



        TotalBiaya = JasaDr + TotalObat + tindakan;

        cout<<"Total Biaya      = Rp. "<<TotalBiaya;
  }
  
  else

  {

   cout<<"Wrong input";

  }

  cout<<endl;



        cout<<"\nBack to Menu [Y / N]: ";

        cin>>choice;



        if(choice == 'y')

        {

            goto a;

        }

        else

        {

            system("cls");

        }
 }
