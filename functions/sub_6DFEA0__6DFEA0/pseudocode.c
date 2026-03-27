int __thiscall sub_6DFEA0(char *this, signed int a2)
{
  _DWORD *v2; // esi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  char *v5; // edi
  int v6; // ebx
  int result; // eax
  int v8; // [esp-14h] [ebp-20h]

  v2 = (_DWORD *)a2;
  j_nullsub_3(a2);
  v8 = v2[0x88];
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v8 + 8);
  a2 = 2;
  v4(v8, this + 0xC, 2, &a2, 1);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *((_DWORD *)this + 4));
  sub_713720(v2, *((const char **)this + 5));
  sub_6CBA90(this + 0x18, (signed int)v2);
  v5 = this + 0x38;
  v6 = 3;
  do
  {
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(_DWORD *)v5);
    v5 += 4;
    --v6;
  }
  while ( v6 );
  return result;
}
