int __thiscall sub_7596D0(const char **this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, signed int *, int, int *, int); // eax
  int v6; // [esp-14h] [ebp-20h]
  int v7; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  sub_75E9E0(this, a2);
  LOBYTE(a2) = *((_BYTE *)this + 0x30);
  v6 = *(_DWORD *)(v2 + 0x220);
  v4 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v6 + 8);
  v7 = 1;
  v4(v6, &a2, 1, &v7, 1);
  return sub_7094A0((char *)this + 0x34, v2);
}
