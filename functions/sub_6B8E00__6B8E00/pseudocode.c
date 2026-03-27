UnkBohDialogueTopicBoh *__thiscall sub_6B8E00(
        UnkBohDialogueTopicBoh *this,
        TESQuest *a2,
        TESTopic *a3,
        UInt32 a4,
        Actor *a5,
        char a6)
{
  bool v7; // bl
  TESTopic *v9; // edi
  bool v10; // zf
  TESTopic *v11; // edi
  int v12; // eax
  char *m_data; // eax
  int v14; // eax
  TESTopic *v16; // [esp+28h] [ebp+4h]

  v7 = 0;
  this->unkString.m_data = 0;
  this->unkString.m_dataLen = 0;
  this->unkString.m_bufLen = 0;
  this->unk0C = 0;
  this->unk10 = 0;
  this->unk1C = 0;
  this->unk14 = 0;
  this->unk24 = 0;
  this->unk18 = 0;
  if ( a3->super.refID == 0xD7 )
  {
    this->isInfoGeneralTopic = 1;
    this->unk08 = 0;
  }
  else
  {
    this->isInfoGeneralTopic = 0;
  }
  v9 = a3;
  v16 = a3;
  if ( a4 )
  {
    v10 = *(_BYTE *)(a4 + 0x22) == 0;
    this->unk18 = a4;
    this->pad21[0] = v10;
    if ( a6 )
    {
      if ( (*(_BYTE *)(a4 + 0x25) & 0x10) == 0 )
      {
        v11 = (TESTopic *)TESTopic::GEtTopic(6, 0);
        v12 = sub_530020(v11, a5, (TESObjectREFR *)TESDataHandler_g_PlayerRef);
        if ( v12 )
        {
          this->unk18 = v12;
          v16 = v11;
          a2 = sub_52F570(v11, v12);
        }
      }
    }
    m_data = a3->fullname.name.m_data;
    if ( !m_data )
      m_data = EmptyString;
    BSStringT_Set(&this->unkString, m_data, 0);
    if ( !this->isInfoGeneralTopic )
    {
      v14 = *(_DWORD *)(this->unk18 + 0x30);
      if ( v14 )
      {
        if ( *(_DWORD *)(v14 + 0xC) || *(_DWORD *)(v14 + 8) )
          v7 = 1;
      }
      this->unk08 = v7;
    }
    v9 = v16;
    sub_6B8CF0(&this->unkString, a2, v16, (TESForm *)this->unk18, (TESObjectREFR *)a5);
  }
  this->unk14 = (UInt32)a2;
  this->unk24 = (UInt32)v9;
  return this;
}
