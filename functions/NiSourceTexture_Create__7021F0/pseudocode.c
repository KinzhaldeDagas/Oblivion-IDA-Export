NiSourceTexture *NiSourceTexture::Create()
{
  NiSourceTexture *v0; // eax

  v0 = (NiSourceTexture *)FormHeapAlloc(0x48u);
  if ( v0 )
    return NiSourceTexture::NiSourceTexture(v0);
  else
    return 0;
}
