float *__thiscall sub_4BFB30(float *this, float *a2, float *a3)
{
  int v4; // edx
  int v5; // ecx

  *a2 = *this;
  a2[1] = *(this + 1);
  v4 = *((_DWORD *)this + 2);
  v5 = *((_DWORD *)this + 3);
  *((_DWORD *)a2 + 2) = v4;
  *((_DWORD *)a2 + 3) = v5;
  *a2 = *a2 + *a3;
  a2[1] = a3[1] + a2[1];
  a2[2] = a3[2] + a2[2];
  a2[3] = a3[3] + a2[3];
  return a2;
}
