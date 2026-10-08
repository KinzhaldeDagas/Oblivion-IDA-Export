float *__thiscall sub_74CF90(float *this, _DWORD **a2)
{
  float *v3; // eax
  int v4; // esi

  v3 = (float *)FormHeapAlloc(0x58u); /*0x74cf96*/
  v4 = (int)v3; /*0x74cf9b*/
  if ( v3 ) /*0x74cfa2*/
  {
    sub_752FD0(v3); /*0x74cfa6*/
    *(float *)(v4 + 0x54) = 0.0; /*0x74cfad*/
    *(_DWORD *)v4 = &NiPSysSphereEmitter::`vftable'; /*0x74cfb0*/
  }
  else
  {
    v4 = 0; /*0x74cfb8*/
  }
  sub_753000(this, v4, a2); /*0x74cfc2*/
  *(float *)(v4 + 0x54) = *(this + 0x15); /*0x74cfcb*/
  return (float *)v4; /*0x74cfd0*/
}
