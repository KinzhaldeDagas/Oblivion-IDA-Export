NiObject *sub_6E7990()
{
  NiObject *v0; // eax
  NiObject *v1; // esi
  double v2; // st7

  v0 = (NiObject *)FormHeapAlloc(0x28u); /*0x6e79b4*/
  v1 = v0; /*0x6e79b9*/
  if ( !v0 ) /*0x6e79cc*/
    return 0; /*0x6e7a0c*/
  NiObject_constr(v0); /*0x6e79d0*/
  v2 = kTerrainLODQuadRayDirectionZ; /*0x6e79d5*/
  v1->__vftable = (NiObjectVtbl *)&NiBSplineBasisData::`vftable'; /*0x6e79db*/
  *(float *)&v1[3].members.m_uiRefCount = v2; /*0x6e79e1*/
  v1[1].__vftable = 0; /*0x6e79e4*/
  v1[4].__vftable = 0; /*0x6e79eb*/
  v1[4].members.m_uiRefCount = 3; /*0x6e79f2*/
  return v1; /*0x6e79fb*/
}
