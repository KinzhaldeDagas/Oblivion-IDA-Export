signed int __thiscall sub_77AEE0(_DWORD **this, NiObject *a2)
{
  UInt32 m_uiRefCount; // ecx
  NiObject *v5; // eax

  m_uiRefCount = a2[4].members.m_uiRefCount;
  if ( m_uiRefCount )
    return *(_DWORD *)((*(int (__thiscall **)(UInt32))(*(_DWORD *)m_uiRefCount + 0xC))(m_uiRefCount) + 0x10);
  v5 = NiRTTI_Cast((BSStringT *)dword_B3F95C, a2);
  if ( v5
    && (*(unsigned __int8 (__thiscall **)(_DWORD, NiObject *))(**(this + 3) + 0x104))(*(this + 3), v5)
    && (m_uiRefCount = a2[4].members.m_uiRefCount) != 0 )
  {
    return *(_DWORD *)((*(int (__thiscall **)(UInt32))(*(_DWORD *)m_uiRefCount + 0xC))(m_uiRefCount) + 0x10);
  }
  else
  {
    return 0x16;
  }
}
