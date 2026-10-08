NiObject *__thiscall sub_759D80(const void **this, _DWORD **a2)
{
  NiObject *v3; // eax
  NiObject *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x68u); /*0x759d87*/
  v4 = v3; /*0x759d8c*/
  if ( v3 ) /*0x759d95*/
  {
    sub_73EE80(v3); /*0x759d99*/
    v4->__vftable = (NiObjectVtbl *)&NiPSysData::`vftable'; /*0x759da6*/
    v4[0xB].members.m_uiRefCount = 0; /*0x759dac*/
    v4[0xC].__vftable = 0; /*0x759daf*/
    LOWORD(v4[0xC].members.m_uiRefCount) = 0; /*0x759db2*/
    HIWORD(v4[0xC].members.m_uiRefCount) = 0; /*0x759db6*/
    sub_759940(this, (NiGeometryData *)v4, a2); /*0x759dba*/
    return v4; /*0x759dc0*/
  }
  else
  {
    sub_759940(this, 0, a2); /*0x759dd1*/
    return 0; /*0x759dd7*/
  }
}
