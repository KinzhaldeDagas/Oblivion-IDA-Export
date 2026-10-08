// Runtime corroboration of TESCS 0x545970: construct owning CELL group type 6 from parent types 1/3/5, then construct the direct reference-role group from type 6. Role is 8 if reference Persistent, else 10 if Visible When Distant, else 9; label remains the owning CELL FormID.
void __thiscall TESObjectREFR_CreateGroupRecord(TESObjectREFR *this, _DWORD *a2, int a3)
{
  TESForm *v6; // edi
  bool QuestItem; // [esp+Ch] [ebp+4h]
  UInt32 refID; // [esp+10h] [ebp+8h]

  if ( a2 ) /*0x4e000a*/
  {
    *a2 = 0; /*0x4e0017*/
    if ( a3 ) /*0x4e001d*/
    {
      v6 = (TESForm *)(*(int (__thiscall **)(TESChildCELLVtbl *))this->member.childCell.GetChildCell)(&this->member.childCell); /*0x4e002e*/
      refID = v6->member.refID; /*0x4e003c*/
      QuestItem = 0; /*0x4e0040*/
      switch ( *(_DWORD *)(a3 + 0xC) ) /*0x4e0047*/
      {
        case 1: /*0x4e0047*/
          QuestItem = TESForm_GetQuestItem(v6); // For current group type 1, the owning CELL must carry form flag 0x400; this is the persistent exterior-CELL shortcut to type 6. /*0x4e0059*/
          goto LABEL_5; /*0x4e0059*/
        case 3: /*0x4e0047*/
        case 5: /*0x4e0047*/
LABEL_5:
          if ( *(_DWORD *)(a3 + 8) != TESObjectCELL_GetCellGroupSubBlockLabel(v6) && !QuestItem ) /*0x4e006f*/
            return; /*0x4e006f*/
          *a2 = dword_B05E20; /*0x4e0076*/
          a2[3] = 6;                            // Emit owning CELL-child GRUP type 6. /*0x4e0078*/
          break; /*0x4e007f*/
        case 6: /*0x4e0047*/
          if ( *(_DWORD *)(a3 + 8) != v6->member.refID ) /*0x4e0084*/
            return; /*0x4e0084*/
          *a2 = dword_B05E20; /*0x4e008e*/
          if ( TESObjectREFR_IsPersistent(this) )// From owning type 6, test current reference Persistent first. /*0x4e0090*/
            a2[3] = 8;                          // Persistent reference => direct role GRUP type 8. /*0x4e0099*/
          else
            a2[3] = ((this->member.super.flags & 0x8000) != 0) + 9;// Non-persistent reference => role type 10 if Visible When Distant, otherwise type 9. /*0x4e00b3*/
          break; /*0x4e00a0*/
        default:
          return;
      }
      a2[4] = 0; /*0x4e00bc*/
      a2[1] = 0; /*0x4e00bf*/
      a2[2] = refID; /*0x4e00c2*/
    }
  }
}
