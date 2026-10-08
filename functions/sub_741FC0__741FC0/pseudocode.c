NiGeometry *sub_741FC0()
{
  NiGeometry *v0; // esi
  NiGeometry *result; // eax

  v0 = (NiGeometry *)FormHeapAlloc(0xC0u); /*0x741fec*/
  result = 0; /*0x741ff5*/
  if ( v0 ) /*0x741ffd*/
  {
    NiGeometry::NiGeometry_0(v0); /*0x742001*/
    v0->__vftable = (NiGeometryVtbl *)&NiParticles::`vftable'; /*0x742006*/
    return v0; /*0x74200c*/
  }
  return result; /*0x74200e*/
}
