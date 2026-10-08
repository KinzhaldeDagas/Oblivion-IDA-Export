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

  v8 = (NiSourceTexture *)FormHeapAlloc(0x4Cu); /*0x720ffe*/
  v9 = v8; /*0x721003*/
  v13 = 0; /*0x72100e*/
  if ( v8 ) /*0x721019*/
  {
    NiSourceTexture::NiSourceTexture(v8); /*0x72101d*/
    v9->vtbl = (NiSourceTextureVtbl *)&NiSourceCubeMap::VTBL; /*0x721022*/
    v9[1].vtbl = 0; /*0x721028*/
  }
  else
  {
    v9 = 0; /*0x721031*/
  }
  v9->members.super.formatPrefs.pixelLayout = *a8; /*0x72103c*/
  v9->members.super.formatPrefs.alphaFormat = a8[1]; /*0x721042*/
  v10 = *((_DWORD *)a8 + 2); /*0x721045*/
  v13 = 0xFFFFFFFF; /*0x72104c*/
  v9->members.super.formatPrefs.mipmapFormat = v10; /*0x721057*/
  sub_7478C0(v12); /*0x72105a*/
  v13 = 1; /*0x721078*/
  sub_720B40(v9, a1, a2, a3, a4, a5, a6, (char *)v12); /*0x721083*/
  if ( v9[1].vtbl ) /*0x721088*/
    v9[1].vtbl = 0; /*0x72108e*/
  if ( !a7 || v9->members.pixelData && (*(unsigned __int8 (__stdcall **)(NiSourceTexture *))(*(_DWORD *)a7 + 0x10C))(v9) ) /*0x7210ac*/
  {
    v13 = 0xFFFFFFFF; /*0x7210d8*/
    BSSearchPath::~BSSearchPath((BSSearchPath *)v12); /*0x7210e3*/
    return v9; /*0x7210e8*/
  }
  else
  {
    v9->vtbl->super.super.super.Destructor((NiRefObject *)v9, 1); /*0x7210ba*/
    v13 = 0xFFFFFFFF; /*0x7210c0*/
    BSSearchPath::~BSSearchPath((BSSearchPath *)v12); /*0x7210cb*/
    return 0; /*0x7210d0*/
  }
}
