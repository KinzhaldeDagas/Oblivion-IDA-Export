char __cdecl sub_567730(_DWORD *a1, int a2)
{
  if ( !a2 || (*(int (__thiscall **)(_DWORD *))(*a1 + 0x170))(a1) != a2 || (a1[2] & 0x20) != 0 )
    return 0;
  dword_B3A3C4 = (int)a1;
  return 1;
}
