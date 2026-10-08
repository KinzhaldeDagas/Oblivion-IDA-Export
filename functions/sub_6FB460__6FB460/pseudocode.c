int __thiscall sub_6FB460(char *this, signed int a2)
{
  signed int v2; // edi
  char *v3; // esi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, char *, int, signed int *, int); // edx
  int v6; // edi
  int (__cdecl *v7)(int, char *, int, signed int *, int); // ecx
  int v9; // [esp-28h] [ebp-30h]
  int v10; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x6fb462*/
  v3 = this; /*0x6fb467*/
  sub_7094A0(this, a2); /*0x6fb469*/
  v10 = *(_DWORD *)(v2 + 0x220); /*0x6fb481*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v10 + 8); /*0x6fb482*/
  a2 = 2; /*0x6fb485*/
  v4(v10, v3 + 0xC, 2, &a2, 1); /*0x6fb48d*/
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x6fb495*/
  v3 += 0xE; /*0x6fb4a1*/
  v9 = *(_DWORD *)(v2 + 0x220); /*0x6fb4a5*/
  a2 = 1; /*0x6fb4a6*/
  v5(v9, v3, 1, &a2, 1); /*0x6fb4ae*/
  v6 = *(_DWORD *)(v2 + 0x220); /*0x6fb4b0*/
  v7 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v6 + 8); /*0x6fb4b6*/
  a2 = 1; /*0x6fb4c4*/
  return v7(v6, v3, 1, &a2, 1); /*0x6fb4d1*/
}
