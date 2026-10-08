NiSourceTexture *NiSourceTexture::Create()
{
  NiSourceTexture *v0; // eax

  v0 = (NiSourceTexture *)FormHeapAlloc(0x48u); /*0x702213*/
  if ( v0 ) /*0x702229*/
    return NiSourceTexture::NiSourceTexture(v0); /*0x70222d*/
  else
    return 0; /*0x702242*/
}
