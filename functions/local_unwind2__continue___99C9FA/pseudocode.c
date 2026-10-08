int __usercall _local_unwind2_::_continue_@<eax>(
        int a1@<eax>,
        int a2@<ebx>,
        int a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        unsigned int a14)
{
  int v14; // esi
  int v16; // [esp+Ch] [ebp+Ch]

  v14 = 3 * a3; /*0x99c9fa*/
  v16 = *(_DWORD *)(a2 + 4 * v14); /*0x99ca00*/
  *(_DWORD *)(a1 + 0xC) = v16; /*0x99ca04*/
  if ( !*(_DWORD *)(a2 + 4 * v14 + 4) ) /*0x99ca07*/
  {
    _NLG_Notify(0x101); /*0x99ca17*/
    _NLG_Call(*(void (**)(void))(a2 + 4 * v14 + 8)); /*0x99ca20*/
  }
  return _local_unwind2_::_lu_continue(a4, a5, v16, a7, a8, a9, a10, a11, a12, a13, a14);
}
