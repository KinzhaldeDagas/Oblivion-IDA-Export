void __cdecl __FrameUnwindToState(int a1, int a2, int a3, int a4)
{
  int v4; // ebp
  int v5; // esi
  DWORD *v6; // eax
  int v7; // eax
  int *v8; // ecx
  DWORD *v9; // eax

  if ( *(int *)(a3 + 4) > 0x80 ) /*0x98af4c*/
    v5 = *(_DWORD *)(a1 + 8); /*0x98af54*/
  else
    v5 = *(char *)(a1 + 8); /*0x98af4e*/
  v6 = _getptd(); /*0x98af5a*/
  ++v6[0x24]; /*0x98af64*/
  while ( v5 != a4 ) /*0x98af6d*/
  {
    if ( v5 <= (int)0xFFFFFFFF || v5 >= *(_DWORD *)(a3 + 4) ) /*0x98af77*/
      _inconsistency(); /*0x98af79*/
    v7 = 8 * v5; /*0x98af80*/
    v8 = (int *)(8 * v5 + *(_DWORD *)(a3 + 8)); /*0x98af86*/
    v5 = *v8; /*0x98af88*/
    if ( v8[1] ) /*0x98af94*/
    {
      *(_DWORD *)(a1 + 8) = v5; /*0x98af9a*/
      unknown_libname_88(*(_DWORD *)(a3 + 8), a3, v5, *(_DWORD *)(*(_DWORD *)(a3 + 8) + v7 + 4), a1, 0x103); /*0x98afaa*/
    }
  }
  if ( (int)_getptd()[0x24] > 0 ) /*0x98b005*/
  {
    v9 = _getptd(); /*0x98b007*/
    --v9[0x24]; /*0x98b011*/
  }
  __FrameUnwindToState_::_LN19_1(a1, v4, v5); /*0x98b013*/
}
