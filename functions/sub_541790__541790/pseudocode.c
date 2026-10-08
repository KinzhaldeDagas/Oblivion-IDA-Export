void __cdecl sub_541790(int a1, int a2, int a3)
{
  int v3; // esi
  unsigned int v4; // ebx
  float *i; // ebp
  _DWORD *v6; // edi
  int v7; // eax
  int v8; // ecx
  unsigned __int16 v9; // si
  _DWORD *v10; // eax
  int v11; // edx
  float *v12; // eax
  int v13; // ecx
  double v14; // st7
  int v15; // edi
  int v16; // eax
  unsigned int v17; // [esp+4h] [ebp-4h]

  v3 = a1; /*0x541792*/
  if ( a1 ) /*0x541798*/
  {
    v4 = 0; /*0x5417a6*/
    v17 = 0; /*0x5417aa*/
    if ( *(_WORD *)(a1 + 0xB6) ) /*0x54179e*/
    {
      for ( i = (float *)(a2 + 8); ; i += 3 ) /*0x5417b9*/
      {
        v6 = *(_DWORD **)(*(_DWORD *)(v3 + 0xB0) + 4 * v4); /*0x5417cb*/
        if ( v6 ) /*0x5417d0*/
          break; /*0x5417d0*/
LABEL_21:
        v17 = ++v4; /*0x5418dd*/
        if ( *(unsigned __int16 *)(v3 + 0xB6) <= v4 ) /*0x5418e1*/
          return; /*0x5418e1*/
      }
      if ( !(*(int (__thiscall **)(_DWORD *))(*v6 + 0x10))(v6) ) /*0x5417e1*/
      {
        v16 = (*(int (__thiscall **)(_DWORD *))(*v6 + 8))(v6); /*0x5418b5*/
        if ( v16 ) /*0x5418b9*/
          sub_541790(v16, a2, a3); /*0x5418c6*/
        goto LABEL_21; /*0x5418c6*/
      }
      v7 = v6[0x2D]; /*0x5417e7*/
      v8 = *(_DWORD *)(v7 + 0x24); /*0x5417ed*/
      v9 = *(_WORD *)(v7 + 8); /*0x5417f2*/
      if ( !v8 ) /*0x5417f6*/
      {
        sub_7287C0(v7, 0); /*0x5417fb*/
        v8 = *(_DWORD *)(v6[0x2D] + 0x24); /*0x541809*/
        if ( !v9 ) /*0x54180c*/
        {
LABEL_17:
          v15 = v6[0x2D]; /*0x541899*/
          v3 = a1; /*0x5418a1*/
          if ( v15 ) /*0x5418a5*/
            *(_WORD *)(v15 + 0x2E) |= 4u; /*0x5418a7*/
          goto LABEL_21; /*0x5418ac*/
        }
        v10 = *(_DWORD **)(v6[0x2D] + 0x24); /*0x541812*/
        v11 = v9; /*0x541814*/
        do /*0x541849*/
        {
          *v10 = dword_B25AE0; /*0x541826*/
          v10[1] = dword_B25AE4; /*0x54182e*/
          v10[2] = dword_B25AE8; /*0x541837*/
          v10[3] = dword_B25AEC; /*0x541840*/
          v10 += 4; /*0x541843*/
          --v11; /*0x541846*/
        }
        while ( v11 ); /*0x541849*/
        v4 = v17; /*0x54184b*/
      }
      if ( v9 ) /*0x541852*/
      {
        v12 = (float *)(v8 + 8); /*0x541854*/
        v13 = v9; /*0x541857*/
        do /*0x541897*/
        {
          if ( (_BYTE)a3 ) /*0x541865*/
          {
            v12[0xFFFFFFFE] = v12[0xFFFFFFFE] + i[0xFFFFFFFE]; /*0x54186d*/
            v12[0xFFFFFFFF] = i[0xFFFFFFFF] + v12[0xFFFFFFFF]; /*0x541876*/
            v14 = *v12 + *i; /*0x54187b*/
          }
          else
          {
            v12[0xFFFFFFFE] = i[0xFFFFFFFE]; /*0x541883*/
            v12[0xFFFFFFFF] = i[0xFFFFFFFF]; /*0x541889*/
            v14 = *i; /*0x54188c*/
          }
          *v12 = v14; /*0x54188f*/
          v12 += 4; /*0x541891*/
          --v13; /*0x541894*/
        }
        while ( v13 ); /*0x541897*/
      }
      goto LABEL_17; /*0x541897*/
    }
  }
}
