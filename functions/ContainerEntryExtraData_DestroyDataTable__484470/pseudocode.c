void __fastcall ContainerEntryExtraData_DestroyDataTable(unsigned int *this, int a2)
{
  _DWORD *v3; // ecx

  v3 = (_DWORD *)*this;
  if ( v3 )
    BSSimpleList_Clear(v3);
  FormHeapFree(*this);
  *this = 0;
}
