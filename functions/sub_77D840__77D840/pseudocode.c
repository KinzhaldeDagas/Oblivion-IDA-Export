void __stdcall sub_77D840(int a1, unsigned int a2)
{
  int v2; // eax

  if ( a2 < *(_DWORD *)(a1 + 0x1C) ) /*0x77d84d*/
  {
    v2 = *(_DWORD *)(*(_DWORD *)(a1 + 0x24) + 4 * a2); /*0x77d852*/
    if ( v2 ) /*0x77d857*/
    {
      if ( *(_DWORD *)(v2 + 8) ) /*0x77d859*/
        sub_77D560(**(_DWORD ***)(v2 + 4), *(_DWORD *)(*(_DWORD *)(v2 + 4) + 4), *(_DWORD *)v2); /*0x77d86b*/
      if ( a2 < *(_DWORD *)(a1 + 0x1C) ) /*0x77d873*/
        *(_DWORD *)(*(_DWORD *)(a1 + 0x24) + 4 * a2) = 0; /*0x77d878*/
    }
  }
}
