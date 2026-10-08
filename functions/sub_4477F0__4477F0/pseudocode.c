TESWorldSpace *__thiscall sub_4477F0(char *this, TESForm *a2)
{
  int XCoordinate; // eax
  char *v5; // edi
  TESWorldSpace *v6; // esi
  bool v7; // zf
  bool QuestItem; // al
  TESObjectCELL *CellAtCellCoord; // eax
  int v10; // eax
  int v11; // [esp-8h] [ebp-10h]
  int YCoordinate; // [esp-4h] [ebp-Ch]

  if ( unk_B33ABC ) /*0x4477f0*/
  {
    if ( TESForm_GetQuestItem(a2) ) /*0x447803*/
    {
      if ( (TESForm *)sub_4EF1E0((_DWORD *)unk_B33ABC) == a2 ) /*0x447819*/
        return (TESWorldSpace *)unk_B33ABC; /*0x447822*/
    }
    else
    {
      YCoordinate = TESObjectCELL_GetYCoordinate((TESObjectCELL *)a2); /*0x44782c*/
      XCoordinate = TESObjectCELL_GetXCoordinate((TESObjectCELL *)a2); /*0x44782f*/
      if ( TESWorldSpace::GetCellAtCellCoord((TESWorldSpace *)unk_B33ABC, XCoordinate, YCoordinate) == (TESObjectCELL *)a2 ) /*0x447842*/
        return (TESWorldSpace *)unk_B33ABC; /*0x44784b*/
    }
  }
  v5 = this + 0xC; /*0x44784f*/
  if ( this == (char *)0xFFFFFFF4 ) /*0x447854*/
    return 0; /*0x447898*/
  while ( 1 ) /*0x447856*/
  {
    v6 = *(TESWorldSpace **)v5; /*0x447856*/
    v7 = *(_DWORD *)v5 == 0; /*0x447858*/
    v5 = *((char **)v5 + 1); /*0x44785a*/
    if ( !v7 ) /*0x44785d*/
    {
      QuestItem = TESForm_GetQuestItem(a2); /*0x447861*/
      unk_B33ABC = (int)v6; /*0x447868*/
      if ( QuestItem ) /*0x44786e*/
      {
        CellAtCellCoord = (TESObjectCELL *)sub_4EF1E0(v6); /*0x447872*/
      }
      else
      {
        v11 = TESObjectCELL_GetYCoordinate((TESObjectCELL *)a2); /*0x447880*/
        v10 = TESObjectCELL_GetXCoordinate((TESObjectCELL *)a2); /*0x447883*/
        CellAtCellCoord = TESWorldSpace::GetCellAtCellCoord(v6, v10, v11); /*0x44788b*/
      }
      if ( CellAtCellCoord == (TESObjectCELL *)a2 ) /*0x447892*/
        break; /*0x447892*/
    }
    if ( !v5 ) /*0x447896*/
      return 0; /*0x447896*/
  }
  return v6; /*0x447820*/
}
