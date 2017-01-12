static int pins[3][3] = {
       {0, 1, 2} //layer1
       {3, 4, 5} //layer2
       {6, 7, 8} //layer3   
};
static int groundPins[3] = {9, 10, 11};
  

void setup(){
    for (int i = 0; i <= 2; i++){
        for(int a = 0; a <= 2; a++){
            pinMode(pins[i][a], OUTPUT);
        }
    }
    for(a = 0; a <= 2; a++){
        pinMode(groundPins[b], OUTPUT)
    }    
}


void voltageOffAll(){
    for (int i = 0; i <= 2; i++){
        for(int a = 0; a <= 2; a++){
            digitalWrite(pins[i][a], HIGH);
        }
    }
}

void voltageOnAll(){
    for (int i = 0; i <= 2; i++){
        for(int a = 0; a <= 2; a++){
            digitalWrite(pins[i][a], LOW);
        }
    }
}

void groundOnAll(){
        for(int i = 0; i <= 2; i++){
        digitalWrite(groundPins[b], LOW);
    }
}
void groundOffAll(){
        for(int i = 0; i <= 2; i++){
        digitalWrite(groundPins[b], HIGH);
    }
}



void onOne(int pinX, int pinY, int pinZ){
    digitalWrite(groundPins[pinX], LOW);
    digitalWrite(pins[pinZ][pinY], HIGH);
}
