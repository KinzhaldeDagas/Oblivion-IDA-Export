NiLight *sub_742210()
{
  NiLight *v0; // esi
  NiLight *result; // eax

  v0 = (NiLight *)FormHeapAlloc(0x108u); /*0x74223c*/
  result = 0; /*0x742245*/
  if ( v0 ) /*0x74224d*/
  {
    NiLight::NiLight(v0); /*0x742251*/
    v0->vtbl = (NiAVObjectVtbl *)&NiAmbientLight::`vftable'; /*0x742256*/
    return v0; /*0x74225c*/
  }
  return result; /*0x74225e*/
}
