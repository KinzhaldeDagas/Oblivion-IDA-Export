NiObject *sub_753F10()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x3Cu); /*0x753f13*/
  v1 = v0; /*0x753f18*/
  if ( !v0 ) /*0x753f1f*/
    return 0; /*0x753f4b*/
  sub_75E800(v0); /*0x753f23*/
  *(float *)&v1[6].__vftable = 0.0; /*0x753f2a*/
  v1->__vftable = (NiObjectVtbl *)&NiPSysTurbulenceFieldModifier::`vftable'; /*0x753f2d*/
  *(float *)&v1[7].__vftable = -flt_A7DEB4; /*0x753f3d*/
  *(float *)&v1[6].members.m_uiRefCount = flt_A5A04C; /*0x753f46*/
  return v1; /*0x753f49*/
}
