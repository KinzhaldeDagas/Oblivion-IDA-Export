void __thiscall sub_66CF80(TESObjectREFR *this, int a2)
{
  UInt32 v6; // eax
  unsigned int v7; // eax
  int i; // eax
  float v9; // ecx
  unsigned int v10; // eax
  int v11; // edi
  _DWORD *v12; // ecx
  int v13; // edi
  _BYTE *v14; // eax

  sub_612110(this, a2, a2);
  v6 = SaveLoad_CurrentSavegame->unk030[5];
  if ( v6 == 0x1FFFF000 || v6 == 0x7FFFF000 )
  {
    sub_424770(&this->member.baseExtraList);
    flt_B3BB08 = 0.0;
    ObjectRef = 0;
    this[0x14].member.rot.x = 0.0;
    v7 = LODWORD(this[0x10].member.pos[1]);
    FormID = 0;
    this[0x16].member.super.modlist.data = (Data *)0xFFFFFFFF;
    byte_B3BB05 = 0;
    VanityCamState = 0;
    BYTE2(this[3].member.super.refID) = 0;
    if ( v7 )
    {
      FormHeapFree(v7);
      this[0x10].member.pos[1] = 0.0;
      LODWORD(this[0x10].member.pos[1]) = FormHeapAlloc(0x54u);
      for ( i = 0; i < 0x54; i += 4 )
        *(float *)(i + LODWORD(this[0x10].member.pos[1])) = 0.0;
    }
    v9 = this[0x10].member.pos[0];
    if ( v9 != 0.0 )
    {
      BSSimpleList_Clear((_DWORD *)LODWORD(v9));
      FormHeapFree(LODWORD(this[0x10].member.pos[0]));
      this[0x10].member.pos[0] = 0.0;
    }
    v10 = dword_B3BB48;
    if ( dword_B3BB48 )
    {
      do
      {
        v11 = *(_DWORD *)(v10 + 4);
        FormHeapFree(v10);
        v10 = v11;
        dword_B3BB48 = v11;
      }
      while ( v11 );
    }
    dword_B3BB44 = 0;
    ActiveEffect_Base_PreLoadAEList((_DWORD *)LODWORD(this[5].member.pos[0]), (int)this);
    if ( (a2 & 0x2000000) != 0 )
    {
      v12 = *(_DWORD **)this[0x10].member.baseExtraList.members.m_presenceBitfield;
      if ( v12 )
        sub_473AA0(v12, (int)this);
    }
    LODWORD(this[0x14].member.pos[1]) = GetTickCount();
    sub_66A670(this);
    if ( *(_DWORD *)this[0x15].member.baseExtraList.members.m_presenceBitfield )
    {
      do
      {
        v13 = *(_DWORD *)(*(_DWORD *)this[0x15].member.baseExtraList.members.m_presenceBitfield + 4);
        FormHeapFree(*(_DWORD *)this[0x15].member.baseExtraList.members.m_presenceBitfield);
        *(_DWORD *)this[0x15].member.baseExtraList.members.m_presenceBitfield = v13;
      }
      while ( v13 );
    }
    this[0x15].member.baseExtraList.members.m_data = 0;
    InterfaceManager_GetSingleton(0, 1)->unk0C0[0x13] = 0;
    InterfaceManager_GetSingleton(0, 1)->unk0C0[0x14] = 0;
    v14 = TESDataHandler_LookupTESClassByFormID((void *)iPlayerCustomClass);
    if ( v14 )
      sub_51BED0(v14, 0);
  }
}
