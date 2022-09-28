 /*Judul		:Tugas Besar */
/*Deskripsi	:Program Rumah Sakit Sederhana*/
/*Pembuat	:Made Marshall Vira Deva*/
/*NIM 		:2105551093*/


#include <stdio.h>      //library input output
#include <string.h>     //library untuk mencetak data string
#include <windows.h>    //untuk merubah warna 
#include <conio.h>
//Fungsi Membuat Header Aplikasi
void header(){
    printf("\n\n\n\t ***   ==================================================================================== \n");
    printf("\t* * * |                           RUMAH SAKIT BANGLI MEDIKA CANTI                          |\n");
    printf("\t ***  |          JL. L.C. Subak Aya, Kawan, Kec. Bangli, Kabupaten Bangli, Bali 80661      |  ***\n");
    printf("\t      |                 telepon: +62 366 93444    Website: www.rsbmcbangli.com             | * * *\n");
    printf("\t       ====================================================================================   ***\n");
}
//note
// Fungsi ini tidak memerlukan input apapun sehingga jika dipanggil akan langsung muncul tanpa memerlukan input

//Fungsi Membuat Menu Pilihan kamar untuk  rawat inap
void menu_kamar(int pilihan){
    system("cls"); //sebuah untuk membuat layar menjadi bersih agar pada saat running code tidak diteruskan ke bawah melainkan langsung membuat halaman baru
    header();      //fungsi header
    printf("\n\t                 ===============================================================\n");
    printf("\t                |               RUMAH SAKIT BANGLI MEDIKA CANTI                 |\n");
    printf("\t                 ===============================================================\n");
    printf("\t                 _______________________________________________________________ \n");
    printf("\t                |    |                                                          |\n");
    printf("\t                | No.|   Jenis Kamar                                            |\n");
    printf("\t                |____|__________________________________________________________|\n");
    printf("\t                | 1. |   VVIP       -   SHADEWA                                 |\n");
    printf("\t                | 2. |   VIP        -   NAKULA                                  |\n");
    printf("\t                | 3. |   Kelas I    -   YUDISTIRA                               |\n");
    printf("\t                | 4. |   Kelas II   -   BIMA                                    |\n");
    printf("\t                | 5. |   BPJS       -   ARJUNA                                  |\n");
    printf("\t                |____|__________________________________________________________|\n");
}
//note
//fungsi menu_kamar memerlukan input pilihan untuk menjalankan fungsinya

//Fungsi Pilihan kamar
void pilihan_kamar(int pilkamar){
    system("cls");              // fungsi untuk membersihkan layar 
    int harga;                  //variabel harga pada setiap kamar
    char jenis_kamar[30];       //variabel jenis kamar
    header();                   //fungsi header
    //cek kondisi pilihan yang dimasukan
    if(pilkamar >=1 || pilkamar <=5){
        if(pilkamar == 1){
            printf("\n\t                =================================================================\n");
            printf("\t               |                              VVIP                               |\n");
            printf("\t                =================================================================\n");
            printf("\t               | Fasilitas Kamar                                                 |\n");
            printf("\t               | 1. | Air Conditioner                      11. Meja              |\n");
            printf("\t               | 2. | 1 Bed                                12. TV LED 40'        |\n");
            printf("\t               | 3. | 1 Kamar mandi (air panas & dingin)   13. Sofabed           |\n");
            printf("\t               | 4. | Bedside cabinet                      14. Kulkas            |\n");
            printf("\t               | 5. | Kursi tunggu                         15. Bed penunggu      |\n");
            printf("\t               | 6. | Overbed table                        16. Telepon           |\n");
            printf("\t               | 7. | Meja TV                              17. Ruang keluarga    |\n"); 
            printf("\t               | 8. | Almari pakaian                       18. 1 Set meja makan  |\n");
            printf("\t               | 9. | Refigrator                           19. Kitchen set       |\n");
            printf("\t               | 10.| Dispencer                            20. Mini bar          |\n");
            printf("\t                =================================================================\n");
            printf("\t               | Tarif Kamar per malam Rp. 3.500.000,-                           |\n");
            printf("\t                =================================================================\n");
        
        }else if(pilkamar == 2){
            printf("\n\t                =================================================================\n");
            printf("\t               |                               VIP                               |\n");
            printf("\t               =================================================================\n");
            printf("\t               | Fasilitas Kamar                                                 |\n");
            printf("\t               | 1. | Air Conditioner                      11. Meja              |\n");
            printf("\t               | 2. | 1 Bed                                12. TV LED 32'        |\n");
            printf("\t               | 3. | 1 Kamar mandi (air panas & dingin)   13. Sofabed           |\n");
            printf("\t               | 4. | Bedside cabinet                      14. Kulkas            |\n");
            printf("\t               | 5. | Kursi tunggu                         15. Bed penunggu      |\n");
            printf("\t               | 6. | Overbed table                                              |\n");
            printf("\t               | 7. | Meja TV                                                    |\n");
            printf("\t               | 8. | Almari pakaian                                             |\n");
            printf("\t               | 9. | Refigrator                                                 |\n");
            printf("\t               | 10.| Dispencer                                                  |\n");
            printf("\t                =================================================================\n");
            printf("\t               | Tarif Kamar per malam Rp. 2.500.000,-                           |\n");
            printf("\t                =================================================================\n");
                
        }else if(pilkamar == 3){
            printf("\n\t                =================================================================\n");
            printf("\t               |                             KELAS I                             |\n");
            printf("\t                =================================================================\n");
            printf("\t               | Fasilitas Kamar                                                 |\n");
            printf("\t               | 1. | Air Conditioner                                            |\n");
            printf("\t               | 2. | 1 Bed                                                      |\n");
            printf("\t               | 3. | 1 Kamar mandi (air panas & dingin)                         |\n");
            printf("\t               | 4. | Bedside cabinet                                            |\n");
            printf("\t               | 5. | 1 Set Sofa                                                 |\n");
            printf("\t               | 6. | Bed penunggu                                               |\n");
            printf("\t               | 7. | Kursi Tunggu                                               |\n");
            printf("\t               | 8. | Meja                                                       |\n");
            printf("\t               | 9. | Lemari Kecil                                               |\n");
            printf("\t               | 10.| TV LED 24'                                                 |\n");
            printf("\t                =================================================================\n");
            printf("\t               | Tarif Kamar per malam Rp. 1.300.000,-                           |\n");
            printf("\t                =================================================================\n");
                
        }else if(pilkamar == 4){
            printf("\n\t                =================================================================\n");
            printf("\t               |                             KELAS II                            |\n");
            printf("\t                =================================================================\n");
            printf("\t               | Fasilitas Kamar                                                 |\n");
            printf("\t               | 1. | Air Conditioner                                            |\n");
            printf("\t               | 2. | 1 Bed                                                      |\n");
            printf("\t               | 3. | 1 Kamar mandi (air panas & dingin)                         |\n");
            printf("\t               | 4. | Bedside cabinet                                            |\n");
            printf("\t               | 5. | Kursi Tunggu                                               |\n");
            printf("\t               | 6. | Lemari Kecil                                               |\n");
            printf("\t               | 7. | TV LED 21'                                                 |\n"); 
            printf("\t                =================================================================\n");
            printf("\t               | Tarif Kamar per malam Rp. 800.000,-                             |\n");
            printf("\t                =================================================================\n");

        }else if(pilkamar == 5){
            printf("\n\t                =================================================================\n");
            printf("\t               |                               BPJS                              |\n");
            printf("\t                =================================================================\n");
            printf("\t               | Fasilitas Kamar                                                 |\n");
            printf("\t               | 1. | Air Conditioner                                            |\n");
            printf("\t               | 2. | 2 Bed (untuk 2 pasien)                                     |\n");
            printf("\t               | 3. | 1 Kamar mandi (air panas & dingin)                         |\n");
            printf("\t               | 4. | Bedside cabinet                                            |\n");
            printf("\t               | 5. | Kursi Tunggu                                               |\n");
            printf("\t                =================================================================\n");
            printf("\t               | Tarif Kamar ditanggung BPJS                                     |\n");
            printf("\t                =================================================================\n");
        }   
    }
}
//note
//fungsi pilihan_kamar memerlukan input pilkamar untuk menjalankan fungsinya
//terdapat 5 pilihan kamar yang bisa dipilih


