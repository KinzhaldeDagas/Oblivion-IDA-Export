void __stdcall sub_77D840(int a1, unsigned int a2)
{
  int v2; // eax

  if ( a2 < *(_DWORD *)(a1 + 0x1C) )
  {
    v2 = *(_DWORD *)(*(_DWORD *)(a1 + 0x24) + 4 * a2);
    if ( v2 )
    {
      if ( *(_DWORD *)(v2 + 8) )
        sub_77D560(**(_DWORD ***)(v2 + 4), *(_DWORD *)(*(_DWORD *)(v2 + 4) + 4), *(_DWORD *)v2);
      if ( a2 < *(_DWORD *)(a1 + 0x1C) )
        *(_DWORD *)(*(_DWORD *)(a1 + 0x24) + 4 * a2) = 0;
    }
  }
}
