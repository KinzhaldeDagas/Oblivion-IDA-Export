// Returns the embedded child-reference list in ExtraEnableStateChildren, or null.
BSExtraData *__thiscall ExtraDataList_GetEnableStateChildren(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_EnableStateChildren); /*0x4203a2*/
  if ( ExtraData ) /*0x4203a9*/
    return ExtraData + 1; /*0x4203ab*/
  else
    return 0; /*0x4203af*/
}
