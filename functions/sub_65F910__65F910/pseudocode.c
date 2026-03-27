int __stdcall sub_65F910(int a1, char a2)
{
  int result; // eax

  NiObjectNET_SetName((NiObjectNET *)a1, "Player");
  if ( a2 )
    *(_WORD *)(a1 + 0x18) |= 1u;
  result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)a1 + 0x58))(a1, "Camera01");
  P3Camera = result;
  return result;
}
