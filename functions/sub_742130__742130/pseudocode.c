NiGeometry *__thiscall sub_742130(NiGeometry *this, _DWORD **cloningProcess)
{
  NiGeometry *v3; // eax
  NiGeometry *v4; // esi

  v3 = (NiGeometry *)FormHeapAlloc(0xC0u); /*0x74215a*/
  v4 = v3; /*0x74215f*/
  if ( v3 ) /*0x742172*/
  {
    NiGeometry::NiGeometry_0(v3); /*0x742176*/
    v4->__vftable = (NiGeometryVtbl *)&NiParticles::`vftable'; /*0x74217b*/
  }
  else
  {
    v4 = 0; /*0x742183*/
  }
  NiGeometry_CopyMembersForClone(this, v4, cloningProcess); /*0x742195*/
  return v4; /*0x74219c*/
}
