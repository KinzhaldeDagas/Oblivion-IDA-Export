// Verified exterior-cell removal gate. Requires the cell to belong to this WorldSpace; clears inactive forms in either branch. If the cell has no winning override or its winner is a master file, unloads it from save state, removes it from TESWorldSpace's cell map, and destroys it; otherwise it leaves the overridden cell registered.
void __thiscall TESWorldSpace_UnloadExteriorCellIfEligible(TESWorldSpace *this, TESObjectCELL *cell)
{
  Data *OverrideFile; // eax

  if ( cell ) /*0x4f184a*/
  {
    if ( TESObjectCELL_GetWorldSpace(cell) == this ) /*0x4f1855*/
    {
      OverrideFile = TESForm_GetOverrideFile((TESForm *)cell, 0xFFFFFFFF); /*0x4f185b*/
      if ( !OverrideFile || TESFile_GetIsMaster(OverrideFile) ) /*0x4f1866*/
      {
        TESObjectCELL_ClearInactiveRuntimeForms(cell); /*0x4f187d*/
        TESSaveLoadGame_UnloadForm(g_TESSaveLoadGame, (TESForm *)cell); /*0x4f1889*/
        TESWorldSpace_RemoveCellFromCellMap(this, cell); /*0x4f1891*/
        cell->vtbl->Destroy((TESForm *)cell, 1); /*0x4f189f*/
      }
      else
      {
        TESObjectCELL_ClearInactiveRuntimeForms(cell); /*0x4f1871*/
      }
    }
  }
}
