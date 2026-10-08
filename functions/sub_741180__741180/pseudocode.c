int __thiscall sub_741180(char *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, char *, int, signed int *, int); // eax
  int v7; // [esp-28h] [ebp-30h]
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x741182*/
  sub_700A80((int)this, a2, (_DWORD *)a2); /*0x741189*/
  v8 = *(_DWORD *)(v2 + 0x220); /*0x7411a1*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v8 + 8); /*0x7411a2*/
  a2 = 2; /*0x7411a5*/
  v4(v8, this + 0x18, 2, &a2, 1); /*0x7411ad*/
  v7 = *(_DWORD *)(v2 + 0x220); /*0x7411c2*/
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v7 + 8); /*0x7411c3*/
  a2 = 4; /*0x7411c6*/
  v5(v7, this + 0x1C, 4, &a2, 1); /*0x7411ce*/
  return sub_7094A0(this + 0x20, v2); /*0x7411dc*/
}
