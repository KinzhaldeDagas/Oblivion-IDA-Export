float *__thiscall sub_8A1FB0(float *this, float *a2)
{
  float *result; // eax
  float v3; // [esp+0h] [ebp-Ch]
  float v4; // [esp+4h] [ebp-8h]
  float v5; // [esp+4h] [ebp-8h]
  float v6; // [esp+4h] [ebp-8h]
  float v7; // [esp+8h] [ebp-4h]
  float v8; // [esp+8h] [ebp-4h]
  float v9; // [esp+8h] [ebp-4h]
  float v10; // [esp+10h] [ebp+4h]
  float v11; // [esp+10h] [ebp+4h]

  result = a2;
  v3 = *(this + 1);
  v4 = *(this + 2);
  v7 = *(this + 3);
  *a2 = *this;
  a2[1] = v3;
  a2[2] = v4;
  a2[3] = v7;
  v10 = *(this + 5);
  v8 = *(this + 6);
  v5 = *(this + 7);
  result[4] = *(this + 4);
  result[5] = v10;
  result[6] = v8;
  result[7] = v5;
  v11 = *(this + 9);
  v9 = *(this + 0xA);
  v6 = *(this + 0xB);
  result[8] = *(this + 8);
  result[9] = v11;
  result[0xA] = v9;
  result[0xB] = v6;
  return result;
}
