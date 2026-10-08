signed int __cdecl sub_6B32F0(int a1, int *a2, int *a3, int *a4, int *a5, unsigned int *a6)
{
  int v6; // eax
  unsigned int v7; // esi
  bool v9; // zf
  unsigned __int8 j; // cl
  int v11; // edx
  unsigned __int8 i; // cl
  char v13; // al
  unsigned int *v14; // esi
  unsigned int v15; // [esp+8h] [ebp-8h]
  int v16; // [esp+Ch] [ebp-4h]

  v15 = dword_B163F8; /*0x6b32fe*/
  v6 = *(_DWORD *)(a1 + 0x20); /*0x6b3302*/
  v7 = 0; /*0x6b3305*/
  v16 = 1; /*0x6b3309*/
  if ( !v6 ) /*0x6b3311*/
    return 2; /*0x6b331d*/
  if ( !*(_DWORD *)(a1 + 0x24) ) /*0x6b331e*/
  {
    *a3 = 0; /*0x6b332b*/
    *a2 = 0; /*0x6b332e*/
    return 0; /*0x6b3336*/
  }
  while ( *(_BYTE *)(v6 + 2 * v7) ) /*0x6b334c*/
  {
    v9 = sub_6AF750(a6) == 0; /*0x6b3357*/
    v6 = *(_DWORD *)(a1 + 0x20); /*0x6b3359*/
    if ( v9 ) /*0x6b335c*/
    {
      for ( i = *(_BYTE *)(v6 + 2 * v7); i >= 0xFAu; i = *(_BYTE *)(v6 + 2 * v7) ) /*0x6b3382*/
        v7 += i; /*0x6b3387*/
      v11 = *(unsigned __int8 *)(v6 + 2 * v7); /*0x6b3391*/
    }
    else
    {
      for ( j = *(_BYTE *)(v6 + 2 * v7 + 1); j >= 0xFAu; j = *(_BYTE *)(v6 + 2 * v7 + 1) ) /*0x6b3365*/
        v7 += j; /*0x6b336a*/
      v11 = *(unsigned __int8 *)(v6 + 2 * v7 + 1); /*0x6b3375*/
    }
    v7 += v11; /*0x6b3395*/
    v15 >>= 1; /*0x6b3397*/
    if ( !v15 && v7 >= dword_B17A2C ) /*0x6b33a3*/
      goto LABEL_17; /*0x6b33a3*/
  }
  *a2 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 0x20) + 2 * v7 + 1) >> 4; /*0x6b33b2*/
  *a3 = *(_BYTE *)(*(_DWORD *)(a1 + 0x20) + 2 * v7 + 1) & 0xF; /*0x6b33c0*/
  v16 = 0; /*0x6b33c2*/
LABEL_17:
  if ( *(_BYTE *)a1 == 0x33 && ((v13 = *(_BYTE *)(a1 + 1), v13 == 0x32) || v13 == 0x33) ) /*0x6b33dc*/
  {
    *a4 = (*a3 >> 3) & 1; /*0x6b33f2*/
    *a5 = (*a3 >> 2) & 1; /*0x6b33fc*/
    *a2 = (*a3 >> 1) & 1; /*0x6b3405*/
    *a3 &= 1u; /*0x6b3408*/
    if ( *a4 ) /*0x6b340b*/
    {
      if ( sub_6AF750(a6) ) /*0x6b3414*/
        *a4 = -*a4; /*0x6b3421*/
    }
    if ( *a5 ) /*0x6b3423*/
    {
      if ( sub_6AF750(a6) ) /*0x6b342e*/
        *a5 = -*a5; /*0x6b343b*/
    }
    if ( *a2 ) /*0x6b343d*/
    {
      if ( sub_6AF750(a6) ) /*0x6b3445*/
        *a2 = -*a2; /*0x6b3453*/
    }
    if ( *a3 && sub_6AF750(a6) ) /*0x6b3461*/
    {
      *a3 = -*a3; /*0x6b3477*/
      return v16; /*0x6b347f*/
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 0xC) && *(_DWORD *)(a1 + 4) - 1 == *a2 ) /*0x6b3490*/
    {
      v14 = a6; /*0x6b3492*/
      *a2 += sub_6AF6F0(a6, *(_DWORD *)(a1 + 0xC)); /*0x6b349e*/
    }
    else
    {
      v14 = a6; /*0x6b34a3*/
    }
    if ( *a2 ) /*0x6b34a7*/
    {
      if ( sub_6AF750(v14) ) /*0x6b34af*/
        *a2 = -*a2; /*0x6b34bd*/
    }
    if ( *(_DWORD *)(a1 + 0xC) ) /*0x6b34c0*/
    {
      if ( *(_DWORD *)(a1 + 8) - 1 == *a3 ) /*0x6b34cf*/
        *a3 += sub_6AF6F0(v14, *(_DWORD *)(a1 + 0xC)); /*0x6b34d9*/
    }
    if ( *a3 ) /*0x6b34db*/
    {
      if ( sub_6AF750(v14) ) /*0x6b34e2*/
        *a3 = -*a3; /*0x6b34ef*/
    }
  }
  return v16; /*0x6b3313*/
}
