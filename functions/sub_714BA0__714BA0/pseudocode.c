int __thiscall sub_714BA0(char *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v3)(int, char *, int, signed int *, int); // edx
  int (__cdecl *v5)(int, char *, int, signed int *, int); // edx
  int v7; // [esp-28h] [ebp-30h]
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x714ba2*/
  v3 = *(void (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(a2 + 0x21C) + 4); /*0x714bac*/
  v8 = *(_DWORD *)(a2 + 0x21C); /*0x714bbb*/
  a2 = 4; /*0x714bbc*/
  v3(v8, this, 4, &a2, 1); /*0x714bc4*/
  v5 = *(int (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x714bcc*/
  v7 = *(_DWORD *)(v2 + 0x21C); /*0x714bdc*/
  a2 = 4; /*0x714bdd*/
  return v5(v7, this + 4, 4, &a2, 1); /*0x714bea*/
}
