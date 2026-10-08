float *__thiscall sub_74D270(float *this, _DWORD **a2)
{
  float *v3; // eax
  int v4; // esi

  v3 = (float *)FormHeapAlloc(0x60u); /*0x74d276*/
  v4 = (int)v3; /*0x74d27b*/
  if ( v3 ) /*0x74d282*/
  {
    sub_752FD0(v3); /*0x74d286*/
    *(float *)(v4 + 0x54) = 0.0; /*0x74d28d*/
    *(_DWORD *)v4 = &NiPSysBoxEmitter::`vftable'; /*0x74d290*/
    *(float *)(v4 + 0x58) = 0.0; /*0x74d296*/
    *(float *)(v4 + 0x5C) = 0.0; /*0x74d299*/
  }
  else
  {
    v4 = 0; /*0x74d29e*/
  }
  sub_753000(this, v4, a2); /*0x74d2a8*/
  *(float *)(v4 + 0x54) = *(this + 0x15); /*0x74d2b0*/
  *(float *)(v4 + 0x58) = *(this + 0x16); /*0x74d2b8*/
  *(float *)(v4 + 0x5C) = *(this + 0x17); /*0x74d2bf*/
  return (float *)v4; /*0x74d2c2*/
}
