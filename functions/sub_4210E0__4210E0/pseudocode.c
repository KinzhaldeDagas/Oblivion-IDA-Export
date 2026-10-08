// Gets/creates Oblivion ExtraSavedMovementData and stores the saved-attached-animation pointer; replacement is diagnosed at runtime.
TESSaveLoad *__thiscall ExtraDataList_SetSavedAttachedAnimation(ExtraDataList *this, BSExtraData *a2)
{
  BSExtraData *ExtraData; // esi
  ExtraSavedMovementData *v4; // eax
  BSExtraData *v5; // eax
  TESSaveLoad *result; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_SavedMovementData); /*0x42110c*/
  if ( !ExtraData ) /*0x421110*/
  {
    v4 = (ExtraSavedMovementData *)FormHeapAlloc(0x1Cu); /*0x421114*/
    if ( v4 ) /*0x421126*/
      v5 = (BSExtraData *)ExtraSavedMovementData::ExtraSavedMovementData(v4); /*0x42112a*/
    else
      v5 = 0; /*0x421131*/
    ExtraData = v5; /*0x42113e*/
    BaseExtraList_AddExtra(this, v5); /*0x421140*/
  }
  result = g_TESSaveLoadGame; /*0x421145*/
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) < 0x24u ) /*0x42114e*/
  {
    ExtraData[1].members.next = a2; /*0x4211a2*/
    return (TESSaveLoad *)a2; /*0x42119e*/
  }
  else
  {
    if ( ExtraData[1].members.next ) /*0x421150*/
      result = (TESSaveLoad *)(*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))( /*0x421166*/
                                *(_DWORD *)&MEMORY[0xB33E90][0xF00],
                                "SetSavedAttachedAnimation() is being called when there is already a saved attached animation.");
    ExtraData[1].members.next = a2; /*0x42116c*/
  }
  return result; /*0x42116f*/
}
