NiGeometry *__thiscall sub_719BE0(NiGeometry *this, void *a2)
{
  NiAVObject *v3; // eax
  NiGeometry *v4; // esi

  v3 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x719c0a*/
  v4 = (NiGeometry *)v3; /*0x719c0f*/
  if ( v3 ) /*0x719c22*/
  {
    sub_7226C0(v3); /*0x719c26*/
    v4->__vftable = (NiGeometryVtbl *)&NiTriStrips::`vftable'; /*0x719c2b*/
  }
  else
  {
    v4 = 0; /*0x719c33*/
  }
  j_NiGeometry_CopyMembersForClone(this, v4, a2); /*0x719c45*/
  return v4; /*0x719c4c*/
}
