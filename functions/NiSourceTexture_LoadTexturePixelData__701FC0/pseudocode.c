NiSourceTexture *__cdecl NiSourceTexture::LoadTexturePixelData(NiPixelData *a1, PixelLayout *a2)
{
  NiSourceTexture *v2; // eax
  NiSourceTexture *v3; // esi
  volatile LONG *pixelData; // edi

  v2 = (NiSourceTexture *)FormHeapAlloc(0x48u);
  if ( v2 )
    v3 = NiSourceTexture::NiSourceTexture(v2);
  else
    v3 = 0;
  v3->members.super.formatPrefs.pixelLayout = *a2;
  v3->members.super.formatPrefs.alphaFormat = a2[1];
  v3->members.super.formatPrefs.mipmapFormat = a2[2];
  pixelData = (volatile LONG *)v3->members.pixelData;
  if ( pixelData != (volatile LONG *)a1 )
  {
    if ( pixelData )
    {
      if ( !InterlockedDecrement(pixelData + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))pixelData)(pixelData, 1);
    }
    v3->members.pixelData = a1;
    if ( a1 )
      InterlockedIncrement((volatile LONG *)a1 + 1);
  }
  if ( !byte_B256CC || v3->vtbl->Unk17(v3) )
    return v3;
  v3->vtbl->super.super.super.Destructor((NiRefObject *)v3, 1);
  return 0;
}
