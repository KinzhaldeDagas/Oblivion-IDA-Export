NiObject *sub_758360()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x28u); /*0x758364*/
  v1 = v0; /*0x758369*/
  if ( !v0 ) /*0x758372*/
    return 0; /*0x758399*/
  NiObject_constr(v0); /*0x758376*/
  v1[1].__vftable = 0; /*0x75837b*/
  v1[1].members.m_uiRefCount = 0; /*0x75837e*/
  v1[2].__vftable = 0; /*0x758381*/
  v1[3].__vftable = 0; /*0x758384*/
  v1[3].members.m_uiRefCount = 0; /*0x758387*/
  v1[4].__vftable = 0; /*0x75838a*/
  v1->__vftable = (NiObjectVtbl *)&NiPSysEmitterCtlrData::`vftable'; /*0x75838e*/
  return v1; /*0x75838d*/
}
