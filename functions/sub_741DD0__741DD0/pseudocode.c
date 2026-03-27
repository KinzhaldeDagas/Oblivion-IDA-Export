NiObject *__thiscall sub_741DD0(char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  NiObject *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x10u);
  v4 = v3;
  if ( v3 )
  {
    sub_721350(v3);
    v4->__vftable = (NiObjectVtbl *)&NiBooleanExtraData::`vftable';
    LOBYTE(v4[1].members.m_uiRefCount) = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_7214A0(this, (unsigned int *)v4, a2);
  LOBYTE(v4[1].members.m_uiRefCount) = *((_BYTE *)this + 0xC);
  return v4;
}
