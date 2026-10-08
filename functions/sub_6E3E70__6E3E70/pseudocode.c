NiObject *__thiscall sub_6E3E70(_DWORD *this, _DWORD **a2)
{
  NiObject *v3; // eax
  NiObject *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x24u); /*0x6e3e97*/
  v4 = v3; /*0x6e3e9c*/
  if ( v3 ) /*0x6e3eaf*/
  {
    sub_6EC220(v3); /*0x6e3eb3*/
    v4->__vftable = (NiObjectVtbl *)&NiColorInterpolator::`vftable'; /*0x6e3eb8*/
    v4[1].members.m_uiRefCount = dword_B24FD4; /*0x6e3ec3*/
    v4[2].__vftable = (NiObjectVtbl *)dword_B24FD8; /*0x6e3ecc*/
    v4[2].members.m_uiRefCount = dword_B24FDC; /*0x6e3ed5*/
    v4[3].__vftable = (NiObjectVtbl *)dword_B24FE0; /*0x6e3edd*/
    v4[3].members.m_uiRefCount = 0; /*0x6e3ee0*/
    v4[4].__vftable = 0; /*0x6e3ee7*/
  }
  else
  {
    v4 = 0; /*0x6e3ef0*/
  }
  sub_6D98F0(this, v4, a2); /*0x6e3f02*/
  return v4; /*0x6e3f09*/
}
