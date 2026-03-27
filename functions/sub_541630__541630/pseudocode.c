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

  v5 = a1;
  if ( a1 )
  {
    v6 = 0;
    if ( *(_WORD *)(a1 + 0xB6) )
    {
      v7 = a5;
      while ( 1 )
      {
        v8 = *(_DWORD **)(*(_DWORD *)(v5 + 0xB0) + 4 * v6);
        if ( v8 )
          break;
LABEL_21:
        if ( *(unsigned __int16 *)(v5 + 0xB6) <= (unsigned int)++v6 )
          return;
      }
      if ( !(*(int (__thiscall **)(_DWORD *))(*v8 + 0x10))(v8) )
      {
        v17 = (*(int (__thiscall **)(_DWORD *))(*v8 + 8))(v8);
        if ( v17 )
          sub_541630(v17, a2, a3, a4, v7);
        goto LABEL_21;
      }
      v9 = v8[0x2D];
      v10 = *(_DWORD *)(v9 + 0x24);
      v11 = *(_WORD *)(v9 + 8);
      if ( !v10 )
      {
        sub_7287C0(v9, 0);
        v10 = *(_DWORD *)(v8[0x2D] + 0x24);
        if ( !v11 )
        {
LABEL_17:
          v16 = v8[0x2D];
          v5 = a1;
          if ( v16 )
            *(_WORD *)(v16 + 0x2E) |= 4u;
          goto LABEL_21;
        }
        v12 = *(_DWORD **)(v8[0x2D] + 0x24);
        v13 = v11;
        do
        {
          *v12 = dword_B25AE0;
          v12[1] = dword_B25AE4;
          v12[2] = dword_B25AE8;
          v12[3] = dword_B25AEC;
          v12 += 4;
          --v13;
        }
        while ( v13 );
        v7 = a5;
      }
      if ( v11 )
      {
        v14 = (float *)(v10 + 8);
        v15 = v11;
        do
        {
          if ( (_BYTE)v7 )
          {
            v14[0xFFFFFFFE] = v14[0xFFFFFFFE] + a2;
            v14[0xFFFFFFFF] = v14[0xFFFFFFFF] + a3;
            *v14 = *v14 + a4;
          }
          else
          {
            v14[0xFFFFFFFE] = a2;
            v14[0xFFFFFFFF] = a3;
            *v14 = a4;
          }
          v14 += 4;
          --v15;
        }
        while ( v15 );
      }
      goto LABEL_17;
    }
  }
}
