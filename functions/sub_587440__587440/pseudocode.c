char __stdcall sub_587440(int a1)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(a1); /*0x587445*/
  if ( !OpenMenuTile ) /*0x58744f*/
    return 0; /*0x587460*/
  (**OpenMenuTile)(OpenMenuTile, 1); /*0x587459*/
  return 1; /*0x58745d*/
}
