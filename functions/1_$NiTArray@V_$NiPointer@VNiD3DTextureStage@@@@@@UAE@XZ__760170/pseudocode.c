void __thiscall NiTArray<NiPointer<NiD3DTextureStage>>::~NiTArray<NiPointer<NiD3DTextureStage>>(_DWORD *this)
{
  int v1; // eax
  int v2; // edi
  unsigned int v3; // ebx
  int v4; // esi
  int i; // edi
  NiD3DTextureStage *v6; // ecx

  v1 = *(this + 1);
  *this = &NiTArray<NiPointer<NiD3DTextureStage>>::`vftable';
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 - 4);
    v3 = v1 - 4;
    v4 = v1 + 4 * v2;
    for ( i = v2 - 1; i >= 0; --i )
    {
      v6 = *(NiD3DTextureStage **)(v4 - 4);
      v4 -= 4;
      if ( v6 )
      {
        if ( v6[7].Unk08-- == 1 )
          sub_772560(v6);
      }
    }
    FormHeapFree(v3);
  }
}
