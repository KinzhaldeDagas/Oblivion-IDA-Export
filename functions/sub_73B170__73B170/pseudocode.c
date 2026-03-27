NiObject *__thiscall sub_73B170(char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  NiObject *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x1Cu);
  v4 = v3;
  if ( v3 )
  {
    sub_721350(v3);
    *(float *)&v4[3].__vftable = 0.0;
    v4->__vftable = (NiObjectVtbl *)&NiVectorExtraData::`vftable';
    *(float *)&v4[2].members.m_uiRefCount = 0.0;
    *(float *)&v4[2].__vftable = 0.0;
    *(float *)&v4[1].members.m_uiRefCount = 0.0;
  }
  else
  {
    v4 = 0;
  }
  sub_7214A0(this, (unsigned int *)v4, a2);
  v4[1].members.m_uiRefCount = *((UInt32 *)this + 3);
  v4[2].__vftable = *((NiObjectVtbl **)this + 4);
  v4[2].members.m_uiRefCount = *((UInt32 *)this + 5);
  v4[3].__vftable = *((NiObjectVtbl **)this + 6);
  return v4;
}
