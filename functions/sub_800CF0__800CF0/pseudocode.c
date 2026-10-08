int __thiscall sub_800CF0(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  NiD3DPass *v9; // ebp
  NiD3DTextureStage *v10; // edi
  bool v11; // zf
  NiD3DPass *v12; // eax
  NiD3DTextureStage *Stage; // eax
  NiTexture *InnerTexture; // eax
  NiD3DTextureStage *Texture; // ebx
  NiD3DPass *value; // [esp+18h] [ebp-10h] BYREF
  unsigned int v18; // [esp+24h] [ebp-4h]

  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0x80))(this); /*0x800d21*/
  v9 = 0; /*0x800d23*/
  value = 0; /*0x800d25*/
  v10 = 0; /*0x800d29*/
  v18 = 0; /*0x800d2b*/
  v11 = *((_DWORD *)this + 0x26) == 0; /*0x800d33*/
  LOBYTE(v18) = 1; /*0x800d39*/
  if ( v11 ) /*0x800d3e*/
  {
    v12 = *((NiD3DPass **)this + 0x27); /*0x800d44*/
    if ( v12 ) /*0x800d4c*/
    {
      v9 = *((NiD3DPass **)this + 0x27); /*0x800d4e*/
      ++v12->RefCount; /*0x800d50*/
      value = v12; /*0x800d54*/
    }
    Stage = (NiD3DTextureStage *)v9->Stages.data->Stage; /*0x800d5b*/
    if ( Stage ) /*0x800d5f*/
    {
      ++Stage[7].Unk08; /*0x800d61*/
      v10 = Stage; /*0x800d65*/
    }
    InnerTexture = (NiTexture *)BSRenderedTexture::GetInnerTexture(*((BSRenderedTexture **)this + 0x1F)); /*0x800d6e*/
    NiD3DTextureStage_SetTexture(v10, InnerTexture); /*0x800d76*/
    if ( *((_DWORD *)this + 0x28) ) /*0x800d7b*/
    {
      Texture = (NiD3DTextureStage *)v9->Stages.data->Texture; /*0x800d87*/
      if ( v10 != Texture ) /*0x800d8c*/
      {
        if ( v10 ) /*0x800d90*/
        {
          v11 = v10[7].Unk08-- == 1; /*0x800d92*/
          if ( v11 ) /*0x800d96*/
            sub_772560(v10); /*0x800d9a*/
        }
        v10 = Texture; /*0x800da1*/
        if ( Texture ) /*0x800da7*/
          ++Texture[7].Unk08; /*0x800da9*/
      }
      NiD3DTextureStage_SetTexture(v10, *((NiTexture **)this + 0x28)); /*0x800db6*/
    }
    NiTArray_NiD3DPass_SetAt((NiTArray_NiD3DPass *)this + 4, *((_DWORD *)this + 0xE), &value); /*0x800dc7*/
    ++*((_DWORD *)this + 0xE); /*0x800dcc*/
  }
  LOBYTE(v18) = 0; /*0x800dd5*/
  if ( v10 ) /*0x800dda*/
  {
    v11 = v10[7].Unk08-- == 1; /*0x800ddc*/
    if ( v11 ) /*0x800ddf*/
      sub_772560(v10); /*0x800de3*/
  }
  v18 = 0xFFFFFFFF; /*0x800dea*/
  if ( v9 ) /*0x800dee*/
  {
    v11 = v9->RefCount-- == 1; /*0x800df0*/
    if ( v11 ) /*0x800df3*/
      NiD3DPass_ReleaseToPool(v9); /*0x800df7*/
  }
  return 0; /*0x800dfe*/
}
