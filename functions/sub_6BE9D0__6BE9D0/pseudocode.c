int __cdecl sub_6BE9D0(signed int a1, int a2)
{
  int (__cdecl *v2)(int, int, int, signed int *, int); // eax
  int v4; // [esp-14h] [ebp-14h]

  v4 = *(_DWORD *)(a1 + 0x21C); /*0x6be9e8*/
  v2 = *(int (__cdecl **)(int, int, int, signed int *, int))(v4 + 4); /*0x6be9e9*/
  a1 = 4; /*0x6be9ec*/
  return v2(v4, a2, 4, &a1, 1); /*0x6be9f9*/
}
