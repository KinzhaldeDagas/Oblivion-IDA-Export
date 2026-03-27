int __thiscall sub_724860(char *this, unsigned int a2)
{
  unsigned int v2; // edi
  void (__cdecl *v4)(int, char *, int, unsigned int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(int, char *, int, unsigned int *, int); // edx
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = a2;
  sub_70B6A0(this, a2);
  v8 = *(_DWORD *)(v2 + 0x220);
  v4 = *(void (__cdecl **)(int, char *, int, unsigned int *, int))(v8 + 8);
  a2 = 2;
  v4(v8, this + 0xDC, 2, &a2, 1);
  v5 = *(_DWORD *)(v2 + 0x220);
  v6 = *(int (__cdecl **)(int, char *, int, unsigned int *, int))(v5 + 8);
  a2 = 4;
  return v6(v5, this + 0xE0, 4, &a2, 1);
}
