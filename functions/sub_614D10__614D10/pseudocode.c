void __stdcall sub_614D10(int a1)
{
  int v1; // edi
  UInt32 *v2; // esi
  _DWORD *v3; // ecx

  v1 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v2 = *(UInt32 **)v1;
      if ( !*(_DWORD *)(v1 + 4) )
        break;
      if ( v2 )
        goto LABEL_6;
LABEL_10:
      v1 = *(_DWORD *)(v1 + 4);
      if ( !v1 )
        return;
    }
    if ( !v2 )
      return;
LABEL_6:
    v3 = (_DWORD *)v2[1];
    if ( v3 )
      sub_485BC0(v3);
    if ( *v2 )
      *v2 = MagicItem_LookupByFormID(*v2);
    goto LABEL_10;
  }
}