//Fungsi Cetak Struk Rawat Inap
void cetak_struk(char nama[50],char alamat[100],int jk,char notelp[20],int usia,int periode, int pilkamar){
    char jenis_kamar[30];                   //variabel jenis_kamar
    int harga,total1;                       //variabel harga dan total harga 
    char jenis_kelamin[20];
    system("cls");                          // fungsi untuk membersihkan layar 
    header();                               //fungsi header
    if(pilkamar==1){
        strcpy(jenis_kamar,"SHADEWA");      //nama jenis kamar vvip
        harga = 3500000;                    //harga kamar vvip
    }else if(pilkamar ==2){
        harga = 2500000;                    //harga kamar vip
        strcpy(jenis_kamar,"NAKULA");       //nama jenis kamar vip
    }else if(pilkamar == 3){
        harga = 1300000;                    //harga kamar kelas 1
        strcpy(jenis_kamar,"YUDISTIRA");    //nama jenis kamar kelas 1
    }else if(pilkamar ==4){
        harga = 800000;                   //harga kamar kelas 2
        strcpy(jenis_kamar,"BIMA");         //nama jenis kamar kelas 2
    }else if(pilkamar ==5){
        harga = 0;                          //harga kamar bpjs
        strcpy(jenis_kamar,"ARJUNA");       //nama jenis kamar bpjs
    }

    if(jk==1){
        strcpy(jenis_kelamin, "Laki-Laki");
    }else if(jk==2){
        strcpy(jenis_kelamin, "Perempuan");
    }
    //strcpy Digunakan untuk menyalin nilai string
    total1=(periode*harga);                 //perhitungan total harga rawat inap
    printf("\t                                    SURAT KETERANGAN PERAWATAN                             \n\n\n");
    printf("\t        Identitas Pasien                                                                     \n");
    printf("\t        ----------------                                                                      \n");
    printf("\t        Nama Pasien           || %s                                                        \n",nama);
    printf("\t        Usia                  || %d tahun                                                  \n",usia);
    printf("\t        Jenis Kelamin         || %s                                                         \n",jenis_kelamin);
    printf("\t        No. Telepon           || %s                                                        \n",notelp);
    printf("\t        Alamat                || %s                                                        \n\n\n\n", alamat); 
    printf("\t        Rincian Biaya                                                                      \n");
    printf("\t        -------------                                                                      \n");
    printf("\t        Pilihan Kamar         || %s                                                        \n",jenis_kamar);
    printf("\t        Biaya Kamar per malam || Rp %d,-                                                   \n",harga);
    printf("\t        Periode (malam)       || %d malam                                                  \n\n\n\n", periode);
    printf("\t        Total Biaya           || Rp %d,-                                                  \n",total1);
    printf("\t       ==================================================================================== \n");
    printf("\t      |                                SEMOGA SEHAT SELALU                                 |\n");
    printf("\t       ==================================================================================== \n");
    system("pause");
}
//note 
//pada fungsi cetak struk rawat inp ini memerlukan input nama,alamat,jk,notelp,usia,periode,pilkamar agar bisa dieksekusi


