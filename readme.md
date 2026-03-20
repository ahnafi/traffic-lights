# Traffic Light (4 way)

## overview

Program ini merupakan implementasi sistem kendali traffic light empat persimpangan berbasis Arduino yang dirancang secara modular menggunakan fungsi light() untuk mengatur siklus transisi lampu secara sekuensial dari arah Utara ke Barat. Kode ini mengintegrasikan logika algoritma penjadwalan waktu (timing) yang presisi, dimana setiap fase perpindahan jalur ditandai dengan indikator lampu kuning yang berkedip sebanyak tiga kali selama dua detik sebagai sinyal peringatan transisi, diikuti dengan aktivasi lampu hijau durasi tetap untuk menjaga kelancaran arus lalu lintas di setiap ruas jalan secara bergantian.

## Alat dan bahan

Alat dan bahan yang diperlukan:

- Arduino
- Breadboard
- 4 led merah, kuning dan hijau
- 12 resistor (untuk mengamankan lampu)
- kabel jumper

## Schema

![Schema arduino](schema.png)
