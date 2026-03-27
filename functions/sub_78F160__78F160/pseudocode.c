void __thiscall sub_78F160(float *this, float a2, double a3, float a4)
{
  double v4; // st7
  double v5; // st6
  double v6; // st4
  double v7; // st5
  double v8; // st3
  double v9; // st5
  double v10; // st3
  double v11; // st6
  float v12; // [esp+0h] [ebp-10h]
  float v13; // [esp+0h] [ebp-10h]
  float v14; // [esp+0h] [ebp-10h]
  double v15; // [esp+0h] [ebp-10h]
  double v16; // [esp+8h] [ebp-8h]
  float v17; // [esp+14h] [ebp+4h]
  double v18; // [esp+18h] [ebp+8h]

  v12 = a2 / dbl_A8BA48;
  v17 = sin(v12);
  v13 = cos(v12);
  v4 = v13;
  v14 = 1.0 - v13;
  v5 = *(float *)&a3;
  v6 = v14;
  v7 = *(float *)&a3 * v14;
  *this = *(float *)&a3 * v7 + v4;
  v8 = *((float *)&a3 + 1);
  v15 = *((float *)&a3 + 1) * v7;
  v18 = a4 * v17;
  *(this + 1) = v18 + v15;
  v9 = v7 * a4;
  v16 = v8 * v17;
  *(this + 2) = v9 - v16;
  *(this + 3) = v15 - v18;
  *(this + 4) = v8 * (v8 * v6) + v4;
  v10 = v8 * v6 * a4;
  v11 = v5 * v17;
  *(this + 5) = v11 + v10;
  *(this + 6) = v9 + v16;
  *(this + 7) = v10 - v11;
  *(this + 8) = v4 + v6 * a4 * a4;
}
