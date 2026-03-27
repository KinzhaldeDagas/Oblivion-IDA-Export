int __thiscall sub_73EC30(char *this, signed int a2)
{
  signed int v2; // ebx
  int (__cdecl *v4)(int, char *, int, signed int *, int); // edx
  int result; // eax
  unsigned int i; // edi
  int (__cdecl *v7)(int, int, int, signed int *, int); // edx
  int v8; // [esp-14h] [ebp-24h]
  int v9; // [esp-14h] [ebp-24h]
  int v10; // [esp-10h] [ebp-20h]

  v2 = a2;
  j_nullsub_3(a2);
  sub_716EE0(this + 8, v2);
  sub_716EE0(this + 0x18, v2);
  v4 = *(int (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
  v8 = *(_DWORD *)(v2 + 0x220);
  a2 = 4;
  result = v4(v8, this + 0x28, 4, &a2, 1);
  for ( i = 0; i < *((_DWORD *)this + 0xA); ++i )
  {
    v7 = *(int (__cdecl **)(int, int, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
    v10 = *((_DWORD *)this + 0xB) + 4 * i;
    v9 = *(_DWORD *)(v2 + 0x220);
    a2 = 4;
    result = v7(v9, v10, 4, &a2, 1);
  }
  return result;
}
