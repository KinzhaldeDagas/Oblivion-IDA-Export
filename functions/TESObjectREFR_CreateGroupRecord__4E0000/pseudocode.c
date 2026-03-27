void __thiscall TESObjectREFR_CreateGroupRecord(TESObjectREFR *this, _DWORD *a2, int a3)
{
  TESForm *v6; // edi
  bool QuestItem; // [esp+Ch] [ebp+4h]
  UInt32 refID; // [esp+10h] [ebp+8h]

  if ( a2 )
  {
    *a2 = 0;
    if ( a3 )
    {
      v6 = (TESForm *)(*(int (__thiscall **)(TESChildCELLVtbl *))this->member.childCell.GetChildCell)(&this->member.childCell);
      refID = v6->member.refID;
      QuestItem = 0;
      switch ( *(_DWORD *)(a3 + 0xC) )
      {
        case 1:
          QuestItem = TESForm_GetQuestItem(v6);
          goto LABEL_5;
        case 3:
        case 5:
LABEL_5:
          if ( *(_DWORD *)(a3 + 8) != sub_4CA640((int)v6) && !QuestItem )
            return;
          *a2 = dword_B05E20;
          a2[3] = 6;
          break;
        case 6:
          if ( *(_DWORD *)(a3 + 8) != v6->member.refID )
            return;
          *a2 = dword_B05E20;
          if ( TESObjectREFR_IsPersistent_(this) )
            a2[3] = 8;
          else
            a2[3] = ((this->member.super.flags & 0x8000) != 0) + 9;
          break;
        default:
          return;
      }
      a2[4] = 0;
      a2[1] = 0;
      a2[2] = refID;
    }
  }
}
