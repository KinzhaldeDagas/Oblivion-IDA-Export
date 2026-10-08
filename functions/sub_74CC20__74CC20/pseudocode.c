float *__thiscall sub_74CC20(float *this, _DWORD **a2)
{
  float *v3; // eax
  int v4; // esi

  v3 = (float *)FormHeapAlloc(0x5Cu); /*0x74cc26*/
  v4 = (int)v3; /*0x74cc2b*/
  if ( v3 ) /*0x74cc32*/
  {
    sub_752FD0(v3); /*0x74cc36*/
    *(float *)(v4 + 0x54) = 0.0; /*0x74cc3d*/
    *(_DWORD *)v4 = &NiPSysCylinderEmitter::`vftable'; /*0x74cc40*/
    *(float *)(v4 + 0x58) = 0.0; /*0x74cc46*/
  }
  else
  {
    v4 = 0; /*0x74cc4b*/
  }
  sub_753000(this, v4, a2); /*0x74cc55*/
  *(float *)(v4 + 0x54) = *(this + 0x15); /*0x74cc5d*/
  *(float *)(v4 + 0x58) = *(this + 0x16); /*0x74cc66*/
  return (float *)v4; /*0x74cc69*/
}
