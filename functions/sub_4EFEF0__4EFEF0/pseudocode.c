char __thiscall sub_4EFEF0(TESWorldSpace *this, TESObjectCELL *a3)
{
  TESObjectCELL *v2; // esi
  unsigned __int16 YCoordinate; // bp
  int v6; // edi
  TESObjectCELL *v7; // edi
  UInt32 refID; // ebx
  int XCoordinate; // eax
  const char *v10; // eax
  int v11; // [esp-Ch] [ebp-14h]
  int v12; // [esp-8h] [ebp-10h]
  int v13; // [esp-8h] [ebp-10h]

  v2 = a3;
  if ( !a3 || TESObjectCELL_IsInterior(a3) )
    return 0;
  if ( TESForm_GetQuestItem((TESForm *)v2) )
  {
    if ( !this->unk034 )
    {
      this->unk034 = v2;
      TESObjectCELL::SetWorldspace(v2, this);
      return 1;
    }
    return 0;
  }
  YCoordinate = TESObjectCELL_GetYCoordinate(v2);
  v6 = YCoordinate | ((__int16)TESObjectCELL_GetXCoordinate(v2) << 0x10);
  if ( NiTMap_GetAt(&this->cellMap->vtbl, v6, &a3) )
  {
    v7 = a3;
    refID = a3->members.super.refID;
    v12 = TESObjectCELL_GetYCoordinate(v2);
    XCoordinate = TESObjectCELL_GetXCoordinate(v2);
    v10 = (const char *)((int (__thiscall *)(TESObjectCELL *, int, int))v7->vtbl->GetEditorName)(v7, XCoordinate, v12);
    PrintError("Cell (%08X) %s already exists at coord (%i, %i ).", refID, v10, v11, v13);
    return 0;
  }
  NiTMap_SetAt(&this->cellMap->vtbl, v6, (int)v2);
  TESObjectCELL::SetWorldspace(v2, this);
  return 1;
}
