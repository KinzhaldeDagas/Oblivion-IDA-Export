signed int __fastcall sub_8ACE80(_DWORD *a1, int a2, int *a3)
{
  int *v3; // ebp
  int v5; // eax
  int v6; // edx
  int v7; // edi
  int v8; // eax
  int *v9; // ecx
  int v10; // ecx
  int v11; // eax
  __int128 v12; // xmm0
  int v13; // eax
  int v14; // edx
  signed int result; // eax
  int **v16; // ecx
  int v17; // ecx

  v3 = a3; /*0x8ace81*/
  sub_8DE670(a3, a1 != (_DWORD *)0xC ? (unsigned int)a1 : 0);
  v5 = a1[0x1B] - 1; /*0x8ace9d*/
  if ( v5 >= 0 ) /*0x8ace9e*/
  {
    v6 = 0x30 * v5; /*0x8acea3*/
    v7 = a1[0x1B]; /*0x8acea6*/
    do /*0x8acf11*/
    {
      v8 = *(_DWORD *)(a1[0x1A] + v6 + 0x28); /*0x8aceb3*/
      if ( *(_BYTE *)(v8 + 0x18) == 2 ) /*0x8acebb*/
        v9 = (int *)(v8 + *(_DWORD *)(v8 + 0x10)); /*0x8acec0*/
      else
        v9 = 0; /*0x8acec4*/
      if ( v9 == v3 ) /*0x8acec8*/
      {
        v10 = a1[0x1A]; /*0x8acecd*/
        v11 = a1[0x1B] - 1; /*0x8aced0*/
        a1[0x1B] = v11; /*0x8aced1*/
        v11 *= 0x30; /*0x8aced7*/
        v12 = *(_OWORD *)(v11 + v10); /*0x8aceda*/
        v13 = v10 + v11; /*0x8acede*/
        *(_OWORD *)(v6 + v10) = v12; /*0x8acee0*/
        *(_OWORD *)(v6 + v10 + 0x10) = *(_OWORD *)(v13 + 0x10); /*0x8acee8*/
        *(_DWORD *)(v6 + v10 + 0x20) = *(_DWORD *)(v13 + 0x20); /*0x8acef0*/
        *(_DWORD *)(v6 + v10 + 0x24) = *(_DWORD *)(v13 + 0x24); /*0x8acef7*/
        *(_DWORD *)(v6 + v10 + 0x28) = *(_DWORD *)(v13 + 0x28); /*0x8acefe*/
        v3 = a3; /*0x8acf05*/
        *(_DWORD *)(v6 + v10 + 0x2C) = *(_DWORD *)(v13 + 0x2C); /*0x8acf09*/
      }
      v6 -= 0x30; /*0x8acf0d*/
      --v7; /*0x8acf10*/
    }
    while ( v7 ); /*0x8acf11*/
  }
  v14 = a1[0x24]; /*0x8acf13*/
  result = 0; /*0x8acf19*/
  if ( v14 <= 0 ) /*0x8acf1d*/
  {
LABEL_13:
    result = 0xFFFFFFFF; /*0x8acf31*/
  }
  else
  {
    v16 = (int **)a1[0x23]; /*0x8acf1f*/
    while ( *v16 != v3 ) /*0x8acf27*/
    {
      ++result; /*0x8acf29*/
      ++v16; /*0x8acf2a*/
      if ( result >= v14 ) /*0x8acf2f*/
        goto LABEL_13; /*0x8acf2f*/
    }
  }
  v17 = a1[0x24] - 1; /*0x8acf3a*/
  a1[0x24] = v17; /*0x8acf3b*/
  *(_DWORD *)(a1[0x23] + 4 * result) = *(_DWORD *)(a1[0x23] + 4 * v17); /*0x8acf4b*/
  return result; /*0x8acf4a*/
}
