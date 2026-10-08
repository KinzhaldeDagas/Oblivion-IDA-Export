NiObject *__thiscall sub_73B170(char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  NiObject *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x1Cu); /*0x73b197*/
  v4 = v3; /*0x73b19c*/
  if ( v3 ) /*0x73b1af*/
  {
    sub_721350(v3); /*0x73b1b3*/
    *(float *)&v4[3].__vftable = 0.0; /*0x73b1ba*/
    v4->__vftable = (NiObjectVtbl *)&NiVectorExtraData::`vftable'; /*0x73b1bd*/
    *(float *)&v4[2].members.m_uiRefCount = 0.0; /*0x73b1c3*/
    *(float *)&v4[2].__vftable = 0.0; /*0x73b1c6*/
    *(float *)&v4[1].members.m_uiRefCount = 0.0; /*0x73b1c9*/
  }
  else
  {
    v4 = 0; /*0x73b1ce*/
  }
  sub_7214A0(this, (unsigned int *)v4, a2); /*0x73b1e0*/
  v4[1].members.m_uiRefCount = *((UInt32 *)this + 3); /*0x73b1e8*/
  v4[2].__vftable = *((NiObjectVtbl **)this + 4); /*0x73b1f0*/
  v4[2].members.m_uiRefCount = *((UInt32 *)this + 5); /*0x73b1f6*/
  v4[3].__vftable = *((NiObjectVtbl **)this + 6); /*0x73b1fc*/
  return v4; /*0x73b1ff*/
}
