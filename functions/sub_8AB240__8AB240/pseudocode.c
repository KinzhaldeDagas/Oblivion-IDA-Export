void __cdecl sub_8AB240(float a1, float a2)
{
  float v2; // ebp
  int v3; // eax
  _DWORD *v4; // ecx
  unsigned int v5; // esi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // edi
  _DWORD *v10; // esi
  bool v11; // zf
  int v12; // ebx
  float *v13; // edi
  __int16 v14; // cx
  float v15; // edx
  void (__thiscall *v16)(_DWORD *, _DWORD); // eax
  int v17; // eax
  _DWORD *v18; // esi
  int v19; // eax
  int v20; // edi
  int v21; // eax
  int v22; // esi
  int i; // eax
  float v24; // [esp+4h] [ebp-34h]
  float v25; // [esp+18h] [ebp-20h]
  float v26; // [esp+1Ch] [ebp-1Ch]
  float v27[6]; // [esp+20h] [ebp-18h] BYREF

  v2 = a1;
  if ( a1 != 0.0 )
  {
    v3 = sub_497420(SLODWORD(a1));
    if ( v3 )
    {
      v4 = *(_DWORD **)(v3 + 0x10);
      v5 = 0;
      if ( v4 )
      {
        v6 = v4[2];
        if ( !v6 || v6 == 0xFFFFFFEC )
          v7 = 0;
        else
          v7 = *(_DWORD *)(v6 + 0x30);
        v5 = v7 & 0xFFFFFFC0 | 8;
        if ( v6 )
        {
          v8 = v6 + 0x14;
          if ( v8 )
            *(_DWORD *)(v8 + 0x1C) = v5;
        }
        (*(void (__thiscall **)(_DWORD *))(*v4 + 0x80))(v4);
      }
      v9 = (v5 >> 8) & 0x1F;
      a1 = *(float *)(4 * v9 + 0xB2EE68);
      v10 = sub_700010((_DWORD *)LODWORD(v2), (int)dword_BA7F3C);
      if ( v10 )
      {
        if ( a1 >= 0.0 )
        {
          v25 = *(float *)(8 * v9 + 0xB2E660);
          v26 = *(float *)(8 * v9 + 0xB2E664);
          sub_8AA7F0((float *)v10);
          v11 = v10[0x14] == 0;
          v12 = 2;
          v10[0x18] = 2;
          if ( v11 )
          {
            sub_401080(v27, 0xC, 2, (void *(__thiscall *)(void *))sub_8AA460);
            v27[1] = 0.0;
            v27[2] = 0.0;
            v27[0] = 0.0;
            v27[4] = v25;
            v27[5] = v26;
            v27[3] = a1;
            sub_8AA480(v10 + 0x10, 2u);
            v13 = v27;
            do
            {
              sub_8AB000(v10, (int)v13);
              v13 += 3;
              --v12;
            }
            while ( v12 );
            v14 = *((_WORD *)v10 + 4);
            v15 = *(float *)v10;
            *((float *)v10 + 5) = a2;
            v16 = *(void (__thiscall **)(_DWORD *, _DWORD))(LODWORD(v15) + 0x4C);
            *((float *)v10 + 6) = a1;
            *((float *)v10 + 4) = 0.0;
            *((_WORD *)v10 + 4) = v14 & 0xFE30 | 0xC5;
            *((float *)v10 + 3) = 1.0;
            v24 = -flt_A7DEB4;
            v16(v10, LODWORD(v24));
          }
        }
      }
    }
    else
    {
      v17 = sub_47FAC0(SLODWORD(v2));
      if ( v17 )
      {
        v18 = *(_DWORD **)(v17 + 0x10);
        if ( v18 )
        {
          if ( (*sub_497340(v18, &a1) & 0x1F00) == 0x1600 )
            (*(void (__thiscall **)(_DWORD *, int))(*v18 + 0x9C))(v18, 6);
        }
      }
    }
    v19 = (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v2) + 8))(COERCE_FLOAT(LODWORD(v2)));
    v20 = v19;
    if ( v19 )
    {
      v21 = *(unsigned __int16 *)(v19 + 0xB6);
      v22 = 0;
      if ( *(_WORD *)(v20 + 0xB6) )
      {
        if ( v21 )
          goto LABEL_26;
        for ( i = 0; ; i = *(_DWORD *)(*(_DWORD *)(v20 + 0xB0) + 4 * v22) )
        {
          sub_8AB240(i, a2);
          if ( *(unsigned __int16 *)(v20 + 0xB6) <= (unsigned int)++v22 )
            break;
LABEL_26:
          ;
        }
      }
    }
  }
}
