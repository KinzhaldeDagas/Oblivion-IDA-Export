int __cdecl _local_unwind4_::_lu_top(
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
  int v15; // ebx

  while ( 1 )
  {
    v13 = *(_DWORD *)(a12 + 0xC);
    if ( v13 == 0xFFFFFFFE || a13 != 0xFFFFFFFE && v13 <= a13 )
      break;
    v15 = (*a11 ^ *(_DWORD *)(a12 + 8)) + 0xC * v13 + 0x10;
    *(_DWORD *)(a12 + 0xC) = *(_DWORD *)((*a11 ^ *(_DWORD *)(a12 + 8)) + 0xC * v13 + 0x10);
    if ( !*(_DWORD *)(v15 + 4) )
    {
      _NLG_Notify(0x101);
      _NLG_Call(1);
    }
  }
  return _local_unwind4_::_lu_done();
}
