unsigned int __thiscall sub_726E70(char *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, char *, int, signed int *, int); // edx
  int *v6; // ebp
  unsigned int v7; // ebx
  int (__cdecl *v8)(int, int *, int, signed int *, int); // eax
  unsigned int result; // eax
  unsigned int i; // ebx
  char *v11; // eax
  int (__cdecl *v12)(int, signed int *, int, int *, int); // eax
  int v13; // [esp-28h] [ebp-40h]
  int v14; // [esp-14h] [ebp-2Ch]
  int v15; // [esp-14h] [ebp-2Ch]
  int v16; // [esp-14h] [ebp-2Ch]
  int v17; // [esp+10h] [ebp-8h] BYREF
  char *v18; // [esp+14h] [ebp-4h]

  v2 = a2;
  nullsub_returnvVoid_1arg(a2);
  v14 = *(_DWORD *)(v2 + 0x220);
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v14 + 8);
  a2 = 2;
  v4(v14, this + 0xC, 2, &a2, 1);
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
  v6 = (int *)(this + 0x10);
  v13 = *(_DWORD *)(v2 + 0x220);
  a2 = 4;
  v5(v13, this + 0x10, 4, &a2, 1);
  v7 = 0;
  if ( *((_DWORD *)this + 4) )
  {
    a2 = 0;
    do
    {
      sub_7265F0((char *)(a2 + *((_DWORD *)this + 5)), v2);
      a2 += 0x1C;
      ++v7;
    }
    while ( v7 < *v6 );
  }
  v17 = *((unsigned __int16 *)this + 0x13);
  v15 = *(_DWORD *)(v2 + 0x220);
  v8 = *(int (__cdecl **)(int, int *, int, signed int *, int))(v15 + 8);
  a2 = 4;
  result = v8(v15, &v17, 4, &a2, 1);
  for ( i = 0; i < *((unsigned __int16 *)this + 0x13); ++i )
  {
    v11 = *(char **)(*((_DWORD *)this + 8) + 4 * i);
    LOBYTE(a2) = v11 != 0;
    v18 = v11;
    v16 = *(_DWORD *)(v2 + 0x220);
    v12 = *(int (__cdecl **)(int, signed int *, int, int *, int))(v16 + 8);
    v17 = 1;
    result = v12(v16, &a2, 1, &v17, 1);
    if ( (_BYTE)a2 )
      result = sub_726850(v18, v2, i, *((_DWORD *)this + 5), *v6, *((_WORD *)this + 6));
  }
  return result;
}
