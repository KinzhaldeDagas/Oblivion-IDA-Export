int __thiscall ExtraDataList_GetExtraSoul(ExtraDataList *this)
{
  ExtraSoul *ExtraData; // eax

  ExtraData = (ExtraSoul *)BaseExtraList_GetExtraData(this, kExtraData_Soul); /*0x41e8c2*/
  if ( ExtraData ) /*0x41e8c9*/
    return (char)ExtraData->soul; /*0x41e8cb*/
  else
    return 0; /*0x41e8d0*/
}