//Fungsi menu konsul
void menu_konsul(int pilihan){
    system("cls");      // fungsi untuk membersihkan layar 
    header();           //fungsi header
    printf("\n\t           ===============================================================\n");
    printf("\t          |               RUMAH SAKIT BANGLI MEDIKA CANTI                 |\n");
    printf("\t           ===============================================================\n");
    printf("\t           _______________________________________________________________ \n");
    printf("\t          |    |                                                          |\n");
    printf("\t          | No.|   Pelayanan yang Tersedia                                |\n");
    printf("\t          |____|__________________________________________________________|\n");
    printf("\t          | 1. |   POLI ANAK                                              |\n");
    printf("\t          | 2. |   POLI THT                                               |\n");
    printf("\t          | 3. |   POLI JANTUNG                                           |\n");
    printf("\t          | 4. |   POLI GIGI                                              |\n");
    printf("\t          | 5. |   POLI MATA                                              |\n");
    printf("\t          | 6. |   POLI JIWA                                              |\n");
    printf("\t          | 7. |   POLI KULIT DAN KELAMIN                                 |\n");
    printf("\t          | 8. |   POLI SARAF                                             |\n");
    printf("\t          | 9. |   POLI OBGYN                                             |\n"); 
    printf("\t          | 10.|   POLI INTERNA                                           |\n");
    printf("\t          |____|__________________________________________________________|\n");
}
//note
//fungsi menu_konsul memerlukan input pilihan agar fungsi ini bisa dijalankan
//terdapat 10 varian konsultasi untuk dipilih
//penggunaan strcpy
//Fungsi strcpy() digunakan untuk meng-copy string dari sebuah variabel ke variabel yang lainnya.


//Fungsi Pilihan Konsultasi
void  pilihan_konsul(int pilkonsul){
    system("cls");          // fungsi untuk membersihkan layar 
    header();               //fungsi header
    //Cek kondisi pilihan kamar
    if(pilkonsul==1){
        printf("\n\t                =================================================================\n");
        printf("\t               |                            POLI ANAK                            |\n");
        printf("\t                =================================================================\n");
        printf("\t               |  Pelayanan Spesialis Anak                                       |\n");
        printf("\t               |  |#############|    dr. Surya Jayanti Sp.A                      |\n");
        printf("\t               |  |             |    Spesialis:                                  |\n");
        printf("\t               |  |             |    Anak                                        |\n");
        printf("\t               |  |    PHOTO    |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |#############|                                                |\n");
        printf("\t                =================================================================\n");
        printf("\t               |  Biaya konsultasi Rp. 150.000,-                                 |\n");
        printf("\t               |  Biaya obat  Rp 50.000,-                                        |\n");
        printf("\t                =================================================================\n");
    }else if(pilkonsul==2){
        printf("\n\t                 =================================================================\n");
        printf("\t               |                             POLI THT                            |\n");
        printf("\t                =================================================================\n");
        printf("\t               |  Pelayanan Spesialis THT                                        |\n");
        printf("\t               |  |#############|    dr. Putu Sudiasa Sp.THT                     |\n");
        printf("\t               |  |             |    Spesialis:                                  |\n");
        printf("\t               |  |             |    Telinga Hidung Tenggorokan                  |\n");
        printf("\t               |  |    PHOTO    |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |#############|                                                |\n");
        printf("\t                =================================================================\n");
        printf("\t               |  Biaya konsultasi Rp. 300.000,-                                 |\n");
        printf("\t               |  Biaya obat  Rp 100.000,-                                       |\n");
        printf("\t                =================================================================\n");
    }else if(pilkonsul==3){
        printf("\n\t                 =================================================================\n");
        printf("\t               |                            POLI JANTUNG                         |\n");
        printf("\t                =================================================================\n");
        printf("\t               |  Pelayanan Spesialis Jantung                                    |\n");
        printf("\t               |  |#############|    dr. Suryawati Sp.Jp                         |\n");
        printf("\t               |  |             |    Spesialis:                                  |\n");
        printf("\t               |  |             |    Jantung                                     |\n");
        printf("\t               |  |    PHOTO    |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |#############|                                                |\n");
        printf("\t                =================================================================\n");
        printf("\t               |  Biaya konsultasi Rp. 400.000,-                                 |\n");
        printf("\t               |  Biaya obat  Rp 200.000,-                                       |\n");
        printf("\t                =================================================================\n");
    }else if(pilkonsul==4){
        printf("\n\t                 =================================================================\n");
        printf("\t               |                             POLI GIGI                           |\n");
        printf("\t                =================================================================\n");
        printf("\t               |  Pelayanan Spesialis Gigi                                       |\n");
        printf("\t               |  |#############|    drg. Made Suparta                           |\n");
        printf("\t               |  |             |    Spesialis:                                  |\n");
        printf("\t               |  |             |    Gigi                                        |\n");
        printf("\t               |  |    PHOTO    |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |#############|                                                |\n");
        printf("\t                =================================================================\n");
        printf("\t               |  Biaya konsultasi Rp. 200.000,-                                 |\n");
        printf("\t               |  Biaya obat  Rp 100.000,-                                       |\n");
        printf("\t                =================================================================\n");       
    }else if(pilkonsul==5){
        printf("\n\t                 =================================================================\n");
        printf("\t               |                             POLI MATA                           |\n");
        printf("\t                =================================================================\n");
        printf("\t               |  Pelayanan Spesialis Mata                                       |\n");
        printf("\t               |  |#############|    dr. I.A Pertami Dewi Sp.M                   |\n");
        printf("\t               |  |             |    Spesialis:                                  |\n");
        printf("\t               |  |             |    Mata                                        |\n");
        printf("\t               |  |    PHOTO    |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |#############|                                                |\n");
        printf("\t                =================================================================\n");
        printf("\t               |  Biaya konsultasi Rp. 150.000,-                                 |\n");
        printf("\t               |  Biaya obat  Rp 100.000,-                                       |\n");
        printf("\t                =================================================================\n");       
    }else if(pilkonsul==6){
        printf("\n\t                 =================================================================\n");
        printf("\t               |                             POLI JIWA                           |\n");
        printf("\t                =================================================================\n");
        printf("\t               |  Pelayanan Spesialis Jiwa                                       |\n");
        printf("\t               |  |#############|    dr. Putra Astawa Sp.Kj                      |\n");
        printf("\t               |  |             |    Spesialis:                                  |\n");
        printf("\t               |  |             |    Jiwa                                        |\n");
        printf("\t               |  |    PHOTO    |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |#############|                                                |\n");
        printf("\t                =================================================================\n");
        printf("\t               |  Biaya konsultasi Rp. 300.000,-                                 |\n");
        printf("\t               |  Biaya obat  Rp 150.000,-                                       |\n");
        printf("\t                =================================================================\n");  
    }else if(pilkonsul==7){
        printf("\n\t                 =================================================================\n");
        printf("\t               |                      POLI KULIT DAN KELAMIN                     |\n");
        printf("\t                =================================================================\n");
        printf("\t               |  Pelayanan Spesialis Kulit dan Kelamin                          |\n");
        printf("\t               |  |#############|    dr. Basuki Sp.KK                            |\n");
        printf("\t               |  |             |    Spesialis:                                  |\n");
        printf("\t               |  |             |    Kulit dan Kelamin                           |\n");
        printf("\t               |  |    PHOTO    |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |#############|                                                |\n");
        printf("\t                =================================================================\n");
        printf("\t               |  Biaya konsultasi Rp. 300.000,-                                 |\n");
        printf("\t               |  Biaya obat  Rp 200.000,-                                       |\n");
        printf("\t                =================================================================\n"); 
    }else if(pilkonsul==8){
        printf("\n\t                 =================================================================\n");
        printf("\t               |                             POLI SARAF                          |\n");
        printf("\t                =================================================================\n");
        printf("\t               |  Pelayanan Spesialis Saraf                                      |\n");
        printf("\t               |  |#############|    dr. Trisna Lestari Sp.S                     |\n");
        printf("\t               |  |             |    Spesialis:                                  |\n");
        printf("\t               |  |             |    Saraf                                       |\n");
        printf("\t               |  |    PHOTO    |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |#############|                                                |\n");
        printf("\t                =================================================================\n");
        printf("\t               |  Biaya konsultasi Rp. 200.000,-                                 |\n");
        printf("\t               |  Biaya obat  Rp 100.000,-                                       |\n");
        printf("\t                =================================================================\n");        
    }else if(pilkonsul==9){
        printf("\n\t                 =================================================================\n");
        printf("\t               |                             POLI OBGYN                          |\n");
        printf("\t                =================================================================\n");
        printf("\t               |  Pelayanan Spesialis Obgyn / Kandungan                          |\n");
        printf("\t               |  |#############|    dr. Wedagama Sp.OG                          |\n");
        printf("\t               |  |             |    Spesialis:                                  |\n");
        printf("\t               |  |             |    Obgyn / Kandungan                           |\n");
        printf("\t               |  |    PHOTO    |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |#############|                                                |\n");
        printf("\t                =================================================================\n");
        printf("\t               |  Biaya konsultasi Rp. 400.000,-                                 |\n");
        printf("\t               |  Biaya obat  Rp 250.000,-                                       |\n");
        printf("\t                =================================================================\n");        
    }else if(pilkonsul==10){
        printf("\n\t                 =================================================================\n");
        printf("\t               |                            POLI INTERNA                         |\n");
        printf("\t                =================================================================\n");
        printf("\t               |  Pelayanan Spesialis Interna / Penyakit Dalam                   |\n");
        printf("\t               |  |#############|    dr. Sutarjana Sp.PD                         |\n");
        printf("\t               |  |             |    Spesialis:                                  |\n");
        printf("\t               |  |             |    Interna / Penyakit Dalam                    |\n");
        printf("\t               |  |    PHOTO    |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |             |                                                |\n");
        printf("\t               |  |#############|                                                |\n");
        printf("\t                =================================================================\n");
        printf("\t               |  Biaya konsultasi Rp. 300.000,-                                 |\n");
        printf("\t               |  Biaya obat  Rp 100.000,-                                       |\n");
        printf("\t                =================================================================\n");                
    } 
}      
//note
//pada fungsi pilihan_konsul memerlukan input pilkonsul untuk menjalankan fungsinya
//terdapat 10 dokter dan 10 pilihan konsultasi





