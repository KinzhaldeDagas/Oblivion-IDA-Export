float *sub_74CFE0()
{
  float *v0; // eax
  float *v1; // esi

  v0 = (float *)FormHeapAlloc(0x58u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_752FD0(v0);
  v1[0x15] = 0.0;
  *(_DWORD *)v1 = &NiPSysSphereEmitter::`vftable';
  return v1;
}
