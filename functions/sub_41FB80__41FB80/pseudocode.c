// Returns ExtraPackage's completion byte, or false.
char __thiscall ExtraDataList_GetPackageExtraComplete(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Package); /*0x41fb82*/
  if ( ExtraData ) /*0x41fb89*/
    return (char)ExtraData[2].vtbl; /*0x41fb8b*/
  else
    return 0; /*0x41fb8f*/
}
