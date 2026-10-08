int sub_722490()
{
  int v0; // esi
  int result; // eax

  v0 = FormHeapAlloc(0xE4u); /*0x7224bc*/
  result = 0; /*0x7224c5*/
  if ( v0 ) /*0x7224cd*/
  {
    NiNode::NiNode((NiNode *)v0, 0); /*0x7224d2*/
    *(float *)(v0 + 0xE0) = 0.0; /*0x7224d9*/
    *(_DWORD *)v0 = &NiBillboardNode::`vftable'; /*0x7224df*/
    *(_WORD *)(v0 + 0xDC) = 9; /*0x7224e5*/
    return v0; /*0x7224ee*/
  }
  return result; /*0x7224f0*/
}
