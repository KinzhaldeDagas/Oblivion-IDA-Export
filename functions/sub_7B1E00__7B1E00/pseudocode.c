int __thiscall sub_7B1E00(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  NiD3DPass *v9; // ebp
  NiD3DTextureStage *v10; // edi
  bool v11; // zf
  NiD3DPass *v12; // eax
  NiD3DTextureStage *Stage; // eax
  NiRenderedTexture *InnerTexture; // eax
  NiD3DTextureStage *Texture; // ebx
  NiD3DPass *v17; // [esp+18h] [ebp-10h] BYREF
  unsigned int v18; // [esp+24h] [ebp-4h]

  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0x80))(this);
  v9 = 0;
  v10 = 0;
  v17 = 0;
  v18 = 0;
  v11 = *((_DWORD *)this + 0x24) == 0;
  LOBYTE(v18) = 1;
  if ( v11 )
  {
    v12 = *((NiD3DPass **)this + 0x25);
    if ( v12 )
    {
      v9 = *((NiD3DPass **)this + 0x25);
      ++v12->RefCount;
      v17 = v12;
    }
    Stage = (NiD3DTextureStage *)v9->Stages.data->Stage;
    if ( Stage )
    {
      ++Stage[7].Unk08;
      v10 = Stage;
    }
    InnerTexture = BSRenderedTexture::GetInnerTexture(*((BSRenderedTexture **)this + 0x1F));
    sub_76C910(v10, InnerTexture);
    Texture = (NiD3DTextureStage *)v9->Stages.data->Texture;
    if ( v10 != Texture )
    {
      if ( v10 )
      {
        v11 = v10[7].Unk08-- == 1;
        if ( v11 )
          sub_772560(v10);
      }
      v10 = Texture;
      if ( Texture )
        ++Texture[7].Unk08;
    }
    sub_76C910(v10, *((NiRenderedTexture **)this + 0x2D));
    sub_76CE40((NiTArray_NiD3DPass *)this + 4, *((NiD3DPass **)this + 0xE), &v17);
    ++*((_DWORD *)this + 0xE);
  }
  LOBYTE(v18) = 0;
  if ( v10 )
  {
    v11 = v10[7].Unk08-- == 1;
    if ( v11 )
      sub_772560(v10);
  }
  v18 = 0xFFFFFFFF;
  if ( v9 )
  {
    v11 = v9->RefCount-- == 1;
    if ( v11 )
      sub_7604D0(v9);
  }
  return 0;
}
