int __thiscall sub_7F58D0(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  NiD3DPass *v9; // edi
  NiD3DTextureStage *v10; // ebp
  bool v11; // zf
  NiD3DPass *v12; // eax
  NiD3DTextureStage *Stage; // eax
  NiTexture *InnerTexture; // eax
  NiD3DPass *value; // [esp+14h] [ebp-14h] BYREF
  NiD3DTextureStage *v17; // [esp+18h] [ebp-10h]
  unsigned int v18; // [esp+24h] [ebp-4h]

  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0x80))(this); /*0x7f5901*/
  v9 = 0; /*0x7f5903*/
  v10 = 0; /*0x7f5905*/
  value = 0; /*0x7f5907*/
  v18 = 0; /*0x7f590b*/
  v17 = 0; /*0x7f590f*/
  v11 = *((_DWORD *)this + 0x26) == 0; /*0x7f5913*/
  LOBYTE(v18) = 1; /*0x7f591e*/
  if ( v11 ) /*0x7f5922*/
  {
    v12 = *((NiD3DPass **)this + 0x27); /*0x7f5924*/
    if ( v12 ) /*0x7f592c*/
    {
      v9 = *((NiD3DPass **)this + 0x27); /*0x7f592e*/
      ++v12->RefCount; /*0x7f5930*/
      value = v12; /*0x7f5933*/
    }
    Stage = (NiD3DTextureStage *)v9->Stages.data->Stage; /*0x7f593a*/
    if ( Stage ) /*0x7f593e*/
    {
      ++Stage[7].Unk08; /*0x7f5940*/
      v10 = Stage; /*0x7f5943*/
      v17 = Stage; /*0x7f5945*/
    }
    InnerTexture = (NiTexture *)BSRenderedTexture::GetInnerTexture(*((BSRenderedTexture **)this + 0x1F)); /*0x7f594c*/
    NiD3DTextureStage_SetTexture(v10, InnerTexture); /*0x7f5954*/
    NiTArray_NiD3DPass_SetAt((NiTArray_NiD3DPass *)this + 4, *((_DWORD *)this + 0xE), &value); /*0x7f5965*/
    ++*((_DWORD *)this + 0xE); /*0x7f596a*/
  }
  LOBYTE(v18) = 0; /*0x7f5972*/
  if ( v10 ) /*0x7f5977*/
  {
    v11 = v10[7].Unk08-- == 1; /*0x7f5979*/
    if ( v11 ) /*0x7f597c*/
      sub_772560(v10); /*0x7f5980*/
  }
  v18 = 0xFFFFFFFF; /*0x7f5987*/
  if ( v9 ) /*0x7f598b*/
  {
    v11 = v9->RefCount-- == 1; /*0x7f598d*/
    if ( v11 ) /*0x7f5990*/
      NiD3DPass_ReleaseToPool(v9); /*0x7f5994*/
  }
  return 0; /*0x7f599b*/
}
