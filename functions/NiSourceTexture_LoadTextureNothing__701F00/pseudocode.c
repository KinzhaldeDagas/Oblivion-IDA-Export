NiSourceTexture *__cdecl NiSourceTexture::LoadTextureNothing(void *a1, PixelLayout *a2, UInt8 a3)
{
  NiSourceTexture *v3; // eax
  NiSourceTexture *v4; // esi

  v3 = (NiSourceTexture *)FormHeapAlloc(0x48u); /*0x701f24*/
  if ( v3 ) /*0x701f3a*/
    v4 = NiSourceTexture::NiSourceTexture(v3); /*0x701f43*/
  else
    v4 = 0; /*0x701f47*/
  v4->members.super.formatPrefs.pixelLayout = *a2; /*0x701f4f*/
  v4->members.super.formatPrefs.alphaFormat = a2[1]; /*0x701f59*/
  v4->members.super.formatPrefs.mipmapFormat = a2[2]; /*0x701f63*/
  v4->members.persistRenderData = a3; /*0x701f66*/
  v4->members.unk044 = a1; /*0x701f69*/
  if ( !byte_B256CC || v4->vtbl->Unk17(v4) ) /*0x701f84*/
    return v4; /*0x701fa7*/
  v4->vtbl->super.super.super.Destructor((NiRefObject *)v4, 1); /*0x701f92*/
  return 0; /*0x701f96*/
}
