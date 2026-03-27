TESForm *__thiscall sub_421000(ExtraDataList *this, TESForm *a2)
{
  BSExtraData *ExtraData; // esi
  ExtraSavedMovementData *v4; // eax
  BSExtraData *v5; // eax
  TESForm *result; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_SavedMovementData);
  if ( !ExtraData )
  {
    v4 = (ExtraSavedMovementData *)FormHeapAlloc(0x1Cu);
    if ( v4 )
      v5 = (BSExtraData *)ExtraSavedMovementData::ExtraSavedMovementData(v4);
    else
      v5 = 0;
    ExtraData = v5;
    BaseExtraList_AddExtra(this, v5);
  }
  result = (TESForm *)SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x24u )
  {
    *(_DWORD *)&ExtraData[1].members.type = a2;
    return a2;
  }
  else
  {
    if ( *(_DWORD *)&ExtraData[1].members.type )
      result = (TESForm *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_B34D90 + 0x18))(
                            dword_B34D90,
                            "SetSavedAnimation() is being called when there is already a saved animation.");
    *(_DWORD *)&ExtraData[1].members.type = a2;
  }
  return result;
}
