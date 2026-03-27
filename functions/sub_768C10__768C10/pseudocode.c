char __thiscall sub_768C10(NiDX9Renderer *this)
{
  int v2; // edi
  NiPixelData *v3; // eax
  NiPixelData *v4; // eax
  NiPixelData *v5; // ebp
  char v6; // cl
  _BYTE *v7; // eax
  NiSourceTexture *TexturePixelData; // eax
  NiTexture *ClipperImage; // edi
  NiTexture *v10; // ebx
  int v12; // [esp+0h] [ebp-1Ch]
  int v13; // [esp+0h] [ebp-1Ch]
  int v14; // [esp+0h] [ebp-1Ch]
  int v15; // [esp+0h] [ebp-1Ch]
  int v16; // [esp+4h] [ebp-18h]
  int v17; // [esp+4h] [ebp-18h]
  int v18; // [esp+4h] [ebp-18h]
  int v19; // [esp+4h] [ebp-18h]
  int v20; // [esp+8h] [ebp-14h]
  int v21; // [esp+8h] [ebp-14h]
  int v22; // [esp+8h] [ebp-14h]
  int v23; // [esp+8h] [ebp-14h]
  int v24; // [esp+Ch] [ebp-10h]
  int v25; // [esp+Ch] [ebp-10h]
  int v26; // [esp+Ch] [ebp-10h]
  int v27; // [esp+Ch] [ebp-10h]
  int a2[3]; // [esp+10h] [ebp-Ch] BYREF

  sub_7637D0(this, (int)this->member.unk6F4, 0, 3, v12, v16, v20, v24, a2[0]);
  sub_7637D0(this, (int)&this->member.unk6F4[1], 1, 3, v13, v17, v21, v25, a2[0]);
  sub_7637D0(this, (int)&this->member.unk6F4[2], 0, 5, v14, v18, v22, v26, a2[0]);
  sub_7637D0(this, (int)&this->member.unk6F4[3], 1, 5, v15, v19, v23, v27, a2[0]);
  sub_764630(this);
  v2 = this->member.DefaultTextureFormat[0];
  v3 = (NiPixelData *)FormHeapAlloc(0x70u);
  if ( v3 )
  {
    v4 = NiPixelData::NiPixelData(v3, 2u, 1u, v2, 1u, 1);
    v5 = v4;
    if ( v4 )
      InterlockedIncrement((volatile LONG *)v4 + 1);
  }
  else
  {
    v5 = 0;
  }
  v6 = *(_BYTE *)(v2 + 1);
  v7 = (_BYTE *)(*((_DWORD *)v5 + 0x14) + **((_DWORD **)v5 + 0x17));
  if ( v6 == 0x10 )
  {
    v7[3] = 0xFF;
    v7[2] = 0xFF;
  }
  else
  {
    if ( v6 != 0x20 )
      goto LABEL_10;
    v7[3] = 0;
    v7[2] = 0;
    v7[7] = 0xFF;
    v7[6] = 0xFF;
    v7[5] = 0xFF;
    v7[4] = 0xFF;
  }
  *v7 = 0;
  v7[1] = 0;
LABEL_10:
  a2[0] = 6;
  a2[2] = 0;
  a2[1] = 0;
  TexturePixelData = NiSourceTexture::LoadTexturePixelData(v5, (PixelLayout *)a2);
  ClipperImage = this->member.ClipperImage;
  v10 = (NiTexture *)TexturePixelData;
  if ( ClipperImage != (NiTexture *)TexturePixelData )
  {
    if ( ClipperImage )
    {
      if ( !InterlockedDecrement((volatile LONG *)&ClipperImage->members) )
        ClipperImage->__vftable->super.super.Destructor((NiRefObject *)ClipperImage, 1);
    }
    this->member.ClipperImage = v10;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)&v10->members);
  }
  if ( !InterlockedDecrement((volatile LONG *)v5 + 1) )
    (**(void (__thiscall ***)(NiPixelData *, int))v5)(v5, 1);
  return 1;
}
