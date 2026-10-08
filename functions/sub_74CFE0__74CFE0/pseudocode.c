float *sub_74CFE0()
{
  float *v0; // eax
  float *v1; // esi

  v0 = (float *)FormHeapAlloc(0x58u); /*0x74cfe3*/
  v1 = v0; /*0x74cfe8*/
  if ( !v0 ) /*0x74cfef*/
    return 0; /*0x74d007*/
  sub_752FD0(v0); /*0x74cff3*/
  v1[0x15] = 0.0; /*0x74cffa*/
  *(_DWORD *)v1 = &NiPSysSphereEmitter::`vftable'; /*0x74cffd*/
  return v1; /*0x74d005*/
}
