void __stdcall sub_77E020(int a1, unsigned int a2)
{
  int v2; // esi

  if ( a2 < *(_DWORD *)(a1 + 0x1C) ) /*0x77e02d*/
  {
    v2 = *(_DWORD *)(*(_DWORD *)(a1 + 0x24) + 4 * a2); /*0x77e033*/
    if ( v2 ) /*0x77e038*/
    {
      if ( *(_DWORD *)(v2 + 8) ) /*0x77e03a*/
      {
        nullsub_returnvVoid_1arg(*(_DWORD *)(v2 + 8)); /*0x77e045*/
        *(_DWORD *)(v2 + 8) = 0; /*0x77e04a*/
      }
      if ( a2 < *(_DWORD *)(a1 + 0x1C) ) /*0x77e054*/
        *(_DWORD *)(*(_DWORD *)(a1 + 0x24) + 4 * a2) = 0; /*0x77e059*/
    }
  }
}
