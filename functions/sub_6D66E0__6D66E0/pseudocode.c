// Oblivion default NiTransformInterpolator factory. Allocates 0x38 bytes, installs the vtable, initializes the cached transform to native defaults, clears data +0x2C, and zeroes the three key cursors.
NiObject *NiTransformInterpolator_CreateDefault()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x38u); /*0x6d6705*/
  v1 = v0; /*0x6d670a*/
  if ( !v0 ) /*0x6d671b*/
    return 0; /*0x6d6792*/
  sub_6EC220(v0); /*0x6d671f*/
  v1->__vftable = (NiObjectVtbl *)&NiTransformInterpolator::`vftable'; /*0x6d6724*/
  v1[1].members.m_uiRefCount = dword_B24260; /*0x6d672f*/
  v1[2].__vftable = (NiObjectVtbl *)dword_B24264; /*0x6d6738*/
  v1[2].members.m_uiRefCount = dword_B24268; /*0x6d6741*/
  *(float *)&v1[3].__vftable = flt_B3CBA4; /*0x6d6749*/
  *(float *)&v1[3].members.m_uiRefCount = flt_B3CBA8; /*0x6d6752*/
  *(float *)&v1[4].__vftable = flt_B3CBAC; /*0x6d675b*/
  *(float *)&v1[4].members.m_uiRefCount = flt_B3CBB0; /*0x6d6763*/
  *(float *)&v1[5].__vftable = flt_A79E10; /*0x6d676c*/
  v1[5].members.m_uiRefCount = 0; /*0x6d676f*/
  LOWORD(v1[6].__vftable) = 0; /*0x6d6772*/
  HIWORD(v1[6].__vftable) = 0; /*0x6d6776*/
  LOWORD(v1[6].members.m_uiRefCount) = 0; /*0x6d677a*/
  return v1; /*0x6d6780*/
}
