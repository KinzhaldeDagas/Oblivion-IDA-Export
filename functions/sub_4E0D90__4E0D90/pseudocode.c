char __thiscall sub_4E0D90(ExtraDataList **this, int a2)
{
  BSExtraDataVtbl *m_data_low; // eax
  ExtraDataList *v4; // edi
  TESObjectCELL *v5; // edi
  NiNode *v6; // eax

  m_data_low = (BSExtraDataVtbl *)LOBYTE((*(this + 7))->members.m_data); /*0x4e0d96*/
  if ( m_data_low == (BSExtraDataVtbl *)0x12 || m_data_low == (BSExtraDataVtbl *)0x18 ) /*0x4e0da2*/
  {
    m_data_low = (BSExtraDataVtbl *)CRT_StricmpLocaleDispatch(*(const char **)(a2 + 8), AnimGroupInfo_Unequip.name); /*0x4e0db3*/
    if ( !m_data_low ) /*0x4e0dbd*/
    {
      v4 = *(this + 0x10); /*0x4e0dc0*/
      if ( v4 ) /*0x4e0dc5*/
      {
        if ( TESObjectCELL_IsInterior((TESObjectCELL *)*(this + 0x10)) ) /*0x4e0dc9*/
          m_data_low = sub_424180(v4 + 2); /*0x4e0dd5*/
        else
          m_data_low = (BSExtraDataVtbl *)MEMORY[0xB35C24]; /*0x4e0ddc*/
        if ( m_data_low ) /*0x4e0de3*/
        {
          v5 = (TESObjectCELL *)*(this + 0x10); /*0x4e0de5*/
          if ( TESObjectCELL_IsInterior(v5) ) /*0x4e0dea*/
            sub_424180(&v5->members.extraData); /*0x4e0df6*/
          v6 = (NiNode *)((int (__thiscall *)(ExtraDataList **))(*this)[0x11].vtbl)(this); /*0x4e0e0b*/
          LOBYTE(m_data_low) = sub_88D070(v6, 1, 1, 0); /*0x4e0e0e*/
        }
      }
    }
  }
  return (char)m_data_low; /*0x4e0e17*/
}
