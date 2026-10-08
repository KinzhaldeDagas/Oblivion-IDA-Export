int __cdecl sub_6BE990(signed int a1, _DWORD *a2)
{
  int v2; // ecx
  int (__cdecl *v3)(int, int *, int, signed int *, int); // eax
  int result; // eax
  int v5; // [esp-14h] [ebp-18h]
  int v6; // [esp+0h] [ebp-4h] BYREF

  v6 = v2; /*0x6be990*/
  v5 = *(_DWORD *)(a1 + 0x21C); /*0x6be9a9*/
  v3 = *(int (__cdecl **)(int, int *, int, signed int *, int))(v5 + 4); /*0x6be9aa*/
  a1 = 4; /*0x6be9ad*/
  result = v3(v5, &v6, 4, &a1, 1); /*0x6be9b5*/
  *a2 = v6; /*0x6be9bf*/
  return result; /*0x6be9c4*/
}
