void __cdecl _local_unwind4_::_lu_top(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        _DWORD *a11,
        int a12,
        unsigned int a13)
{
  unsigned int v13; // esi
  int v14; // ebx

  while ( 1 ) /*0x98f503*/
  {
    v13 = *(_DWORD *)(a12 + 0xC); /*0x98f503*/
    if ( v13 == 0xFFFFFFFE || a13 != 0xFFFFFFFE && v13 <= a13 ) /*0x98f516*/
      break; /*0x98f516*/
    v14 = (*a11 ^ *(_DWORD *)(a12 + 8)) + 0xC * v13 + 0x10; /*0x98f51b*/
    *(_DWORD *)(a12 + 0xC) = *(_DWORD *)((*a11 ^ *(_DWORD *)(a12 + 8)) + 0xC * v13 + 0x10); /*0x98f521*/
    if ( !*(_DWORD *)(v14 + 4) ) /*0x98f524*/
    {
      _NLG_Notify(0x101); /*0x98f532*/
      _NLG_Call(*(void (**)(void))(v14 + 8)); /*0x98f53f*/
    }
  }
  _local_unwind4_::_lu_done(); /*0x98f509*/
}
