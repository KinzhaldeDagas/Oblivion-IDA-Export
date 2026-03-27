char __thiscall sub_4C0640(_DWORD *this)
{
  double v2; // st7
  double v3; // st7
  int v4; // eax
  bool v5; // zf
  int v6; // edi
  _DWORD *v7; // ebp
  int v8; // ebx
  TESChildCELL **v9; // eax
  _DWORD *v10; // esi
  float *v11; // eax
  float *v12; // eax
  double v13; // st7
  float *v14; // esi
  double v15; // st7
  double v16; // st7
  double v17; // st7
  double v18; // st7
  double v19; // st7
  double v20; // st7
  double v21; // st7
  double v22; // st6
  float *v23; // eax
  int v24; // edx
  double v25; // st6
  double v26; // st7
  int v27; // eax
  TESChildCELL **v28; // esi
  int v29; // ecx
  _DWORD *v30; // esi
  float *v31; // eax
  float *v32; // eax
  _DWORD *v33; // eax
  double v34; // st7
  double v35; // st6
  float *v36; // ecx
  double v37; // st5
  double v38; // st6
  int v39; // edx
  float *v40; // eax
  float v42; // [esp+18h] [ebp-34h]
  float v43; // [esp+1Ch] [ebp-30h]
  float v44; // [esp+1Ch] [ebp-30h]
  float v45; // [esp+20h] [ebp-2Ch]
  float v46; // [esp+20h] [ebp-2Ch]
  float *v47; // [esp+20h] [ebp-2Ch]
  float v48; // [esp+20h] [ebp-2Ch]
  float v49; // [esp+20h] [ebp-2Ch]
  float v50; // [esp+20h] [ebp-2Ch]
  float v51; // [esp+20h] [ebp-2Ch]
  float v52; // [esp+20h] [ebp-2Ch]
  float v53; // [esp+20h] [ebp-2Ch]
  float v54; // [esp+20h] [ebp-2Ch]
  float v55; // [esp+20h] [ebp-2Ch]
  float v56; // [esp+20h] [ebp-2Ch]
  float v57; // [esp+20h] [ebp-2Ch]
  int k; // [esp+24h] [ebp-28h]
  int v59; // [esp+24h] [ebp-28h]
  float *Position; // [esp+28h] [ebp-24h]
  float *n; // [esp+28h] [ebp-24h]
  float *v62; // [esp+2Ch] [ebp-20h]
  float v63; // [esp+2Ch] [ebp-20h]
  float v64; // [esp+2Ch] [ebp-20h]
  float v65; // [esp+2Ch] [ebp-20h]
  float v66; // [esp+2Ch] [ebp-20h]
  float v67; // [esp+2Ch] [ebp-20h]
  float v68; // [esp+2Ch] [ebp-20h]
  float v69; // [esp+2Ch] [ebp-20h]
  float v70; // [esp+2Ch] [ebp-20h]
  float v71; // [esp+2Ch] [ebp-20h]
  int m; // [esp+2Ch] [ebp-20h]
  int j; // [esp+30h] [ebp-1Ch]
  int i; // [esp+34h] [ebp-18h]
  int v75; // [esp+38h] [ebp-14h]

  if ( !*(this + 9) )
    return 0;
  v2 = SettingTexturePctThreshold;
  if ( v2 < 0.0 )
    v2 = 0.0;
  v43 = v2;
  v3 = v43;
  if ( v43 > 1.0 )
    v3 = dbl_A45EB8;
  v44 = v3;
  v75 = dword_B08B5C;
  v4 = dword_B08B64;
  v5 = dword_B08B64 == 1;
  dword_B35BF0 = dword_B08B64;
  if ( !v5 && v4 != 2 && v4 != 4 && v4 != 8 )
  {
    v4 = 2;
    dword_B35BF0 = 2;
  }
  v42 = 0.0;
  do
  {
    v6 = 0;
    for ( i = v4; i < 0x10; i += 2 * v4 )
    {
      for ( j = v4; j < 0x10; j += 2 * dword_B35BF0 )
      {
        v7 = (_DWORD *)FormHeapAlloc(0x40u);
        _memset(v7, 0, 0x40);
        v8 = j + i + 0x10 * j;
        v9 = (TESChildCELL **)(*(this + 9) + 4 * LODWORD(v42) + 0x20);
        if ( *v9 )
        {
          Position = TESObjectREFR_GetPosition(*v9);
          for ( k = 0; Position; Position = *((float **)Position + 1) )
          {
            if ( v6 >= 0x10 )
              break;
            if ( k > v75 )
              break;
            v10 = *(_DWORD **)Position;
            if ( *(_DWORD *)Position )
            {
              ++k;
              v11 = (float *)FormHeapAlloc(0x44u);
              v62 = v11;
              if ( v11 )
              {
                sub_7C28E0(v11);
                v12 = v62;
              }
              else
              {
                v12 = 0;
              }
              v7[v6] = v12;
              _memset(v12, 0, 0x44);
              *(_DWORD *)v7[v6] = sub_4AF3F0(v10);
              *(_DWORD *)(v7[v6] + 4) = v10[3];
              *(float *)(v7[v6] + 0x14) = flt_B080DC;
              *(float *)(v7[v6] + 0x18) = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v10 + 0x168))(v10);
              *(float *)(v7[v6] + 0x10) = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v10 + 0x160))(v10);
              *(float *)(v7[v6] + 8) = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v10 + 0x150))(v10);
              *(float *)(v7[v6] + 0xC) = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v10 + 0x158))(v10);
              *(_BYTE *)(v7[v6] + 0x1C) = (*(int (__thiscall **)(_DWORD *))(*v10 + 0x170))(v10);
              *(_BYTE *)(v7[v6] + 0x1E) = (*(int (__thiscall **)(_DWORD *))(*v10 + 0x180))(v10);
              *(_BYTE *)(v7[v6] + 0x1D) = (*(int (__thiscall **)(_DWORD *))(*v10 + 0x178))(v10);
              v45 = (double)(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v10 + 0x120))(v10) / fCostant_100;
              if ( v44 >= sub_4BF160(this, v42, (unsigned __int16)v8 - 0x12) )
                v13 = 0.0;
              else
                v13 = v45;
              v14 = (float *)v7[v6];
              v63 = v13;
              v14[8] = v63;
              if ( v44 >= sub_4BF160(this, v42, (unsigned __int16)v8 - 0x11) )
                v15 = 0.0;
              else
                v15 = v45;
              v64 = v15;
              v14[9] = v64;
              if ( v44 >= sub_4BF160(this, v42, (unsigned __int16)v8 - 0x10) )
                v16 = 0.0;
              else
                v16 = v45;
              v65 = v16;
              v14[0xA] = v65;
              if ( v44 >= sub_4BF160(this, v42, (unsigned __int16)v8 - 1) )
                v17 = 0.0;
              else
                v17 = v45;
              v66 = v17;
              v14[0xB] = v66;
              if ( v44 >= sub_4BF160(this, v42, v8) )
                v18 = 0.0;
              else
                v18 = v45;
              v67 = v18;
              v14[0xC] = v67;
              if ( v44 >= sub_4BF160(this, v42, (unsigned __int16)v8 + 1) )
                v19 = 0.0;
              else
                v19 = v45;
              v68 = v19;
              v14[0xD] = v68;
              if ( v44 >= sub_4BF160(this, v42, (unsigned __int16)v8 + 0x10) )
                v20 = 0.0;
              else
                v20 = v45;
              v69 = v20;
              v14[0xE] = v69;
              if ( v44 >= sub_4BF160(this, v42, (unsigned __int16)v8 + 0x11) )
                v21 = 0.0;
              else
                v21 = v45;
              v70 = v21;
              v14[0xF] = v70;
              if ( v44 >= sub_4BF160(this, v42, (unsigned __int16)v8 + 0x12) )
                v22 = 0.0;
              else
                v22 = v45;
              v71 = v22;
              v23 = v14 + 8;
              v14[0x10] = v71;
              v24 = 9;
              v46 = 0.0;
              do
              {
                v25 = *v23++;
                --v24;
                v46 = v25 + v46;
              }
              while ( v24 );
              if ( v46 / dbl_A45EB0 < v44 )
              {
                v14[8] = 0.0;
                v14[9] = 0.0;
                v14[0xA] = 0.0;
                v14[0xB] = 0.0;
                v14[0xC] = 0.0;
                v14[0xD] = 0.0;
                v14[0xE] = 0.0;
                v14[0xF] = 0.0;
                v14[0x10] = 0.0;
              }
              ++v6;
            }
          }
        }
        v26 = dbl_A2FC80;
        for ( m = 0; m < 0x20; m += 4 )
        {
          v27 = *(this + 9);
          v28 = (TESChildCELL **)(*(_DWORD *)(v27 + 4 * LODWORD(v42) + 0x30) + m);
          if ( *v28 )
          {
            if ( *(_DWORD *)(v27 + 4 * LODWORD(v42) + 0x40) )
            {
              v29 = *(_DWORD *)(v27 + 4 * LODWORD(v42) + 0x40);
              if ( *(float *)(*(_DWORD *)(v29 + 4 * v8 - 0x48) + m) > v26
                || *(float *)(*(_DWORD *)(v29 + 4 * v8 - 0x44) + m) > v26
                || *(float *)(*(_DWORD *)(v29 + 4 * v8 - 0x40) + m) > v26
                || *(float *)(*(_DWORD *)(v29 + 4 * v8 - 4) + m) > v26
                || *(float *)(m + *(_DWORD *)(v29 + 4 * v8)) > v26
                || *(float *)(*(_DWORD *)(v29 + 4 * v8 + 4) + m) > v26
                || *(float *)(*(_DWORD *)(v29 + 4 * v8 + 0x40) + m) > v26
                || *(float *)(*(_DWORD *)(v29 + 4 * v8 + 0x44) + m) > v26
                || *(float *)(*(_DWORD *)(v29 + 4 * v8 + 0x48) + m) > v26 )
              {
                v59 = 0;
                for ( n = TESObjectREFR_GetPosition(*v28); n; n = *((float **)n + 1) )
                {
                  if ( v6 >= 0x10 )
                    break;
                  if ( v59 > v75 )
                    break;
                  v30 = *(_DWORD **)n;
                  if ( *(_DWORD *)n )
                  {
                    v31 = (float *)FormHeapAlloc(0x44u);
                    v47 = v31;
                    if ( v31 )
                    {
                      sub_7C28E0(v31);
                      v32 = v47;
                    }
                    else
                    {
                      v32 = 0;
                    }
                    ++v59;
                    v7[v6] = v32;
                    _memset(v32, 0, 0x44);
                    v33 = (_DWORD *)(v7[v6] + 0x20);
                    *v33 = 0;
                    v33[1] = 0;
                    v33[2] = 0;
                    v33[3] = 0;
                    v33[4] = 0;
                    v33[5] = 0;
                    v33[6] = 0;
                    v33[7] = 0;
                    v33[8] = 0;
                    *(_DWORD *)v7[v6] = sub_4AF3F0(v30);
                    *(_DWORD *)(v7[v6] + 4) = v30[3];
                    *(float *)(v7[v6] + 0x14) = flt_B080DC;
                    *(float *)(v7[v6] + 0x18) = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v30 + 0x168))(v30);
                    *(float *)(v7[v6] + 0x10) = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v30 + 0x160))(v30);
                    *(float *)(v7[v6] + 8) = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v30 + 0x150))(v30);
                    *(float *)(v7[v6] + 0xC) = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v30 + 0x158))(v30);
                    *(_BYTE *)(v7[v6] + 0x1C) = (*(int (__thiscall **)(_DWORD *))(*v30 + 0x170))(v30);
                    *(_BYTE *)(v7[v6] + 0x1E) = (*(int (__thiscall **)(_DWORD *))(*v30 + 0x180))(v30);
                    *(_BYTE *)(v7[v6] + 0x1D) = (*(int (__thiscall **)(_DWORD *))(*v30 + 0x178))(v30);
                    v48 = (double)(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v30 + 0x120))(v30) / fCostant_100;
                    v34 = v44;
                    v35 = v48;
                    if ( v44 >= (double)*(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * LODWORD(v42) + 0x40)
                                                             + 4 * v8
                                                             - 0x40)
                                                 + m) )
                      v48 = 0.0;
                    v36 = (float *)v7[v6];
                    v36[0xA] = v48;
                    if ( *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * LODWORD(v42) + 0x40) + 4 * v8 - 0x44) + m) <= v34 )
                    {
                      v49 = 0.0;
                      v37 = v35;
                      v38 = 0.0;
                    }
                    else
                    {
                      v37 = v35;
                      v38 = 0.0;
                      v49 = v37;
                    }
                    v36[9] = v49;
                    if ( *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * LODWORD(v42) + 0x40) + 4 * v8 - 0x48) + m) <= v34 )
                      v50 = v38;
                    else
                      v50 = v37;
                    v36[8] = v50;
                    if ( *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * LODWORD(v42) + 0x40) + 4 * v8 + 4) + m) <= v34 )
                      v51 = v38;
                    else
                      v51 = v37;
                    v36[0xD] = v51;
                    if ( *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * LODWORD(v42) + 0x40) + 4 * v8) + m) <= v34 )
                      v52 = v38;
                    else
                      v52 = v37;
                    v36[0xC] = v52;
                    if ( *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * LODWORD(v42) + 0x40) + 4 * v8 - 4) + m) <= v34 )
                      v53 = v38;
                    else
                      v53 = v37;
                    v36[0xB] = v53;
                    if ( *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * LODWORD(v42) + 0x40) + 4 * v8 + 0x48) + m) <= v34 )
                      v54 = v38;
                    else
                      v54 = v37;
                    v36[0x10] = v54;
                    if ( *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * LODWORD(v42) + 0x40) + 4 * v8 + 0x44) + m) <= v34 )
                      v55 = v38;
                    else
                      v55 = v37;
                    v36[0xF] = v55;
                    if ( *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * LODWORD(v42) + 0x40) + 4 * v8 + 0x40) + m) <= v34 )
                      v56 = v38;
                    else
                      v56 = v37;
                    v39 = 9;
                    v36[0xE] = v56;
                    v40 = v36 + 8;
                    v57 = v38;
                    do
                    {
                      ++v40;
                      --v39;
                      v57 = v57 + v40[0xFFFFFFFF];
                    }
                    while ( v39 );
                    if ( v57 / dbl_A45EB0 < v34 )
                    {
                      v36[8] = 0.0;
                      v36[9] = 0.0;
                      v36[0xA] = 0.0;
                      v36[0xB] = 0.0;
                      v36[0xC] = 0.0;
                      v36[0xD] = 0.0;
                      v36[0xE] = 0.0;
                      v36[0xF] = 0.0;
                      v36[0x10] = 0.0;
                    }
                    ++v6;
                  }
                }
                v26 = dbl_A2FC80;
              }
            }
          }
        }
        if ( *v7 )
          NiTMap_SetAt((_DWORD *)(0x10 * LODWORD(v42) + *(this + 9) + 0x54), v8, (int)v7);
        else
          FormHeapFree((unsigned int)v7);
        v4 = dword_B35BF0;
        v6 = 0;
      }
    }
    ++LODWORD(v42);
  }
  while ( SLODWORD(v42) < 4 );
  return 1;
}
