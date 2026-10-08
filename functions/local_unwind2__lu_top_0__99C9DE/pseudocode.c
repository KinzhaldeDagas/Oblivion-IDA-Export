void __cdecl _local_unwind2_::_lu_top_0(
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

  v11 = *(_DWORD *)(a10 + 0xC); /*0x99c9e5*/
  if ( v11 == 0xFFFFFFFF || a11 != 0xFFFFFFFF && v11 <= a11 ) /*0x99c9f8*/
    _local_unwind2_::_lu_done_0(); /*0x99c9eb*/
  else
    _local_unwind2_::_continue_(a10, *(_DWORD *)(a10 + 8), v11, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11); /*0x99c9f9*/
}
