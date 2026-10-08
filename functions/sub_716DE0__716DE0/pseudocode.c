float *__thiscall sub_716DE0(float *this, int a2, float a3)
{
  float *result; // eax
  int v4; // ecx

  result = this; /*0x716de4*/
  *this = *(float *)a2; /*0x716dec*/
  *(this + 1) = *(float *)(a2 + 4); /*0x716df1*/
  v4 = *(_DWORD *)(a2 + 8); /*0x716df4*/
  result[3] = a3; /*0x716df7*/
  *((_DWORD *)result + 2) = v4; /*0x716dfa*/
  return result; /*0x716dfd*/
}
