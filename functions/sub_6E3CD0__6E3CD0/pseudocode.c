NiObject *sub_6E3CD0()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x24u); /*0x6e3cf4*/
  v1 = v0; /*0x6e3cf9*/
  if ( !v0 ) /*0x6e3d0c*/
    return 0; /*0x6e3d5e*/
  sub_6EC220(v0); /*0x6e3d10*/
  v1->__vftable = (NiObjectVtbl *)&NiColorInterpolator::`vftable'; /*0x6e3d15*/
  v1[1].members.m_uiRefCount = dword_B24FD4; /*0x6e3d20*/
  v1[2].__vftable = (NiObjectVtbl *)dword_B24FD8; /*0x6e3d29*/
  v1[2].members.m_uiRefCount = dword_B24FDC; /*0x6e3d32*/
  v1[3].__vftable = (NiObjectVtbl *)dword_B24FE0; /*0x6e3d3a*/
  v1[3].members.m_uiRefCount = 0; /*0x6e3d3d*/
  v1[4].__vftable = 0; /*0x6e3d44*/
  return v1; /*0x6e3d4d*/
}
