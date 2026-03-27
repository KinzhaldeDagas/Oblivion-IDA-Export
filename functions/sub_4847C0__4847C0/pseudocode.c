char __thiscall sub_4847C0(int *this)
{
  int v1; // esi

  v1 = *this;
  if ( *this )
  {
    while ( *(_DWORD *)v1 )
    {
      if ( ExtraDataList_IsExtraDefaultForContainer_all(*(_DWORD **)v1) )
        return 1;
      v1 = *(_DWORD *)(v1 + 4);
      if ( !v1 )
        return 0;
    }
  }
  return 0;
}
