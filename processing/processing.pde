//========== LIBRARY
import ddf.minim.*;
import processing.serial.*; 

//========== DIFFINE GLOBAL VARIABLE
//=== PORT
Serial myPort = new Serial(this, "/dev/cu.usbserial-0001", 115200);

//=== STRING MUSIC
Minim minimA, minimG, minimE, minimD;
AudioSample a1, a2, a3, a4, a5;
AudioSample g1, g2, g3, g4, g5, g6, g7, g8, g9, g10, g11, g12, g13, g14;
AudioSample e1, e2, e3, e4, e5;
AudioSample d1, d2, d3, d4, d5;
AudioSample blank;
//=== DISTANCE
int N = 1;
int k1=N,k2=2*N,k3=3*N,k4=4*N,k5=5*N,k6=6*N, k7=7*N;
int k8=8*N,k9=9*N,k10=10*N,k11=11*N,k12=12*N,k13=13*N,k14=14*N;

boolean firstContact = false;
//========== SETUP
void setup() {
  //========== SETUP WINDOW
  size(500, 500
  );
  //========== PORT
  myPort.bufferUntil('\n');

  smooth();
  //========== SETUP STRING
  minimA = new Minim(this);
  minimG = new Minim(this);
  minimE = new Minim(this);
  minimD = new Minim(this);

  //=== A:
  a1 = minimA.loadSample( "a1.wav", 1024);
  a2 = minimA.loadSample( "a2.wav", 1024);
  a3 = minimA.loadSample( "a3.wav", 1024);
  a4 = minimA.loadSample( "a4.wav", 1024);
  a5 = minimA.loadSample( "a5.wav", 1024);
  //=== G
  g1 = minimG.loadSample( "g1.wav", 1024);
  g2 = minimG.loadSample( "g2.wav", 1024);
  g3 = minimG.loadSample( "g3.wav", 1024);
  g4 = minimG.loadSample( "g4.wav", 1024);
  g5 = minimG.loadSample( "g5.wav", 1024);
  g6 = minimG.loadSample( "g6.wav", 1024);
  g7 = minimG.loadSample( "g7.wav", 1024);
  g8 = minimG.loadSample( "g8.wav", 1024);
  g9 = minimG.loadSample( "g9.wav", 1024);
  g10 = minimG.loadSample( "g10.wav", 1024);
  g11 = minimG.loadSample( "g11.wav", 1024);
  g12 = minimG.loadSample( "g12.wav", 1024);
  g13 = minimG.loadSample( "g13.wav", 1024);
  g14 = minimG.loadSample( "g14.wav", 1024);
  //=== E
  e1 = minimG.loadSample( "e1.wav", 1024);
  e2 = minimG.loadSample( "e2.wav", 1024);
  e3 = minimG.loadSample( "e3.wav", 1024);
  e4 = minimG.loadSample( "e4.wav", 1024);
  e5 = minimG.loadSample( "e5.wav", 1024);
  //=== D
  d1 = minimG.loadSample( "d1.wav", 1024);
  d2 = minimG.loadSample( "d2.wav", 1024);
  d3 = minimG.loadSample( "d3.wav", 1024);
  d4 = minimG.loadSample( "d4.wav", 1024);
  d5 = minimG.loadSample( "d5.wav", 1024);
  
}
//========== DRAW FUNCTION
void draw() {
  
  background(0);
}
//========== SERIAL EVENT HADLE
void serialEvent(Serial myPort) {
  //=== READ FROM PORT
  int inByte = myPort.read();
  if(firstContact == false){
    if(inByte == 'L'){
      myPort.clear();
      firstContact = true;
      myPort.write('L');
      
    }
  }else{
    //=== PROCESS INPUT STRING
    String myString = myPort.readString();  
    myString = trim(myString);//REMOVE WHITESPACE & BREAK UP INTO INTEGERS
    int sensors[] = int(split(myString, ','));
    //=== DEFINE DISTANCE
    int sen1 = sensors[1];
    int sen2 = sensors[2];
    int sen3 = sensors[3];
    int sen4 = sensors[5];
    int distance = sensors[4];
    //===  PRINT OUT VALUES
    println(sen1+" "+sen2+" "+sen3+" "+sen4+" "+"\n"+distance+" ");

    if(sen1==1){
      myPort.write("1");
      if(distance<=k1){g1.trigger();println("1");}
      else if( distance==k2){g2.trigger();println("2");}
      else if( distance==k3){g3.trigger();println("3");}
      else if( distance==k4){g4.trigger();println("4");}
      else if( distance==k5){g5.trigger();println("5");}
      else if( distance==k6){g6.trigger();println("6");}
      else if( distance==k7){g7.trigger();println("7");}
      else if( distance==k8){g8.trigger();println("8");}
      else if( distance==k9){g9.trigger();println("9");}
      else if( distance==k10){g10.trigger();println("10");}
      else if( distance==k11){g11.trigger();println("11");}
      else if( distance==k12){g12.trigger();println("12");}
      else if( distance==k13){g13.trigger();println("13");}
      else if(k13<=distance){g14.trigger();println("14");}
      else {g14.trigger();println("wrong");}
    }
    if(sen2==1){
      myPort.write("2");
      if(distance<=k1){d1.trigger();println("1");}
      else if( distance==k2){d2.trigger();println("2");}
      else if( distance==k3){d3.trigger();println("3");}
      else if( distance==k4){d4.trigger();println("4");}
      else if( distance==k5){d5.trigger();println("5");}
      else if( distance==k6){g1.trigger();println("6");}
      else if( distance==k7){g2.trigger();println("7");}
      else if( distance==k8){g3.trigger();println("8");}
      else if( distance==k9){g4.trigger();println("9");}
      else if( distance==k10){g5.trigger();println("10");}
      else if( distance==k11){g6.trigger();println("11");}
      else if( distance==k12){g7.trigger();println("12");}
      else if( distance==k13){g8.trigger();println("13");}
      else if(k13<=distance){g9.trigger();println("14");}
      else {g14.trigger();println("wrong");}
    }
    if(sen3==1){
      myPort.write("3");
      if(distance<=k1){a1.trigger();println("1");}
      else if( distance==k2){a2.trigger();println("2");}
      else if( distance==k3){a3.trigger();println("3");}
      else if( distance==k4){a4.trigger();println("4");}
      else if( distance==k5){a5.trigger();println("5");}
      else if( distance==k6){d1.trigger();println("6");}
      else if( distance==k7){d2.trigger();println("7");}
      else if( distance==k8){d3.trigger();println("8");}
      else if( distance==k9){d4.trigger();println("9");}
      else if( distance==k10){d5.trigger();println("10");}
      else if( distance==k11){g1.trigger();println("11");}
      else if( distance==k12){g2.trigger();println("12");}
      else if( distance==k13){g3.trigger();println("13");}
      else if(k13<=distance){g4.trigger();println("14");}
      else {g14.trigger();println("wrong");}
    }
    if(sen4==1){
      myPort.write("4");
      if(distance<=k1){e1.trigger();println("1");}
      else if( distance==k2){e2.trigger();println("2");}
      else if( distance==k3){e3.trigger();println("3");}
      else if( distance==k4){e4.trigger();println("4");}
      else if( distance==k5){e5.trigger();println("5");}
      else if( distance==k6){a1.trigger();println("6");}
      else if( distance==k7){a2.trigger();println("7");}
      else if( distance==k8){a3.trigger();println("8");}
      else if( distance==k9){a4.trigger();println("9");}
      else if( distance==k10){a5.trigger();println("10");}
      else if( distance==k11){d1.trigger();println("11");}
      else if( distance==k12){d2.trigger();println("12");}
      else if( distance==k13){d3.trigger();println("13");}
      else if(k13<=distance){d4.trigger();println("14");}
      else {g14.trigger();println("wrong");}
    }
    
  }

}