//Fungsi Cetak Struk Poliklinik
void cetak_struk2(char nama[50],char alamat[100],int jk,char notelp[20],int usia, int pilkonsul,int metode_pembayaran){
    int harga_konsul,harga_obat,total2;         // deklarasi variabel 
    char nama_dokter[50];
    char perawatan[100];
    char nama_pembayaran[50];
    char jenis_kelamin[20];
    system("cls");                              // fungsi untuk membersihkan layar 
    header();                                   //fungsi header
    //cek kondisi pilihan konsul
    if(pilkonsul==1){ 
        harga_konsul = 150000;                                              //harga konsultasi
        harga_obat = 50000;                                                 //harga obat
        strcpy(perawatan,"Pelayanan Spesialis Anak");                       //nama poliklinik
        strcpy(nama_dokter,"dr. Surya Jayanti Sp.A");                       //nama dokter
    }else if(pilkonsul==2){
        harga_konsul = 300000;                                              //harga konsultasi
        harga_obat = 100000;                                                //harga obat
        strcpy(perawatan,"Pelayanan Spesialis THT");                        //nama poliklinik
        strcpy(nama_dokter,"dr. Putu Sudiasa Sp.THT");                      //nama dokter
    }else if(pilkonsul== 3){
        harga_konsul = 400000;                                              //harga konsultasi
        harga_obat = 200000;                                                //harga obat
        strcpy(perawatan,"Pelayanan Spesialis Jantung");                    //nama poliklinik
        strcpy(nama_dokter,"dr. Suryawati Sp.Jp");                          //nama dokter
    }else if(pilkonsul==4){
        harga_konsul = 200000;                                              //harga konsultasi
        harga_obat = 100000;                                                //harga obat
        strcpy(perawatan,"Pelayanan Spesialis Gigi");                       //nama poliklinik
        strcpy(nama_dokter,"drg. Made Suparta");                            //nama dokter
    }else if(pilkonsul==5){
        harga_konsul = 150000;                                              //harga konsultasi
        harga_obat = 100000;                                                //harga obat
        strcpy(perawatan,"Pelayanan Spesialis Mata");                       //nama poliklinik
        strcpy(nama_dokter,"dr. I.A Pertami Dewi Sp.M");                    //nama dokter
    }else if(pilkonsul==6){
        harga_konsul = 3000000;                                             //harga konsultasi
        harga_obat = 150000;                                                //harga obat
        strcpy(perawatan,"Pelayanan Spesialis Jiwa");                       //nama poliklinik
        strcpy(nama_dokter,"dr. Putra Astawa Sp.Kj");                       //nama dokter
    }else if(pilkonsul==7){
        harga_konsul = 3000000;                                             //harga konsultasi
        harga_obat = 200000;                                                //harga obat
        strcpy(perawatan,"Pelayanan Spesialis Kulit dan Kelamin");          //nama poliklinik
        strcpy(nama_dokter,"dr. Basuki Sp.KK");                             //nama dokter
    }else if(pilkonsul==8){
        harga_konsul = 2000000;                                             //harga konsultasi
        harga_obat = 100000;                                                //harga obat
        strcpy(perawatan,"Pelayanan Spesialis Saraf");                      //nama poliklinik
        strcpy(nama_dokter,"dr. Trisna Lestari Sp.S");                      //nama dokter
    }else if(pilkonsul==9){
        harga_konsul = 400000;                                              //harga konsultasi
        harga_obat = 250000;                                                //harga obat
        strcpy(perawatan,"Pelayanan Spesialis Obgyn / Kandungan");          //nama poliklinik
        strcpy(nama_dokter,"dr. Wedagama Sp.OG");                           //nama dokter
    }else if(pilkonsul==10){
        harga_konsul = 300000;                                              //harga konsultasi
        harga_obat = 100000;                                                //harga obat
        strcpy(perawatan,"Pelayanan Spesialis Interna / Penyakit Dalam");   //nama poliklinik
        strcpy(nama_dokter,"dr. Sutarjana Sp.PD");                          //nama dokter
    }
    total2=(harga_konsul+harga_obat);                                    //perhitungan total harga konsultasi
    if(metode_pembayaran==2){
        strcpy(nama_pembayaran,"BPJS");
        total2 = 0;
    }else{
        strcpy(nama_pembayaran,"UMUM");
    }
    
    if(jk==1){
        strcpy(jenis_kelamin, "Laki-Laki");
    }else if(jk==2){
        strcpy(jenis_kelamin, "Perempuan");
    }

    printf("\t                                    SURAT KETERANGAN PERAWATAN                             \n\n\n");
    printf("\t        Identitas Pasien                                                                     \n");
    printf("\t        ----------------                                                                      \n");
    printf("\t        Nama Pasien           || %s                                                        \n",nama);
    printf("\t        Usia                  || %d tahun                                                  \n",usia);
    printf("\t        Jenis Kelamin         || %s                                                         \n",jenis_kelamin);
    printf("\t        No. Telepon           || %s                                                        \n",notelp);
    printf("\t        Alamat                || %s                                                        \n\n\n", alamat); 
    printf("\t        Pilihan Konsultasi                                                               \n");
    printf("\t        ----------------                                                                   \n");
    printf("\t        Jenis Perawatan       || %s                                                        \n",perawatan);
    printf("\t        Dokter                || %s                                                        \n\n\n\n",nama_dokter);
    printf("\t        Rincian Biaya                                                                      \n");
    printf("\t        -------------                                                                      \n");
    printf("\t        Biaya Konsultasi      || Rp %d,-                                                   \n",harga_konsul);
    printf("\t        Biaya Obat            || Rp %d,-                                                   \n",harga_obat);
    printf("\t        Metode Pembayaran     || %s                                                   \n\n\n\n",nama_pembayaran);
    printf("\t        Total Biaya           || Rp %d ,-                                                  \n",total2);
    printf("\t       ==================================================================================== \n");
    printf("\t      |                                SEMOGA SEHAT SELALU                                 |\n");
    printf("\t       ==================================================================================== \n");
    system("pause");                                            //
}
//note
//fungsi cetak struk poliklinik memerlukan input nama,alamat,jk,notelp,usia,pilkonsul agar fungsinya dapat berjalan
//penggunaan strcpy 
//Fungsi strcpy() digunakan untuk meng-copy string dari sebuah variabel ke variabel yang lainnya.


