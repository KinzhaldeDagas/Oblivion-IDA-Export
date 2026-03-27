float *__thiscall sub_9741F0(float *this, float *a2)
{
  float v3; // [esp+4h] [ebp-8h]
  float v4; // [esp+8h] [ebp-4h]

  v3 = *(this + 6) * *(this + 5) - *(this + 8) * *(this + 3);
  v4 = *(this + 3) * *(this + 7) - *(this + 6) * *(this + 4);
  *a2 = *(this + 8) * *(this + 4) - *(this + 5) * *(this + 7);
  a2[1] = v3;
  a2[2] = v4;
  sub_43F350(a2);
  return a2;
}
