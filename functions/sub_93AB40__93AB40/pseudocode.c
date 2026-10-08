signed int __cdecl sub_93AB40(unsigned __int8 *a1, int a2, int a3, int a4, int a5, int a6, __m128 *a7, int a8, int a9)
{
  signed int v10; // edi
  __int16 v11; // bx
  int v12; // edx
  unsigned __int8 v13; // al
  unsigned __int8 *v14; // eax
  _DWORD *v15; // ecx
  _DWORD *v16; // edx
  int v17; // eax
  int v18; // eax
  int v20; // edi
  int v21; // eax
  int v22; // ecx
  unsigned __int8 *v23; // edx
  unsigned __int8 *v24; // ecx
  int v25; // eax
  int v26; // edx
  unsigned __int8 v27; // al
  int v28; // ebx
  unsigned __int8 *v29; // ebp
  __int16 v30; // di
  int v31; // eax
  int i; // ecx
  unsigned __int8 *v33; // eax
  int v34; // edi
  int v35; // ecx
  int j; // ebx
  int v37; // eax
  __int16 v38; // dx
  int v39; // ecx
  int v40; // [esp+14h] [ebp-4h]
  int v41; // [esp+1Ch] [ebp+4h]

  v40 = 4; /*0x93ab4d*/
  if ( a1[2] != 4 ) /*0x93ab55*/
  {
    v20 = a5; /*0x93ac5b*/
    if ( !a9 || *(_BYTE *)(a5 + 9) == 3 ) /*0x93ac69*/
    {
      v11 = (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)a8 + 8))(a8, a2, a3, a4, a6); /*0x93ad0d*/
      if ( v11 == (__int16)0xFFFF ) /*0x93ad14*/
        return 5; /*0x93ad14*/
    }
    else
    {
      v11 = 0xFFFF; /*0x93ac6f*/
    }
    *(_WORD *)(a6 + 0x20) = v11; /*0x93ac74*/
    v21 = (a1[1] + *a1 - 1) >> 1; /*0x93ac87*/
    v22 = v21 + 2 * a1[2]; /*0x93ac8b*/
    v23 = &a1[4 * v22 + 0xC]; /*0x93ac8e*/
    v24 = &a1[4 * v22 + 4]; /*0x93ac92*/
    if ( v21 >= 0 ) /*0x93ac96*/
    {
      v25 = v21 + 1; /*0x93ac98*/
      do /*0x93acab*/
      {
        *(_DWORD *)v23 = *(_DWORD *)v24; /*0x93aca2*/
        v23 += 0xFFFFFFFC; /*0x93aca4*/
        v24 += 0xFFFFFFFC; /*0x93aca7*/
        --v25; /*0x93acaa*/
      }
      while ( v25 ); /*0x93acab*/
    }
    v26 = a1[2]; /*0x93acad*/
    *(_DWORD *)&a1[8 * v26 + 4] = *((_DWORD *)a1 + 1); /*0x93acb4*/
    *(_DWORD *)&a1[8 * v26 + 8] = *((_DWORD *)a1 + 2); /*0x93acbb*/
    ++a1[2]; /*0x93acbf*/
    goto LABEL_19; /*0x93acbf*/
  }
  v10 = sub_93A7A0(a7); /*0x93ab64*/
  if ( v10 == 4 ) /*0x93ab69*/
    return 5; /*0x93ad24*/
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a8 + 0x10))(a8, *(unsigned __int16 *)&a1[8 * v10 + 6]); /*0x93ab7f*/
  if ( v10 ) /*0x93ab84*/
  {
    *(_DWORD *)&a1[8 * v10 + 4] = *((_DWORD *)a1 + 1); /*0x93ab89*/
    *(_DWORD *)&a1[8 * v10 + 8] = *((_DWORD *)a1 + 2); /*0x93ab90*/
  }
  else
  {
    *((_DWORD *)a1 + 1) = *((_DWORD *)a1 + 3); /*0x93ab99*/
    *((_DWORD *)a1 + 2) = *((_DWORD *)a1 + 4); /*0x93aba0*/
  }
  sub_9399E0(a1); /*0x93aba6*/
  v11 = (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)a8 + 8))(a8, a2, a3, a4, a6); /*0x93abc6*/
  if ( v11 == (__int16)0xFFFF ) /*0x93abcd*/
  {
    v12 = *((_DWORD *)a1 + 7); /*0x93abd2*/
    *((_DWORD *)a1 + 2) = *((_DWORD *)a1 + 8); /*0x93abd5*/
    v13 = a1[2] - 1; /*0x93abdb*/
    a1[2] = v13; /*0x93abe0*/
    v14 = &a1[8 * v13]; /*0x93abe3*/
    *((_DWORD *)a1 + 1) = v12; /*0x93abe6*/
    v15 = v14 + 4; /*0x93abe9*/
    v16 = v14 + 0xC; /*0x93abec*/
    v17 = (a1[1] + *a1 - 1) >> 1; /*0x93abfa*/
    if ( v17 >= 0 ) /*0x93abfe*/
    {
      v18 = v17 + 1; /*0x93ac00*/
      do /*0x93ac0c*/
      {
        *v15++ = *v16++; /*0x93ac03*/
        --v18; /*0x93ac0b*/
      }
      while ( v18 ); /*0x93ac0c*/
    }
    sub_934050((char *)&a7[3 * v10], (int)&a7[9]); /*0x93ac21*/
    return 6; /*0x93ac30*/
  }
  *(_WORD *)(a6 + 0x20) = v11; /*0x93ac3e*/
  sub_934050((char *)&a7[3 * v10], a6); /*0x93ac42*/
  v40 = v10; /*0x93ac47*/
  v20 = a5; /*0x93ac4b*/
