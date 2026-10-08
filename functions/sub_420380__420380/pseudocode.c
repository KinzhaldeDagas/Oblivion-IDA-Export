// Replaces the complete ExtraEnableStateParent flags byte.
BSExtraData *__thiscall ExtraDataList_SetEnableStateFlags(ExtraDataList *this, UInt8 a2)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_EnableStateParent); /*0x420382*/
  if ( result ) /*0x420389*/
    result[1].members.type = a2; /*0x42038f*/
  return result; /*0x420392*/
}
