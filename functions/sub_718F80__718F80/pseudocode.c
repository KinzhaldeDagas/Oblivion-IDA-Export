NiObjectNET *sub_718F80()
{
  NiObjectNET *v0; // eax
  NiObjectNET *v1; // esi

  v0 = (NiObjectNET *)FormHeapAlloc(0x24u); /*0x718fa4*/
  v1 = v0; /*0x718fa9*/
  if ( !v0 ) /*0x718fbc*/
    return 0; /*0x718ff2*/
  NiObjectNET::NiObjectNET(v0); /*0x718fc0*/
  v1->vtbl = (NiObjectVtbl **)&NiStencilProperty::`vftable'; /*0x718fc5*/
  v1[1].members.super.m_uiRefCount = 0; /*0x718fcb*/
  v1[1].members.m_pcName = (const char *)0xFFFFFFFF; /*0x718fd2*/
  LOWORD(v1[1].vtbl) = 0x4180; /*0x718fd9*/
  return v1; /*0x718fe1*/
}
