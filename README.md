# Gaz Algılama ve LCD Ekran Projesi

-----------------------------------

Bu projede, bir gaz sensörü ile çevredeki gaz seviyesini algılayan ve sonuçları bir LCD ekranda gösteren bir sistem geliştirdik. Aynı zamanda, belirli gaz seviyelerine ulaşıldığında bir buzzer ile uyarı verilmektedir. Proje, özellikle kapalı alanlarda gaz sızıntısı gibi tehlikeli durumları önceden tespit etmek için kullanılabilir.

## Donanım Gereksinimleri
- Arduino Uno
- MQ-2 Gaz Sensörü
- LCD Ekran (I2C ile)
- Buzzer
- Bağlantı kabloları ve breadboard

## Yazılım Gereksinimleri
- Arduino IDE
- LiquidCrystal_I2C Kütüphanesi

# Proje Açıklaması

## setup() Fonksiyonu

- **pinMode(duduk, OUTPUT):** Buzzer pinini çıkış olarak ayarlar.
- **playWelcomeTone():** Buzzer ile bir karşılama melodisi çalar.
- **lcd.init() ve lcd.backlight():** LCD ekranı başlatır ve arka ışığını açar.
- **Kullanıcı Bilgileri:** Ekranda sırayla üç farklı kullanıcının bilgileri gösterilir. Her bir kullanıcı bilgisi bir saniye boyunca gösterilir ve ardından bir buzzer sesi ile birlikte ekran temizlenir.
  
## loop() Fonksiyonu

- **Gaz Seviyesi Okuma:** A0 pininden gaz sensöründen gelen analog değeri okur.
- **Gaz Seviyesi Kontrolü:** Gaz seviyesi belirli bir eşik değeri (540) aşıyorsa, ekranda "Dikkat" mesajı ve gaz değeri gösterilir. Ayrıca, buzzer uyarı sesi çıkarır.
- **Güvenli Durum:** Gaz seviyesi eşik değerinin altındaysa, ekranda "Güvenli" mesajı ve gaz değeri gösterilir. Buzzer kapatılır.
  
## playWelcomeTone() Fonksiyonu
- **Karşılama Melodisi:** Sekiz farklı notadan oluşan kısa bir melodi çalar.

## Kullanım
Bu projeyi kullanarak, gaz sensöründen alınan verileri LCD ekranda görüntüleyebilir ve belirli bir gaz seviyesi aşıldığında sesli uyarı alabilirsiniz. Bu sistem, evlerde, ofislerde veya endüstriyel ortamlarda güvenlik amacıyla kullanılabilir.
