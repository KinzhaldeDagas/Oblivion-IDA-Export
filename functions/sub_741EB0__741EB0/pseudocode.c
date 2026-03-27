int __thiscall sub_741EB0(const char **this, _DWORD *a2)
{
  _DWORD *v2; // edi
  int (__cdecl *v4)(int, _DWORD **, int, int *, int); // eax
  int v6; // [esp-14h] [ebp-20h]
  int v7; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  sub_6FE000(this, a2);
  LOBYTE(a2) = *((_BYTE *)this + 0xC);
  v6 = v2[0x88];
  v4 = *(int (__cdecl **)(int, _DWORD **, int, int *, int))(v6 + 8);
  v7 = 1;
  return v4(v6, &a2, 1, &v7, 1);
}
