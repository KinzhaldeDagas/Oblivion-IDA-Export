int __thiscall sub_71A730(char *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2;
  sub_709020(this, (_DWORD *)a2);
  v6 = *(_DWORD *)(v2 + 0x220);
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v6 + 8);
  a2 = 4;
  v4(v6, this + 0xDC, 4, &a2, 1);
  sub_7094A0(this + 0xE0, v2);
  sub_7094A0(this + 0xEC, v2);
  return sub_7094A0(this + 0xF8, v2);
}
