NiObject *sub_724E30()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0x28u); /*0x724e54*/
  v1 = v0; /*0x724e59*/
  if ( !v0 ) /*0x724e6c*/
    return 0; /*0x724eb6*/
  sub_738760(v0); /*0x724e70*/
  v1->__vftable = (NiObjectVtbl *)&NiRangeLODData::`vftable'; /*0x724e75*/
  *(float *)&v1[1].__vftable = g_zeroNiPoint3; /*0x724e80*/
  v1[1].members.m_uiRefCount = *(UInt32 *)(&g_zeroNiPoint3 + 1); /*0x724e89*/
  *(float *)&v1[2].__vftable = MEMORY[0xB3F9B0][0]; /*0x724e92*/
  v1[4].__vftable = 0; /*0x724e95*/
  v1[4].members.m_uiRefCount = 0; /*0x724e9c*/
  return v1; /*0x724ea5*/
}
