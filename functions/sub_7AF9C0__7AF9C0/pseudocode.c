int __thiscall sub_7AF9C0(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  NiD3DPass *v9; // ebx
  int v10; // ebp
  NiD3DTextureStage *v11; // edi
  bool v12; // zf
  NiD3DPass *v13; // eax
  NiD3DTextureStage *Stage; // eax
  NiTexture *InnerTexture; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  double v19; // st7
  double v20; // st6
  NiD3DTextureStage *Texture; // ebp
  NiD3DTextureStage *Unk08; // ebp
  NiD3DPass *value; // [esp+18h] [ebp-24h] BYREF
  int v25; // [esp+1Ch] [ebp-20h]
  float v26; // [esp+20h] [ebp-1Ch]
  float v27; // [esp+24h] [ebp-18h]
  float v28; // [esp+28h] [ebp-14h]
  float v29; // [esp+2Ch] [ebp-10h]
  unsigned int v30; // [esp+38h] [ebp-4h]

  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0x80))(this); /*0x7af9f1*/
  v9 = 0; /*0x7af9f3*/
  v10 = 0; /*0x7af9f5*/
  value = 0; /*0x7af9f7*/
  v11 = 0; /*0x7af9fb*/
  v30 = 0; /*0x7af9fd*/
  v12 = *((_DWORD *)this + 0x24) == 0; /*0x7afa05*/
  LOBYTE(v30) = 1; /*0x7afa0b*/
  if ( v12 ) /*0x7afa10*/
  {
    v13 = *((NiD3DPass **)this + 0x25); /*0x7afa16*/
    if ( v13 ) /*0x7afa1e*/
    {
      v9 = *((NiD3DPass **)this + 0x25); /*0x7afa20*/
      ++v13->RefCount; /*0x7afa22*/
      value = v13; /*0x7afa26*/
    }
    Stage = (NiD3DTextureStage *)v9->Stages.data->Stage; /*0x7afa2d*/
    if ( Stage ) /*0x7afa31*/
    {
      ++Stage[7].Unk08; /*0x7afa33*/
      v11 = Stage; /*0x7afa37*/
    }
    InnerTexture = (NiTexture *)BSRenderedTexture::GetInnerTexture(*((BSRenderedTexture **)this + 0x1F)); /*0x7afa40*/
    NiD3DTextureStage_SetTexture(v11, InnerTexture); /*0x7afa48*/
    v16 = *(_DWORD *)(*((_DWORD *)this + 0x1F) + 0x20); /*0x7afa50*/
    if ( v16 ) /*0x7afa55*/
      v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 0x50))(v16); /*0x7afa5e*/
    v17 = *(_DWORD *)(*((_DWORD *)this + 0x1F) + 0x20); /*0x7afa63*/
    if ( v17 ) /*0x7afa68*/
      v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x4C))(v17); /*0x7afa6f*/
    else
      v18 = 0; /*0x7afa73*/
    v25 = v18; /*0x7afa77*/
    v19 = (double)v18; /*0x7afa7b*/
    if ( v18 < 0 ) /*0x7afa7f*/
      v19 = v19 + flt_A2FC78; /*0x7afa81*/
    v25 = v10; /*0x7afa8d*/
    v26 = 1.0 / v19; /*0x7afa95*/
    v20 = (double)v10; /*0x7afa99*/
    if ( v10 < 0 ) /*0x7afa9d*/
      v20 = v20 + flt_A2FC78; /*0x7afa9f*/
    *((float *)this + 0x2C) = v26; /*0x7afaab*/
    v27 = 1.0 / v20; /*0x7afab1*/
    v28 = 0.0; /*0x7afabb*/
    *((float *)this + 0x2D) = v27; /*0x7afabf*/
    v29 = 0.0; /*0x7afac5*/
    *((float *)this + 0x2E) = v28; /*0x7afad1*/
    *((float *)this + 0x2F) = 0.0; /*0x7afad7*/
    Texture = (NiD3DTextureStage *)v9->Stages.data->Texture; /*0x7afae0*/
    if ( v11 != Texture ) /*0x7afae5*/
    {
      if ( v11 ) /*0x7afae9*/
      {
        v12 = v11[7].Unk08-- == 1; /*0x7afaeb*/
        if ( v12 ) /*0x7afaef*/
          sub_772560(v11); /*0x7afaf3*/
      }
      v11 = Texture; /*0x7afafa*/
      if ( Texture ) /*0x7afb00*/
        ++Texture[7].Unk08; /*0x7afb02*/
    }
    NiD3DTextureStage_SetTexture(v11, *((NiTexture **)this + 0x30)); /*0x7afb0f*/
    Unk08 = (NiD3DTextureStage *)v9->Stages.data->Unk08; /*0x7afb17*/
    if ( v11 != Unk08 ) /*0x7afb1c*/
    {
      if ( v11 ) /*0x7afb20*/
      {
        v12 = v11[7].Unk08-- == 1; /*0x7afb22*/
        if ( v12 ) /*0x7afb26*/
          sub_772560(v11); /*0x7afb2a*/
      }
      v11 = Unk08; /*0x7afb31*/
      if ( Unk08 ) /*0x7afb37*/
        ++Unk08[7].Unk08; /*0x7afb39*/
    }
    NiD3DTextureStage_SetTexture(v11, (NiTexture *)unk_B42D44); /*0x7afb46*/
    NiTArray_NiD3DPass_SetAt((NiTArray_NiD3DPass *)this + 4, *((_DWORD *)this + 0xE), &value); /*0x7afb57*/
    ++*((_DWORD *)this + 0xE); /*0x7afb5c*/
  }
  LOBYTE(v30) = 0; /*0x7afb65*/
  if ( v11 ) /*0x7afb6a*/
  {
    v12 = v11[7].Unk08-- == 1; /*0x7afb6c*/
    if ( v12 ) /*0x7afb6f*/
      sub_772560(v11); /*0x7afb73*/
  }
  v30 = 0xFFFFFFFF; /*0x7afb7a*/
  if ( v9 ) /*0x7afb7e*/
  {
    v12 = v9->RefCount-- == 1; /*0x7afb80*/
    if ( v12 ) /*0x7afb83*/
      NiD3DPass_ReleaseToPool(v9); /*0x7afb87*/
  }
  return 0; /*0x7afb8e*/
}
