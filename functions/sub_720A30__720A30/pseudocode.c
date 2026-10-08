NiSourceTexture *__cdecl sub_720A30(int a1, int a2, int a3, int a4, int a5, int a6, int a7, PixelLayout *a8)
{
  NiSourceTexture *v8; // eax
  NiSourceTexture *v9; // esi

  v8 = (NiSourceTexture *)FormHeapAlloc(0x4Cu); /*0x720a54*/
  v9 = v8; /*0x720a59*/
  if ( v8 ) /*0x720a6c*/
  {
    NiSourceTexture::NiSourceTexture(v8); /*0x720a70*/
    v9->vtbl = (NiSourceTextureVtbl *)&NiSourceCubeMap::VTBL; /*0x720a75*/
    v9[1].vtbl = 0; /*0x720a7b*/
  }
  else
  {
    v9 = 0; /*0x720a84*/
  }
  v9->members.super.formatPrefs.pixelLayout = *a8; /*0x720a8c*/
  v9->members.super.formatPrefs.alphaFormat = a8[1]; /*0x720a9b*/
  v9->members.super.formatPrefs.mipmapFormat = a8[2]; /*0x720aaa*/
  sub_7205A0(v9, a1, a2, a3, a4, a5, a6); /*0x720ac3*/
  if ( v9[1].vtbl ) /*0x720ac8*/
    v9[1].vtbl = 0; /*0x720ace*/
  if ( !a7 || (*(unsigned __int8 (__thiscall **)(int, NiSourceTexture *))(*(_DWORD *)a7 + 0x10C))(a7, v9) ) /*0x720ae6*/
    return v9; /*0x720b09*/
  v9->vtbl->super.super.super.Destructor((NiRefObject *)v9, 1); /*0x720af4*/
  return 0; /*0x720af8*/
}
