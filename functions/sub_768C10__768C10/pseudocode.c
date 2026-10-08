// Rebuilds NiDX9 renderer texture defaults after device creation/reset, including four default format resources and the small clipper/default source texture. Called during both initial creation and RecreateDevice.
bool __thiscall NiDX9Renderer_InitializeTextureDefaults(NiDX9Renderer *this)
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

  sub_7637D0(this, (int)this->member.unk6F4, 0, 3, v12, v16, v20, v24, a2[0]); /*0x768c25*/
  sub_7637D0(this, (int)&this->member.unk6F4[1], 1, 3, v13, v17, v21, v25, a2[0]); /*0x768c37*/
  sub_7637D0(this, (int)&this->member.unk6F4[2], 0, 5, v14, v18, v22, v26, a2[0]); /*0x768c48*/
  sub_7637D0(this, (int)&this->member.unk6F4[3], 1, 5, v15, v19, v23, v27, a2[0]); /*0x768c5a*/
  sub_764630(this); /*0x768c61*/
  v2 = this->member.DefaultTextureFormat[0]; /*0x768c66*/
  v3 = (NiPixelData *)FormHeapAlloc(0x70u); /*0x768c6e*/
  if ( v3 ) /*0x768c78*/
  {
    v4 = NiPixelData::NiPixelData(v3, 2u, 1u, v2, 1u, 1); /*0x768c85*/
    v5 = v4; /*0x768c8a*/
    if ( v4 ) /*0x768c8e*/
      InterlockedIncrement((volatile LONG *)v4 + 1); /*0x768c94*/
  }
  else
  {
    v5 = 0; /*0x768cb4*/
  }
  v6 = *(_BYTE *)(v2 + 1); /*0x768c9f*/
  v7 = (_BYTE *)(*((_DWORD *)v5 + 0x14) + **((_DWORD **)v5 + 0x17)); /*0x768ca2*/
  if ( v6 == 0x10 ) /*0x768ca8*/
  {
    v7[3] = 0xFF; /*0x768cac*/
    v7[2] = 0xFF; /*0x768caf*/
  }
  else
  {
    if ( v6 != 0x20 ) /*0x768cbb*/
      goto LABEL_10; /*0x768cbb*/
    v7[3] = 0; /*0x768cbf*/
    v7[2] = 0; /*0x768cc2*/
    v7[7] = 0xFF; /*0x768cc5*/
    v7[6] = 0xFF; /*0x768cc8*/
    v7[5] = 0xFF; /*0x768ccb*/
    v7[4] = 0xFF; /*0x768cce*/
  }
  *v7 = 0; /*0x768cd1*/
  v7[1] = 0; /*0x768cd3*/
LABEL_10:
  a2[0] = 6; /*0x768cd6*/
  a2[2] = 0; /*0x768ce4*/
  a2[1] = 0; /*0x768ce8*/
  TexturePixelData = NiSourceTexture::LoadTexturePixelData(v5, (PixelLayout *)a2); /*0x768cec*/
  ClipperImage = this->member.ClipperImage; /*0x768cf1*/
  v10 = (NiTexture *)TexturePixelData; /*0x768cf7*/
  if ( ClipperImage != (NiTexture *)TexturePixelData ) /*0x768cfe*/
  {
    if ( ClipperImage ) /*0x768d02*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ClipperImage->members) ) /*0x768d08*/
        ClipperImage->__vftable->super.super.Destructor((NiRefObject *)ClipperImage, 1); /*0x768d1e*/
    }
    this->member.ClipperImage = v10; /*0x768d22*/
    if ( v10 ) /*0x768d28*/
      InterlockedIncrement((volatile LONG *)&v10->members); /*0x768d2e*/
  }
  if ( !InterlockedDecrement((volatile LONG *)v5 + 1) ) /*0x768d38*/
    (**(void (__thiscall ***)(NiPixelData *, int))v5)(v5, 1); /*0x768d4b*/
  return 1; /*0x768d4d*/
}
