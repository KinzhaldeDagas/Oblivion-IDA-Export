char __thiscall sub_4E0D90(ExtraDataList **this, int a2)
{
  int m_data_low; // eax
  ExtraDataList *v4; // edi
  TESObjectCELL *v5; // edi
  NiNode *v6; // eax

  m_data_low = LOBYTE((*(this + 7))->members.m_data);
  if ( m_data_low == 0x12 || m_data_low == 0x18 )
  {
    m_data_low = _strcmp(*(char **)(a2 + 8), off_B10568);
    if ( !m_data_low )
    {
      v4 = *(this + 0x10);
      if ( v4 )
      {
        if ( TESObjectCELL_IsInterior((TESObjectCELL *)*(this + 0x10)) )
          m_data_low = (int)sub_424180(v4 + 2);
        else
          m_data_low = bhkWorldM;
        if ( m_data_low )
        {
          v5 = (TESObjectCELL *)*(this + 0x10);
          if ( TESObjectCELL_IsInterior(v5) )
            sub_424180(&v5->members.extraData);
          v6 = (NiNode *)((int (__thiscall *)(ExtraDataList **))(*this)[0x11].vtbl)(this);
          LOBYTE(m_data_low) = sub_88D070(v6, 1, 1, 0);
        }
      }
    }
  }
  return m_data_low;
}
