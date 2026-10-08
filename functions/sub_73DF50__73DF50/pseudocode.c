// Pass225/228: NiScreenTexture factory; allocates 0x20 and calls constructor. Registered under string NiScreenTexture by startup callback.
NiScreenTexture *sub_73DF50()
{
  NiScreenTexture *v0; // eax

  v0 = (NiScreenTexture *)FormHeapAlloc(0x20u); /*0x73df73*/
  if ( v0 ) /*0x73df89*/
    return NiScreenTexture::NiScreenTexture(v0); /*0x73df8d*/
  else
    return 0; /*0x73dfa2*/
}
