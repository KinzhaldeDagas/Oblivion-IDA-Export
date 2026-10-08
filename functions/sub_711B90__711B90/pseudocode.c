int __thiscall sub_711B90(char *this, int a2)
{
  int v4; // edi
  int (__cdecl *v5)(int, char *, int, int *, int); // edx
  int result; // eax
  int v7; // [esp-14h] [ebp-28h]
  int v8; // [esp+10h] [ebp-4h] BYREF
  int v9; // [esp+18h] [ebp+4h]

  v9 = 3; /*0x711b9b*/
  do /*0x711bdd*/
  {
    v4 = 3; /*0x711bb0*/
    do /*0x711bd6*/
    {
      v5 = *(int (__cdecl **)(int, char *, int, int *, int))(*(_DWORD *)(a2 + 0x21C) + 4); /*0x711bbb*/
      v7 = *(_DWORD *)(a2 + 0x21C); /*0x711bc7*/
      v8 = 4; /*0x711bc8*/
      result = v5(v7, this, 4, &v8, 1); /*0x711bcc*/
      this += 4; /*0x711bd1*/
      --v4; /*0x711bd3*/
    }
    while ( v4 ); /*0x711bd6*/
    --v9; /*0x711bd8*/
  }
  while ( v9 ); /*0x711bdd*/
  return result; /*0x711bdf*/
}
