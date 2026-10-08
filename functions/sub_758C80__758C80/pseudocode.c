NiObject *__thiscall sub_758C80(const char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  NiObject *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x34u); /*0x758c86*/
  if ( v3 ) /*0x758c90*/
    v4 = sub_758910(v3); /*0x758c99*/
  else
    v4 = 0; /*0x758c9d*/
  sub_752C40(this, (int)v4, a2); /*0x758ca7*/
  v4[3].members.m_uiRefCount = (UInt32)*(this + 7); /*0x758caf*/
  v4[4].__vftable = (NiObjectVtbl *)*(this + 8); /*0x758cb5*/
  v4[4].members.m_uiRefCount = (UInt32)*(this + 9); /*0x758cbb*/
  v4[5].__vftable = *((NiObjectVtbl **)this + 0xA); /*0x758cc1*/
  v4[5].members.m_uiRefCount = *((UInt32 *)this + 0xB); /*0x758cc9*/
  v4[6].__vftable = *((NiObjectVtbl **)this + 0xC); /*0x758cd0*/
  return v4; /*0x758cd3*/
}
