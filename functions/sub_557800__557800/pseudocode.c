void __cdecl sub_557800(int a1, int a2)
{
  if ( a1 ) /*0x557837*/
  {
    *(float *)a1 = *(float *)a2; /*0x557844*/
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4); /*0x557849*/
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8); /*0x557856*/
    *(_DWORD *)(a1 + 0xC) = *(_DWORD *)(a2 + 0xC); /*0x557861*/
    `eh vector copy constructor iterator'( /*0x557869*/
      (char *)(a1 + 0x10),
      (char *)(a2 + 0x10),
      0x10u,
      3,
      (void (__thiscall *)(void *, void *))sub_557340,
      (void (__thiscall *)(void *))OB_stVector4_DestroyThiscall_010201A0);
  }
}
