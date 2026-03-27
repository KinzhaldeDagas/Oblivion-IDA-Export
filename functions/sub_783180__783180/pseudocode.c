char __thiscall sub_783180(_DWORD *this, int a2, int a3, unsigned int a4, int a5, int a6)
{
  int v6; // edi
  int v7; // edi
  int v9; // ebx
  unsigned int i; // esi

  v6 = *(_DWORD *)(a2 + 0x14);
  if ( !byte_B4295B )
    sub_783C70();
  if ( *(_DWORD *)(4 * (unsigned __int8)v6 + 0xB428D8) != 8 )
  {
    v7 = *(_DWORD *)(a2 + 0x14);
    if ( !byte_B4295B )
      sub_783C70();
    if ( *(_DWORD *)(4 * (unsigned __int8)v7 + 0xB428D8) != 9 )
      return 0;
  }
  v9 = *(_DWORD *)(a2 + 0x1C);
  for ( i = 0; i < a4; v9 += a5 )
    (*(void (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)(*(this + 9) + 0xFF8) + 0x178))(
      *(_DWORD *)(*(this + 9) + 0xFF8),
      v9,
      a3 + 0x10 * a5 * *(unsigned __int16 *)(a6 + 2 * i++),
      a5);
  return 1;
}
