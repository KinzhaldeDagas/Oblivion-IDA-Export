int (__thiscall ***sub_578DA0())(_DWORD, signed int)
{
  int (__thiscall ***result)(_DWORD, signed int); // eax

  result = (int (__thiscall ***)(_DWORD, signed int))Menu_GetOpenMenuTile(0x3E9);
  if ( result )
    return (int (__thiscall ***)(_DWORD, signed int))(**result)(result, 1);
  return result;
}
