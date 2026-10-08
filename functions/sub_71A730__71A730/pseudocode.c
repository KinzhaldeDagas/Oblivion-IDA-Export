int __thiscall sub_71A730(char *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x71a732*/
  sub_709020(this, (_DWORD *)a2); /*0x71a739*/
  v6 = *(_DWORD *)(v2 + 0x220); /*0x71a754*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v6 + 8); /*0x71a755*/
  a2 = 4; /*0x71a758*/
  v4(v6, this + 0xDC, 4, &a2, 1); /*0x71a760*/
  sub_7094A0(this + 0xE0, v2); /*0x71a76c*/
  sub_7094A0(this + 0xEC, v2); /*0x71a778*/
  return sub_7094A0(this + 0xF8, v2); /*0x71a789*/
}
