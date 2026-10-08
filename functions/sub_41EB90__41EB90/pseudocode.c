// Returns existing ExtraAction type 0x13, or creates one with default action flag byte 1 and null action reference.
BSExtraData *__thiscall ExtraDataList_GetOrCreateAction(ExtraDataList *this)
{
  BSExtraData *result; // eax
  BSExtraData *v3; // esi
  _BYTE *v4; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_Action); /*0x41ebb7*/
  v3 = 0; /*0x41ebbc*/
  if ( !result ) /*0x41ebc0*/
  {
    v4 = (_BYTE *)FormHeapAlloc(0x14u); /*0x41ebc4*/
    if ( v4 ) /*0x41ebd6*/
      v3 = (BSExtraData *)ExtraAction_ctor(v4); /*0x41ebdf*/
    BaseExtraList_AddExtra(this, v3); /*0x41ebec*/
    return v3; /*0x41ebf1*/
  }
  return result; /*0x41ebf3*/
}
