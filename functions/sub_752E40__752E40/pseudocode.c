int __thiscall sub_752E40(const char **this, signed int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, const char **, int, signed int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(int, signed int *, int, int *, int); // eax
  int v8; // [esp-14h] [ebp-20h]
  int v9; // [esp+8h] [ebp-4h] BYREF

  v2 = (_DWORD *)a2;
  nullsub_returnvVoid_1arg(a2);
  sub_713720(v2, *(this + 2));
  v8 = v2[0x88];
  v4 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v8 + 8);
  a2 = 4;
  v4(v8, this + 3, 4, &a2, 1);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 4));
  v5 = v2[0x88];
  LOBYTE(a2) = *((_BYTE *)this + 0x14);
  v6 = *(int (__cdecl **)(int, signed int *, int, int *, int))(v5 + 8);
  v9 = 1;
  return v6(v5, &a2, 1, &v9, 1);
}
