# Conectando_sensores_a_arduino
En este Meetup se realizó el ejercicio de conectar varios tipos de sensores.

## Sensor
 [ Ambient Light Sensor V2](https://www.dfrobot.com/wiki/index.php/DFRobot_Ambient_Light_Sensor_SKU:DFR0026)

![0](https://core-electronics.com.au/media/catalog/product/cache/1/image/fe1bcd18654db18f328c2faaaf3c690a/s/e/sen0043-01.jpg)

## Conexión

| Color | Pin |
|--|--|
| Verde | Señal |
| Rojo | Vcc (3.3v/5v) |
| Negro | GND |

## Código de ejemplo 

```
void setup()
{
  Serial.begin(9600); // open serial port, set the baud rate to 9600 bps
}
void loop()
{
      int val;
      val=analogRead(0);   //connect grayscale sensor to Analog 0
      Serial.println(val,DEC);//print the value to serial 
      delay(100);
}
```
