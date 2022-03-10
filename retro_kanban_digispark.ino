#define LED 0

int wait[] = {
  300, 500, 400, 100, 1000, 100, 400,  30, 30, 30,200,30, 30, 30,300,30, 30, 30, 30, 30,30,30,800,50,200,50,200,50,100,300,100,400,500,500,100,50,800,50,200,50,200,50,100,300,100,400,500,500,100,50,0
};

boolean sw = false;
int t = 0;

void setup() {
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
}

void loop() {
  digitalWrite(LED, sw);
  sw = !sw;
  delay(wait[t]);
  t ++;
  if (wait[t] == 0) t = 0;
}
