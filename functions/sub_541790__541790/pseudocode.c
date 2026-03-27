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

  v3 = a1;
  if ( a1 )
  {
    v4 = 0;
    v17 = 0;
    if ( *(_WORD *)(a1 + 0xB6) )
    {
      for ( i = (float *)(a2 + 8); ; i += 3 )
      {
        v6 = *(_DWORD **)(*(_DWORD *)(v3 + 0xB0) + 4 * v4);
        if ( v6 )
          break;
LABEL_21:
        v17 = ++v4;
        if ( *(unsigned __int16 *)(v3 + 0xB6) <= v4 )
          return;
      }
      if ( !(*(int (__thiscall **)(_DWORD *))(*v6 + 0x10))(v6) )
      {
        v16 = (*(int (__thiscall **)(_DWORD *))(*v6 + 8))(v6);
        if ( v16 )
          sub_541790(v16, a2, a3);
        goto LABEL_21;
      }
      v7 = v6[0x2D];
      v8 = *(_DWORD *)(v7 + 0x24);
      v9 = *(_WORD *)(v7 + 8);
      if ( !v8 )
      {
        sub_7287C0(v7, 0);
        v8 = *(_DWORD *)(v6[0x2D] + 0x24);
        if ( !v9 )
        {
LABEL_17:
          v15 = v6[0x2D];
          v3 = a1;
          if ( v15 )
            *(_WORD *)(v15 + 0x2E) |= 4u;
          goto LABEL_21;
        }
        v10 = *(_DWORD **)(v6[0x2D] + 0x24);
        v11 = v9;
        do
        {
          *v10 = dword_B25AE0;
          v10[1] = dword_B25AE4;
          v10[2] = dword_B25AE8;
          v10[3] = dword_B25AEC;
          v10 += 4;
          --v11;
        }
        while ( v11 );
        v4 = v17;
      }
      if ( v9 )
      {
        v12 = (float *)(v8 + 8);
        v13 = v9;
        do
        {
          if ( (_BYTE)a3 )
          {
            v12[0xFFFFFFFE] = v12[0xFFFFFFFE] + i[0xFFFFFFFE];
            v12[0xFFFFFFFF] = i[0xFFFFFFFF] + v12[0xFFFFFFFF];
            v14 = *v12 + *i;
          }
          else
          {
            v12[0xFFFFFFFE] = i[0xFFFFFFFE];
            v12[0xFFFFFFFF] = i[0xFFFFFFFF];
            v14 = *i;
          }
          *v12 = v14;
          v12 += 4;
          --v13;
        }
        while ( v13 );
      }
      goto LABEL_17;
    }
  }
}
