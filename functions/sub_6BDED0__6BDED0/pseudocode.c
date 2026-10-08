int __cdecl sub_6BDED0(signed int a1, int a2)
{
  int (__cdecl *v2)(int, int, int, signed int *, int); // eax
  int v4; // [esp-14h] [ebp-14h]

  v4 = *(_DWORD *)(a1 + 0x21C); /*0x6bdee8*/
  v2 = *(int (__cdecl **)(int, int, int, signed int *, int))(v4 + 4); /*0x6bdee9*/
  a1 = 1; /*0x6bdeec*/
  return v2(v4, a2, 1, &a1, 1); /*0x6bdef9*/
}
