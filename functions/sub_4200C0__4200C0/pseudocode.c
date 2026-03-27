char __thiscall sub_4200C0(ExtraDataList *this, int a2)
{
  BSExtraData *ExtraData; // eax
  BSExtraDataVtbl *vtbl; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_RunOncePacks);
  if ( ExtraData )
  {
    vtbl = ExtraData[1].vtbl;
    if ( vtbl )
    {
      while ( vtbl->Destructor )
      {
        if ( *(_DWORD *)vtbl->Destructor == a2 )
          return 1;
        vtbl = (BSExtraDataVtbl *)vtbl->CompareTo;
        if ( !vtbl )
          return 0;
      }
    }
  }
  return 0;
}
