int __cdecl sub_92CD60(int a1, int a2)
{
  int result; // eax
  int v3; // edi
  int v4; // esi
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st7

  result = *(_DWORD *)(a1 + 4); /*0x92cd64*/
  if ( result > 0 ) /*0x92cd69*/
  {
    *(_OWORD *)a2 = *(_OWORD *)*(_DWORD *)a1; /*0x92cd78*/
    *(_OWORD *)(a2 + 0x10) = *(_OWORD *)*(_DWORD *)a1; /*0x92cd80*/
    result = *(_DWORD *)(a1 + 4); /*0x92cd84*/
    v3 = 0; /*0x92cd88*/
    if ( result > 0 ) /*0x92cd8c*/
    {
      v4 = 0; /*0x92cd93*/
      do /*0x92ce54*/
      {
        v5 = *(float *)(v4 + *(_DWORD *)a1); /*0x92cd97*/
        if ( *(float *)a2 < v5 ) /*0x92cda7*/
          v5 = *(float *)a2; /*0x92cdab*/
        *(float *)a2 = v5; /*0x92cdaf*/
        v6 = *(float *)(v4 + *(_DWORD *)a1); /*0x92cdb3*/
        if ( *(float *)(a2 + 0x10) > v6 ) /*0x92cdc4*/
          v6 = *(float *)(a2 + 0x10); /*0x92cdc8*/
        *(float *)(a2 + 0x10) = v6; /*0x92cdcc*/
        v7 = *(float *)(v4 + *(_DWORD *)a1 + 4); /*0x92cdd1*/
        if ( *(float *)(a2 + 4) < v7 ) /*0x92cde3*/
          v7 = *(float *)(a2 + 4); /*0x92cde7*/
        *(float *)(a2 + 4) = v7; /*0x92cdeb*/
        v8 = *(float *)(v4 + *(_DWORD *)a1 + 4); /*0x92cdf0*/
        if ( *(float *)(a2 + 0x14) > v8 ) /*0x92ce02*/
          v8 = *(float *)(a2 + 0x14); /*0x92ce06*/
        *(float *)(a2 + 0x14) = v8; /*0x92ce0a*/
        v9 = *(float *)(v4 + *(_DWORD *)a1 + 8); /*0x92ce0f*/
        if ( *(float *)(a2 + 8) < v9 ) /*0x92ce21*/
          v9 = *(float *)(a2 + 8); /*0x92ce25*/
        *(float *)(a2 + 8) = v9; /*0x92ce29*/
        v10 = *(float *)(v4 + *(_DWORD *)a1 + 8); /*0x92ce2e*/
        if ( *(float *)(a2 + 0x18) > v10 ) /*0x92ce40*/
          v10 = *(float *)(a2 + 0x18); /*0x92ce44*/
        *(float *)(a2 + 0x18) = v10; /*0x92ce48*/
        result = *(_DWORD *)(a1 + 4); /*0x92ce4b*/
        ++v3; /*0x92ce4e*/
        v4 += 0x10; /*0x92ce4f*/
      }
      while ( v3 < result ); /*0x92ce54*/
    }
  }
  return result; /*0x92ce5c*/
}
