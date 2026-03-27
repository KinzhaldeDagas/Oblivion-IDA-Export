int __thiscall ContainerEntryExtraData_ClearDataTable(int *this)
{
  int i; // edi
  ExtraDataList *v2; // esi
  int result; // eax

  for ( i = *this; i; result = (*(int (__thiscall **)(ExtraDataList *, int))v2->vtbl)(v2, 1) )
  {
    v2 = *(ExtraDataList **)i;
    if ( !*(_DWORD *)i )
      break;
    i = *(_DWORD *)(i + 4);
    BaseExtraList_Clear(v2, 1);
  }
  return result;
}
