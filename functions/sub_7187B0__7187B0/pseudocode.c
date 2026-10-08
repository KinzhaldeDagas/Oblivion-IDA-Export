int __thiscall sub_7187B0(char *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(int, char *, int, signed int *, int); // edx
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x7187b2*/
  sub_700A80((int)this, a2, (_DWORD *)a2); /*0x7187b9*/
  v8 = *(_DWORD *)(v2 + 0x220); /*0x7187d1*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v8 + 8); /*0x7187d2*/
  a2 = 2; /*0x7187d5*/
  v4(v8, this + 0x18, 2, &a2, 1); /*0x7187dd*/
  v5 = *(_DWORD *)(v2 + 0x220); /*0x7187df*/
  v6 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v5 + 8); /*0x7187e5*/
  a2 = 1; /*0x7187f6*/
  return v6(v5, this + 0x1A, 1, &a2, 1); /*0x718803*/
}
