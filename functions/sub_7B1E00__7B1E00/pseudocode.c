int __thiscall sub_7B1E00(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
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

  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0x80))(this); /*0x7b1e31*/
  v9 = 0; /*0x7b1e33*/
  v10 = 0; /*0x7b1e35*/
  value = 0; /*0x7b1e37*/
  v18 = 0; /*0x7b1e3b*/
  v11 = *((_DWORD *)this + 0x24) == 0; /*0x7b1e43*/
  LOBYTE(v18) = 1; /*0x7b1e49*/
  if ( v11 ) /*0x7b1e4e*/
  {
    v12 = *((NiD3DPass **)this + 0x25); /*0x7b1e54*/
    if ( v12 ) /*0x7b1e5c*/
    {
      v9 = *((NiD3DPass **)this + 0x25); /*0x7b1e5e*/
      ++v12->RefCount; /*0x7b1e60*/
      value = v12; /*0x7b1e64*/
    }
    Stage = (NiD3DTextureStage *)v9->Stages.data->Stage; /*0x7b1e6b*/
    if ( Stage ) /*0x7b1e6f*/
    {
      ++Stage[7].Unk08; /*0x7b1e71*/
      v10 = Stage; /*0x7b1e75*/
    }
    InnerTexture = (NiTexture *)BSRenderedTexture::GetInnerTexture(*((BSRenderedTexture **)this + 0x1F)); /*0x7b1e7e*/
    NiD3DTextureStage_SetTexture(v10, InnerTexture); /*0x7b1e86*/
    Texture = (NiD3DTextureStage *)v9->Stages.data->Texture; /*0x7b1e8e*/
    if ( v10 != Texture ) /*0x7b1e93*/
    {
      if ( v10 ) /*0x7b1e97*/
      {
        v11 = v10[7].Unk08-- == 1; /*0x7b1e99*/
        if ( v11 ) /*0x7b1e9d*/
          sub_772560(v10); /*0x7b1ea1*/
      }
      v10 = Texture; /*0x7b1ea8*/
      if ( Texture ) /*0x7b1eae*/
        ++Texture[7].Unk08; /*0x7b1eb0*/
    }
    NiD3DTextureStage_SetTexture(v10, *((NiTexture **)this + 0x2D)); /*0x7b1ebd*/
    NiTArray_NiD3DPass_SetAt((NiTArray_NiD3DPass *)this + 4, *((_DWORD *)this + 0xE), &value); /*0x7b1ece*/
    ++*((_DWORD *)this + 0xE); /*0x7b1ed3*/
  }
  LOBYTE(v18) = 0; /*0x7b1edc*/
  if ( v10 ) /*0x7b1ee1*/
  {
    v11 = v10[7].Unk08-- == 1; /*0x7b1ee3*/
    if ( v11 ) /*0x7b1ee6*/
      sub_772560(v10); /*0x7b1eea*/
  }
  v18 = 0xFFFFFFFF; /*0x7b1ef1*/
  if ( v9 ) /*0x7b1ef5*/
  {
    v11 = v9->RefCount-- == 1; /*0x7b1ef7*/
    if ( v11 ) /*0x7b1efa*/
      NiD3DPass_ReleaseToPool(v9); /*0x7b1efe*/
  }
  return 0; /*0x7b1f05*/
}
