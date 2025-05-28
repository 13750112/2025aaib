///week15_3_zongzi_for_loop_array_part1
PImage zongzi; //模仿week10
void setup(){
  size(600, 400); //模仿week04
  zongzi = loadImage("zongzi.png");
  imageMode(CENTER);// 畫圖時, 用正中心座標
}// 要把圖檔 zongzi.png先拉到程式裡
float x, y;
void draw(){
  background(#C0ffee); //模仿week04
  image(zongzi, x, y, 120, 100);
  y++;
}
void mousePressed(){
  x = mouseX;
  y = mouseY;
}
