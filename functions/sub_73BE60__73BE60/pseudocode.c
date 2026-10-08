NiTextureEffect *sub_73BE60()
{
  NiTextureEffect *v0; // eax

  v0 = (NiTextureEffect *)FormHeapAlloc(0x174u); /*0x73be86*/
  if ( v0 ) /*0x73be9c*/
    return NiTextureEffect::NiTextureEffect(v0); /*0x73bea0*/
  else
    return 0; /*0x73beb5*/
}
