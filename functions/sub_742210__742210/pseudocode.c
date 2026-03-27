NiLight *sub_742210()
{
  NiLight *v0; // esi
  NiLight *result; // eax

  v0 = (NiLight *)FormHeapAlloc(0x108u);
  result = 0;
  if ( v0 )
  {
    NiLight::NiLight(v0);
    v0->vtbl = (NiAVObjectVtbl *)&NiAmbientLight::`vftable';
    return v0;
  }
  return result;
}
