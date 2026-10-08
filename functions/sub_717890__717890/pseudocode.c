NiGeometry *sub_717890()
{
  NiGeometry *v0; // esi
  NiGeometry *result; // eax

  v0 = (NiGeometry *)FormHeapAlloc(0xC0u); /*0x7178bc*/
  result = 0; /*0x7178c5*/
  if ( v0 ) /*0x7178cd*/
  {
    NiGeometry::NiGeometry_0(v0); /*0x7178d1*/
    v0->__vftable = (NiGeometryVtbl *)&NiLines::`vftable'; /*0x7178d6*/
    return v0; /*0x7178dc*/
  }
  return result; /*0x7178de*/
}
