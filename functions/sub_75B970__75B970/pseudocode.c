int __thiscall sub_75B970(const char **this, signed int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v5)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v6)(int, const char **, int, signed int *, int); // eax
  int v7; // edi
  int (__cdecl *v8)(int, const char **, int, signed int *, int); // edx
  int v10; // [esp-3Ch] [ebp-48h]
  int v11; // [esp-28h] [ebp-34h]
  int v12; // [esp-14h] [ebp-20h]

  v2 = (_DWORD *)a2;
  sub_752E40(this, a2);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 6));
  sub_7094A0((char *)this + 0x1C, (signed int)v2);
  v12 = v2[0x88];
  v4 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v12 + 8);
  a2 = 4;
  v4(v12, this + 0xA, 4, &a2, 1);
  v11 = v2[0x88];
  v5 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v11 + 8);
  a2 = 4;
  v5(v11, this + 0xB, 4, &a2, 1);
  v10 = v2[0x88];
  v6 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v10 + 8);
  a2 = 4;
  v6(v10, this + 0xC, 4, &a2, 1);
  v7 = v2[0x88];
  v8 = *(int (__cdecl **)(int, const char **, int, signed int *, int))(v7 + 8);
  a2 = 4;
  return v8(v7, this + 0xD, 4, &a2, 1);
}
