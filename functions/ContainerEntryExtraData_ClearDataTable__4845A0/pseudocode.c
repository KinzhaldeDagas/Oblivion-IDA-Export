int __thiscall ContainerEntryExtraData_ClearDataTable(int *this)
{
  int i; // edi
  ExtraDataList *v2; // esi
  int result; // eax

  for ( i = *this; i; result = (*(int (__thiscall **)(ExtraDataList *, int))v2->vtbl)(v2, 1) ) /*0x4845a1*/
  {
    v2 = *(ExtraDataList **)i; /*0x4845a8*/
    if ( !*(_DWORD *)i ) /*0x4845a8*/
      break; /*0x4845ac*/
    i = *(_DWORD *)(i + 4); /*0x4845ae*/
    BaseExtraList_Clear(v2, 1); /*0x4845b5*/
  }
  return result; /*0x4845cd*/
}
