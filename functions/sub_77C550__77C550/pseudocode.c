void __thiscall sub_77C550(unsigned int **this)
{
  unsigned int *v2; // ecx
  NiD3DShaderInterface *v3; // esi
  NiD3DShaderInterface *v4; // [esp+4h] [ebp-Ch] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+8h] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+Ch] [ebp-4h] BYREF

  if ( *(this + 5) ) /*0x77c556*/
  {
    v2 = *(this + 6); /*0x77c55c*/
    if ( v2 ) /*0x77c561*/
    {
      v4 = 0; /*0x77c563*/
      position = (MEF_U32PointerMapEntry32 *)NiTMapBase_GetFirstNode(v2); /*0x77c572*/
      while ( position ) /*0x77c576*/
      {
        NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)*(this + 6), &position, &keyOut, (void **)&v4); /*0x77c592*/
        v3 = v4; /*0x77c597*/
        if ( v4 ) /*0x77c59d*/
        {
          if ( !v4->__vftable->IsRenderSet(v4) ) /*0x77c5a6*/
          {
            NiD3DShaderInterface::SetDX9Renderer(v3, (NiDX9Renderer *)*(this + 5)); /*0x77c5b2*/
            v3->__vftable->Unk64(v3); /*0x77c5be*/
            sub_769B10(*(this + 5), (int)v3); /*0x77c5c4*/
          }
        }
      }
    }
  }
}
