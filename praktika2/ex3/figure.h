class Figure {
  private:
    float x1, x2, x3, x4;
    float y1, y2, y3, y4;
    float s, zn1, zn2, zn3, zn4;
    float p;
    float a, b, c, d;
    float s1, s2;
    float c1, c2;

  public:
    Figure();
    Figure(float x1,float x2,float x3,float x4,float y1,float y2,float y3,float y4);
    void show();
    bool is_prug();
    bool is_square();
    bool is_romb();
    bool is_in_circle();
    bool is_out_circle();



};