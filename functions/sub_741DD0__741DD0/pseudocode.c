NiObject *__thiscall sub_741DD0(char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  NiObject *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x10u); /*0x741df7*/
  v4 = v3; /*0x741dfc*/
  if ( v3 ) /*0x741e0f*/
  {
    sub_721350(v3); /*0x741e13*/
    v4->__vftable = (NiObjectVtbl *)&NiBooleanExtraData::`vftable'; /*0x741e18*/
    LOBYTE(v4[1].members.m_uiRefCount) = 0; /*0x741e1e*/
  }
  else
  {
    v4 = 0; /*0x741e24*/
  }
  sub_7214A0(this, (unsigned int *)v4, a2); /*0x741e36*/
  LOBYTE(v4[1].members.m_uiRefCount) = *((_BYTE *)this + 0xC); /*0x741e3e*/
  return v4; /*0x741e43*/
}
