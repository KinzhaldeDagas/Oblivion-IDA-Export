NiObject *sub_753390()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x3Cu); /*0x753393*/
  v1 = v0; /*0x753398*/
  if ( !v0 ) /*0x75339f*/
    return 0; /*0x7533cc*/
  sub_75E800(v0); /*0x7533a3*/
  v1->__vftable = (NiObjectVtbl *)&NiPSysVortexFieldModifier::`vftable'; /*0x7533a8*/
  v1[6].__vftable = (NiObjectVtbl *)LODWORD(g_zeroNiPoint3.x); /*0x7533b3*/
  v1[6].members.m_uiRefCount = LODWORD(g_zeroNiPoint3.y); /*0x7533bc*/
  v1[7].__vftable = (NiObjectVtbl *)LODWORD(g_zeroNiPoint3.z); /*0x7533c5*/
  return v1; /*0x7533ca*/
}
