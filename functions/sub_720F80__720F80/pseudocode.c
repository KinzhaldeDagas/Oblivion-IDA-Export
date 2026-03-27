NiSourceTexture *__cdecl sub_720F80(
        char *a1,
        char *a2,
        char *a3,
        char *a4,
        char *a5,
        char *a6,
        int a7,
        PixelLayout *a8)
{
  NiSourceTexture *v8; // eax
  NiSourceTexture *v9; // esi
  MipMapFlag v10; // eax
  _DWORD v12[132]; // [esp+28h] [ebp-220h] BYREF
  int v13; // [esp+244h] [ebp-4h]

  v8 = (NiSourceTexture *)FormHeapAlloc(0x4Cu);
  v9 = v8;
  v13 = 0;
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
  v10 = *((_DWORD *)a8 + 2);
  v13 = 0xFFFFFFFF;
  v9->members.super.formatPrefs.mipmapFormat = v10;
  sub_7478C0(v12);
  v13 = 1;
  sub_720B40(v9, a1, a2, a3, a4, a5, a6, (char *)v12);
  if ( v9[1].vtbl )
    v9[1].vtbl = 0;
  if ( !a7 || v9->members.pixelData && (*(unsigned __int8 (__stdcall **)(NiSourceTexture *))(*(_DWORD *)a7 + 0x10C))(v9) )
  {
    v13 = 0xFFFFFFFF;
    BSSearchPath::~BSSearchPath((BSSearchPath *)v12);
    return v9;
  }
  else
  {
    v9->vtbl->super.super.super.Destructor((NiRefObject *)v9, 1);
    v13 = 0xFFFFFFFF;
    BSSearchPath::~BSSearchPath((BSSearchPath *)v12);
    return 0;
  }
}
