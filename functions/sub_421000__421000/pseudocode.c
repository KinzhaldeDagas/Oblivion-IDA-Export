// Gets/creates Oblivion ExtraSavedMovementData (type 0x4B) and stores its saved-animation pointer. Runtime diagnostic explicitly names SetSavedAnimation.
TESForm *__thiscall ExtraDataList_SetSavedAnimation(ExtraDataList *this, TESForm *a2)
{
  BSExtraData *ExtraData; // esi
  ExtraSavedMovementData *v4; // eax
  BSExtraData *v5; // eax
  TESForm *result; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_SavedMovementData); /*0x42102c*/
  if ( !ExtraData ) /*0x421030*/
  {
    v4 = (ExtraSavedMovementData *)FormHeapAlloc(0x1Cu); /*0x421034*/
    if ( v4 ) /*0x421046*/
      v5 = (BSExtraData *)ExtraSavedMovementData::ExtraSavedMovementData(v4); /*0x42104a*/
    else
      v5 = 0; /*0x421051*/
    ExtraData = v5; /*0x42105e*/
    BaseExtraList_AddExtra(this, v5); /*0x421060*/
  }
  result = (TESForm *)g_TESSaveLoadGame; /*0x421065*/
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) < 0x24u ) /*0x42106e*/
  {
    *(_DWORD *)&ExtraData[1].members.type = a2; /*0x4210c2*/
    return a2; /*0x4210be*/
  }
  else
  {
    if ( *(_DWORD *)&ExtraData[1].members.type ) /*0x421070*/
      result = (TESForm *)(*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))( /*0x421086*/
                            *(_DWORD *)&MEMORY[0xB33E90][0xF00],
                            "SetSavedAnimation() is being called when there is already a saved animation.");
    *(_DWORD *)&ExtraData[1].members.type = a2; /*0x42108c*/
  }
  return result; /*0x42108f*/
}
