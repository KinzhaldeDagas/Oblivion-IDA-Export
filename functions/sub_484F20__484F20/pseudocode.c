void __thiscall sub_484F20(int *this)
{
  int i; // esi
  ExtraDataList *v2; // edi

  for ( i = *this; i; i = *(_DWORD *)(i + 4) ) /*0x484f21*/
  {
    v2 = *(ExtraDataList **)i; /*0x484f28*/
    if ( !*(_DWORD *)i ) /*0x484f28*/
      break; /*0x484f28*/
    if ( ExtraDataList_GetExtraScript(*(ExtraDataList **)i) ) /*0x484f30*/
    {
      ExtraDataList_GetExtraScript(v2); /*0x484f49*/
      return; /*0x484f49*/
    }
  }
}
