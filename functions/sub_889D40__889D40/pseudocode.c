int __cdecl sub_889D40(int a1, int a2)
{
  int v2; // edx

  v2 = a2; /*0x889d40*/
  LOBYTE(v2) = *(_DWORD *)(a2 + 0xC) != 0; /*0x889d51*/
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x7C))(a1, v2); /*0x889d57*/
}
