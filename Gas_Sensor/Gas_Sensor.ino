/*
 * Grove - Gas Sensor Demo v1.0
 *
 * The Gas Sensor detect the related Gas density, 
 * Arduino get the result by anologread. the gas Density is 
 * 0~1, larger the output is, the denser the gas.
 * Connect the Sensor to A0 in this demo;
 * 
 *  By: http://www.seeedstudio.com
*/
void setup() 
{
    Serial.begin(9600);
}
 
void loop() 
{
    float vol;
    int sensorValue = analogRead(A0);
    vol=(float)sensorValue/1024;
    Serial.print("The gas density is ");
    Serial.println(vol);
    delay(100);
}
