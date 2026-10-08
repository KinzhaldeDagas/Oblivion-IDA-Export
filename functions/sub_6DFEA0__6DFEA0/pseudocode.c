int __thiscall sub_6DFEA0(char *this, signed int a2)
{
  _DWORD *v2; // esi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  char *v5; // edi
  int v6; // ebx
  int result; // eax
  int v8; // [esp-14h] [ebp-20h]

  v2 = (_DWORD *)a2; /*0x6dfea2*/
  j_nullsub_3(a2); /*0x6dfeaa*/
  v8 = v2[0x88]; /*0x6dfec2*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v8 + 8); /*0x6dfec3*/
  a2 = 2; /*0x6dfec6*/
  v4(v8, this + 0xC, 2, &a2, 1); /*0x6dfece*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *((_DWORD *)this + 4)); /*0x6dfede*/
  sub_713720(v2, *((const char **)this + 5)); /*0x6dfee6*/
  sub_6CBA90(this + 0x18, (signed int)v2); /*0x6dfeef*/
  v5 = this + 0x38; /*0x6dfef4*/
  v6 = 3; /*0x6dfef7*/
  do /*0x6dff12*/
  {
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(_DWORD *)v5); /*0x6dff0a*/
    v5 += 4; /*0x6dff0c*/
    --v6; /*0x6dff0f*/
  }
  while ( v6 ); /*0x6dff12*/
  return result; /*0x6dff14*/
}
