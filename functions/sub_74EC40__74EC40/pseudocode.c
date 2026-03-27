int __thiscall sub_74EC40(char **this, volatile LONG *a2)
{
  NiAVObject *v3; // eax
  int v4; // esi

  v3 = (NiAVObject *)FormHeapAlloc(0xF8u);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_749EE0(v3);
    *(float *)(v4 + 0xF0) = 0.0;
    *(_DWORD *)v4 = &NiMeshParticleSystem::`vftable';
    *(_BYTE *)(v4 + 0xF4) = 1;
  }
  else
  {
    v4 = 0;
  }
  sub_749A70(this, v4, a2);
  *(float *)(v4 + 0xF0) = *((float *)this + 0x3C);
  *(_BYTE *)(v4 + 0xF4) = *((_BYTE *)this + 0xF4);
  return v4;
}
