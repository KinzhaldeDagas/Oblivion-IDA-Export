NiSourceTexture *__cdecl sub_720A30(int a1, int a2, int a3, int a4, int a5, int a6, int a7, PixelLayout *a8)
{
  NiSourceTexture *v8; // eax
  NiSourceTexture *v9; // esi

  v8 = (NiSourceTexture *)FormHeapAlloc(0x4Cu);
  v9 = v8;
  if ( v8 )
  {
    NiSourceTexture::NiSourceTexture(v8);
    v9->vtbl = (NiSourceTextureVtbl *)&NiSourceCubeMap::VTBL;
    v9[1].vtbl = 0;
  }
  else
  {
    v9 = 0;
  }
  v9->members.super.formatPrefs.pixelLayout = *a8;
  v9->members.super.formatPrefs.alphaFormat = a8[1];
  v9->members.super.formatPrefs.mipmapFormat = a8[2];
  sub_7205A0(v9, a1, a2, a3, a4, a5, a6);
  if ( v9[1].vtbl )
    v9[1].vtbl = 0;
  if ( !a7 || (*(unsigned __int8 (__thiscall **)(int, NiSourceTexture *))(*(_DWORD *)a7 + 0x10C))(a7, v9) )
    return v9;
  v9->vtbl->super.super.super.Destructor((NiRefObject *)v9, 1);
  return 0;
}
