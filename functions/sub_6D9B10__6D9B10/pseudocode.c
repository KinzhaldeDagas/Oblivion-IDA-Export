NiObject *__thiscall sub_6D9B10(_DWORD *this, _DWORD **a2)
{
  NiObject *v3; // eax
  NiObject *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x24u); /*0x6d9b37*/
  v4 = v3; /*0x6d9b3c*/
  if ( v3 ) /*0x6d9b4f*/
  {
    sub_6EC220(v3); /*0x6d9b53*/
    v4->__vftable = (NiObjectVtbl *)&NiQuaternionInterpolator::`vftable'; /*0x6d9b58*/
    *(float *)&v4[1].members.m_uiRefCount = flt_B3EBA0[0]; /*0x6d9b63*/
    *(float *)&v4[2].__vftable = flt_B3EBA0[1]; /*0x6d9b6c*/
    *(float *)&v4[2].members.m_uiRefCount = flt_B3EBA0[2]; /*0x6d9b75*/
    *(float *)&v4[3].__vftable = flt_B3EBA0[3]; /*0x6d9b7d*/
    v4[3].members.m_uiRefCount = 0; /*0x6d9b80*/
    v4[4].__vftable = 0; /*0x6d9b87*/
  }
  else
  {
    v4 = 0; /*0x6d9b90*/
  }
  sub_6D98F0(this, v4, a2); /*0x6d9ba2*/
  return v4; /*0x6d9ba9*/
}
