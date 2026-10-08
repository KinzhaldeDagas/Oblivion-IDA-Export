void __thiscall sub_4246B0(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_ReferencePointer); /*0x4246b5*/
  if ( ExtraData ) /*0x4246bc*/
    BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1); /*0x4246c3*/
}
