NiObject *__usercall sub_724F80@<eax>(void *this@<ecx>, int a2@<ebx>)
{
  NiObject *v3; // eax
  NiObject *v4; // esi
  size_t v6; // [esp-4h] [ebp-20h]

  v3 = (NiObject *)FormHeapAlloc(0x28u); /*0x724fa7*/
  v4 = v3; /*0x724fac*/
  if ( v3 ) /*0x724fbf*/
  {
    sub_738760(v3); /*0x724fc3*/
    v4->__vftable = (NiObjectVtbl *)&NiRangeLODData::`vftable'; /*0x724fc8*/
    *(float *)&v4[1].__vftable = g_zeroNiPoint3; /*0x724fd3*/
    v4[1].members.m_uiRefCount = *(UInt32 *)(&g_zeroNiPoint3 + 1); /*0x724fdc*/
    *(float *)&v4[2].__vftable = MEMORY[0xB3F9B0][0]; /*0x724fe5*/
    v4[4].__vftable = 0; /*0x724fe8*/
    v4[4].members.m_uiRefCount = 0; /*0x724fef*/
  }
  else
  {
    v4 = 0; /*0x724ff8*/
  }
  v4[1].__vftable = *((NiObjectVtbl **)this + 2); /*0x724ffd*/
  v4[1].members.m_uiRefCount = *((_DWORD *)this + 3); /*0x725003*/
  v4[2].__vftable = *((NiObjectVtbl **)this + 4); /*0x725009*/
  sub_724AB0(v4, a2, *((_DWORD *)this + 8)); /*0x72501a*/
  LODWORD(v6) = 0x10 * *((_DWORD *)this + 8); /*0x72502b*/
  memcpy((void *)v4[4].members.m_uiRefCount, *((const void **)this + 9), v6); /*0x72502e*/
  return v4; /*0x725038*/
}
