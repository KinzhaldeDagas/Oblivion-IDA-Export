int __thiscall sub_718730(int *this, int a2)
{
  int v2; // edi
  void (__cdecl *v4)(int, int *, int, int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(int, char *, int, int *, int); // edx
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = a2;
  sub_700AC0(this, (unsigned int *)a2);
  if ( *(_DWORD *)(v2 + 0xD8) >= 0xA000102u )
  {
    v8 = *(_DWORD *)(v2 + 0x21C);
    v4 = *(void (__cdecl **)(int, int *, int, int *, int))(v8 + 4);
    a2 = 2;
    v4(v8, this + 6, 2, &a2, 1);
  }
  else
  {
    *((_WORD *)this + 0xC) = *(_WORD *)(v2 + 0x25C) & 0x3FFF;
  }
  v5 = *(_DWORD *)(v2 + 0x21C);
  v6 = *(int (__cdecl **)(int, char *, int, int *, int))(v5 + 4);
  a2 = 1;
  return v6(v5, (char *)this + 0x1A, 1, &a2, 1);
}
