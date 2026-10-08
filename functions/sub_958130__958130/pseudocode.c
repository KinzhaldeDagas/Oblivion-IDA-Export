int __usercall sub_958130@<eax>(
        _DWORD *a1@<eax>,
        int a2@<esi>,
        char a3,
        int a4,
        char a5,
        int a6,
        int a7,
        int a8,
        char a9)
{
  unsigned int v11; // ebp
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // ebp
  int v15; // ebx
  char v16; // [esp+1Fh] [ebp-19h] BYREF
  int i; // [esp+20h] [ebp-18h]
  unsigned int v18; // [esp+24h] [ebp-14h]
  _DWORD v19[4]; // [esp+28h] [ebp-10h] BYREF

  sub_9183A0(v19, a2, a9); /*0x958140*/
  sub_918460(v19, a3, a4); /*0x958153*/
  if ( !*(_BYTE *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)a2 + 8))(a2, &v16) ) /*0x958164*/
    goto LABEL_3; /*0x958164*/
  sub_918460(v19, a5, a6); /*0x958177*/
  if ( !*(_BYTE *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)a2 + 8))(a2, &v16) ) /*0x958188*/
    goto LABEL_3; /*0x958188*/
  v11 = a1[1]; /*0x9581a0*/
  sub_918440(v19, v11); /*0x9581a4*/
  v12 = 0; /*0x9581a9*/
  for ( i = 0x14; v12 < v11; i += 8 ) /*0x9581b5*/
  {
    sub_918440(v19, *(_DWORD *)(*a1 + 8 * v12)); /*0x9581c1*/
    sub_918440(v19, *(_DWORD *)(*a1 + 8 * v12 + 4)); /*0x9581d1*/
    if ( !*(_BYTE *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)a2 + 8))(a2, &v16) ) /*0x9581e2*/
      goto LABEL_3; /*0x9581e5*/
    ++v12; /*0x9581f2*/
  }
  v18 = a1[4]; /*0x9581fb*/
  v13 = v18; /*0x9581fb*/
  sub_918440(v19, v18); /*0x958207*/
  v14 = 0; /*0x958213*/
  i += 4; /*0x958217*/
  if ( v13 ) /*0x95821b*/
  {
    v15 = 0; /*0x95821d*/
    do /*0x95822b*/
    {
      sub_918440(v19, *(_DWORD *)(v15 + a1[3])); /*0x95822b*/
      sub_918460(v19, *(_DWORD *)(v15 + a1[3] + 4), 0); /*0x95823e*/
      sub_918460(v19, *(_DWORD *)(v15 + a1[3] + 8), 0); /*0x958251*/
      if ( !*(_BYTE *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)a2 + 8))(a2, &v16) ) /*0x958262*/
        goto LABEL_3; /*0x958265*/
      i += 0x14; /*0x958267*/
      ++v14; /*0x958270*/
      v15 += 0xC; /*0x958271*/
    }
    while ( v14 < v18 ); /*0x95822b*/
  }
  sub_918440(v19, a8); /*0x958281*/
  if ( !*(_BYTE *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)a2 + 8))(a2, &v16) /*0x9582c3*/
    || ((*(void (__thiscall **)(int, int, int))(*(_DWORD *)a2 + 0xC))(a2, a7, a8),
        !*(_BYTE *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)a2 + 8))(a2, &v16)) )
  {
LABEL_3:
    sub_918180(v19); /*0x958191*/
    return 0xFFFFFFFF; /*0x95819d*/
  }
  sub_918180(v19); /*0x9582cc*/
  return i + a8 + 4; /*0x958199*/
}
