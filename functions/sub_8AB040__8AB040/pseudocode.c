void __cdecl sub_8AB040(_DWORD *a1, int a2, char a3)
{
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx
  int v9; // eax
  double v10; // st7
  double v11; // st7
  bool v12; // c0
  bool v13; // c3
  double v14; // st7
  double v15; // st7
  bool v16; // c0
  bool v17; // c3
  double v18; // st7
  float *v19; // eax
  float *v20; // esi
  bool v21; // zf
  float *v22; // edi
  int v23; // ebp
  __int16 v24; // cx
  unsigned int v25; // edx
  void (__thiscall *v26)(float *, _DWORD); // eax
  int v27; // eax
  int v28; // edi
  int v29; // eax
  int v30; // esi
  int i; // eax
  float v32; // [esp+4h] [ebp-44h]
  float v33; // [esp+18h] [ebp-30h]
  float v34; // [esp+1Ch] [ebp-2Ch]
  float v35; // [esp+20h] [ebp-28h]
  float v36[9]; // [esp+24h] [ebp-24h] BYREF
  float v37; // [esp+4Ch] [ebp+4h]

  if ( a1 )
  {
    v4 = sub_497420((int)a1);
    v5 = v4;
    if ( v4 )
    {
      v6 = *(_DWORD *)(v4 + 0x10);
      v7 = 0;
      if ( v6 )
      {
        v8 = *(_DWORD *)(v6 + 8);
        if ( !v8 || v8 == 0xFFFFFFEC )
          v7 = 0;
        else
          v7 = *(_DWORD *)(v8 + 0x30);
      }
      v9 = (v7 >> 8) & 0x1F;
      if ( a3 )
      {
        v37 = *(float *)(8 * v9 + 0xB2ED68);
        v10 = *(float *)(8 * v9 + 0xB2ED6C);
      }
      else
      {
        v37 = *(float *)(8 * v9 + 0xB2EC68);
        v10 = *(float *)(8 * v9 + 0xB2EC6C);
      }
      v33 = v10;
      v11 = *(float *)(v5 + 0x14);
      v12 = v37 < v11;
      v13 = v37 == v11;
      v14 = v37;
      if ( !v12 && !v13 )
        v14 = *(float *)(v5 + 0x14);
      v34 = v14;
      v15 = *(float *)(v5 + 0x18);
      v16 = v33 < v15;
      v17 = v33 == v15;
      v18 = v33;
      if ( !v16 && !v17 )
        v18 = *(float *)(v5 + 0x18);
      v19 = (float *)sub_700010(a1, (int)dword_BA7F3C);
      v20 = v19;
      if ( v19 )
      {
        if ( *((_DWORD *)v19 + 0x18) <= 1u )
        {
          sub_8AA7F0(v19);
          v21 = *((_DWORD *)v20 + 0x14) == 0;
          *((_DWORD *)v20 + 0x18) = 1;
          if ( v21 )
          {
            sub_401080(v36, 0xC, 3, (void *(__thiscall *)(void *))sub_8AA460);
            v36[1] = v34;
            v35 = v18;
            v36[2] = v35;
            v36[0] = 0.0;
            v36[4] = v37;
            v36[5] = v33;
            v36[3] = flt_A57F50;
            v36[7] = 1.0;
            v36[8] = 1.0;
            v36[6] = flt_A3D65C;
            sub_8AA480((unsigned int *)v20 + 0x10, 3u);
            v22 = v36;
            v23 = 3;
            do
            {
              sub_8AB000((unsigned int *)v20, (int)v22);
              v22 += 3;
              --v23;
            }
            while ( v23 );
            v24 = *((_WORD *)v20 + 4);
            v25 = *(_DWORD *)v20;
            v20[5] = 0.0;
            v26 = *(void (__thiscall **)(float *, _DWORD))(v25 + 0x4C);
            v20[6] = 1.0;
            v20[3] = 1.0;
            *((_WORD *)v20 + 4) = v24 & 0xFE30 | 0x1C5;
            v20[4] = 0.0;
            v32 = -flt_A7DEB4;
            v26(v20, LODWORD(v32));
          }
        }
      }
    }
    v27 = (*(int (__thiscall **)(_DWORD *))(*a1 + 8))(a1);
    v28 = v27;
    if ( v27 )
    {
      v29 = *(unsigned __int16 *)(v27 + 0xB6);
      v30 = 0;
      if ( *(_WORD *)(v28 + 0xB6) )
      {
        if ( v29 )
          goto LABEL_25;
        for ( i = 0; ; i = *(_DWORD *)(*(_DWORD *)(v28 + 0xB0) + 4 * v30) )
        {
          sub_8AB040(i, a2, a3);
          if ( *(unsigned __int16 *)(v28 + 0xB6) <= (unsigned int)++v30 )
            break;
LABEL_25:
          ;
        }
      }
    }
  }
}
