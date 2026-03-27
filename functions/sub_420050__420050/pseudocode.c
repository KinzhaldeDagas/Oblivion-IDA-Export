void __thiscall sub_420050(ExtraDataList *this, char a2)
{
  BSExtraData *ExtraData; // eax
  BSExtraData *v3; // edi
  BSExtraDataVtbl *vtbl; // ecx
  int *v5; // edx
  _BYTE *v6; // esi
  bool v7; // bl

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_RunOncePacks);
  v3 = ExtraData;
  if ( ExtraData )
  {
    vtbl = ExtraData[1].vtbl;
    v5 = (int *)vtbl;
    if ( vtbl )
    {
      do
      {
        v6 = (_BYTE *)*v5;
        if ( !*v5 )
          break;
        v7 = 0;
        if ( *(_DWORD *)v6 )
          v7 = *(_DWORD *)(*(_DWORD *)v6 + 0x30) + *(char *)(*(_DWORD *)v6 + 0x2F) >= 0x15;
        if ( v6[4] != a2 || v7 )
        {
          BSSimpleList_Remove(vtbl, *v5);
          FormHeapFree((unsigned int)v6);
          vtbl = v3[1].vtbl;
          v5 = (int *)vtbl;
        }
        else
        {
          v5 = (int *)v5[1];
        }
      }
      while ( v5 );
    }
  }
}
