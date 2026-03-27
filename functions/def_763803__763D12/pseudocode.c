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
  if ( a3 )
  {
    FormHeapFree(*(_DWORD *)(a2 + 4 * a1));
    if ( (*(int (__cdecl **)(int, _DWORD, _DWORD, int, _DWORD, int, _DWORD))(*(_DWORD *)dword_B42154 + 0x28))(
           dword_B42154,
           *(_DWORD *)(a6 + 0x5BC),
           *(_DWORD *)(a6 + 0x5C0),
           a7,
           0,
           a11,
           *(_DWORD *)(a3 + 0xC)) )
    {
      FormHeapFree(a3);
      a3 = 0;
    }
    *(_DWORD *)(a2 + 4 * a1) = a3;
  }
  if ( (unsigned int)(a1 + 1) < 0x16 )
    JUMPOUT(0x763803);
}
