NiAVObject *sub_740680()
{
  int v0; // esi
  NiAVObject *result; // eax

  v0 = FormHeapAlloc(0xC8u); /*0x7406ac*/
  result = 0; /*0x7406b5*/
  if ( v0 ) /*0x7406bd*/
  {
    sub_741FA0((NiAVObject *)v0); /*0x7406c1*/
    *(_DWORD *)v0 = &NiParticleMeshes::`vftable'; /*0x7406c6*/
    *(_BYTE *)(v0 + 0xC4) = 1; /*0x7406cc*/
    return (NiAVObject *)v0; /*0x7406d3*/
  }
  return result; /*0x7406d5*/
}
