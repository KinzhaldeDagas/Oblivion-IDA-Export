// Returns ExtraPackage's activation byte, or false.
char __thiscall ExtraDataList_GetPackageExtraActivate(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Package); /*0x41fba2*/
  if ( ExtraData ) /*0x41fba9*/
    return BYTE1(ExtraData[2].vtbl); /*0x41fbab*/
  else
    return 0; /*0x41fbaf*/
}
