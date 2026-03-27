void __thiscall sub_70FE20(float *this, float a2, float a3, float a4, float a5)
{
  double v5; // st7
  double v6; // st6
  double v7; // st4
  double v8; // st5
  double v9; // st3
  double v10; // st2
  float v11; // [esp+0h] [ebp-Ch]
  float v12; // [esp+0h] [ebp-Ch]
  float v13; // [esp+4h] [ebp-8h]
  float v14; // [esp+4h] [ebp-8h]
  float v15; // [esp+8h] [ebp-4h]
  float v16; // [esp+10h] [ebp+4h]
  float v17; // [esp+10h] [ebp+4h]
  float v18; // [esp+10h] [ebp+4h]
  float v19; // [esp+14h] [ebp+8h]
  float v20; // [esp+18h] [ebp+Ch]
  float v21; // [esp+18h] [ebp+Ch]
  float v22; // [esp+1Ch] [ebp+10h]

  v11 = cos(a2);
  v13 = sin(a2);
  v5 = v11;
  v16 = 1.0 - v11;
  v6 = a3;
  v7 = a4;
  v8 = v16;
  v12 = a3 * a4 * v16;
  v9 = a5;
  v19 = a3 * a5 * v16;
  v15 = a4 * a5 * v16;
  v10 = v13;
  v14 = v13 * v6;
  v17 = v10 * a4;
  v22 = v10 * a5;
  v20 = v6 * v6;
  *this = v20 * v8 + v5;
  *(this + 1) = v22 + v12;
  *(this + 2) = v19 - v17;
  *(this + 3) = v12 - v22;
  v21 = v7 * v7;
  *(this + 4) = v21 * v8 + v5;
  *(this + 5) = v14 + v15;
  *(this + 6) = v17 + v19;
  *(this + 7) = v15 - v14;
  v18 = v9 * v9;
  *(this + 8) = v5 + v8 * v18;
}
