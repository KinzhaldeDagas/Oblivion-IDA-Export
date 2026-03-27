void __thiscall sub_4234B0(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_OriginalReference);
  if ( ExtraData )
    BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1);
}
