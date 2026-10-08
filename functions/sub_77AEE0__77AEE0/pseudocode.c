signed int __thiscall sub_77AEE0(_DWORD **this, NiObject *a2)
{
  UInt32 m_uiRefCount; // ecx
  NiObject *v5; // eax

  m_uiRefCount = a2[4].members.m_uiRefCount; /*0x77aee8*/
  if ( m_uiRefCount ) /*0x77aeed*/
    return *(_DWORD *)((*(int (__thiscall **)(UInt32))(*(_DWORD *)m_uiRefCount + 0xC))(m_uiRefCount) + 0x10); /*0x77aeed*/
  v5 = NiRTTI_Cast((BSStringT *)stru_B3F95C, a2); /*0x77af04*/
  if ( v5 /*0x77af27*/
    && (*(unsigned __int8 (__thiscall **)(_DWORD, NiObject *))(**(this + 3) + 0x104))(*(this + 3), v5)
    && (m_uiRefCount = a2[4].members.m_uiRefCount) != 0 )
  {
    return *(_DWORD *)((*(int (__thiscall **)(UInt32))(*(_DWORD *)m_uiRefCount + 0xC))(m_uiRefCount) + 0x10); /*0x77aef6*/
  }
  else
  {
    return 0x16; /*0x77af39*/
  }
}
