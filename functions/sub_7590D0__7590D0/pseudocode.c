NiObject *sub_7590D0()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x40u); /*0x7590d3*/
  v1 = v0; /*0x7590d8*/
  if ( !v0 ) /*0x7590df*/
    return 0; /*0x759110*/
  sub_75E800(v0); /*0x7590e3*/
  v1->__vftable = (NiObjectVtbl *)&NiPSysDragFieldModifier::`vftable'; /*0x7590e8*/
  LOBYTE(v1[6].__vftable) = 0; /*0x7590ee*/
  v1[6].members.m_uiRefCount = LODWORD(g_zeroNiPoint3.x); /*0x7590f7*/
  v1[7].__vftable = (NiObjectVtbl *)LODWORD(g_zeroNiPoint3.y); /*0x759100*/
  v1[7].members.m_uiRefCount = LODWORD(g_zeroNiPoint3.z); /*0x759109*/
  return v1; /*0x75910e*/
}
