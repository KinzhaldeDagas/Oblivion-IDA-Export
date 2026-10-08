NiSourceTexture *__cdecl NiSourceTexture::LoadTexturePixelData(NiPixelData *a1, PixelLayout *a2)
{
  NiSourceTexture *v2; // eax
  NiSourceTexture *v3; // esi
  volatile LONG *pixelData; // edi

  v2 = (NiSourceTexture *)FormHeapAlloc(0x48u); /*0x701fe6*/
  if ( v2 ) /*0x701ffc*/
    v3 = NiSourceTexture::NiSourceTexture(v2); /*0x702005*/
  else
    v3 = 0; /*0x702009*/
  v3->members.super.formatPrefs.pixelLayout = *a2; /*0x702015*/
  v3->members.super.formatPrefs.alphaFormat = a2[1]; /*0x70201b*/
  v3->members.super.formatPrefs.mipmapFormat = a2[2]; /*0x702021*/
  pixelData = (volatile LONG *)v3->members.pixelData; /*0x702024*/
  if ( pixelData != (volatile LONG *)a1 ) /*0x702031*/
  {
    if ( pixelData ) /*0x702035*/
    {
      if ( !InterlockedDecrement(pixelData + 1) ) /*0x70203b*/
        (**(void (__thiscall ***)(volatile LONG *, int))pixelData)(pixelData, 1); /*0x702051*/
    }
    v3->members.pixelData = a1; /*0x702055*/
    if ( a1 ) /*0x702058*/
      InterlockedIncrement((volatile LONG *)a1 + 1); /*0x70205e*/
  }
  if ( !byte_B256CC || v3->vtbl->Unk17(v3) ) /*0x702074*/
    return v3; /*0x702099*/
  v3->vtbl->super.super.super.Destructor((NiRefObject *)v3, 1); /*0x702082*/
  return 0; /*0x702086*/
}
