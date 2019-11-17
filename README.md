# Heap Implementation
Implementasi sederhana dari struktur data heap dengan menggunakan bahasa pemrograman C untuk mendapatkan M angka terbesar dari N angka yang ada. 

Aplikasi akan melakukan beberapa hal berikut (diketahui N adalah banyaknya angka yang ada, dan M adalah banyaknya angka yang ingin dicari) : 
* Memasukkan N angka random dari 1-10 ke dalam array angka
* Mencetak N angka yang telah didapatkan sebelumnya
* Lakukan looping untuk memasukkan angka ke dalam array yang baru yaitu array targetData sebanyak M dan lakukan heapify
* Lanjutkan looping dari array angka hingga N dan lakukan hal berikut untuk setiap angka.
  * Jika angka pada indeks 0 dari array targetData lebih kecil dari angka looping saat ini, maka lakukan hal berikut.
    * Timpa indeks 0 dari array targetData dengan angka looping saat ini dan lakukan filterDown
* Mencetak M angka hasil dari proses heap

## How To Run
File Program : main.c & fungsi.c <br>
Compile : gcc -o hasil main.c fungsi.c <br>
Run : ./hasil

## Example
Misalkan diketahui terdapat list angka sebagai berikut : <br>
```
7 4 5 8 7 2 8 1 10 10
```
Maka program akan berjalan dan didapatkan hasil sebagai berikut : <br>
```
7 8 8 10 10
```
