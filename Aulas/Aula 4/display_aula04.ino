#define a 2//Correspondente ao LED a
#define b 3//Correspondente ao LED b
#define c 4//Correspondente ao LED c
#define d 5//Correspondente ao LED d
#define e 6//Correspondente ao LED e
#define f 7//Correspondente ao LED f
#define g 8//Correspondente ao LED g


void setup(){
  pinMode(a, OUTPUT);//Define a como saída
  pinMode(b, OUTPUT);//Define b como saída
  pinMode(c, OUTPUT);//Define c como saída
  pinMode(d, OUTPUT);//Define d como saída
  pinMode(e, OUTPUT);//Define e como saída
  pinMode(f, OUTPUT);//Define f como saída
  pinMode(g, OUTPUT);//Define g como saída
}
//Função para escrever o nº zero
void zero() {
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 1);
  digitalWrite(g, 0);
  delay(100);
}
//Função para escrever o nº um
void um() {
  digitalWrite(a, 0);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 0);
  digitalWrite(g, 0);
  delay(100);
}
//Função para escrever o nº dois
void dois() {
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 0);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 0);
  digitalWrite(g, 1);
  delay(100);
}
//Função para escrever o nº três
void tres() {
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 0);
  digitalWrite(f, 0);
  digitalWrite(g, 1);
  delay(100);
}
//Função para escrever o nº quatro
void quatro() {
  digitalWrite(a, 0);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
  delay(100);
}
//Função para escrever o nº cinco
void cinco() {
  digitalWrite(a, 1);
  digitalWrite(b, 0);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 0);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
  delay(100);
}
//Função para escrever o nº seis
void seis() {
  digitalWrite(a, 1);
  digitalWrite(b, 0);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
  delay(100);
}
//Função para escrever o nº sete
void sete() {
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 0);
  digitalWrite(g, 0);
  delay(100);
}
//Função para escrever o nº oito
void oito() {
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
  delay(100);
}
//Função para escrever o nº nove
void nove() {
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 0);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
  delay(100);
}


void loop(){
  zero();//Executa a função zero
  delay(1000);
  um();//Executa a função um
  delay(1000);
  dois();//Executa a função dois
  delay(1000); 
  tres();//Executa a função três
  delay(1000);   
  quatro();//Executa a função quatro
  delay(1000);
  cinco();//Executa a função cinco
  delay(1000);
  seis();//Executa a função seis
  delay(1000);
  sete();//Executa a função sete
  delay(1000);
  oito();//Executa a função oito
  delay(1000);
  nove();//Executa a função nove
  delay(1000);

  
}

