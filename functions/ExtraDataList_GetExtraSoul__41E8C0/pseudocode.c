int __thiscall ExtraDataList_GetExtraSoul(ExtraDataList *this)
{
  ExtraSoul *ExtraData; // eax

  ExtraData = (ExtraSoul *)BaseExtraList_GetExtraData(this, kExtraData_Soul);
  if ( ExtraData )
    return (char)ExtraData->soul;
  else
    return 0;
}
