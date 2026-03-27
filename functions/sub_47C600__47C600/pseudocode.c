NiTransform *__thiscall sub_47C600(NiTransform *this, NiTransform *a2)
{
  double v3; // st6
  double v4; // st7
  float v5; // [esp+0h] [ebp-24h]
  float v6; // [esp+0h] [ebp-24h]
  float v7; // [esp+4h] [ebp-20h]
  float v8; // [esp+4h] [ebp-20h]
  float v9; // [esp+8h] [ebp-1Ch]
  float v10; // [esp+8h] [ebp-1Ch]
  float v11; // [esp+Ch] [ebp-18h]
  float v12; // [esp+10h] [ebp-14h]
  float v13; // [esp+14h] [ebp-10h]
  float v14; // [esp+18h] [ebp-Ch]
  float v15; // [esp+1Ch] [ebp-8h]
  float v16; // [esp+20h] [ebp-4h]

  v3 = dbl_A3D0C0;
  v5 = this->rot.data[0][1] * v3;
  v7 = this->rot.data[0][2] * v3;
  v9 = v3 * this->rot.data[1][0];
  v4 = v5;
  v16 = this->rot.data[0][0] * v5;
  v6 = this->rot.data[0][0] * v7;
  v12 = this->rot.data[0][0] * v9;
  v14 = v4 * this->rot.data[0][1];
  v11 = v7 * this->rot.data[0][1];
  v13 = v9 * this->rot.data[0][1];
  v8 = v7 * this->rot.data[0][2];
  v15 = this->rot.data[0][2] * v9;
  v10 = v9 * this->rot.data[1][0];
  a2->rot.data[0][0] = 1.0 - (v10 + v8);
  a2->rot.data[1][0] = v11 + v12;
  a2->rot.data[2][0] = v13 - v6;
  a2->rot.data[0][1] = v11 - v12;
  a2->rot.data[1][1] = 1.0 - (v10 + v14);
  a2->rot.data[2][1] = v15 + v16;
  a2->rot.data[0][2] = v13 + v6;
  a2->rot.data[1][2] = v15 - v16;
  a2->rot.data[2][2] = 1.0 - (v14 + v8);
  return a2;
}
