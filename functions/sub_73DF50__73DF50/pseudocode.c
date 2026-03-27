NiScreenTexture *sub_73DF50()
{
  NiScreenTexture *v0; // eax

  v0 = (NiScreenTexture *)FormHeapAlloc(0x20u);
  if ( v0 )
    return NiScreenTexture::NiScreenTexture(v0);
  else
    return 0;
}
