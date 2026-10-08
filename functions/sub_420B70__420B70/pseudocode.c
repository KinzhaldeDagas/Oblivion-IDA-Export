// Replaces the owned SeenData pointer, destroying the previous object; null removes ExtraSeenData.
BSExtraData *__thiscall ExtraDataList_SetSeenData(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax
  BSExtraData *v4; // esi
  BSExtraDataVtbl *vtbl; // ecx
  ExtraSeenData *v6; // eax
  BSExtraData *v7; // eax

  if ( !a2 ) /*0x420b9d*/
    return (BSExtraData *)BaseExtraList_RemoveExtraByType(this, 9u); /*0x420c1e*/
  result = BaseExtraList_GetExtraData(this, kExtraData_SeenData); /*0x420b9f*/
  v4 = result; /*0x420ba4*/
  if ( result ) /*0x420ba8*/
  {
    vtbl = result[1].vtbl; /*0x420baa*/
    if ( vtbl ) /*0x420baf*/
      result = (BSExtraData *)(*(int (__thiscall **)(BSExtraDataVtbl *, int))vtbl->Destructor)(vtbl, 1); /*0x420bb7*/
    v4[1].vtbl = a2; /*0x420bb9*/
  }
  else
  {
    v6 = (ExtraSeenData *)FormHeapAlloc(0x10u); /*0x420bd3*/
    if ( v6 ) /*0x420be9*/
      v7 = (BSExtraData *)ExtraSeenData::ExtraSeenData(v6); /*0x420bed*/
    else
      v7 = 0; /*0x420bf4*/
    v7[1].vtbl = a2; /*0x420c01*/
    return (BSExtraData *)BaseExtraList_AddExtra(this, v7); /*0x420c04*/
  }
  return result; /*0x420bbc*/
}
