NiTextureEffect *sub_73BE60()
{
  NiTextureEffect *v0; // eax

  v0 = (NiTextureEffect *)FormHeapAlloc(0x174u);
  if ( v0 )
    return NiTextureEffect::NiTextureEffect(v0);
  else
    return 0;
}
