void __userpurge def_763803(
        int a1@<ebx>,
        int a2@<ebp>,
        unsigned int a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  if ( a3 ) /*0x763d14*/
  {
    FormHeapFree(*(_DWORD *)(a2 + 4 * a1)); /*0x763d1b*/
    if ( ((int (__cdecl *)(IDirect3D9 *, _DWORD, _DWORD, int, _DWORD, int, _DWORD))g_Direct3D9->lpVtbl->CheckDeviceFormat)( /*0x763d55*/
           g_Direct3D9,
           *(_DWORD *)(a6 + 0x5BC),
           *(_DWORD *)(a6 + 0x5C0),
           a7,
           0,
           a11,
           *(_DWORD *)(a3 + 0xC)) )
    {
      FormHeapFree(a3); /*0x763d5c*/
      a3 = 0; /*0x763d64*/
    }
    *(_DWORD *)(a2 + 4 * a1) = a3; /*0x763d66*/
  }
  if ( (unsigned int)(a1 + 1) < 0x16 ) /*0x763d70*/
    JUMPOUT(0x763803); /*0x763803*/
}
