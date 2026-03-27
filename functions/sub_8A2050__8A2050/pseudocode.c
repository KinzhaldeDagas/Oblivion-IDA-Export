float *__thiscall sub_8A2050(float *this, float *a2)
{
  float v5; // [esp+8h] [ebp-8h]
  float v6; // [esp+Ch] [ebp-4h]
  float v7; // [esp+14h] [ebp+4h]

  sub_8A1FB0(this, a2);
  v7 = *(this + 0xD);
  v5 = *(this + 0xE);
  v6 = *(this + 0xF);
  a2[0xC] = *(this + 0xC);
  a2[0xD] = v7;
  a2[0xE] = v5;
  a2[0xF] = v6;
  return a2;
}
