//weel08_6_bubble_ballonpart3
//要有很多個, 用for迴圈 配合 陣列
void setup(){
  size(400, 400); //大小
}

int[]x = new int[100];
int[]y = new int[100];
int[]s = new int[100];
int N=0; //一開始0個氣球
void draw(){
    background(255);
    for(int i=0; i<N; i++){
        ellipse(x[i], y[i]-s[i]/2, s[i]*0.7, s[i]); //瘦瘦的氣球,接觸下方}
        if((mousePressed==false || i<N-1)&& y[i]>s[i]+1) y[i]-= 2; //沒有撞天花板
    }
    if(mousePressed)s[N-1]++;    
}
void mousePressed(){
    x[N] = mouseX;
    y[N] = mouseY;
    s[N] = 1;
    N++;
}
