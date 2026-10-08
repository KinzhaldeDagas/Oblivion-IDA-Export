void __thiscall sub_4246D0(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Package); /*0x4246d5*/
  if ( ExtraData ) /*0x4246dc*/
    BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1); /*0x4246e3*/
}
