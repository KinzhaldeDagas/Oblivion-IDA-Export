// Oblivion BSTextureManager rendered-texture creator. Builds a BSRenderedTexture for the requested dimensions, D3D format override, auxiliary value, and target flags; eligible targets receive the manager depth-stencil unless flags suppress it.
BSRenderedTexture *__thiscall BSTextureManager_CreateRenderedTexture(
        BSTextureManager *this,
        NiDX9Renderer *renderer,
        int width,
        int height,
        int d3dFormat,
        int aux,
        unsigned __int16 targetFlags)
{
  int i; // eax
  BSRenderedTexture *v8; // ebx
  NiDepthStencilBuffer *unk40; // edi
  bool v10; // zf
  int v11; // esi
  int v12; // edx
  NiObjectNET *v13; // esi
  BSRenderedTexture *v14; // eax
  BSRenderedTexture *v15; // eax
  FormatPrefs v17; // [esp+14h] [ebp-18h] BYREF
  unsigned int v18; // [esp+28h] [ebp-4h]

  i = width; /*0x7c1457*/
  v8 = 0; /*0x7c145b*/
  unk40 = 0; /*0x7c145d*/
  v10 = unk_B42E96 == 0; /*0x7c145f*/
  v17.mipmapFormat = kMipMap_Default; /*0x7c146a*/
  if ( v10 ) /*0x7c146e*/
  {
    v12 = height; /*0x7c1476*/
    if ( width > height ) /*0x7c147c*/
      v12 = width; /*0x7c147e*/
    for ( i = 1; i < v12; i *= 2 ) /*0x7c1487*/
      ; /*0x7c1490*/
    v11 = i; /*0x7c1496*/
  }
  else
  {
    v11 = height; /*0x7c1470*/
  }
  v17.pixelLayout = kPixelLayout_TrueColor32; /*0x7c149e*/
  v17.alphaFormat = kAlpha_Smooth; /*0x7c14a2*/
  if ( d3dFormat ) /*0x7c14a6*/
  {
    unk_B3FF00 = 1; /*0x7c14a8*/
    dword_B2752C = d3dFormat; /*0x7c14af*/
  }
  if ( (targetFlags & 8) != 0 ) /*0x7c14c2*/
    byte_B27530 = 0; /*0x7c14c4*/
  if ( (targetFlags & 0x80) != 0 ) /*0x7c14d2*/
    dword_B294EC = 0; /*0x7c14d4*/
  if ( (targetFlags & 0x100) == 0 ) /*0x7c14e0*/
    unk40 = (NiDepthStencilBuffer *)this->unk40; /*0x7c14e2*/
  if ( (targetFlags & 0x10) != 0 ) /*0x7c14f6*/
  {
    v13 = sub_9A1CE0(i, (int)unk_B43104, (NiObjectVtbl ***)&v17); /*0x7c150a*/
    if ( !v13 ) /*0x7c1511*/
      goto LABEL_24; /*0x7c1511*/
    v14 = (BSRenderedTexture *)FormHeapAlloc(0x24u); /*0x7c1515*/
    v18 = 0; /*0x7c1523*/
    if ( v14 ) /*0x7c152b*/
      v15 = BSRenderedTexture::BSRenderedTexture(v14, (NiRenderedTexture *)v13, 1, unk40); /*0x7c1533*/
    else
      v15 = 0; /*0x7c1542*/
    v18 = 0xFFFFFFFF; /*0x7c1538*/
  }
  else
  {
    v15 = sub_7D6F40(i, v11, &v17, (targetFlags & 4) == 0, unk40); /*0x7c155b*/
  }
  v8 = v15; /*0x7c1563*/
LABEL_24:
  if ( d3dFormat ) /*0x7c156a*/
    unk_B3FF00 = 0; /*0x7c156c*/
  if ( (targetFlags & 8) != 0 ) /*0x7c1578*/
    byte_B27530 = 1; /*0x7c157a*/
  if ( (targetFlags & 0x80) != 0 ) /*0x7c1583*/
    dword_B294EC = 1; /*0x7c1585*/
  if ( !v8 ) /*0x7c1591*/
  {
    if ( unk_B42E8C ) /*0x7c1593*/
      unk_B42E8C("Unable to create rendered texture", 0); /*0x7c15a2*/
  }
  return v8; /*0x7c15a9*/
}
