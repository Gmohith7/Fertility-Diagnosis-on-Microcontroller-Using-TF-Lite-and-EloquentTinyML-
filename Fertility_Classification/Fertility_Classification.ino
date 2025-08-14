

#include <EloquentTinyML.h>
#include "flrt_nn_esp32.h"

#define NUMBER_OF_INPUTS 9 
#define NUMBER_OF_OUTPUTS 1
#define TENSOR_ARENA_SIZE 10*1024  

Eloquent::TinyML::TfLite<NUMBER_OF_INPUTS, NUMBER_OF_OUTPUTS, TENSOR_ARENA_SIZE> ml;

void setup() {
    Serial.begin(115200);
   
    ml.begin(flrt_nn_esp32);
}

float fResult[NUMBER_OF_OUTPUTS] = {0};
float fRes = NULL;

void loop() {

    // #for class 0
    float input1[] = {0.f, 0.34000003f, 1.f, 0.f, 0.f, 0.5f, 1.f, 0.f, 0.4680851f};
    

    // // #for class 1
    float input2[] = {0.33499998f, 0.88f, 1.f, 0.f, 1.f, 0.5f, 0.75f, 1.f, 0.26595744f};
    // float input4[] = {0.65f, 0.61f, 0.88f, 1.0f, 1.0f, 0.3f, 0.8f, 1.0f, 0.5f};



    initfResult(fResult);
    fRes = ml.predict(input1, fResult);
    Serial.print("\nThe output value returned for input1 is:\n");
    // Serial.println(fRes);
    displayOutput(fResult);  

    initfResult(fResult);
    fRes = ml.predict(input2, fResult);
    Serial.print("\nThe output value returned for input2 is:\n");
    // Serial.println(fRes);
    displayOutput(fResult);

    Serial.println();

    // initfResult(fResult);
    // fRes = ml.predict(input3, fResult);
    // Serial.print("\nThe output value returned for input3 is:\n");
    // // Serial.println(fRes);
    // displayOutput(fResult);    
  
    // initfResult(fResult);
    // fRes = ml.predict(input4, fResult);
    // Serial.print("\nThe output value returned for input4 is:\n");
    // // Serial.println(fRes);
    // displayOutput(fResult);  

    delay(5000); // 5 milliseconds of delay between two plots
}

void initfResult(float *fResult){
  
    for(int i = 0; i < NUMBER_OF_OUTPUTS; i++){
       fResult[i] = 0.0f;
    }
} // end of displayOutput()

void displayOutput(float *fResult){
  
    for(int i = 0; i < NUMBER_OF_OUTPUTS; i++){
        // Serial.print(fResult[i]);
        fRes=fResult[i];
        if(fRes > 0.5)
        {
          Serial.println("1.0");
        }
        else
        {
          Serial.println("0.0");
        }
    // displayOutput(fResult);

    Serial.println();
        Serial.print(" ");

    }
} // end of displayOutput()
