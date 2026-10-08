int (__thiscall ***sub_578DA0())(_DWORD, signed int)
{
  int (__thiscall ***result)(_DWORD, signed int); // eax

  result = (int (__thiscall ***)(_DWORD, signed int))Menu_GetOpenMenuTile(0x3E9); /*0x578da5*/
  if ( result ) /*0x578daf*/
    return (int (__thiscall ***)(_DWORD, signed int))(**result)(result, 1); /*0x578db9*/
  return result; /*0x578dbb*/
}
