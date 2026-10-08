signed int __fastcall sub_8ACDA0(_DWORD *a1, int a2, int *a3)
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

  v3 = a3; /*0x8acda1*/
  sub_8A6300(a3, a1 != (_DWORD *)8 ? (unsigned int)a1 : 0);
  v5 = a1[0x1C] - 1; /*0x8acdbd*/
  if ( v5 >= 0 ) /*0x8acdbe*/
  {
    v6 = 0x30 * v5; /*0x8acdc3*/
    v7 = a1[0x1C]; /*0x8acdc6*/
    do /*0x8ace31*/
    {
      v8 = *(_DWORD *)(a1[0x1B] + v6 + 0x28); /*0x8acdd3*/
      if ( *(_BYTE *)(v8 + 0x18) == 1 ) /*0x8acddb*/
        v9 = (int *)(v8 + *(_DWORD *)(v8 + 0x10)); /*0x8acde0*/
      else
        v9 = 0; /*0x8acde4*/
      if ( v9 == v3 ) /*0x8acde8*/
      {
        v10 = a1[0x1B]; /*0x8acded*/
        v11 = a1[0x1C] - 1; /*0x8acdf0*/
        a1[0x1C] = v11; /*0x8acdf1*/
        v11 *= 0x30; /*0x8acdf7*/
        v12 = *(_OWORD *)(v11 + v10); /*0x8acdfa*/
        v13 = v10 + v11; /*0x8acdfe*/
        *(_OWORD *)(v6 + v10) = v12; /*0x8ace00*/
        *(_OWORD *)(v6 + v10 + 0x10) = *(_OWORD *)(v13 + 0x10); /*0x8ace08*/
        *(_DWORD *)(v6 + v10 + 0x20) = *(_DWORD *)(v13 + 0x20); /*0x8ace10*/
        *(_DWORD *)(v6 + v10 + 0x24) = *(_DWORD *)(v13 + 0x24); /*0x8ace17*/
        *(_DWORD *)(v6 + v10 + 0x28) = *(_DWORD *)(v13 + 0x28); /*0x8ace1e*/
        v3 = a3; /*0x8ace25*/
        *(_DWORD *)(v6 + v10 + 0x2C) = *(_DWORD *)(v13 + 0x2C); /*0x8ace29*/
      }
      v6 -= 0x30; /*0x8ace2d*/
      --v7; /*0x8ace30*/
    }
    while ( v7 ); /*0x8ace31*/
  }
  v14 = a1[0x22]; /*0x8ace33*/
  result = 0; /*0x8ace39*/
  if ( v14 <= 0 ) /*0x8ace3d*/
  {
LABEL_13:
    result = 0xFFFFFFFF; /*0x8ace51*/
  }
  else
  {
    v16 = (int **)a1[0x21]; /*0x8ace3f*/
    while ( *v16 != v3 ) /*0x8ace47*/
    {
      ++result; /*0x8ace49*/
      ++v16; /*0x8ace4a*/
      if ( result >= v14 ) /*0x8ace4f*/
        goto LABEL_13; /*0x8ace4f*/
    }
  }
  v17 = a1[0x22] - 1; /*0x8ace5a*/
  a1[0x22] = v17; /*0x8ace5b*/
  *(_DWORD *)(a1[0x21] + 4 * result) = *(_DWORD *)(a1[0x21] + 4 * v17); /*0x8ace6b*/
  return result; /*0x8ace6a*/
}
