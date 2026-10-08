void __thiscall sub_41F670(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Script); /*0x41f672*/
  if ( ExtraData ) /*0x41f679*/
    *(_DWORD *)&ExtraData[1].members.type = 0; /*0x41f67b*/
}
