float *sub_74D2D0()
{
  float *v0; // eax
  float *v1; // esi

  v0 = (float *)FormHeapAlloc(0x60u); /*0x74d2d3*/
  v1 = v0; /*0x74d2d8*/
  if ( !v0 ) /*0x74d2df*/
    return 0; /*0x74d2fd*/
  sub_752FD0(v0); /*0x74d2e3*/
  v1[0x15] = 0.0; /*0x74d2ea*/
  *(_DWORD *)v1 = &NiPSysBoxEmitter::`vftable'; /*0x74d2ed*/
  v1[0x16] = 0.0; /*0x74d2f3*/
  v1[0x17] = 0.0; /*0x74d2f8*/
  return v1; /*0x74d2fb*/
}
