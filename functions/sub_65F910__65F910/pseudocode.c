int __stdcall sub_65F910(int a1, char a2)
{
  int result; // eax

  NiObjectNET_SetName((NiObjectNET *)a1, "Player"); /*0x65f91c*/
  if ( a2 ) /*0x65f926*/
    *(_WORD *)(a1 + 0x18) |= 1u; /*0x65f928*/
  result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)a1 + 0x58))(a1, "Camera01"); /*0x65f939*/
  MEMORY[0xB3BB10] = result; /*0x65f93b*/
  return result; /*0x65f940*/
}
