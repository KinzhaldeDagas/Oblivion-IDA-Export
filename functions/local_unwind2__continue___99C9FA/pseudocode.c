int __usercall _local_unwind2_::_continue_@<eax>(int a1@<eax>, int a2@<ebx>, int a3@<esi>, int a4, int a5, int a6)
{
  int v6; // esi
  int v7; // ecx
  int v9; // [esp+Ch] [ebp+Ch]

  v6 = 3 * a3;
  v9 = *(_DWORD *)(a2 + 4 * v6);
  *(_DWORD *)(a1 + 0xC) = v9;
  if ( !*(_DWORD *)(a2 + 4 * v6 + 4) )
  {
    _NLG_Notify(0x101);
    _NLG_Call(v7);
  }
  return _local_unwind2_::_lu_continue(a4, a5, v9);
}
