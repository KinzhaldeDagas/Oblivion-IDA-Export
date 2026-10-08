float *__thiscall sub_74C1E0(float *this, _DWORD **a2)
{
  float *v3; // eax
  float *v4; // esi

  v3 = (float *)FormHeapAlloc(0x84u); /*0x74c1e9*/
  if ( v3 ) /*0x74c1f3*/
    v4 = sub_74ACC0(v3); /*0x74c1fc*/
  else
    v4 = 0; /*0x74c200*/
  sub_74EE00(this, (int)v4, a2); /*0x74c20a*/
  sub_74A8C0((unsigned __int16 *)v4 + 0x28, *((unsigned __int16 *)this + 0x2D)); /*0x74c217*/
  v4[0x1C] = *(this + 0x1C); /*0x74c21f*/
  v4[0x1D] = *(this + 0x1D); /*0x74c225*/
  v4[0x1E] = *(this + 0x1E); /*0x74c22e*/
  v4[0x1F] = *(this + 0x1F); /*0x74c234*/
  v4[0x20] = *(this + 0x20); /*0x74c23a*/
  return v4; /*0x74c240*/
}
