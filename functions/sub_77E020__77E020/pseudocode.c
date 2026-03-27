void __stdcall sub_77E020(int a1, unsigned int a2)
{
  int v2; // esi

  if ( a2 < *(_DWORD *)(a1 + 0x1C) )
  {
    v2 = *(_DWORD *)(*(_DWORD *)(a1 + 0x24) + 4 * a2);
    if ( v2 )
    {
      if ( *(_DWORD *)(v2 + 8) )
      {
        nullsub_returnvVoid_1arg(*(_DWORD *)(v2 + 8));
        *(_DWORD *)(v2 + 8) = 0;
      }
      if ( a2 < *(_DWORD *)(a1 + 0x1C) )
        *(_DWORD *)(*(_DWORD *)(a1 + 0x24) + 4 * a2) = 0;
    }
  }
}
