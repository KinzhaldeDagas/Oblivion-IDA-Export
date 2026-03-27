double __thiscall sub_4D7E30(float *this, float *a2)
{
  float v3; // [esp+0h] [ebp-Ch]
  float v4; // [esp+4h] [ebp-8h]
  float v5; // [esp+8h] [ebp-4h]
  float v6; // [esp+10h] [ebp+4h]

  v3 = *a2 - *(this + 0xB);
  v4 = a2[1] - *(this + 0xC);
  v5 = a2[2] - *(this + 0xD);
  v6 = v3 * v3 + v4 * v4 + v5 * v5;
  return (float)sqrt(v6);
}
