int __thiscall sub_709A20(char *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(int, char *, int, signed int *, int); // edx
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x709a22*/
  sub_700A80((int)this, a2, (_DWORD *)a2); /*0x709a29*/
  sub_7094A0(this + 0x1C, v2); /*0x709a32*/
  sub_7094A0(this + 0x28, v2); /*0x709a3b*/
  sub_7094A0(this + 0x34, v2); /*0x709a44*/
  sub_7094A0(this + 0x40, v2); /*0x709a4d*/
  v8 = *(_DWORD *)(v2 + 0x220); /*0x709a65*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v8 + 8); /*0x709a66*/
  a2 = 4; /*0x709a69*/
  v4(v8, this + 0x4C, 4, &a2, 1); /*0x709a71*/
  v5 = *(_DWORD *)(v2 + 0x220); /*0x709a73*/
  v6 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v5 + 8); /*0x709a79*/
  a2 = 4; /*0x709a8a*/
  return v6(v5, this + 0x50, 4, &a2, 1); /*0x709a97*/
}
