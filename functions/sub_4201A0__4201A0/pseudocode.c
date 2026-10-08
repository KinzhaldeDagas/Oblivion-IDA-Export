// Creates/updates ExtraOblivionEntry from a reference position plus entry reference; removes type 0x3E when either required input is null.
BSExtraData *__thiscall ExtraDataList_SetOrRemoveOblivionEntry(ExtraDataList *this, int a2, BSExtraDataVtbl *a3)
{
  BSExtraData *ExtraData; // esi
  BSExtraDataVtbl **v5; // eax
  BSExtraData *result; // eax
  char *v7; // eax
  char *v8; // eax

  if ( !a2 || !a3 ) /*0x4201d4*/
    return (BSExtraData *)BaseExtraList_RemoveExtraByType(this, 0x3Eu); /*0x420240*/
  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_OblivionEntry); /*0x4201dd*/
  if ( ExtraData ) /*0x4201e1*/
  {
    v5 = (BSExtraDataVtbl **)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x174))(a2); /*0x4201ed*/
    ExtraData[1].vtbl = *v5; /*0x4201f1*/
    *(_DWORD *)&ExtraData[1].members.type = v5[1]; /*0x4201f7*/
    result = (BSExtraData *)v5[2]; /*0x4201fa*/
    ExtraData[1].members.next = result; /*0x4201fd*/
    ExtraData[2].vtbl = a3; /*0x420200*/
  }
  else
  {
    v7 = (char *)FormHeapAlloc(0x1Cu); /*0x420207*/
    if ( v7 ) /*0x42021d*/
      v8 = sub_42A540(v7, a2, (int)a3); /*0x420223*/
    else
      v8 = 0; /*0x42022a*/
    return (BSExtraData *)BaseExtraList_AddExtra(this, (BSExtraData *)v8); /*0x420237*/
  }
  return result; /*0x420245*/
}
