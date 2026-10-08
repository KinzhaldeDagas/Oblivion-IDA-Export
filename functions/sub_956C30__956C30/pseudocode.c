int __userpurge sub_956C30@<eax>(int a1@<ecx>, double a2@<st0>, int a3, int a4, int *a5, _DWORD *a6, _DWORD *a7)
{
  int v7; // eax
  int v8; // ebp
  int v9; // esi
  int *v11; // eax
  int v12; // ecx
  int v13; // ebx
  int v14; // edx
  int v15; // eax
  int v16; // eax
  int *v17; // eax
  int v18; // eax
  double v19; // st7
  float v22; // [esp+14h] [ebp-10h]
  float v23; // [esp+18h] [ebp-Ch]
  int v24; // [esp+1Ch] [ebp-8h]
  int v25; // [esp+20h] [ebp-4h]
  int v26; // [esp+34h] [ebp+10h]

  v7 = *(_DWORD *)(a1 + 8); /*0x956c33*/
  v8 = *(_DWORD *)(a1 + 0x20); /*0x956c38*/
  v9 = *(_DWORD *)(v7 + 0xC); /*0x956c3f*/
  v24 = *(_DWORD *)(v7 + 0x10); /*0x956c51*/
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v8 + 8))(v8, a6); /*0x956c55*/
  v22 = a2; /*0x956c58*/
  v11 = *(int **)(a1 + 0xC); /*0x956c60*/
  v12 = *v11; /*0x956c63*/
  v13 = 0; /*0x956c67*/
  v14 = v9 >> 1; /*0x956c6b*/
  v23 = 10000000.0; /*0x956c71*/
  v26 = 0; /*0x956c79*/
  v25 = v9 >> 1; /*0x956c7d*/
  if ( *v11 ) /*0x956c63*/
  {
    if ( v22 <= (double)*(float *)(a4 + 0xC4) ) /*0x956ca5*/
    {
      if ( v24 <= 0 ) /*0x956cb1*/
      {
        v13 = *v11; /*0x956cd4*/
      }
      else
      {
        v16 = *a5; /*0x956cb7*/
        v13 = *a5 + v14; /*0x956cb9*/
        if ( v13 > v12 ) /*0x956cbe*/
          v13 = v12; /*0x956cc0*/
        v26 = v16 - v14; /*0x956cc4*/
        if ( v16 - v14 < 0 ) /*0x956cc8*/
          v26 = 0; /*0x956cca*/
      }
      goto LABEL_11; /*0x956cd2*/
    }
  }
  else
  {
    v15 = v11[3]; /*0x956c83*/
    if ( v15 ) /*0x956c88*/
    {
      for ( a6[0xE] = *(_DWORD *)(v15 + 0xC); ; a6[0xE] = *(_DWORD *)(v18 + 0xC) ) /*0x956c91*/
      {
        a6[0xC] = v13; /*0x956d02*/
        a6[0xD] = v13 + a7[1] - a3; /*0x956d0e*/
        v19 = ((double (__thiscall *)(int, _DWORD *))*(_DWORD *)(*(_DWORD *)v8 + 0xC))(v8, a6) + v22; /*0x956d1a*/
        if ( v19 < v23 ) /*0x956d27*/
        {
          v23 = v19; /*0x956d2d*/
          *a5 = v13; /*0x956d31*/
          if ( v19 < *(float *)(a4 + 0xC4) ) /*0x956d3e*/
          {
            *(float *)(a4 + 0xC4) = v19; /*0x956d40*/
            *(_DWORD *)(a4 + 0xB8) = a6[9]; /*0x956d49*/
            *(_DWORD *)(a4 + 0xBC) = a6[8]; /*0x956d56*/
            *(_DWORD *)(a4 + 0xC0) = a6[0xE]; /*0x956d61*/
            if ( v13 - v25 < v26 ) /*0x956d6f*/
            {
              v26 = v13 - v25; /*0x956d73*/
              if ( v13 - v25 < 0 ) /*0x956d77*/
                v26 = 0; /*0x956d79*/
            }
            (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v8 + 0x14))(v8, a6, a4 + 0xC8); /*0x956d8e*/
          }
        }
LABEL_11:
        if ( --v13 < v26 ) /*0x956cdd*/
          break; /*0x956cdd*/
        v17 = *(int **)(a1 + 0xC); /*0x956ce7*/
        if ( v13 > *v17 ) /*0x956cec*/
          v18 = 0; /*0x956cf6*/
        else
          v18 = *(_DWORD *)(v17[2] + 4 * v13); /*0x956cf1*/
      }
      --*a5; /*0x956da1*/
    }
  }
  return sub_9569F0(*(int **)(a1 + 0xC), *a7 + 0x10 * a3); /*0x956dbf*/
}
