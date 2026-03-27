NiAVObject *sub_740680()
{
  int v0; // esi
  NiAVObject *result; // eax

  v0 = FormHeapAlloc(0xC8u);
  result = 0;
  if ( v0 )
  {
    sub_741FA0((NiAVObject *)v0);
    *(_DWORD *)v0 = &NiParticleMeshes::`vftable';
    *(_BYTE *)(v0 + 0xC4) = 1;
    return (NiAVObject *)v0;
  }
  return result;
}
