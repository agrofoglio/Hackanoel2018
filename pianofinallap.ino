//Arduano a mistura de Arduino com Piano | Hackanoel 2018 Equipe Campinas
//Realizadores:
//Bruno Martins Ferreira | ferreirabrunomartins@gmail.com | 
//Bruno Agrofoglio Ferreira | agrofoglio@gmail.com | @Agrofoglio | +55 (19) 98165-6860 |
//Um projeto open source inspirado nos projetos do Arduino Project Hub
//https://www.hackster.io/rahulkhanna/arduino-tutorial-mini-piano-08f8b8?use_route=project
//https://www.hackster.io/cool-guys/cool-baby-piano-29979e?use_route=project
const int falante=13;
const int botaoDo=2;
const int botaoRe=3;
const int botaoMi=4;
const int botaoFa=5;
const int botaoSol=6;
const int botaoLa=7;
const int botaoSi=8;
#define tempo 300
#define Do 262
#define Re 294
#define Mi 330
#define Fa 349
#define Sol 392
#define La 440
#define Si 493
void setup() {
  pinMode(botaoDo,INPUT);
  pinMode(botaoRe,INPUT);
  pinMode(botaoMi,INPUT);
  pinMode(botaoFa,INPUT);
  pinMode(botaoSol,INPUT);
  pinMode(botaoLa,INPUT);
  pinMode(botaoSi,INPUT);
  pinMode(falante,OUTPUT);
}
void loop(){
  if(digitalRead(botaoDo)==LOW){
    tone(falante,Do);
    delay(tempo);
    noTone(falante);}
  if(digitalRead(botaoRe)==LOW){
    tone(falante,Re);
    delay(tempo);
    noTone(falante);}
  if(digitalRead(botaoMi)==LOW){
    tone(falante,Mi);
    delay(tempo);
    noTone(falante);}
  if(digitalRead(botaoFa)==LOW){
    tone(falante,Fa);
    delay(tempo);
    noTone(falante);}
  if(digitalRead(botaoSol)==LOW){
    tone(falante,Sol);
    delay(tempo);
    noTone(falante);}
  if(digitalRead(botaoLa)==LOW){
    tone(falante,La);
    delay(tempo);
    noTone(falante);}
  if(digitalRead(botaoSi)==LOW){
    tone(falante,Si);
    delay(tempo);
    noTone(falante);}
  else
    noTone(falante);
} 
