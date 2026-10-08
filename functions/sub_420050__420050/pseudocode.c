// Prunes ExtraRunOncePacks entries that do not match the requested state byte or whose package scheduling data has expired/passed its threshold.
void __thiscall ExtraDataList_PruneRunOncePackages(ExtraDataList *this, char a2)
{
  BSExtraData *ExtraData; // eax
  BSExtraData *v3; // edi
  int *vtbl; // ecx
  int *v5; // edx
  _BYTE *v6; // esi
  bool v7; // bl

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_RunOncePacks); /*0x420053*/
  v3 = ExtraData; /*0x420058*/
  if ( ExtraData ) /*0x42005c*/
  {
    vtbl = (int *)ExtraData[1].vtbl; /*0x42005e*/
    v5 = vtbl; /*0x420061*/
    while ( v5 ) /*0x420065*/
    {
      v6 = (_BYTE *)*v5; /*0x420070*/
      if ( !*v5 ) /*0x420070*/
        break; /*0x420074*/
      v7 = 0; /*0x420078*/
      if ( *(_DWORD *)v6 ) /*0x420076*/
        v7 = *(_DWORD *)(*(_DWORD *)v6 + 0x30) + *(char *)(*(_DWORD *)v6 + 0x2F) >= 0x15; /*0x42008a*/
      if ( v6[4] != a2 || v7 ) /*0x420097*/
      {
        BSSimpleList_Remove(vtbl, *v5); /*0x42009f*/
        FormHeapFree((unsigned int)v6); /*0x4200a5*/
        vtbl = (int *)v3[1].vtbl; /*0x4200aa*/
        v5 = vtbl; /*0x4200b0*/
      }
      else
      {
        v5 = (int *)v5[1]; /*0x420099*/
      }
    }
  }
}
