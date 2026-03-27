void __thiscall sub_420EB0(ExtraDataList *this, int a2)
{
  BSExtraData *ExtraData; // eax
  BSExtraDataVtbl *vtbl; // ecx
  int *v4; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_FriendHitList);
  if ( ExtraData )
  {
    vtbl = ExtraData[1].vtbl;
    v4 = (int *)vtbl;
    if ( vtbl )
    {
      while ( *v4 )
      {
        if ( *(_DWORD *)*v4 == a2 )
        {
          BSSimpleList_Remove(vtbl, *v4);
          return;
        }
        v4 = (int *)v4[1];
        if ( !v4 )
          return;
      }
    }
  }
}
