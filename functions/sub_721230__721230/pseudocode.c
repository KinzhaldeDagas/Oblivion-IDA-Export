NiObject *__thiscall sub_721230(char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  NiObject *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x10u); /*0x721257*/
  v4 = v3; /*0x72125c*/
  if ( v3 ) /*0x72126f*/
  {
    sub_721350(v3); /*0x721273*/
    *(float *)&v4[1].members.m_uiRefCount = 0.0; /*0x72127a*/
    v4->__vftable = (NiObjectVtbl *)&NiFloatExtraData::`vftable'; /*0x72127d*/
  }
  else
  {
    v4 = 0; /*0x721285*/
  }
  sub_7214A0(this, (unsigned int *)v4, a2); /*0x721297*/
  v4[1].members.m_uiRefCount = *((UInt32 *)this + 3); /*0x72129f*/
  return v4; /*0x7212a4*/
}