LABEL_19:
  a1[4] = *(_BYTE *)(v20 + 8); /*0x93acc2*/
  v27 = *(_BYTE *)(v20 + 9); /*0x93acc8*/
  *((_WORD *)a1 + 3) = v11; /*0x93accb*/
  a1[5] = v27; /*0x93accf*/
  *((_DWORD *)a1 + 2) = 0; /*0x93acd2*/
  v28 = 0; /*0x93ace0*/
  v29 = &a1[8 * a1[2] + 4]; /*0x93ace4*/
  v41 = 0; /*0x93ace8*/
  if ( *(char *)(v20 + 8) > 0 ) /*0x93acec*/
  {
    while ( 1 ) /*0x93ad33*/
    {
      v30 = *(_WORD *)(v20 + 2 * v28); /*0x93ad33*/
      v31 = 0; /*0x93ad37*/
      if ( *a1 ) /*0x93ad30*/
      {
        while ( *(_WORD *)&v29[2 * v31] != v30 ) /*0x93ad45*/
        {
          if ( ++v31 >= *a1 ) /*0x93ad4d*/
            goto LABEL_27; /*0x93ad4d*/
        }
      }
      else
      {
LABEL_27:
        for ( i = *a1 + a1[1]; i > v31; --i ) /*0x93ad57*/
          *(_WORD *)&v29[2 * i] = *(_WORD *)&v29[2 * i - 2]; /*0x93ad65*/
        *(_WORD *)&v29[2 * v31] = v30; /*0x93ad73*/
        ++*a1; /*0x93ad7f*/
        v41 += 0x10; /*0x93ad81*/
      }
      a1[v28++ + 8] = 0x10 * v31; /*0x93ad88*/
      if ( v28 >= *(char *)(a5 + 8) ) /*0x93ad97*/
        break; /*0x93ad97*/
      v20 = a5; /*0x93ad25*/
    }
    if ( v41 ) /*0x93ad9f*/
    {
      v33 = a1 + 0xC; /*0x93ada5*/
      v34 = 1; /*0x93ada8*/
      if ( a1[2] > 1u ) /*0x93adad*/
      {
        do /*0x93ade6*/
        {
          v35 = *v33; /*0x93adb0*/
          if ( v35 < v35 + v33[1] ) /*0x93adbb*/
          {
            do /*0x93adda*/
              v33[v35++ + 4] += v41; /*0x93adca*/
            while ( v35 < *v33 + v33[1] ); /*0x93adda*/
          }
          v33 += 8; /*0x93ade0*/
          ++v34; /*0x93ade3*/
        }
        while ( v34 < a1[2] ); /*0x93ade6*/
      }
    }
    v20 = a5; /*0x93ade8*/
  }
  for ( j = 0; j < *(char *)(v20 + 9); ++j ) /*0x93adf3*/
  {
    v37 = *a1; /*0x93adf5*/
    v38 = *(_WORD *)(v20 + 2 * (j + *(char *)(v20 + 8))); /*0x93ae02*/
    v39 = v37 + a1[1]; /*0x93ae06*/
    if ( v37 >= v39 ) /*0x93ae0a*/
    {
LABEL_41:
      *(_WORD *)&v29[2 * v37] = v38; /*0x93ae1c*/
      ++a1[1]; /*0x93ae21*/
    }
    else
    {
      while ( *(_WORD *)&v29[2 * v37] != v38 ) /*0x93ae15*/
      {
        if ( ++v37 >= v39 ) /*0x93ae1a*/
          goto LABEL_41; /*0x93ae1a*/
      }
    }
    a1[j + 8 + *(char *)(v20 + 8)] = 0x10 * v37; /*0x93ae2d*/
  }
  return v40; /*0x93ac26*/
}
