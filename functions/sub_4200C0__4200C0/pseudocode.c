// Returns true when ExtraRunOncePacks contains a record for the supplied TESPackage pointer.
char __thiscall ExtraDataList_HasRunOncePackage(ExtraDataList *this, int a2)
{
  BSExtraData *ExtraData; // eax
  BSExtraDataVtbl *vtbl; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_RunOncePacks); /*0x4200c2*/
  if ( ExtraData ) /*0x4200c9*/
  {
    vtbl = ExtraData[1].vtbl; /*0x4200cb*/
    if ( vtbl ) /*0x4200d0*/
    {
      while ( vtbl->Destructor ) /*0x4200da*/
      {
        if ( *(_DWORD *)vtbl->Destructor == a2 ) /*0x4200de*/
          return 1; /*0x4200ec*/
        vtbl = (BSExtraDataVtbl *)vtbl->CompareTo; /*0x4200e0*/
        if ( !vtbl ) /*0x4200e5*/
          return 0; /*0x4200e5*/
      }
    }
  }
  return 0; /*0x4200e9*/
}
