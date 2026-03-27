float *__thiscall sub_710400(float *this, float *a2)
{
  float v3; // [esp+4h] [ebp-20h]
  float v4; // [esp+8h] [ebp-1Ch]
  float v5; // [esp+Ch] [ebp-18h]
  float v6; // [esp+10h] [ebp-14h]
  float v7; // [esp+14h] [ebp-10h]
  float v8; // [esp+18h] [ebp-Ch]
  float v9; // [esp+1Ch] [ebp-8h]
  float v10; // [esp+20h] [ebp-4h]

  v3 = *(this + 1);
  v4 = *(this + 2);
  v5 = *(this + 3);
  v6 = *(this + 4);
  v7 = *(this + 5);
  v8 = *(this + 6);
  v9 = *(this + 7);
  v10 = *(this + 8);
  *a2 = *this;
  a2[3] = v3;
  a2[6] = v4;
  a2[1] = v5;
  a2[4] = v6;
  a2[7] = v7;
  a2[2] = v8;
  a2[5] = v9;
  a2[8] = v10;
  return a2;
}
