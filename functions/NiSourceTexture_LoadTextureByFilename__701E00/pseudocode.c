NiSourceTexture *__cdecl NiSourceTexture::LoadTextureByFilename(char *Src, PixelLayout *a2, UInt8 a3)
{
  NiSourceTexture *v3; // eax
  NiSourceTexture *v4; // esi
  unsigned int v5; // kr00_4
  char *v6; // eax
  void *v7; // ecx

  v3 = (NiSourceTexture *)FormHeapAlloc(0x48u);
  v4 = 0;
  if ( v3 )
    v4 = NiSourceTexture::NiSourceTexture(v3);
  v4->members.super.formatPrefs.pixelLayout = *a2;
  v4->members.super.formatPrefs.alphaFormat = a2[1];
  v4->members.super.formatPrefs.mipmapFormat = a2[2];
  v4->members.persistRenderData = a3;
  v5 = strlen(Src);
  v6 = (char *)FormHeapAlloc(v5 + 1);
  v4->members.unk034 = v6;
  strcpy_s(v6, v5 + 1, Src);
  TESTexture::ClearComponentReferences(v7);
  v4->members.fileName = sub_71B090((char *)v4->members.unk034);
  if ( !byte_B256CC || v4->vtbl->Unk17(v4) )
    return v4;
  v4->vtbl->super.super.super.Destructor((NiRefObject *)v4, 1);
  return 0;
}
