// Gets/creates Oblivion ExtraSavedMovementData and stores its saved-Havok-data pointer; runtime diagnostic confirms the field purpose.
TESSaveLoad *__thiscall ExtraDataList_SetSavedHavokData(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *ExtraData; // esi
  ExtraSavedMovementData *v4; // eax
  BSExtraData *v5; // eax
  TESSaveLoad *result; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_SavedMovementData); /*0x42120c*/
  if ( !ExtraData ) /*0x421210*/
  {
    v4 = (ExtraSavedMovementData *)FormHeapAlloc(0x1Cu); /*0x421214*/
    if ( v4 ) /*0x421226*/
      v5 = (BSExtraData *)ExtraSavedMovementData::ExtraSavedMovementData(v4); /*0x42122a*/
    else
      v5 = 0; /*0x421231*/
    ExtraData = v5; /*0x42123e*/
    BaseExtraList_AddExtra(this, v5); /*0x421240*/
  }
  result = g_TESSaveLoadGame; /*0x421245*/
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) < 0x24u ) /*0x42124e*/
  {
    ExtraData[2].vtbl = a2; /*0x4212a2*/
    return (TESSaveLoad *)a2; /*0x42129e*/
  }
  else
  {
    if ( ExtraData[2].vtbl ) /*0x421250*/
      result = (TESSaveLoad *)(*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))( /*0x421266*/
                                *(_DWORD *)&MEMORY[0xB33E90][0xF00],
                                "SetSavedHavokData() is being called when there is already saved havok data.");
    ExtraData[2].vtbl = a2; /*0x42126c*/
  }
  return result; /*0x42126f*/
}
