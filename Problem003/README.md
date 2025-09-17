### 📌 Pseudo Kod
Bu pseudo kod, programın adım adım nasıl çalıştığını göstermektedir.

```
1) Başla
2) Asal carpanları bulan printPrimeNum(number) isimli bir fonksiyon oluştur:
    2.1) Eğer number 2 ye tam bölünüyorsa ekrana 2 yaz
        2.1.1) number ı 2’ye böl, 2’ye bölünemeyene kadar devam et
    2.2) 3 ten başlayarak number ın kareköküne kadar tek sayıları al
        2.2.1) Eğer number bu tek sayıya bölünüyorsa sayıyı ekrana yaz
        2.2.2) number ı o sayıya böl, bölünemeyene kadar devam et
    2.3) Eğer number 1’den büyükse ekrana bu kalan number sayısını yaz (kendi başına asal demektir)
3) En büyük asal çarpanını bulan printPrimeNumMax(number) isimli bir fonksiyon oluştur
    3.1) largest_prime adlı bir değişken oluştur ve başlangıç değeri 2 olsun
    3.2) Eğer number 2’ye tam bölünüyorsa number 2’ye böl, 2’ye bölünemeyene kadar devam et
        3.2.1) largest_prime = 2 
    3.3) 3 ten başlayarak number ın kareköküne kadar tek sayıları al
        3.3.1) Eğer number bu tek sayıya bölünüyorsa number ı bu sayıya böl, bölünemeyene kadar devam et
        3.3.2) largest_prime = bu sayı
    3.4)Döngü bittikten sonra, eğer number 1’den büyükse 
        3.4.1) largest_prime = number
    3.5) largest_prime değerini geri döndür
4)  Main kısmı:
    4.1) “600851475143’un asal çarpanları:” yaz
    4.2) printPrimeNum(600851475143) fonksiyonunu çağır
    4.3) “En büyük asal çarpanı:” yaz
    4.4) printPrimeNumMax(600851475143) fonksiyonunun döndürdüğü değeri yaz
5) Bitir
```