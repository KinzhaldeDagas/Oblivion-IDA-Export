int *__cdecl __dtold(int *a1, int *a2)
{
  int v3; // ecx
  int v4; // eax
  unsigned int v5; // edx
  int v6; // eax
  __int16 v7; // cx
  __int16 v8; // di
  int *result; // eax
  __int16 v10; // cx
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  unsigned int v14; // [esp+Ch] [ebp-4h]
  __int16 v15; // [esp+1Ch] [ebp+Ch]

  v3 = (*((unsigned __int16 *)a2 + 3) >> 4) & 0x7FF; /*0x9998a3*/
  v15 = *((_WORD *)a2 + 3) & 0x8000; /*0x9998a5*/
  v4 = a2[1]; /*0x9998a8*/
  v5 = *a2; /*0x9998ab*/
  v6 = v4 & 0xFFFFF; /*0x9998b5*/
  v14 = 0x80000000; /*0x9998bc*/
  if ( !(_WORD)v3 ) /*0x9998bf*/
  {
    if ( !v6 && !v5 ) /*0x9998dc*/
    {
      result = a1; /*0x9998de*/
      v10 = v15; /*0x9998e1*/
      a1[1] = 0; /*0x9998e5*/
      *a1 = 0; /*0x9998e8*/
      goto LABEL_13; /*0x9998ea*/
    }
    v7 = 0x3C01; /*0x9998ec*/
    v14 = 0; /*0x9998f2*/
    goto LABEL_9; /*0x9998f2*/
  }
  if ( (unsigned __int16)v3 != 0x7FF ) /*0x9998c3*/
  {
    v7 = v3 + 0x3C00; /*0x9998c5*/
LABEL_9:
    v8 = v7; /*0x9998f5*/
    goto LABEL_10; /*0x9998f5*/
  }
  v8 = 0x7FFF; /*0x9998cd*/
LABEL_10:
  v11 = v14 | (v6 << 0xB) | (v5 >> 0x15); /*0x9998f8*/
  result = a1; /*0x999905*/
  a1[1] = v11; /*0x99990d*/
  *a1 = v5 << 0xB; /*0x999910*/
  if ( (v11 & 0x80000000) == 0 ) /*0x999912*/
  {
    do /*0x999931*/
    {
      v12 = *(__int64 *)a1 >> 0x1F; /*0x999920*/
      v13 = 2 * *a1; /*0x999922*/
      --v8; /*0x999924*/
      a1[1] = v12; /*0x99992c*/
      *a1 = v13; /*0x99992f*/
    }
    while ( (v12 & 0x80000000) == 0 ); /*0x999931*/
  }
  v10 = v8 | v15; /*0x999936*/
LABEL_13:
  *((_WORD *)result + 4) = v10; /*0x999938*/
  return result; /*0x999938*/
}
