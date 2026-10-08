void __cdecl sub_541630(int a1, float a2, float a3, float a4, int a5)
{
  int v5; // esi
  int v6; // ebp
  int v7; // ebx
  _DWORD *v8; // edi
  int v9; // eax
  int v10; // ecx
  unsigned __int16 v11; // si
  _DWORD *v12; // eax
  int v13; // edx
  float *v14; // eax
  int v15; // ecx
  int v16; // edi
  int v17; // eax

  v5 = a1; /*0x541633*/
  if ( a1 ) /*0x54163a*/
  {
    v6 = 0; /*0x541647*/
    if ( *(_WORD *)(a1 + 0xB6) ) /*0x541640*/
    {
      v7 = a5; /*0x541653*/
      while ( 1 ) /*0x541663*/
      {
        v8 = *(_DWORD **)(*(_DWORD *)(v5 + 0xB0) + 4 * v6); /*0x541663*/
        if ( v8 ) /*0x541668*/
          break; /*0x541668*/
LABEL_21:
        if ( *(unsigned __int16 *)(v5 + 0xB6) <= (unsigned int)++v6 ) /*0x541781*/
          return; /*0x541781*/
      }
      if ( !(*(int (__thiscall **)(_DWORD *))(*v8 + 0x10))(v8) ) /*0x541679*/
      {
        v17 = (*(int (__thiscall **)(_DWORD *))(*v8 + 8))(v8); /*0x54174c*/
        if ( v17 ) /*0x541750*/
          sub_541630(v17, a2, a3, a4, v7); /*0x54176d*/
        goto LABEL_21; /*0x54176d*/
      }
      v9 = v8[0x2D]; /*0x54167f*/
      v10 = *(_DWORD *)(v9 + 0x24); /*0x541685*/
      v11 = *(_WORD *)(v9 + 8); /*0x54168a*/
      if ( !v10 ) /*0x54168e*/
      {
        sub_7287C0(v9, 0); /*0x541693*/
        v10 = *(_DWORD *)(v8[0x2D] + 0x24); /*0x5416a1*/
        if ( !v11 ) /*0x5416a4*/
        {
LABEL_17:
          v16 = v8[0x2D]; /*0x541730*/
          v5 = a1; /*0x541738*/
          if ( v16 ) /*0x54173c*/
            *(_WORD *)(v16 + 0x2E) |= 4u; /*0x54173e*/
          goto LABEL_21; /*0x541743*/
        }
        v12 = *(_DWORD **)(v8[0x2D] + 0x24); /*0x5416aa*/
        v13 = v11; /*0x5416ac*/
        do /*0x5416d9*/
        {
          *v12 = dword_B25AE0; /*0x5416b6*/
          v12[1] = dword_B25AE4; /*0x5416be*/
          v12[2] = dword_B25AE8; /*0x5416c7*/
          v12[3] = dword_B25AEC; /*0x5416d0*/
          v12 += 4; /*0x5416d3*/
          --v13; /*0x5416d6*/
        }
        while ( v13 ); /*0x5416d9*/
        v7 = a5; /*0x5416db*/
      }
      if ( v11 ) /*0x5416e2*/
      {
        v14 = (float *)(v10 + 8); /*0x5416e8*/
        v15 = v11; /*0x5416ef*/
        do /*0x541728*/
        {
          if ( (_BYTE)v7 ) /*0x5416f8*/
          {
            v14[0xFFFFFFFE] = v14[0xFFFFFFFE] + a2; /*0x5416ff*/
            v14[0xFFFFFFFF] = v14[0xFFFFFFFF] + a3; /*0x541707*/
            *v14 = *v14 + a4; /*0x54170e*/
          }
          else
          {
            v14[0xFFFFFFFE] = a2; /*0x541712*/
            v14[0xFFFFFFFF] = a3; /*0x541717*/
            *v14 = a4; /*0x54171c*/
          }
          v14 += 4; /*0x541722*/
          --v15; /*0x541725*/
        }
        while ( v15 ); /*0x541728*/
      }
      goto LABEL_17; /*0x541728*/
    }
  }
}
