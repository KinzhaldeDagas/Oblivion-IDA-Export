NiSourceTexture *__cdecl NiSourceTexture::LoadTextureNothing(void *a1, PixelLayout *a2, UInt8 a3)
{
  NiSourceTexture *v3; // eax
  NiSourceTexture *v4; // esi

  v3 = (NiSourceTexture *)FormHeapAlloc(0x48u);
  if ( v3 )
    v4 = NiSourceTexture::NiSourceTexture(v3);
  else
    v4 = 0;
  v4->members.super.formatPrefs.pixelLayout = *a2;
  v4->members.super.formatPrefs.alphaFormat = a2[1];
  v4->members.super.formatPrefs.mipmapFormat = a2[2];
  v4->members.persistRenderData = a3;
  v4->members.unk044 = a1;
  if ( !byte_B256CC || v4->vtbl->Unk17(v4) )
    return v4;
  v4->vtbl->super.super.super.Destructor((NiRefObject *)v4, 1);
  return 0;
}
