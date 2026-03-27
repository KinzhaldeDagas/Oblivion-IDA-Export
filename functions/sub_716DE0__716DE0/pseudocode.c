float *__thiscall sub_716DE0(float *this, int a2, float a3)
{
  float *result; // eax
  int v4; // ecx

  result = this;
  *this = *(float *)a2;
  *(this + 1) = *(float *)(a2 + 4);
  v4 = *(_DWORD *)(a2 + 8);
  result[3] = a3;
  *((_DWORD *)result + 2) = v4;
  return result;
}
