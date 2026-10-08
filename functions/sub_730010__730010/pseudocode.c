int __thiscall sub_730010(char *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, char *, int, signed int *, int); // eax
  int v7; // [esp-28h] [ebp-30h]
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x730012*/
  sub_714BF0(this, a2); /*0x730019*/
  sub_714BF0(this + 0xC, v2); /*0x730022*/
  v8 = *(_DWORD *)(v2 + 0x220); /*0x73003a*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v8 + 8); /*0x73003b*/
  a2 = 4; /*0x73003e*/
  v4(v8, this + 8, 4, &a2, 1); /*0x730046*/
  v7 = *(_DWORD *)(v2 + 0x220); /*0x73005b*/
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v7 + 8); /*0x73005c*/
  a2 = 4; /*0x73005f*/
  v5(v7, this + 0x44, 4, &a2, 1); /*0x730067*/
  return sub_714BF0(this + 0x14, v2); /*0x730075*/
}
