char __userpurge sub_89BCC0@<al>(int a1@<eax>, int a2@<ecx>, int a3)
{
  int v3; // ebp
  void (__thiscall **v5)(int, int); // edx
  int v6; // edi
  int v7; // ecx
  signed int v8; // eax
  _DWORD *v9; // edx
  int v10; // ebp
  bool v11; // zf
  int v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // ecx
  char *v17; // [esp+Ch] [ebp-1Ch] BYREF
  int v18; // [esp+10h] [ebp-18h]
  int v19; // [esp+14h] [ebp-14h]
  char v20; // [esp+18h] [ebp-10h] BYREF

  v3 = 0; /*0x89bcca*/
  if ( *(_WORD *)(a3 + 4) ) /*0x89bccc*/
    ++*(_WORD *)(a3 + 6); /*0x89bcd4*/
  ++*(_DWORD *)(a2 + 0x88); /*0x89bce2*/
  sub_8DC2F0(a1, a2, a3); /*0x89bce8*/
  v5 = *(void (__thiscall ***)(int, int))a3; /*0x89bced*/
  v17 = &v20; /*0x89bcf3*/
  v18 = 0; /*0x89bd01*/
  v19 = 0x80000004; /*0x89bd05*/
  v5[3](a3, (int)&v17); /*0x89bd0d*/
  if ( v18 > 0 ) /*0x89bd14*/
  {
    do /*0x89bd63*/
    {
      v6 = *(_DWORD *)&v17[4 * v3]; /*0x89bd24*/
      v7 = *(_DWORD *)(v6 + 0xBC); /*0x89bd27*/
      v8 = 0; /*0x89bd2d*/
      if ( v7 <= 0 ) /*0x89bd31*/
      {
LABEL_8:
        v8 = 0xFFFFFFFF; /*0x89bd4c*/
      }
      else
      {
        v9 = *(_DWORD **)(v6 + 0xB8); /*0x89bd33*/
        while ( *v9 != a3 ) /*0x89bd42*/
        {
          ++v8; /*0x89bd44*/
          ++v9; /*0x89bd45*/
          if ( v8 >= v7 ) /*0x89bd4a*/
            goto LABEL_8; /*0x89bd4a*/
        }
      }
      *(_DWORD *)(*(_DWORD *)(v6 + 0xB8) + 4 * v8) = 0; /*0x89bd55*/
      ++v3; /*0x89bd60*/
    }
    while ( v3 < v18 ); /*0x89bd63*/
  }
  v10 = *(_DWORD *)(a3 + 0xC); /*0x89bd65*/
  sub_8DDC90(v10, a3); /*0x89bd6b*/
  v11 = *(_WORD *)(a3 + 4) == 0; /*0x89bd70*/
  *(_DWORD *)(a3 + 8) = 0; /*0x89bd75*/
  if ( !v11 && !--*(_WORD *)(a3 + 6) ) /*0x89bd82*/
    (**(void (__thiscall ***)(int, int))a3)(a3, 1); /*0x89bd8f*/
  v12 = *(_DWORD *)(v10 + 0x1C); /*0x89bd97*/
  if ( *(_WORD *)(v10 + 0x22) == 0xFFFF ) /*0x89bd9a*/
  {
    v13 = v12 + 0x50; /*0x89bda0*/
    *(_WORD *)(v10 + 0x22) = *(_WORD *)(v12 + 0x54); /*0x89bda3*/
    if ( *(_DWORD *)(v12 + 0x54) == (*(_DWORD *)(v12 + 0x58) & 0x3FFFFFFF) ) /*0x89bdb5*/
      sub_8A6EE0((const void **)v13, 4); /*0x89bdba*/
    *(_DWORD *)(*(_DWORD *)v13 + 4 * (*(_DWORD *)(v13 + 4))++) = v10; /*0x89bdc7*/
  }
  LOBYTE(v14) = v19; /*0x89bdcd*/
  if ( v19 >= 0 ) /*0x89bdd4*/
  {
    v15 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x89bde6*/
    if ( !v15 ) /*0x89bdee*/
      v15 = unk_BA7D9C; /*0x89bdf0*/
    LOBYTE(v14) = sub_8A75D0(v15, v17, 4 * v19, 0x14); /*0x89be06*/
  }
  v11 = (*(_DWORD *)(a2 + 0x88))-- == 1; /*0x89be0b*/
  if ( v11 ) /*0x89be11*/
  {
    v14 = *(_DWORD *)(a2 + 0x84); /*0x89be13*/
    if ( v14 ) /*0x89be1b*/
    {
      LOBYTE(v14) = *(_BYTE *)(a2 + 0x90); /*0x89be1d*/
      if ( !(_BYTE)v14 ) /*0x89be25*/
        LOBYTE(v14) = sub_899210(a2); /*0x89be29*/
    }
  }
  if ( *(_WORD *)(a3 + 4) ) /*0x89be2e*/
  {
    if ( !--*(_WORD *)(a3 + 6) ) /*0x89be39*/
      LOBYTE(v14) = (**(char (__thiscall ***)(int, int))a3)(a3, 1); /*0x89be46*/
  }
  return v14; /*0x89be48*/
}
