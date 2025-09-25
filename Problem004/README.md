### 📌 Pseudo Kod
Bu pseudo kod, programın adım adım nasıl çalıştığını göstermektedir.

```
1) Başla
2) Palindromik sayı olup olmadığını bulan palindromic_number(number) isimli bir fonksiyon oluştur:
    2.1) Bu fonksiyonda tam sayı tipinde 4 değişken tanımla num_original, end_digit, reverse = 0, ret_val = 0
    2.2) num_original e başlangıç değeri olarak number ı ver
    2.3) number 0 dan büyük olduğu sürece
        2.3.1) end_digit = number % 10 
               reverse = reverse * 10 + end_digit
               number = number / 10
    2.4) Eğer reverse değeri num_original değerine eşitse 1 döndür
    2.5) ret_val ı döndür
3) Main kısmı:
    3.1) Bu kısımda tam sayı tipinde 6 değişken tanımla number, i, j, max_palindromic_number = 0, a = 0, b = 0
    3.2) i yi 999 dan 100 e kadar(100 dahil) birer birer azaltarak al
        3.2.1) j yi 999 dan 100 e kadar(100 dahil) birer birer azaltarak al
        3.2.2) i ve j çarpım değerini number a ata
        3.2.3) Eğer number değeri max_palindromic_number değerinden küçük eşitse döngüyü kır
        3.2.4) Eğer palindromik sayıysa 
            3.2.4.1) number değerini max_palindromic_number değerine ata
            3.2.4.2) i değerini a ya ata
            3.2.4.3) j değerini b ye ata
    3.3) En büyük palindromik sayıyı ekrana yazdır
4) Bitir
```