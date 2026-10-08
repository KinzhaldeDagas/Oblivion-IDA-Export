void __fastcall ContainerEntryExtraData_DestroyDataTable(unsigned int *this, int a2)
{
  _DWORD *v3; // ecx

  v3 = (_DWORD *)*this; /*0x484473*/
  if ( v3 ) /*0x484477*/
    BSSimpleList_Clear(v3); /*0x484479*/
  FormHeapFree(*this); /*0x484481*/
  *this = 0; /*0x484489*/
}
