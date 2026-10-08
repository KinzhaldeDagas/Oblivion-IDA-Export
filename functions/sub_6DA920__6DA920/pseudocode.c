NiObject *__thiscall sub_6DA920(_DWORD *this, _DWORD **a2)
{
  NiObject *v3; // eax
  NiObject *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x20u); /*0x6da947*/
  v4 = v3; /*0x6da94c*/
  if ( v3 ) /*0x6da95f*/
  {
    sub_6EC220(v3); /*0x6da963*/
    v4->__vftable = (NiObjectVtbl *)&NiPoint3Interpolator::`vftable'; /*0x6da968*/
    v4[1].members.m_uiRefCount = dword_B24FC8; /*0x6da973*/
    v4[2].__vftable = (NiObjectVtbl *)dword_B24FCC; /*0x6da97c*/
    v4[2].members.m_uiRefCount = dword_B24FD0; /*0x6da985*/
    v4[3].__vftable = 0; /*0x6da988*/
    v4[3].members.m_uiRefCount = 0; /*0x6da98f*/
  }
  else
  {
    v4 = 0; /*0x6da998*/
  }
  sub_6DA6B0(this, v4, a2); /*0x6da9aa*/
  return v4; /*0x6da9b1*/
}
