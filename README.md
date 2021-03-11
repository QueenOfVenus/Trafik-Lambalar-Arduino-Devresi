# Trafik-Lambalar-Arduino-Devresi

Merhabalar! DSC Gazi topluluğunun hazırlamış ve benim de katılmış olduğum IoT1929 Arduino Eğitiminde verilen ödevlerde uyguladığım çözümlemeleri 
sizlerle paylaşmaya devam ediyorum. Şunu belitmek isterim ki daha önce bu alan ile ilgili hiçbir çalışma yapmadım. Bu eğitim ile öğrendiklerimi sizinle paylaşırken 
herhangi bir yalnışım olursa lütfen bana yorum ile bildiriniz. Çünkü hepimiz insanız ve hata yapabiliriz. Önemli olan hatalarımızdan ders çıkarmaktır. 
Teşekkürler :D

******************************************************************************************

Ödevimiz:Trafik ışıkları yolda yayalara ve araçlara geçişlerini yapması ve kazaları önlemek için yol gösteren ışıklardır.

Problem Tanımı:
Ahmet Bey bir hastane müdürüdür. Bu hastanede hastaları çok uzak noktalara taşıyan küçük araçlar bulunmaktadır. Çok yoğun noktalara trafik ışığı koyarak hastane içi 
kazaları önlemek istemektedir. Ahmet Bey; 10 saniye Kırmızı ışık yandıktan sonra kırmızı ışıkla birlikte 10 saniye Sarı ışık yanacaktır. 2 saniye sonra 
kırmızı ve sarı ışık sönüp 5 saniye boyunca yeşil ışık yanmasını istiyor. Bu konuda Ahmet Bey’e yardım eder misiniz?
Neler Olmalı?
•	3 Led kullanılmalı ( Elinizde tek renk led varsa o da olur sorun yaratmaz illaki sarı, kırmızı ve yeşil olması gerekmez.)
•	LED’ler belirtilen süre boyunca yanması gerekir.
•	Devrenin kodlarını, devre şemasını ve devrenin çalışır halindeki videoyu bizimle paylaşmalısın.
•	En pratik çözümü olmalıdır.

*******************************************************************************************

Çözüm Gidişatım:

Karaşimşek devresinde edindiğim deneyim üzerine izlediğim yol şu şekilde:
• BreadBoard'un yatay çoğaltıcının (-) noktalarına yerleştirdim. 
• Dikey pin girişlerinin olduğu yerlere de ledlerimin katot uçlarını taktım. Sonra katottan çektiğim kabloları sırasıyla (Kırmızı, Sarı, Yeşil) ledler için 
(11. , 10. ve 9.) PWN pinlerine bağladım.
• Ve son olarak Arduino Leonardo'nun GND girişindeki pinden yatay çoğaltıcının (-) hizasına bir kablo bağladım.

Final:
Kodları için:  Trafik_Lambalar_.ino 
Sonucu Görmek için:  Trafik Lambaları gif.gif

Hoşçakalın...
