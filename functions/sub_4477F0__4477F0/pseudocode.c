TESWorldSpace *__thiscall sub_4477F0(char *this, TESForm *a2)
{
  signed int XCoordinate; // eax
  char *v5; // edi
  TESWorldSpace *v6; // esi
  bool v7; // zf
  char QuestItem; // al
  TESForm *CellAtCellCoord; // eax
  signed int v10; // eax
  signed int v11; // [esp-8h] [ebp-10h]
  signed int YCoordinate; // [esp-4h] [ebp-Ch]

  if ( dword_B33ABC )
  {
    if ( TESForm_GetQuestItem(a2) )
    {
      if ( (TESForm *)sub_4EF1E0((_DWORD *)dword_B33ABC) == a2 )
        return (TESWorldSpace *)dword_B33ABC;
    }
    else
    {
      YCoordinate = TESObjectCELL_GetYCoordinate((TESObjectCELL *)a2);
      XCoordinate = TESObjectCELL_GetXCoordinate((TESObjectCELL *)a2);
      if ( (TESForm *)TESWorldSpace::GetCellAtCellCoord((TESWorldSpace *)dword_B33ABC, XCoordinate, YCoordinate) == a2 )
        return (TESWorldSpace *)dword_B33ABC;
    }
  }
  v5 = this + 0xC;
  if ( this == (char *)0xFFFFFFF4 )
    return 0;
  while ( 1 )
  {
    v6 = *(TESWorldSpace **)v5;
    v7 = *(_DWORD *)v5 == 0;
    v5 = *((char **)v5 + 1);
    if ( !v7 )
    {
      QuestItem = TESForm_GetQuestItem(a2);
      dword_B33ABC = (int)v6;
      if ( QuestItem )
      {
        CellAtCellCoord = (TESForm *)sub_4EF1E0(v6);
      }
      else
      {
        v11 = TESObjectCELL_GetYCoordinate((TESObjectCELL *)a2);
        v10 = TESObjectCELL_GetXCoordinate((TESObjectCELL *)a2);
        CellAtCellCoord = (TESForm *)TESWorldSpace::GetCellAtCellCoord(v6, v10, v11);
      }
      if ( CellAtCellCoord == a2 )
        break;
    }
    if ( !v5 )
      return 0;
  }
  return v6;
}
