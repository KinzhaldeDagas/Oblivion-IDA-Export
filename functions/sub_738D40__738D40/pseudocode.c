NiGeometry *__stdcall sub_738D40(void *a1)
{
  NiAVObject *v1; // eax
  NiGeometry *v2; // esi

  v1 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x738d6a*/
  v2 = (NiGeometry *)v1; /*0x738d6f*/
  if ( v1 ) /*0x738d82*/
  {
    sub_717590(v1); /*0x738d86*/
    v2->__vftable = (NiGeometryVtbl *)&NiScreenGeometry::`vftable'; /*0x738d8b*/
  }
  else
  {
    v2 = 0; /*0x738d93*/
  }
  j_j_NiGeometry_CopyMembersForClone(v2, a1); /*0x738da5*/
  return v2; /*0x738dac*/
}
