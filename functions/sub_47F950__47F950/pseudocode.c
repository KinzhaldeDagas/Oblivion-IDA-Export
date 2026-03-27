float *__thiscall sub_47F950(float *this, float *a2)
{
  float v3; // [esp+0h] [ebp-Ch]
  float v4; // [esp+4h] [ebp-8h]
  float v5; // [esp+8h] [ebp-4h]

  v3 = *(this + 1);
  v4 = *(this + 2);
  v5 = *(this + 3);
  *a2 = *this;
  a2[1] = v3;
  a2[2] = v4;
  a2[3] = v5;
  return a2;
}
