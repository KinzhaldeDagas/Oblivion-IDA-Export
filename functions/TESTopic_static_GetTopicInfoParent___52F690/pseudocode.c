int *__cdecl TESTopic_static_GetTopicInfoParent_(int a1)
{
  int v1; // esi
  int *v2; // edi

  v1 = TESDataHandler + 0x7C;
  if ( TESDataHandler != 0xFFFFFF84 )
  {
    do
    {
      v2 = *(int **)v1;
      if ( !*(_DWORD *)v1 )
        break;
      v1 = *(_DWORD *)(v1 + 4);
      if ( TESTopic_GetTopicInfo__(v2, *(_DWORD *)(a1 + 0xC), 0) == a1 )
        return v2;
    }
    while ( v1 );
  }
  return 0;
}
