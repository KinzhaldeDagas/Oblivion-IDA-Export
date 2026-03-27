char __cdecl sub_76D4C0(int a1)
{
  if ( dword_B42610 )
  {
    if ( (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)a1 + 0x9C))(a1, 0) < 0 )
      return 0;
    dword_B42610 = 0;
  }
  return 1;
}