//Fungsi Visi dan Misi
void visi_misi(int pilihan){
    system("cls");                  //fungsi membersihkan layar
    header();                       //fungsi header
    printf("\n\t                                               VISI\n");
    printf("\t            Menyelenggarakan pelayanan profesional bermutu, sesuai kebutuhan masyarakat\n"); 
    printf("\t             yang di dukung oleh pengembangan ilmu pengetahuann & tehnologi kedokteran \n");
    printf("\t                                           yang relevan.\n\n");
    printf("\n\t                                               MISI\n");
    printf("\t             1. Manajemen rumah sakit yang profesional.efektif & efesien.\n");
    printf("\t             2. Mengembangkan pelayanan unggulan bermutu.\n");
    printf("\t             3. Pelayanan yang di dasari oleh budaya senyum,salam,sapa, sopan & santun.\n");
    printf("\t             4. Mewujudkan kepuasan pasien & internal rumah sakit.\n");
}
//note
//fungsi visi misi memerlukan input pilihan untuk menjalankan fungsinya


void export_struk_ri(char nama[50],char alamat[100],int jk,char notelp[20],int usia,int periode, int pilkamar){
    char jenis_kamar[30];                   //variabel jenis_kamar
    int harga,total1;                       //variabel harga dan total harga 
    char jenis_kelamin[20];
    if(pilkamar==1){
        strcpy(jenis_kamar,"SHADEWA");      //nama jenis kamar vvip
        harga = 3500000;                    //harga kamar vvip
    }else if(pilkamar ==2){
        harga = 2500000;                    //harga kamar vip
        strcpy(jenis_kamar,"NAKULA");       //nama jenis kamar vip
    }else if(pilkamar == 3){
        harga = 1300000;                    //harga kamar kelas 1
        strcpy(jenis_kamar,"YUDISTIRA");    //nama jenis kamar kelas 1
    }else if(pilkamar ==4){
        harga = 800000;                   //harga kamar kelas 2
        strcpy(jenis_kamar,"BIMA");         //nama jenis kamar kelas 2
    }else if(pilkamar ==5){
        harga = 0;                          //harga kamar bpjs
        strcpy(jenis_kamar,"ARJUNA");       //nama jenis kamar bpjs
    }

    if(jk==1){
        strcpy(jenis_kelamin, "Laki-Laki");
    }else if(jk==2){
        strcpy(jenis_kelamin, "Perempuan");
    }
    //strcpy Digunakan untuk menyalin nilai string
    total1=(periode*harga);                 //perhitungan total harga rawat inap
    
    //membuat pointer
    FILE * hasil;
    //fopen = ("nama file.txt","mode");
    hasil = fopen("Data_rawat_inap.txt","w"); //membuka file
    //cek kondisi hasil
    if(hasil == NULL){ 
        printf("Error bang");
        exit;             
    }

    fprintf(hasil,"\n\n\n\t ***   ==================================================================================== \n");
    fprintf(hasil,"\t* * * |                           RUMAH SAKIT BANGLI MEDIKA CANTI                          |\n");
    fprintf(hasil,"\t ***  |          JL. L.C. Subak Aya, Kawan, Kec. Bangli, Kabupaten Bangli, Bali 80661      |  ***\n");
    fprintf(hasil,"\t      |                 telepon: +62 366 93444    Website: www.rsbmcbangli.com             | * * *\n");
    fprintf(hasil,"\t       ====================================================================================   ***\n");
    fprintf(hasil,"\t                                    SURAT KETERANGAN PERAWATAN                             \n\n\n");
    fprintf(hasil, "\t       Identitas Pasien                                                                     \n");
    fprintf(hasil,"\t        ----------------                                                                      \n");
    fprintf(hasil,"\t        Nama Pasien           || %s                                                        \n",nama);
    fprintf(hasil,"\t        Usia                  || %d tahun                                                  \n",usia);
    fprintf(hasil,"\t        Jenis Kelamin         || %s                                                         \n",jenis_kelamin);
    fprintf(hasil,"\t        No. Telepon           || %s                                                        \n",notelp);
    fprintf(hasil,"\t        Alamat                || %s                                                        \n\n\n\n", alamat); 
    fprintf(hasil,"\t        Rincian Biaya                                                                      \n");
    fprintf(hasil,"\t        -------------                                                                      \n");
    fprintf(hasil,"\t        Pilihan Kamar         || %s                                                        \n",jenis_kamar);
    fprintf(hasil,"\t        Biaya Kamar per malam || Rp %d,-                                                   \n",harga);
    fprintf(hasil,"\t        Periode (malam)       || %d malam                                                  \n\n\n\n", periode);
    fprintf(hasil,"\t        Total Biaya           || Rp %d,-                                                  \n",total1);
    fprintf(hasil,"\t       ==================================================================================== \n");
    fprintf(hasil,"\t      |                                SEMOGA SEHAT SELALU                                 |\n");
    fprintf(hasil,"\t       ==================================================================================== \n");

    printf("\t\t        Data berhasil dicetak!\n"); 
}



