void __thiscall sub_77D180(void *this)
{
  NiD3DShaderFactory *v1; // eax
  NiD3DShaderFactory *v2; // eax

  if ( !unk_B42898 ) /*0x77d180*/
  {
    v1 = (NiD3DShaderFactory *)FormHeapAlloc(0x38u); /*0x77d18b*/
    if ( v1 ) /*0x77d195*/
      v2 = NiD3DShaderFactory::NiD3DShaderFactory(v1); /*0x77d199*/
    else
      v2 = 0; /*0x77d1a0*/
    unk_B42898 = v2; /*0x77d1a2*/
    unk_B40120 = v2; /*0x77d1a7*/
  }
  if ( !unk_B40120 ) /*0x77d1ac*/
    Shared_NoOpVirtual_60D0A0(this); /*0x77d1ba*/
}
