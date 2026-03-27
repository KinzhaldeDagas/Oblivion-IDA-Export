int __thiscall sub_6E5740(_DWORD *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, _DWORD *, int, signed int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(int, _DWORD *, int, signed int *, int); // edx
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = a2;
  sub_6ED420(this, a2);
  v8 = *(_DWORD *)(v2 + 0x21C);
  v4 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v8 + 4);
  a2 = 4;
  v4(v8, this + 7, 4, &a2, 1);
  v5 = *(_DWORD *)(v2 + 0x21C);
  v6 = *(int (__cdecl **)(int, _DWORD *, int, signed int *, int))(v5 + 4);
  a2 = 4;
  return v6(v5, this + 8, 4, &a2, 1);
}