void export_struk_konsultasi(char nama[50],char alamat[100],int jk,char notelp[20],int usia, int pilkonsul, int metode_pembayaran){

    char nama_dokter[50];
    char perawatan[100];
    char nama_dokter_dan_perawatan [255];
    int harga_konsul,harga_obat,total2;         // deklarasi variabel 
    total2=(harga_konsul+harga_obat);                                       //perhitungan total harga konsultasi
    char nama_pembayaran[50];
    char jenis_kelamin[20];

    FILE * hasil_konsul;
    //fopen = ("nama file.txt","mode");
    hasil_konsul = fopen("Data_konsultasi.txt","w");
    if(hasil_konsul == NULL){
        printf("Error bang");
        exit;             
    }
        
    //cek kondisi pilihan konsul
    if(pilkonsul==1){ 
        harga_konsul = 150000;                                              //harga konsultasi
        harga_obat = 50000;                                                 //harga obat
        strcpy(perawatan,"Pelayanan Spesialis Anak");                       //nama poliklinik
        strcpy(nama_dokter,"dr. Surya Jayanti Sp.A");                       //nama dokter
    }else if(pilkonsul==2){
        harga_konsul = 300000;                                              //harga konsultasi
        harga_obat = 100000;                                                //harga obat
        strcpy(perawatan,"Pelayanan Spesialis THT");                        //nama poliklinik
        strcpy(nama_dokter,"dr. Putu Sudiasa Sp.THT");                      //nama dokter
    }else if(pilkonsul== 3){
        harga_konsul = 400000;                                              //harga konsultasi
        harga_obat = 200000;                                                //harga obat
        strcpy(perawatan,"Pelayanan Spesialis Jantung");                    //nama poliklinik
        strcpy(nama_dokter,"dr. Suryawati Sp.Jp");                          //nama dokter
    }else if(pilkonsul==4){
        harga_konsul = 200000;                                              //harga konsultasi
        harga_obat = 100000;                                                //harga obat
        strcpy(perawatan,"Pelayanan Spesialis Gigi");                       //nama poliklinik
        strcpy(nama_dokter,"drg. Made Suparta");                            //nama dokter
    }else if(pilkonsul==5){
        harga_konsul = 150000;                                              //harga konsultasi
        harga_obat = 100000;                                                //harga obat
        strcpy(perawatan,"Pelayanan Spesialis Mata");                       //nama poliklinik
        strcpy(nama_dokter,"dr. I.A Pertami Dewi Sp.M");                    //nama dokter
    }else if(pilkonsul==6){
        harga_konsul = 3000000;                                             //harga konsultasi
        harga_obat = 150000;                                                //harga obat
        strcpy(perawatan,"Pelayanan Spesialis Jiwa");                       //nama poliklinik
        strcpy(nama_dokter,"dr. Putra Astawa Sp.Kj");                       //nama dokter
    }else if(pilkonsul==7){
        harga_konsul = 3000000;                                             //harga konsultasi
        harga_obat = 200000;                                                //harga obat
        strcpy(perawatan,"Pelayanan Spesialis Kulit dan Kelamin");          //nama poliklinik
        strcpy(nama_dokter,"dr. Basuki Sp.KK");                             //nama dokter
    }else if(pilkonsul==8){
        harga_konsul = 2000000;                                             //harga konsultasi
        harga_obat = 100000;                                                //harga obat
        strcpy(perawatan,"Pelayanan Spesialis Saraf");                      //nama poliklinik
        strcpy(nama_dokter,"dr. Trisna Lestari Sp.S");                      //nama dokter
    }else if(pilkonsul==9){
        harga_konsul = 400000;                                              //harga konsultasi
        harga_obat = 250000;                                                //harga obat
        strcpy(perawatan,"Pelayanan Spesialis Obgyn / Kandungan");          //nama poliklinik
        strcpy(nama_dokter,"dr. Wedagama Sp.OG");                           //nama dokter
    }else if(pilkonsul==10){
        harga_konsul = 300000;                                              //harga konsultasi
        harga_obat = 100000;                                                //harga obat
        strcpy(perawatan,"Pelayanan Spesialis Interna / Penyakit Dalam");   //nama poliklinik
        strcpy(nama_dokter,"dr. Sutarjana Sp.PD");                          //nama dokter
    }
     total2=(harga_konsul+harga_obat);                                    //perhitungan total harga konsultasi
    if(metode_pembayaran==2){
        strcpy(nama_pembayaran,"BPJS");
        total2 = 0;
    }else{
        strcpy(nama_pembayaran,"UMUM");
    }
    
    if(jk==1){
        strcpy(jenis_kelamin, "Laki-Laki");
    }else if(jk==2){
        strcpy(jenis_kelamin, "Perempuan");
    }

    fprintf(hasil_konsul,"\n\n\n\t ***   ==================================================================================== \n");
    fprintf(hasil_konsul,"\t* * * |                           RUMAH SAKIT BANGLI MEDIKA CANTI                          |\n");
    fprintf(hasil_konsul,"\t ***  |          JL. L.C. Subak Aya, Kawan, Kec. Bangli, Kabupaten Bangli, Bali 80661      |  ***\n");
    fprintf(hasil_konsul,"\t      |                 telepon: +62 366 93444    Website: www.rsbmcbangli.com             | * * *\n");
    fprintf(hasil_konsul,"\t       ====================================================================================   ***\n");
    fprintf(hasil_konsul,"\t                                    SURAT KETERANGAN PERAWATAN                             \n\n\n");
    fprintf(hasil_konsul,"\t        Identitas Pasien                                                                     \n");
    fprintf(hasil_konsul,"\t        ----------------                                                                      \n");
    fprintf(hasil_konsul,"\t        Nama Pasien           || %s                                                        \n",nama);
    fprintf(hasil_konsul,"\t        Usia                  || %d tahun                                                  \n",usia);
    fprintf(hasil_konsul,"\t        Jenis Kelamin         || %s                                                         \n",jenis_kelamin);
    fprintf(hasil_konsul,"\t        No. Telepon           || %s                                                        \n",notelp);
    fprintf(hasil_konsul,"\t        Alamat                || %s                                                        \n\n\n", alamat); 
    fprintf(hasil_konsul,"\t        Pilihan Konsultasi                                                               \n");
    fprintf(hasil_konsul,"\t        ----------------                                                                   \n");
    fprintf(hasil_konsul,"\t        Jenis Perawatan       || %s                                                        \n",perawatan);
    fprintf(hasil_konsul,"\t        Dokter                || %s                                                        \n\n\n\n",nama_dokter);
    fprintf(hasil_konsul,"\t        Rincian Biaya                                                                      \n");
    fprintf(hasil_konsul,"\t        -------------                                                                      \n");
    fprintf(hasil_konsul,"\t        Biaya Konsultasi      || Rp %d,-                                                   \n",harga_konsul);
    fprintf(hasil_konsul,"\t        Biaya Obat            || Rp %d,-                                                   \n",harga_obat);
    fprintf(hasil_konsul,"\t        Metode Pembayaran     || %s                                                   \n\n\n\n",nama_pembayaran);
    fprintf(hasil_konsul,"\t        Total Biaya           || Rp %d ,-                                                  \n",total2);
    fprintf(hasil_konsul,"\t       ==================================================================================== \n");
    fprintf(hasil_konsul,"\t      |                                SEMOGA SEHAT SELALU                                 |\n");
    fprintf(hasil_konsul,"\t       ==================================================================================== \n");
    printf("\t\t        Data berhasil dicetak!\n"); 
}

