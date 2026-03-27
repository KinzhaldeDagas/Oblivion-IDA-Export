void __cdecl sub_557800(int a1, int a2)
{
  if ( a1 )
  {
    *(float *)a1 = *(float *)a2;
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a1 + 0xC) = *(_DWORD *)(a2 + 0xC);
    `eh vector copy constructor iterator'(
      (void *)(a1 + 0x10),
      (void *)(a2 + 0x10),
      0x10u,
      3,
      (void (__thiscall *)(void *, void *))sub_557340,
      sub_794EB0);
  }
}
