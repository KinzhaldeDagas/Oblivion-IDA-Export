signed int __thiscall sub_41F810(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Action); /*0x41f812*/
  if ( ExtraData ) /*0x41f819*/
    return LOBYTE(ExtraData[1].vtbl); /*0x41f81b*/
  else
    return 1; /*0x41f820*/
}
