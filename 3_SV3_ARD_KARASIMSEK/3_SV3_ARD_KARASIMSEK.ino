#define ZAMAN 10                                        //delay içerisinde kullanmak üzere ZAMAN değişkeni ve değeri tanımlanır

int Led [10] = {22,23,24,25,26,27,28,29,30,31};         //LED'ler (10 adet) ve bağlı oldukları pinler Led değişkeni ile dizi şeklinde tanımlanır

void setup() {

    for(int i=0; i<10; i++)                             //Led[] içerisinde kullanılmak üzere i değişkeni tanımlanır. Başlangıç değeri olarak 0 verilen i değişkeni 9 değerini alıncaya kadar döngü tekrar edilir ve her seferinde 1 artırılır
    {
      pinMode(Led [i], OUTPUT);                         //10 adet LED'e çıkış verilir
    }

}

void loop(){
  
 int Sayici = 0;                                        //Led[] içerisinde kullanılmak üzere Sayici değişkeni ve değişkenin başlangıç değeri tanımlanır
                                    
    while (Sayici < 9 )                                 //Sayici 9'dan küçük iken (9'dan küçük olduğu sürece):Sayici 0'dan başlatılarak son olarak 8 değerini alıncaya kadar while döngüsü tekrarlanır.Bu döngüde amaç LED'lerin aşağıdan yukarıya doğru sırayla yanıp sönmesidir
    
    {
      digitalWrite(Led [Sayici], HIGH);                 //Sayici değişkeni yardımıyla tüm LED'lere sırayla dijital 1 verilir ve LED'ler sırayla yakılır.        
      delay(ZAMAN);                                     //10 milisaniye bekleme süresi eklenir
      digitalWrite(Led [Sayici], LOW);                  //Tüm LED'lere Sayici değişkeni yardımıyla dijital 0 verilir ve LED'ler sırayla söndürülür 
      delay (ZAMAN);                                    //10 milisaniye bekleme süresi eklenir
      Sayici++;                                         //Sayici 1 artırılır                     
    }
    
    while (Sayici>= 1)                                  //Sayici 1'den büyük ve eşit olduğu sürece while döngüsü tekrar edilir.Bu döngüde amaç LED'lerin yukarıdan aşağıya doğru sırayla yanıp sönmesidir
    
    {
      digitalWrite(Led[Sayici], HIGH);                  //Sayici değişkeni yardımıyla tüm LED'lere sırayla dijital 1 verilir ve LED'ler sırayla yakılır. 
      delay(ZAMAN);                                     //10 milisaniye bekleme süresi eklenir
      digitalWrite(Led[Sayici], LOW);                   //Tüm LED'lere Sayici değişkeni yardımıyla dijital 0 verilir ve LED'ler sırayla söndürülür
      delay (ZAMAN);                                    //10 milisaniye bekleme süresi eklenir
      Sayici--;                                         //Sayici 1 azaltılır                                                          
    }

}
