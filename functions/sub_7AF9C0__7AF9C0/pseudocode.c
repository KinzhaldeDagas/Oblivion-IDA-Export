int __thiscall sub_7AF9C0(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  NiD3DPass *v9; // ebx
  int v10; // ebp
  NiD3DTextureStage *v11; // edi
  bool v12; // zf
  NiD3DPass *v13; // eax
  NiD3DTextureStage *Stage; // eax
  NiRenderedTexture *InnerTexture; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  double v19; // st7
  double v20; // st6
  NiD3DTextureStage *Texture; // ebp
  NiD3DTextureStage *Unk08; // ebp
  NiD3DPass *v24; // [esp+18h] [ebp-24h] BYREF
  int v25; // [esp+1Ch] [ebp-20h]
  float v26; // [esp+20h] [ebp-1Ch]
  float v27; // [esp+24h] [ebp-18h]
  float v28; // [esp+28h] [ebp-14h]
  float v29; // [esp+2Ch] [ebp-10h]
  unsigned int v30; // [esp+38h] [ebp-4h]

  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0x80))(this);
  v9 = 0;
  v10 = 0;
  v24 = 0;
  v11 = 0;
  v30 = 0;
  v12 = *((_DWORD *)this + 0x24) == 0;
  LOBYTE(v30) = 1;
  if ( v12 )
  {
    v13 = *((NiD3DPass **)this + 0x25);
    if ( v13 )
    {
      v9 = *((NiD3DPass **)this + 0x25);
      ++v13->RefCount;
      v24 = v13;
    }
    Stage = (NiD3DTextureStage *)v9->Stages.data->Stage;
    if ( Stage )
    {
      ++Stage[7].Unk08;
      v11 = Stage;
    }
    InnerTexture = BSRenderedTexture::GetInnerTexture(*((BSRenderedTexture **)this + 0x1F));
    sub_76C910(v11, InnerTexture);
    v16 = *(_DWORD *)(*((_DWORD *)this + 0x1F) + 0x20);
    if ( v16 )
      v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 0x50))(v16);
    v17 = *(_DWORD *)(*((_DWORD *)this + 0x1F) + 0x20);
    if ( v17 )
      v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x4C))(v17);
    else
      v18 = 0;
    v25 = v18;
    v19 = (double)v18;
    if ( v18 < 0 )
      v19 = v19 + flt_A2FC78;
    v25 = v10;
    v26 = 1.0 / v19;
    v20 = (double)v10;
    if ( v10 < 0 )
      v20 = v20 + flt_A2FC78;
    *((float *)this + 0x2C) = v26;
    v27 = 1.0 / v20;
    v28 = 0.0;
    *((float *)this + 0x2D) = v27;
    v29 = 0.0;
    *((float *)this + 0x2E) = v28;
    *((float *)this + 0x2F) = 0.0;
    Texture = (NiD3DTextureStage *)v9->Stages.data->Texture;
    if ( v11 != Texture )
    {
      if ( v11 )
      {
        v12 = v11[7].Unk08-- == 1;
        if ( v12 )
          sub_772560(v11);
      }
      v11 = Texture;
      if ( Texture )
        ++Texture[7].Unk08;
    }
    sub_76C910(v11, *((NiRenderedTexture **)this + 0x30));
    Unk08 = (NiD3DTextureStage *)v9->Stages.data->Unk08;
    if ( v11 != Unk08 )
    {
      if ( v11 )
      {
        v12 = v11[7].Unk08-- == 1;
        if ( v12 )
          sub_772560(v11);
      }
      v11 = Unk08;
      if ( Unk08 )
        ++Unk08[7].Unk08;
    }
    sub_76C910(v11, (NiRenderedTexture *)dword_B42D44);
    sub_76CE40((NiTArray_NiD3DPass *)this + 4, *((NiD3DPass **)this + 0xE), &v24);
    ++*((_DWORD *)this + 0xE);
  }
  LOBYTE(v30) = 0;
  if ( v11 )
  {
    v12 = v11[7].Unk08-- == 1;
    if ( v12 )
      sub_772560(v11);
  }
  v30 = 0xFFFFFFFF;
  if ( v9 )
  {
    v12 = v9->RefCount-- == 1;
    if ( v12 )
      sub_7604D0(v9);
  }
  return 0;
}
