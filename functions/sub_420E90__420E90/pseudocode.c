void __thiscall sub_420E90(ExtraDataList *this, int a2)
{
  BSExtraData *ExtraData; // eax
  BSExtraData *v3; // edi
  BSExtraDataVtbl *vtbl; // ecx
  BSExtraDataVtbl *i; // eax
  void (__thiscall *Destructor)(BSExtraData *); // edx
  int *v7; // edx
  unsigned int v8; // esi

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_FriendHitList);
  if ( ExtraData )
  {
    v3 = ExtraData;
    vtbl = ExtraData[1].vtbl;
    for ( i = vtbl; i; *((float *)Destructor + 2) = *((float *)Destructor + 2) + flt_B33E9C )
    {
      Destructor = i->Destructor;
      if ( !i->Destructor )
        break;
      i = (BSExtraDataVtbl *)i->CompareTo;
    }
    v7 = (int *)vtbl;
    if ( vtbl )
    {
      do
      {
        v8 = *v7;
        if ( !*v7 )
          break;
        if ( fFriendHitTimer < (double)*(float *)(v8 + 8) )
        {
          BSSimpleList_Remove(vtbl, *v7);
          FormHeapFree(v8);
          vtbl = v3[1].vtbl;
          v7 = (int *)vtbl;
        }
        v7 = (int *)v7[1];
      }
      while ( v7 );
    }
  }
}