//Fungsi Input Output Utama
int main(){
    //deklarasi variabel
    char nama[50];
    char alamat[100];
    int jk;
    char notelp[20];
    char jenis_kamar[30];
    int usia;
    int pilihan,pilkamar,periode,pesan,harga,lanjut1,total1;
    int pilkonsul,pesan2,lanjut2,harga_konsul,harga_obat,metode_pembayaran,total2;
    int lanjutvisi;
    
    system("color 87");          //fungsi mengganti warna
    system("cls");              //fungsi untuk membersihkan layar
    header();                   //fungsi header
    
    printf("\t       Syarat untuk mendapatkan pelayanan perawatan inap di Rumah Sakit Bangli Medika Canti,\n");
    printf("\t            Anda harus mengisi semua form berikut secara berurut (wajib). Terima kasih.\n\n");
    
    printf("\t        1. Visi dan Misi\n");
    printf("\t        2. Registrasi Rawat Inap\n");
    printf("\t        3. Poliklinik\n");
    printf("\t        Masukan Pilihan Anda : ");
    scanf("%d", &pilihan);                          //menangkap input dari user
    
    //Cek kondisi pilihan yang dipilih
    switch(pilihan){
        case 1 :
            visi_misi(pilihan);                                                 //pemanggilan fungsi visi dan misi
            printf("\n\t                Tekan (1) untuk kembali ke menu utama : ");
            scanf("%d",&lanjutvisi);                                            //mengambil input dari user
            //pengecekan kondisi input  user
            if (lanjutvisi ==1){    
                return main();                                                  //kembalian ke fungsi main awal agar program kembali ke menu utama
            }
            break;
            //note 
            //pilihan 1 untuk fungsi visi dan misi
        case 2 :
            menu_kamar(pilihan);                                                //pemanggilan dfingdi menu kamar
            printf("\t                Pilihan Anda[1/2/3/4/5]= ");
            scanf("%d",&pilkamar);                                              //menangkap input dari user
            if (pilkamar>=1&&pilkamar<=5){
                pilihan_kamar(pilkamar);                                            //pemanggilan fungsi pilihan kamar
                printf("\t               Ya = 1\n");
                printf("\t               Tidak = 0\n");
                printf("\t               Masukan Pilihan Anda [1/0]: ");
                scanf("%d", &pesan);                                                //menagkap input dari user
            }else{
                return main();
            }
           
            //Cek Kondisi pesan untuk pilihan rawat inap
            if (pesan == 1){
                system("cls");
                header();               //pemanggilan fungsi header
                printf("\n\t                =================================================================\n");
                printf("\t               |                       FORMULIR PENDAFTARAN                      |\n");
                printf("\t                =================================================================\n");
                printf("\t               | Silahkan Masukkan Data Pasien\n");
                printf("\t               | Nama Pasien          || ");
                scanf(" %[^\n]s",&nama);                                    //menagkap input user
                printf("\t               | Usia                 || ");
                scanf(" %d",&usia);
                printf("\t               | Jenis Kelamin (L/P)  || ");
                scanf(" %d",&jk);                                      //menagkap input user
                printf("\t               | Periode (malam)      || ");
                scanf("%d", &periode);                                      //menagkap input user
                printf("\t               | No. telepon          || ");
                scanf(" %[^\n]s",&notelp);
                printf("\t               | Alamat               || ");
                scanf(" %[^\n]s",&alamat);                                  //menagkap input user
                printf("\t                =================================================================\n");
                
                printf("\t                Tekan (1) untuk mencetak struk : ");
                scanf("%d",&lanjut1);                                       //menagkap input user
                if(lanjut1 ==1){
                    cetak_struk(nama,alamat,jk,notelp,usia,periode,pilkamar);   //pemanggilan fungsi cetak struk rawat inap
                    export_struk_ri(nama,alamat,jk,notelp,usia,periode, pilkamar);
                }else{
                    return main();
                }
            }else{
                return main();                                              //kembalian ke fungsi main
                }
                break;
        case 3 :
            menu_konsul(pilihan);                                           //pemanggilan fungsi menu_konsul
            printf("\t                Pilihan Anda[1/2/3/4/5/6/7/8/9/10]= ");
            scanf("%d",&pilkonsul);                                         //menangkap input dari user
            pilihan_konsul(pilkonsul);                                      //pemanggilan fungsi pilihan konsul
            //Cek kondisi pilkonsul
            if(pilkonsul >=1 && pilkonsul<= 10){
                printf("\t               Ya = 1\n");
                printf("\t               Tidak = 0\n");
                printf("\t               Masukan Pilihan Anda [1/0]: ");
                scanf("%d", &pesan2);                                       //menangkap input dari user
                //Cek kondisi pesan2 (input untuk melanjutkan pilihan konsul)
                if (pesan2 == 1){
                    system("cls");
                    header();
                    printf("\n\t                =================================================================\n");
                    printf("\t               |                       FORMULIR PENDAFTARAN                      |\n");
                    printf("\t                =================================================================\n");
                    printf("\t               | Silahkan Masukkan Data Pasien\n");
                    printf("\t               | Nama Pasien          || ");
                    scanf(" %[^\n]s",&nama);
                    printf("\t               | Usia                 || ");
                    scanf(" %d",&usia);
                    printf("\t               | Jenis Kelamin (L/P)  || ");
                    scanf(" %d",&jk);
                    printf("\t               | No. telepon          || ");
                    scanf(" %[^\n]s",&notelp);
                    printf("\t               | Alamat               || ");
                    scanf(" %[^\n]s",&alamat);
                    printf("\t                =================================================================\n");
                    printf("\t                1. Umum\n");
                    printf("\t                2. BPJS\n");
                    printf("\t                Pilih Metode Pembayaran Anda [1/2]: ");
                    scanf("%d",&metode_pembayaran);
                    printf("\t                Tekan (1) untuk mencetak struk : ");
                    scanf("%d",&lanjut2);                                   //menangkap input dari user
                    if(lanjut2== 1){
                        cetak_struk2(nama,alamat,jk,notelp,usia,pilkonsul,metode_pembayaran);     //pemanggilan fungsi cetak struk poliklinik
                        export_struk_konsultasi(nama,alamat,jk,notelp,usia,pilkonsul,metode_pembayaran);
                    }else{
                        return main();
                    }
                }else{
                    return main();                                          //pengembalian ke fungsi main
                }    
            }else{
                return main();
            }
            break;
    }
    system("pause");
    return 0;           //kemblian wajib
}

