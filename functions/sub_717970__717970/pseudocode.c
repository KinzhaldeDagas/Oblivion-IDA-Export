NiGeometry *__thiscall sub_717970(NiGeometry *this, _DWORD **cloningProcess)
{
  NiGeometry *v3; // eax
  NiGeometry *v4; // esi

  v3 = (NiGeometry *)FormHeapAlloc(0xC0u); /*0x71799a*/
  v4 = v3; /*0x71799f*/
  if ( v3 ) /*0x7179b2*/
  {
    NiGeometry::NiGeometry_0(v3); /*0x7179b6*/
    v4->__vftable = (NiGeometryVtbl *)&NiLines::`vftable'; /*0x7179bb*/
  }
  else
  {
    v4 = 0; /*0x7179c3*/
  }
  NiGeometry_CopyMembersForClone(this, v4, cloningProcess); /*0x7179d5*/
  return v4; /*0x7179dc*/
}
