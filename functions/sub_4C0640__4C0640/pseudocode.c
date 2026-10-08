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
  int v12; // eax
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
  int v32; // eax
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

  if ( !*(this + 9) ) /*0x4c066b*/
    return 0; /*0x4c0671*/
  v2 = SettingTexturePctThreshold; /*0x4c0693*/
  if ( v2 < 0.0 ) /*0x4c0698*/
    v2 = 0.0; /*0x4c069c*/
  v43 = v2; /*0x4c069e*/
  v3 = v43; /*0x4c06ac*/
  if ( v43 > 1.0 ) /*0x4c06b1*/
    v3 = dbl_A45EB8; /*0x4c06b5*/
  v44 = v3; /*0x4c06c0*/
  v75 = dword_B08B5C; /*0x4c06c4*/
  v4 = dword_B08B64; /*0x4c06c8*/
  v5 = dword_B08B64 == 1; /*0x4c06cd*/
  LODWORD(flt_B35BF0[0]) = dword_B08B64; /*0x4c06d0*/
  if ( !v5 && v4 != 2 && v4 != 4 && v4 != 8 ) /*0x4c06e4*/
  {
    v4 = 2; /*0x4c06e6*/
    LODWORD(flt_B35BF0[0]) = 2; /*0x4c06eb*/
  }
  v42 = 0.0; /*0x4c06f0*/
  do /*0x4c1006*/
  {
    v6 = 0; /*0x4c0700*/
    for ( i = v4; i < 0x10; i += 2 * v4 ) /*0x4c0709*/
    {
      for ( j = v4; j < 0x10; j += 2 * LODWORD(flt_B35BF0[0]) ) /*0x4c0717*/
      {
        v7 = (_DWORD *)FormHeapAlloc(0x40u); /*0x4c073d*/
        _memset((int)v7, 0, 0x40u); /*0x4c0742*/
        v8 = j + i + 0x10 * j; /*0x4c075b*/
        v9 = (TESChildCELL **)(*(this + 9) + 4 * LODWORD(v42) + 0x20); /*0x4c0769*/
        if ( *v9 ) /*0x4c0764*/
        {
          Position = TESObjectREFR_GetPosition(*v9); /*0x4c077c*/
          for ( k = 0; Position; Position = *((float **)Position + 1) ) /*0x4c0788*/
          {
            if ( v6 >= 0x10 ) /*0x4c0791*/
              break; /*0x4c0791*/
            if ( k > v75 ) /*0x4c079f*/
              break; /*0x4c079f*/
            v10 = *(_DWORD **)Position; /*0x4c07a9*/
            if ( *(_DWORD *)Position ) /*0x4c07a9*/
            {
              ++k; /*0x4c07b3*/
              v11 = (float *)FormHeapAlloc(0x44u); /*0x4c07ba*/
              v62 = v11; /*0x4c07c2*/
              if ( v11 ) /*0x4c07d0*/
              {
                sub_7C28E0(v11); /*0x4c07d4*/
                v12 = (int)v62; /*0x4c07d9*/
              }
              else
              {
                v12 = 0; /*0x4c07df*/
              }
              v7[v6] = v12; /*0x4c07ee*/
              _memset(v12, 0, 0x44u); /*0x4c07f2*/
              *(_DWORD *)v7[v6] = sub_4AF3F0(v10); /*0x4c0805*/
              *(_DWORD *)(v7[v6] + 4) = v10[3]; /*0x4c080e*/
              *(float *)(v7[v6] + 0x14) = flt_B080DC; /*0x4c081b*/
              *(float *)(v7[v6] + 0x18) = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v10 + 0x168))(v10); /*0x4c082e*/
              *(float *)(v7[v6] + 0x10) = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v10 + 0x160))(v10); /*0x4c0841*/
              *(float *)(v7[v6] + 8) = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v10 + 0x150))(v10); /*0x4c0854*/
              *(float *)(v7[v6] + 0xC) = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v10 + 0x158))(v10); /*0x4c0867*/
              *(_BYTE *)(v7[v6] + 0x1C) = (*(int (__thiscall **)(_DWORD *))(*v10 + 0x170))(v10); /*0x4c087a*/
              *(_BYTE *)(v7[v6] + 0x1E) = (*(int (__thiscall **)(_DWORD *))(*v10 + 0x180))(v10); /*0x4c088d*/
              *(_BYTE *)(v7[v6] + 0x1D) = (*(int (__thiscall **)(_DWORD *))(*v10 + 0x178))(v10); /*0x4c08a0*/
              v45 = (double)(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v10 + 0x120))(v10) / fCostant_100; /*0x4c08cd*/
              if ( v44 >= sub_4BF160(this, v42, (unsigned __int16)v8 - 0x12) ) /*0x4c08e1*/
                v13 = 0.0; /*0x4c08e9*/
              else
                v13 = v45; /*0x4c08e3*/
              v14 = (float *)v7[v6]; /*0x4c08eb*/
              v63 = v13; /*0x4c08ef*/
              v14[8] = v63; /*0x4c08fe*/
              if ( v44 >= sub_4BF160(this, v42, (unsigned __int16)v8 - 0x11) ) /*0x4c091e*/
                v15 = 0.0; /*0x4c0926*/
              else
                v15 = v45; /*0x4c0920*/
              v64 = v15; /*0x4c092c*/
              v14[9] = v64; /*0x4c0938*/
              if ( v44 >= sub_4BF160(this, v42, (unsigned __int16)v8 - 0x10) ) /*0x4c0950*/
                v16 = 0.0; /*0x4c0958*/
              else
                v16 = v45; /*0x4c0952*/
              v65 = v16; /*0x4c095e*/
              v14[0xA] = v65; /*0x4c096d*/
              if ( v44 >= sub_4BF160(this, v42, (unsigned __int16)v8 - 1) ) /*0x4c0982*/
                v17 = 0.0; /*0x4c098a*/
              else
                v17 = v45; /*0x4c0984*/
              v66 = v17; /*0x4c0990*/
              v14[0xB] = v66; /*0x4c099a*/
              if ( v44 >= sub_4BF160(this, v42, v8) ) /*0x4c09b1*/
                v18 = 0.0; /*0x4c09b9*/
              else
                v18 = v45; /*0x4c09b3*/
              v67 = v18; /*0x4c09bf*/
              v14[0xC] = v67; /*0x4c09ce*/
              if ( v44 >= sub_4BF160(this, v42, (unsigned __int16)v8 + 1) ) /*0x4c09e3*/
                v19 = 0.0; /*0x4c09eb*/
              else
                v19 = v45; /*0x4c09e5*/
              v68 = v19; /*0x4c09f1*/
              v14[0xD] = v68; /*0x4c09fd*/
              if ( v44 >= sub_4BF160(this, v42, (unsigned __int16)v8 + 0x10) ) /*0x4c0a15*/
                v20 = 0.0; /*0x4c0a1d*/
              else
                v20 = v45; /*0x4c0a17*/
              v69 = v20; /*0x4c0a23*/
              v14[0xE] = v69; /*0x4c0a2f*/
              if ( v44 >= sub_4BF160(this, v42, (unsigned __int16)v8 + 0x11) ) /*0x4c0a47*/
                v21 = 0.0; /*0x4c0a4f*/
              else
                v21 = v45; /*0x4c0a49*/
              v70 = v21; /*0x4c0a55*/
              v14[0xF] = v70; /*0x4c0a64*/
              if ( v44 >= sub_4BF160(this, v42, (unsigned __int16)v8 + 0x12) ) /*0x4c0a7b*/
                v22 = 0.0; /*0x4c0a83*/
              else
                v22 = v45; /*0x4c0a7d*/
              v71 = v22; /*0x4c0a89*/
              v23 = v14 + 8; /*0x4c0a91*/
              v14[0x10] = v71; /*0x4c0a93*/
              v24 = 9; /*0x4c0a96*/
              v46 = 0.0; /*0x4c0a9d*/
              do /*0x4c0ab1*/
              {
                v25 = *v23++; /*0x4c0aa1*/
                --v24; /*0x4c0aa6*/
                v46 = v25 + v46; /*0x4c0aad*/
              }
              while ( v24 ); /*0x4c0ab1*/
              if ( v46 / dbl_A45EB0 < v44 ) /*0x4c0ac4*/
              {
                v14[8] = 0.0; /*0x4c0ac8*/
                v14[9] = 0.0; /*0x4c0aca*/
                v14[0xA] = 0.0; /*0x4c0acd*/
                v14[0xB] = 0.0; /*0x4c0ad0*/
                v14[0xC] = 0.0; /*0x4c0ad3*/
                v14[0xD] = 0.0; /*0x4c0ad6*/
                v14[0xE] = 0.0; /*0x4c0ad9*/
                v14[0xF] = 0.0; /*0x4c0adc*/
                v14[0x10] = 0.0; /*0x4c0adf*/
              }
              ++v6; /*0x4c0ae2*/
            }
          }
        }
        v26 = dbl_A2FC80; /*0x4c0af8*/
        for ( m = 0; m < 0x20; m += 4 ) /*0x4c0afe*/
        {
          v27 = *(this + 9); /*0x4c0b0e*/
          v28 = (TESChildCELL **)(*(_DWORD *)(v27 + 4 * LODWORD(v42) + 0x30) + m); /*0x4c0b1d*/
          if ( *v28 ) /*0x4c0b19*/
          {
            if ( *(_DWORD *)(v27 + 4 * LODWORD(v42) + 0x40) ) /*0x4c0b2a*/
            {
              v29 = *(_DWORD *)(v27 + 4 * LODWORD(v42) + 0x40); /*0x4c0b37*/
              if ( *(float *)(*(_DWORD *)(v29 + 4 * v8 - 0x48) + m) > v26 /*0x4c0bd0*/
                || *(float *)(*(_DWORD *)(v29 + 4 * v8 - 0x44) + m) > v26
                || *(float *)(*(_DWORD *)(v29 + 4 * v8 - 0x40) + m) > v26
                || *(float *)(*(_DWORD *)(v29 + 4 * v8 - 4) + m) > v26
                || *(float *)(m + *(_DWORD *)(v29 + 4 * v8)) > v26
                || *(float *)(*(_DWORD *)(v29 + 4 * v8 + 4) + m) > v26
                || *(float *)(*(_DWORD *)(v29 + 4 * v8 + 0x40) + m) > v26
                || *(float *)(*(_DWORD *)(v29 + 4 * v8 + 0x44) + m) > v26
                || *(float *)(*(_DWORD *)(v29 + 4 * v8 + 0x48) + m) > v26 )
              {
                v59 = 0; /*0x4c0bda*/
                for ( n = TESObjectREFR_GetPosition(*v28); n; n = *((float **)n + 1) ) /*0x4c0bed*/
                {
                  if ( v6 >= 0x10 ) /*0x4c0bf6*/
                    break; /*0x4c0bf6*/
                  if ( v59 > v75 ) /*0x4c0c04*/
                    break; /*0x4c0c04*/
                  v30 = *(_DWORD **)n; /*0x4c0c0e*/
                  if ( *(_DWORD *)n ) /*0x4c0c0e*/
                  {
                    v31 = (float *)FormHeapAlloc(0x44u); /*0x4c0c1a*/
                    v47 = v31; /*0x4c0c22*/
                    if ( v31 ) /*0x4c0c30*/
                    {
                      sub_7C28E0(v31); /*0x4c0c34*/
                      v32 = (int)v47; /*0x4c0c39*/
                    }
                    else
                    {
                      v32 = 0; /*0x4c0c3f*/
                    }
                    ++v59; /*0x4c0c41*/
                    v7[v6] = v32; /*0x4c0c53*/
                    _memset(v32, 0, 0x44u); /*0x4c0c57*/
                    v33 = (_DWORD *)(v7[v6] + 0x20); /*0x4c0c62*/
                    *v33 = 0; /*0x4c0c65*/
                    v33[1] = 0; /*0x4c0c67*/
                    v33[2] = 0; /*0x4c0c6a*/
                    v33[3] = 0; /*0x4c0c6d*/
                    v33[4] = 0; /*0x4c0c70*/
                    v33[5] = 0; /*0x4c0c73*/
                    v33[6] = 0; /*0x4c0c76*/
                    v33[7] = 0; /*0x4c0c79*/
                    v33[8] = 0; /*0x4c0c7c*/
                    *(_DWORD *)v7[v6] = sub_4AF3F0(v30); /*0x4c0c8d*/
                    *(_DWORD *)(v7[v6] + 4) = v30[3]; /*0x4c0c96*/
                    *(float *)(v7[v6] + 0x14) = flt_B080DC; /*0x4c0ca3*/
                    *(float *)(v7[v6] + 0x18) = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v30 + 0x168))(v30); /*0x4c0cb6*/
                    *(float *)(v7[v6] + 0x10) = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v30 + 0x160))(v30); /*0x4c0cc9*/
                    *(float *)(v7[v6] + 8) = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v30 + 0x150))(v30); /*0x4c0cdc*/
                    *(float *)(v7[v6] + 0xC) = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v30 + 0x158))(v30); /*0x4c0cef*/
                    *(_BYTE *)(v7[v6] + 0x1C) = (*(int (__thiscall **)(_DWORD *))(*v30 + 0x170))(v30); /*0x4c0d02*/
                    *(_BYTE *)(v7[v6] + 0x1E) = (*(int (__thiscall **)(_DWORD *))(*v30 + 0x180))(v30); /*0x4c0d15*/
                    *(_BYTE *)(v7[v6] + 0x1D) = (*(int (__thiscall **)(_DWORD *))(*v30 + 0x178))(v30); /*0x4c0d28*/
                    v48 = (double)(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v30 + 0x120))(v30) / fCostant_100; /*0x4c0d48*/
                    v34 = v44; /*0x4c0d6e*/
                    v35 = v48; /*0x4c0d73*/
                    if ( v44 >= (double)*(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * LODWORD(v42) + 0x40) /*0x4c0d77*/
                                                             + 4 * v8
                                                             - 0x40)
                                                 + m) )
                      v48 = 0.0; /*0x4c0d83*/
                    v36 = (float *)v7[v6]; /*0x4c0d87*/
                    v36[0xA] = v48; /*0x4c0d93*/
                    if ( *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * LODWORD(v42) + 0x40) + 4 * v8 - 0x44) + m) <= v34 ) /*0x4c0db3*/
                    {
                      v49 = 0.0; /*0x4c0dbd*/
                      v37 = v35; /*0x4c0dc1*/
                      v38 = 0.0; /*0x4c0dc1*/
                    }
                    else
                    {
                      v37 = v35; /*0x4c0db5*/
                      v38 = 0.0; /*0x4c0db5*/
                      v49 = v37; /*0x4c0db7*/
                    }
                    v36[9] = v49; /*0x4c0dcb*/
                    if ( *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * LODWORD(v42) + 0x40) + 4 * v8 - 0x48) + m) <= v34 ) /*0x4c0de3*/
                      v50 = v38; /*0x4c0ded*/
                    else
                      v50 = v37; /*0x4c0de5*/
                    v36[8] = v50; /*0x4c0dfa*/
                    if ( *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * LODWORD(v42) + 0x40) + 4 * v8 + 4) + m) <= v34 ) /*0x4c0e19*/
                      v51 = v38; /*0x4c0e23*/
                    else
                      v51 = v37; /*0x4c0e1b*/
                    v36[0xD] = v51; /*0x4c0e31*/
                    if ( *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * LODWORD(v42) + 0x40) + 4 * v8) + m) <= v34 ) /*0x4c0e48*/
                      v52 = v38; /*0x4c0e52*/
                    else
                      v52 = v37; /*0x4c0e4a*/
                    v36[0xC] = v52; /*0x4c0e60*/
                    if ( *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * LODWORD(v42) + 0x40) + 4 * v8 - 4) + m) <= v34 ) /*0x4c0e78*/
                      v53 = v38; /*0x4c0e82*/
                    else
                      v53 = v37; /*0x4c0e7a*/
                    v36[0xB] = v53; /*0x4c0e90*/
                    if ( *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * LODWORD(v42) + 0x40) + 4 * v8 + 0x48) + m) <= v34 ) /*0x4c0ea8*/
                      v54 = v38; /*0x4c0eb2*/
                    else
                      v54 = v37; /*0x4c0eaa*/
                    v36[0x10] = v54; /*0x4c0ec0*/
                    if ( *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * LODWORD(v42) + 0x40) + 4 * v8 + 0x44) + m) <= v34 ) /*0x4c0ed8*/
                      v55 = v38; /*0x4c0ee2*/
                    else
                      v55 = v37; /*0x4c0eda*/
                    v36[0xF] = v55; /*0x4c0ef0*/
                    if ( *(float *)(*(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * LODWORD(v42) + 0x40) + 4 * v8 + 0x40) + m) <= v34 ) /*0x4c0f08*/
                      v56 = v38; /*0x4c0f12*/
                    else
                      v56 = v37; /*0x4c0f0a*/
                    v39 = 9; /*0x4c0f1a*/
                    v36[0xE] = v56; /*0x4c0f1f*/
                    v40 = v36 + 8; /*0x4c0f26*/
                    v57 = v38; /*0x4c0f28*/
                    do /*0x4c0f3d*/
                    {
                      ++v40; /*0x4c0f30*/
                      --v39; /*0x4c0f33*/
                      v57 = v57 + v40[0xFFFFFFFF]; /*0x4c0f39*/
                    }
                    while ( v39 ); /*0x4c0f3d*/
                    if ( v57 / dbl_A45EB0 < v34 ) /*0x4c0f50*/
                    {
                      v36[8] = 0.0; /*0x4c0f54*/
                      v36[9] = 0.0; /*0x4c0f56*/
                      v36[0xA] = 0.0; /*0x4c0f59*/
                      v36[0xB] = 0.0; /*0x4c0f5c*/
                      v36[0xC] = 0.0; /*0x4c0f5f*/
                      v36[0xD] = 0.0; /*0x4c0f62*/
                      v36[0xE] = 0.0; /*0x4c0f65*/
                      v36[0xF] = 0.0; /*0x4c0f68*/
                      v36[0x10] = 0.0; /*0x4c0f6b*/
                    }
                    ++v6; /*0x4c0f6e*/
                  }
                }
                v26 = dbl_A2FC80; /*0x4c0f84*/
              }
            }
          }
        }
        if ( *v7 ) /*0x4c0f9e*/
          NiTMap_SetAt((_DWORD *)(0x10 * LODWORD(v42) + *(this + 9) + 0x54), v8, (int)v7); /*0x4c0fba*/
        else
          FormHeapFree((unsigned int)v7); /*0x4c0fc1*/
        v4 = LODWORD(flt_B35BF0[0]); /*0x4c0fcd*/
        v6 = 0; /*0x4c0fd5*/
      }
    }
    ++LODWORD(v42); /*0x4c1002*/
  }
  while ( SLODWORD(v42) < 4 ); /*0x4c1006*/
  return 1; /*0x4c0673*/
}
