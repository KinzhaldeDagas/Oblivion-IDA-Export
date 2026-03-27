char __stdcall sub_587440(int a1)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(a1);
  if ( !OpenMenuTile )
    return 0;
  (**OpenMenuTile)(OpenMenuTile, 1);
  return 1;
}
