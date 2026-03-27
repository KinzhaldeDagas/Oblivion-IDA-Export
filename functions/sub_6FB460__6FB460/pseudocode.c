int __thiscall sub_6FB460(char *this, signed int a2)
{
  signed int v2; // edi
  char *v3; // esi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, char *, int, signed int *, int); // edx
  int v6; // edi
  int (__cdecl *v7)(int, char *, int, signed int *, int); // ecx
  int v9; // [esp-28h] [ebp-30h]
  int v10; // [esp-14h] [ebp-1Ch]

  v2 = a2;
  v3 = this;
  sub_7094A0(this, a2);
  v10 = *(_DWORD *)(v2 + 0x220);
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v10 + 8);
  a2 = 2;
  v4(v10, v3 + 0xC, 2, &a2, 1);
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
  v3 += 0xE;
  v9 = *(_DWORD *)(v2 + 0x220);
  a2 = 1;
  v5(v9, v3, 1, &a2, 1);
  v6 = *(_DWORD *)(v2 + 0x220);
  v7 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v6 + 8);
  a2 = 1;
  return v7(v6, v3, 1, &a2, 1);
}
