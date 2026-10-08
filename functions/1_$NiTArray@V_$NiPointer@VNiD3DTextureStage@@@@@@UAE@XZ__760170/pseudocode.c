void __thiscall NiTArray<NiPointer<NiD3DTextureStage>>::~NiTArray<NiPointer<NiD3DTextureStage>>(_DWORD *this)
{
  int v1; // eax
  int v2; // edi
  unsigned int v3; // ebx
  int v4; // esi
  int i; // edi
  NiD3DTextureStage *v6; // ecx

  v1 = *(this + 1); /*0x760170*/
  *this = &NiTArray<NiPointer<NiD3DTextureStage>>::`vftable'; /*0x760175*/
  if ( v1 ) /*0x76017b*/
  {
    v2 = *(_DWORD *)(v1 - 4); /*0x760180*/
    v3 = v1 - 4; /*0x760183*/
    v4 = v1 + 4 * v2; /*0x760186*/
    for ( i = v2 - 1; i >= 0; --i ) /*0x76018c*/
    {
      v6 = *(NiD3DTextureStage **)(v4 - 4); /*0x760190*/
      v4 -= 4; /*0x760193*/
      if ( v6 ) /*0x760198*/
      {
        if ( v6[7].Unk08-- == 1 ) /*0x76019a*/
          sub_772560(v6); /*0x7601a0*/
      }
    }
    FormHeapFree(v3); /*0x7601ab*/
  }
}
