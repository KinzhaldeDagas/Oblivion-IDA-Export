int __cdecl _local_unwind2_::_lu_top_0(
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
        unsigned int a11)
{
  unsigned int v11; // esi

  v11 = *(_DWORD *)(a10 + 0xC);
  if ( v11 == 0xFFFFFFFF || a11 != 0xFFFFFFFF && v11 <= a11 )
    return _local_unwind2_::_lu_done_0(a1);
  else
    return _local_unwind2_::_continue_(a1, a2, a3);
}
