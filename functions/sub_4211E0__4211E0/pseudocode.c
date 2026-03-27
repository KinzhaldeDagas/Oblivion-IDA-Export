TESSaveLoad *__thiscall sub_4211E0(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *ExtraData; // esi
  ExtraSavedMovementData *v4; // eax
  BSExtraData *v5; // eax
  TESSaveLoad *result; // eax

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
  result = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x24u )
  {
    ExtraData[2].vtbl = a2;
    return (TESSaveLoad *)a2;
  }
  else
  {
    if ( ExtraData[2].vtbl )
      result = (TESSaveLoad *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_B34D90 + 0x18))(
                                dword_B34D90,
                                "SetSavedHavokData() is being called when there is already saved havok data.");
    ExtraData[2].vtbl = a2;
  }
  return result;
}
