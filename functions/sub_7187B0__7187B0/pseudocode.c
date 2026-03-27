int __thiscall sub_7187B0(char *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(int, char *, int, signed int *, int); // edx
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = a2;
  sub_700A80((int)this, a2, (_DWORD *)a2);
  v8 = *(_DWORD *)(v2 + 0x220);
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v8 + 8);
  a2 = 2;
  v4(v8, this + 0x18, 2, &a2, 1);
  v5 = *(_DWORD *)(v2 + 0x220);
  v6 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v5 + 8);
  a2 = 1;
  return v6(v5, this + 0x1A, 1, &a2, 1);
}
