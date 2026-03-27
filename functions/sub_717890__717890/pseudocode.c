NiGeometry *sub_717890()
{
  NiGeometry *v0; // esi
  NiGeometry *result; // eax

  v0 = (NiGeometry *)FormHeapAlloc(0xC0u);
  result = 0;
  if ( v0 )
  {
    NiGeometry::NiGeometry_0(v0);
    v0->__vftable = (NiGeometryVtbl *)&NiLines::`vftable';
    return v0;
  }
  return result;
}
