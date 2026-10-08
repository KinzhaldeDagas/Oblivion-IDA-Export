// SpeedTreeOBSE 2026-07-14: generic NiSourceTexture creation preserves default pixel/alpha/mipmap preferences. Suitable for authored DDS/TGA composite candidates resolved through engine resources.
NiSourceTexture *__cdecl NiSourceTexture::LoadTextureByFilename(char *Src, PixelLayout *a2, char a3)
{
  NiSourceTexture *v3; // eax
  NiSourceTexture *v4; // esi
  unsigned int v5; // kr00_4
  char *v6; // eax
  void *v7; // ecx

  v3 = (NiSourceTexture *)FormHeapAlloc(0x48u); /*0x701e26*/
  v4 = 0; /*0x701e32*/
  if ( v3 ) /*0x701e3a*/
    v4 = NiSourceTexture::NiSourceTexture(v3); /*0x701e43*/
  v4->members.super.formatPrefs.pixelLayout = *a2; /*0x701e4f*/
  v4->members.super.formatPrefs.alphaFormat = a2[1]; /*0x701e59*/
  v4->members.super.formatPrefs.mipmapFormat = a2[2]; /*0x701e5f*/
  v4->members.persistRenderData = a3; /*0x701e6c*/
  v5 = strlen(Src); /*0x701e6f*/
  v6 = (char *)FormHeapAlloc(v5 + 1); /*0x701e81*/
  v4->members.unk034 = v6; /*0x701e89*/
  strcpy_s(v6, v5 + 1, Src); /*0x701e8c*/
  Shared_NoOpVirtual_60D0A0(v7); /*0x701e95*/
  v4->members.fileName = sub_71B090((char *)v4->members.unk034); /*0x701ea6*/
  if ( !byte_B256CC || v4->vtbl->Unk17(v4) ) /*0x701eb9*/
    return v4; /*0x701ede*/
  v4->vtbl->super.super.super.Destructor((NiRefObject *)v4, 1); /*0x701ec7*/
  return 0; /*0x701ecb*/
}
