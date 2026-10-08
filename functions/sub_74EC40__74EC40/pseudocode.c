int __thiscall sub_74EC40(NiGeometry *this, volatile LONG *a2)
{
  NiAVObject *v3; // eax
  int v4; // esi

  v3 = (NiAVObject *)FormHeapAlloc(0xF8u); /*0x74ec49*/
  v4 = (int)v3; /*0x74ec4e*/
  if ( v3 ) /*0x74ec55*/
  {
    sub_749EE0(v3); /*0x74ec59*/
    *(float *)(v4 + 0xF0) = 0.0; /*0x74ec60*/
    *(_DWORD *)v4 = &NiMeshParticleSystem::`vftable'; /*0x74ec66*/
    *(_BYTE *)(v4 + 0xF4) = 1; /*0x74ec6c*/
  }
  else
  {
    v4 = 0; /*0x74ec75*/
  }
  sub_749A70(this, v4, a2); /*0x74ec7f*/
  *(float *)(v4 + 0xF0) = *((float *)this + 0x3C); /*0x74ec8a*/
  *(_BYTE *)(v4 + 0xF4) = *((_BYTE *)this + 0xF4); /*0x74ec97*/
  return v4; /*0x74ec96*/
}
