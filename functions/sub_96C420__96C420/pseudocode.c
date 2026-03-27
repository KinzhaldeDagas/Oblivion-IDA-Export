float *__thiscall sub_96C420(float *this, float a2, int a3)
{
  float *result; // eax
  int v4; // ecx

  result = this;
  *(_DWORD *)this = &NiSphereBV::`vftable';
  *(this + 1) = *(float *)a3;
  *(this + 2) = *(float *)(a3 + 4);
  v4 = *(_DWORD *)(a3 + 8);
  result[4] = a2;
  *((_DWORD *)result + 3) = v4;
  return result;
}
