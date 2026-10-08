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

  v2 = a2; /*0x726e77*/
  nullsub_returnvVoid_1arg(a2); /*0x726e7e*/
  v14 = *(_DWORD *)(v2 + 0x220); /*0x726e96*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v14 + 8); /*0x726e97*/
  a2 = 2; /*0x726e9a*/
  v4(v14, this + 0xC, 2, &a2, 1); /*0x726ea2*/
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x726eaa*/
  v6 = (int *)(this + 0x10); /*0x726eb6*/
  v13 = *(_DWORD *)(v2 + 0x220); /*0x726eba*/
  a2 = 4; /*0x726ebb*/
  v5(v13, this + 0x10, 4, &a2, 1); /*0x726ec3*/
  v7 = 0; /*0x726ec5*/
  if ( *((_DWORD *)this + 4) ) /*0x726eca*/
  {
    a2 = 0; /*0x726ecf*/
    do /*0x726eeb*/
    {
      sub_7265F0((char *)(a2 + *((_DWORD *)this + 5)), v2); /*0x726edb*/
      a2 += 0x1C; /*0x726ee0*/
      ++v7; /*0x726ee5*/
    }
    while ( v7 < *v6 ); /*0x726eeb*/
  }
  v17 = *((unsigned __int16 *)this + 0x13); /*0x726ef8*/
  v15 = *(_DWORD *)(v2 + 0x220); /*0x726f09*/
  v8 = *(int (__cdecl **)(int, int *, int, signed int *, int))(v15 + 8); /*0x726f0a*/
  a2 = 4; /*0x726f0d*/
  result = v8(v15, &v17, 4, &a2, 1); /*0x726f15*/
  for ( i = 0; i < *((unsigned __int16 *)this + 0x13); ++i ) /*0x726f1c*/
  {
    v11 = *(char **)(*((_DWORD *)this + 8) + 4 * i); /*0x726f25*/
    LOBYTE(a2) = v11 != 0; /*0x726f34*/
    v18 = v11; /*0x726f38*/
    v16 = *(_DWORD *)(v2 + 0x220); /*0x726f49*/
    v12 = *(int (__cdecl **)(int, signed int *, int, int *, int))(v16 + 8); /*0x726f4a*/
    v17 = 1; /*0x726f4d*/
    result = v12(v16, &a2, 1, &v17, 1); /*0x726f55*/
    if ( (_BYTE)a2 ) /*0x726f5f*/
      result = sub_726850(v18, v2, i, *((_DWORD *)this + 5), *v6, *((_WORD *)this + 6)); /*0x726f74*/
  }
  return result; /*0x726f84*/
}
