void __thiscall sub_4246B0(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_ReferencePointer);
  if ( ExtraData )
    BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1);
}
