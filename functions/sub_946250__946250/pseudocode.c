_DWORD *__usercall sub_946250@<eax>(int a1@<eax>, _DWORD *a2@<edx>, int a3@<ecx>, _DWORD *a4, int a5)
{
  unsigned int v5; // ecx
  int v8; // esi
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // eax
  _DWORD *v12; // eax
  int v14; // [esp+10h] [ebp-4h]

  v5 = a3 - 1; /*0x946258*/
  v8 = 2 * a5; /*0x94626b*/
  while ( 2 ) /*0x946277*/
  {
    switch ( v5 ) /*0x946277*/
    {
      case 0u: /*0x946277*/
      case 1u: /*0x946277*/
      case 2u: /*0x946277*/
      case 3u: /*0x946277*/
      case 4u: /*0x946277*/
      case 5u: /*0x946277*/
      case 6u: /*0x946277*/
      case 7u: /*0x946277*/
      case 8u: /*0x946277*/
      case 9u: /*0x946277*/
      case 0xAu: /*0x946277*/
      case 0xBu: /*0x946277*/
      case 0xCu: /*0x946277*/
      case 0x17u: /*0x946277*/
        return a2; /*0x946306*/
      case 0xDu: /*0x946277*/
      case 0xEu: /*0x946277*/
      case 0xFu: /*0x946277*/
      case 0x10u: /*0x946277*/
      case 0x11u: /*0x946277*/
        v9 = &a2[4 * *(unsigned __int16 *)(*a4 + v8 + 2)]; /*0x946289*/
        v10 = 0xC; /*0x94628b*/
        v8 += 2; /*0x946290*/
        a2 = v9; /*0x946293*/
        goto LABEL_9; /*0x946295*/
      case 0x15u: /*0x946277*/
      case 0x19u: /*0x946277*/
        v14 = *(unsigned __int16 *)(*a4 + v8 + 2); /*0x9462a1*/
        v11 = sub_940CF0(a1); /*0x9462a5*/
        v10 = *(unsigned __int8 *)(a1 + 0xD); /*0x9462b1*/
        v8 += 2; /*0x9462b5*/
        a2 = (_DWORD *)(*a2 + v14 * v11); /*0x9462b8*/
        goto LABEL_9; /*0x9462ba*/
      case 0x18u: /*0x946277*/
        if ( !a1 ) /*0x9462be*/
          return 0; /*0x9462be*/
        if ( !*(_DWORD *)(a1 + 4) ) /*0x9462c0*/
          return 0; /*0x9462c0*/
        v12 = (_DWORD *)sub_90D1F0((_DWORD *)a1); /*0x9462c9*/
        if ( !v12 ) /*0x9462d0*/
          return 0; /*0x9462d0*/
        a1 = sub_90D260(v12, *(unsigned __int16 *)(*a4 + v8 + 2)); /*0x9462e2*/
        v10 = *(unsigned __int8 *)(a1 + 0xC); /*0x9462e8*/
        v8 += 2; /*0x9462ec*/
        a2 = (_DWORD *)((char *)a2 + *(unsigned __int16 *)(a1 + 0x12)); /*0x9462ef*/
LABEL_9:
        v5 = v10 - 1; /*0x9462f1*/
        if ( v5 <= 0x19 ) /*0x9462f5*/
          continue; /*0x9462f5*/
        return 0;
      default:
        return 0;
    }
  }
}
