float *__thiscall sub_96C420(float *this, float a2, int a3)
{
  float *result; // eax
  int v4; // ecx

  result = this; /*0x96c424*/
  *(_DWORD *)this = &NiSphereBV::`vftable'; /*0x96c42a*/
  *(this + 1) = *(float *)a3; /*0x96c432*/
  *(this + 2) = *(float *)(a3 + 4); /*0x96c438*/
  v4 = *(_DWORD *)(a3 + 8); /*0x96c43b*/
  result[4] = a2; /*0x96c43e*/
  *((_DWORD *)result + 3) = v4; /*0x96c441*/
  return result; /*0x96c444*/
}
