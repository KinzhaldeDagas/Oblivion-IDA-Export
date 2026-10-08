void __thiscall sub_4234B0(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_OriginalReference); /*0x4234b5*/
  if ( ExtraData ) /*0x4234bc*/
    BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1); /*0x4234c3*/
}
