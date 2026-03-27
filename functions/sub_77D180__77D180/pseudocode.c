void __thiscall sub_77D180(void *this)
{
  NiD3DShaderFactory *v1; // eax
  NiD3DShaderFactory *v2; // eax

  if ( !dword_B42898 )
  {
    v1 = (NiD3DShaderFactory *)FormHeapAlloc(0x38u);
    if ( v1 )
      v2 = NiD3DShaderFactory::NiD3DShaderFactory(v1);
    else
      v2 = 0;
    dword_B42898 = v2;
    dword_B40120 = v2;
  }
  if ( !dword_B40120 )
    TESTexture::ClearComponentReferences(this);
}
