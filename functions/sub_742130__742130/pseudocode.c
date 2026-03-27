NiGeometry *__thiscall sub_742130(char **this, _DWORD **a2)
{
  NiGeometry *v3; // eax
  NiGeometry *v4; // esi

  v3 = (NiGeometry *)FormHeapAlloc(0xC0u);
  v4 = v3;
  if ( v3 )
  {
    NiGeometry::NiGeometry_0(v3);
    v4->__vftable = (NiGeometryVtbl *)&NiParticles::`vftable';
  }
  else
  {
    v4 = 0;
  }
  sub_723020(this, v4, a2);
  return v4;
}
