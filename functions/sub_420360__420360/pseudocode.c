// Sets or clears ExtraEnableStateParent flag bit 0 without changing its parent reference.
BSExtraData *__thiscall ExtraDataList_SetEnableStateInverse(ExtraDataList *this, char a2)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_EnableStateParent); /*0x420362*/
  if ( result ) /*0x420369*/
  {
    if ( a2 ) /*0x420370*/
      result[1].members.type |= 1u; /*0x420372*/
    else
      result[1].members.type &= ~1u; /*0x420379*/
  }
  return result; /*0x420376*/
}
