typedef struct {
  double math;
  double english;
  double language;
} Score; 

typedef struct {

  char name[50];
  double weight;
  double height;
  char ID[50];
  Score s;
  Score sa[10];
  Score *sp;
} Student; 

typedef struct {
  int a;
  short b[2];
} Ex2; 

typedef struct Ex
{
  int a;
  char b[3];
  
  Ex2 c;
  struct Ex *d;
} Ex; 


