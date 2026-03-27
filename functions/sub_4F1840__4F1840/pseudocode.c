void __thiscall sub_4F1840(TESWorldSpace *this, TESForm *a2)
{
  Data *OverrideFile; // eax

  if ( a2 )
  {
    if ( TESObjectCELL_GetWorldSpace((TESObjectCELL *)a2) == this )
    {
      OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF);
      if ( !OverrideFile || TESFile_GetIsMaster(OverrideFile) )
      {
        sub_4D1570((TESObjectCELL *)a2);
        sub_463A90(SaveLoad_CurrentSavegame, a2);
        TESWorldSpace_RemoveCellFromCellMap(this, (TESObjectCELL *)a2);
        a2->vtbl->Destroy(a2, 1);
      }
      else
      {
        sub_4D1570((TESObjectCELL *)a2);
      }
    }
  }
}
