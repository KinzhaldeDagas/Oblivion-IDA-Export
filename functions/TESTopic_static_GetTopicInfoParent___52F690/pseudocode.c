int *__cdecl TESTopic_static_GetTopicInfoParent_(int a1)
{
  int v1; // esi
  int *v2; // edi

  v1 = g_TESDataHandler + 0x7C; /*0x52f698*/
  if ( g_TESDataHandler != 0xFFFFFF84 ) /*0x52f69c*/
  {
    do /*0x52f6a2*/
    {
      v2 = *(int **)v1; /*0x52f6a2*/
      if ( !*(_DWORD *)v1 ) /*0x52f6a2*/
        break; /*0x52f6a2*/
      v1 = *(_DWORD *)(v1 + 4); /*0x52f6ab*/
      if ( TESTopic_GetTopicInfo__(v2, *(_DWORD *)(a1 + 0xC), 0) == a1 ) /*0x52f6ba*/
        return v2; /*0x52f6c6*/
    }
    while ( v1 ); /*0x52f6a2*/
  }
  return 0; /*0x52f6c0*/
}
