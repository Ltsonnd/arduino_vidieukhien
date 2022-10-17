const int x0=2;
const int x1=3;
const int y0=10;
int TrangThai_Truoc, TrangThai_HienTai,Truoc,HienTai;
//TrangThai_truoc -> luu tru gia tri dien ap chan ket noi nut nhan o vong lap truoc
//TrangThai_hientai -> luu tru gia tri dien ap chan ket noi voi nut nhan o vong lap hien tai

int TrangThai_Led;
void setup() {
  pinMode(x0,INPUT_PULLUP);
  pinMode(x1,INPUT_PULLUP);
  pinMode(y0,OUTPUT);
  TrangThai_Led = 0;
  digitalWrite(y0,TrangThai_Led);
  TrangThai_Truoc=1;

}
void hx0()
{
  TrangThai_HienTai = digitalRead(x0);
  if (TrangThai_Truoc == 1 && TrangThai_HienTai == 0){
        TrangThai_Led =~ TrangThai_Led;
    }
  digitalWrite(y0,TrangThai_Led);
  TrangThai_Truoc = TrangThai_HienTai;
} 
void hx1()
{
  HienTai = digitalRead(x1);
  if (Truoc == 1 && HienTai == 0){
        TrangThai_Led =~ TrangThai_Led;
    }
  digitalWrite(y0,TrangThai_Led);
  Truoc = HienTai;
}
void loop() 
{
hx0();
//hx1();  
}

