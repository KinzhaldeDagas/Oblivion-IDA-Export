// Tests flag bit 0 of ExtraEnableStateParent, the inverse-enable-state flag.
char __thiscall ExtraDataList_IsEnableStateInverse(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_EnableStateParent); /*0x420342*/
  if ( ExtraData ) /*0x420349*/
    return ExtraData[1].members.type & 1; /*0x42034e*/
  else
    return 0; /*0x420351*/
}
