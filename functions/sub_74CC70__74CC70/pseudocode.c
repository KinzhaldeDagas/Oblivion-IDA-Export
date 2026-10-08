float *sub_74CC70()
{
  float *v0; // eax
  float *v1; // esi

  v0 = (float *)FormHeapAlloc(0x5Cu); /*0x74cc73*/
  v1 = v0; /*0x74cc78*/
  if ( !v0 ) /*0x74cc7f*/
    return 0; /*0x74cc9a*/
  sub_752FD0(v0); /*0x74cc83*/
  v1[0x15] = 0.0; /*0x74cc8a*/
  *(_DWORD *)v1 = &NiPSysCylinderEmitter::`vftable'; /*0x74cc8d*/
  v1[0x16] = 0.0; /*0x74cc93*/
  return v1; /*0x74cc98*/
}
