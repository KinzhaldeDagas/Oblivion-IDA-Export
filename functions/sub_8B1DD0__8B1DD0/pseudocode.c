int __thiscall sub_8B1DD0(float *this, float *a2)
{
  double v3; // st7
  double v4; // st6
  double v5; // st7
  double v6; // st6
  float v8; // [esp+0h] [ebp-1Ch]
  float v9; // [esp+4h] [ebp-18h]
  float v10; // [esp+8h] [ebp-14h]
  float v11; // [esp+Ch] [ebp-10h]
  float v12; // [esp+10h] [ebp-Ch]
  float v13; // [esp+14h] [ebp-8h]
  float v14; // [esp+18h] [ebp-4h]
  float v15; // [esp+20h] [ebp+4h]

  v3 = *a2 + *a2;
  v4 = a2[1] + a2[1];
  v15 = a2[2] + a2[2];
  v14 = v3 * *a2;
  v8 = v4 * *a2;
  v10 = v15 * *a2;
  v13 = v4 * a2[1];
  v11 = v15 * a2[1];
  v9 = v15 * a2[2];
  v12 = v3 * a2[3];
  v5 = v4 * a2[3];
  v6 = v15 * a2[3];
  *this = fConstant_1 - (v9 + v13);
  *(this + 1) = v8 + v6;
  *(this + 2) = v10 - v5;
  *(this + 3) = 0.0;
  *(this + 4) = v8 - v6;
  *(this + 5) = fConstant_1 - (v9 + v14);
  *(this + 6) = v12 + v11;
  *(this + 7) = 0.0;
  *(this + 8) = v5 + v10;
  *(this + 9) = v11 - v12;
  *(this + 0xA) = fConstant_1 - (v13 + v14);
  *(this + 0xB) = 0.0;
  return 0;
}
