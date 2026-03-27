int __thiscall sub_75E9E0(const char **this, _DWORD *a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, const char **, int, int *, int); // eax
  void (__cdecl *v5)(int, const char **, int, int *, int); // eax
  int v6; // eax
  void (__cdecl *v7)(int, _DWORD **, int, int *, int); // edx
  int v8; // edi
  int (__cdecl *v9)(int, const char **, int, int *, int); // ecx
  int v11; // [esp-28h] [ebp-34h]
  int v12; // [esp-14h] [ebp-20h]
  int v13; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  sub_752E40(this, (signed int)a2);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 6));
  v12 = v2[0x88];
  v4 = *(void (__cdecl **)(int, const char **, int, int *, int))(v12 + 8);
  v13 = 4;
  v4(v12, this + 7, 4, &v13, 1);
  v11 = v2[0x88];
  v5 = *(void (__cdecl **)(int, const char **, int, int *, int))(v11 + 8);
  v13 = 4;
  v5(v11, this + 8, 4, &v13, 1);
  v6 = v2[0x88];
  LOBYTE(a2) = *((_BYTE *)this + 0x24);
  v7 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v6 + 8);
  v13 = 1;
  v7(v6, &a2, 1, &v13, 1);
  v8 = v2[0x88];
  v9 = *(int (__cdecl **)(int, const char **, int, int *, int))(v8 + 8);
  v13 = 4;
  return v9(v8, this + 0xA, 4, &v13, 1);
}
