_DWORD *__usercall sub_943070@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  int v3; // esi
  void *v4; // eax
  void **i; // ebx
  int v6; // esi
  char **v7; // eax
  char ***j; // ebx
  int v9; // esi

  *(_WORD *)(a1 + 6) = 1; /*0x94307b*/
  *(_DWORD *)a1 = &off_AA2768; /*0x94307f*/
  v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x14, 0x12); /*0x943094*/
  *(_WORD *)(v3 + 4) = 0x14; /*0x943099*/
  *(_WORD *)(v3 + 6) = 1; /*0x94309f*/
  *(_DWORD *)v3 = &off_AA2738; /*0x9430a3*/
  sub_942B70((char **)(v3 + 8), a2); /*0x9430a9*/
  *(_DWORD *)(a1 + 8) = v3; /*0x9430ae*/
  v4 = off_A9AA48; /*0x9430b1*/
  for ( i = &off_A9AA48; v4; ++i ) /*0x9430b1*/
  {
    (*(void (__thiscall **)(int, void *, _DWORD))(*(_DWORD *)v3 + 8))(v3, v4, 0); /*0x9430c7*/
    v4 = i[1]; /*0x9430ca*/
  }
  v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x14, 0x12); /*0x9430e3*/
  *(_WORD *)(v6 + 4) = 0x14; /*0x9430e8*/
  *(_WORD *)(v6 + 6) = 1; /*0x9430ee*/
  *(_DWORD *)v6 = &off_AA2748; /*0x9430f2*/
  sub_942B70((char **)(v6 + 8), (int)i); /*0x9430f8*/
  *(_DWORD *)(a1 + 0xC) = v6; /*0x9430fd*/
  v7 = off_A9A910[0]; /*0x943100*/
  for ( j = off_A9A910; v7; ++j ) /*0x943100*/
  {
    (*(void (__thiscall **)(int, char **))(*(_DWORD *)v6 + 8))(v6, v7); /*0x943115*/
    v7 = j[1]; /*0x943118*/
  }
  v9 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x14, 0x12); /*0x943131*/
  *(_WORD *)(v9 + 4) = 0x14; /*0x943136*/
  *(_WORD *)(v9 + 6) = 1; /*0x94313c*/
  *(_DWORD *)v9 = &off_AA2758; /*0x943140*/
  sub_8B0E10((char **)(v9 + 8), (int)j); /*0x943146*/
  *(_DWORD *)(a1 + 0x10) = v9; /*0x943157*/
  sub_9546D0((void *)v9, off_A9A910, (int)&off_A9AA48); /*0x94315a*/
  return (_DWORD *)a1; /*0x943161*/
}
