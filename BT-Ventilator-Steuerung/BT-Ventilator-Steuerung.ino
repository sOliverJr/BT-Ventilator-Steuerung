char junk;
String inputString="";

// To flash the board you need to disconnect the HC-05 Module!

void setup(){
 Serial.begin(9600);            // set the baud rate to 9600, same should be of your Serial Monitor
 pinMode(13, OUTPUT);
 pinMode(7, OUTPUT);
 digitalWrite(7,HIGH);
 pinMode(8, OUTPUT);
 digitalWrite(8,HIGH);
}

void loop(){
  
  if(Serial.available()){
    while(Serial.available()){
        char inChar = (char)Serial.read();   //read the input
        inputString += inChar;               //make a string of the characters coming on serial
      }
      Serial.println(inputString);
      while (Serial.available() > 0){        // clear the serial buffer
        junk = Serial.read() ; 
      }     
      if(inputString == "1"){              //in case of '1'
          digitalWrite(13, HIGH);
      }else if(inputString == "0"){        //incase of '0'
          digitalWrite(13, LOW);
      }else if(inputString == "2"){        //incase of '2'
          digitalWrite(13, HIGH);
          delay(900000);
          digitalWrite(13, LOW);
          digitalWrite(8, LOW);
      }else if(inputString == "3"){        //incase of '3'
          digitalWrite(13, HIGH);
          delay(1800000);
          digitalWrite(13, LOW);
          digitalWrite(8, LOW);
      }else if(inputString == "4"){        //incase of '4'
          digitalWrite(13, HIGH);
          delay(3600000);
          digitalWrite(13, LOW);
          digitalWrite(8, LOW);
      }else if(inputString == "5"){        //incase of '5'
          digitalWrite(8, LOW);
      }
      
      inputString = "";
    }
    
}
