// Verified: external cell registration separates one quest-item exterior cell into persistentCell; normal exterior cells are stored in cellMap under packed signed X/Y.
char __thiscall TESWorldSpace_RegisterExteriorCell(TESWorldSpace *this, TESObjectCELL *cell)
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

  v2 = cell; /*0x4efef2*/
  if ( !cell || TESObjectCELL_IsInterior(cell) ) /*0x4eff02*/
    return 0; /*0x4effb9*/
  if ( TESForm_GetQuestItem((TESForm *)v2) ) /*0x4eff12*/
  {
    if ( !this->persistentCell ) /*0x4eff1b*/
    {
      this->persistentCell = v2; /*0x4eff24*/
      TESObjectCELL::SetWorldspace(v2, this); /*0x4eff27*/
      return 1; /*0x4eff31*/
    }
    return 0; /*0x4eff1f*/
  }
  YCoordinate = TESObjectCELL_GetYCoordinate(v2); /*0x4eff3e*/
  v6 = YCoordinate | ((__int16)TESObjectCELL_GetXCoordinate(v2) << 0x10); /*0x4eff57*/
  if ( NiTMap_GetAt(&this->cellMap->vtbl, v6, &cell) ) /*0x4eff5a*/
  {
    v7 = cell; /*0x4eff64*/
    refID = cell->members.super.refID; /*0x4eff68*/
    v12 = TESObjectCELL_GetYCoordinate(v2); /*0x4eff72*/
    XCoordinate = TESObjectCELL_GetXCoordinate(v2); /*0x4eff75*/
    v10 = (const char *)((int (__thiscall *)(TESObjectCELL *, int, int))v7->vtbl->GetEditorName)(v7, XCoordinate, v12); /*0x4eff85*/
    PrintError("Cell (%08X) %s already exists at coord (%i, %i ).", refID, v10, v11, v13); /*0x4eff8e*/
    return 0; /*0x4eff9b*/
  }
  NiTMap_SetAt(&this->cellMap->vtbl, v6, (int)v2); /*0x4effa3*/
  TESObjectCELL::SetWorldspace(v2, this); /*0x4effab*/
  return 1; /*0x4eff2d*/
}
