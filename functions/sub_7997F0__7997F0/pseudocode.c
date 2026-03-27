void __thiscall sub_7997F0(int this, float *a2)
{
  int v2; // edi
  int v3; // ebp
  bool v4; // zf
  double v5; // st7
  int v6; // esi
  double v7; // st6
  double v8; // st5
  int v9; // eax
  int v10; // ecx
  double v11; // st4
  double v12; // st3
  double v13; // st7
  double v14; // st5
  int v15; // ecx
  double v16; // st2
  float *v17; // ecx
  double v18; // rt0
  double v19; // st3
  double v20; // st7
  int v21; // edx
  double v22; // st1
  float v23; // esi
  int v24; // eax
  unsigned int v25; // esi
  unsigned int v26; // eax
  unsigned int v27; // esi
  unsigned int v28; // ecx
  int v29; // edx
  float v30; // [esp+14h] [ebp-F0h]
  float v31; // [esp+14h] [ebp-F0h]
  int v32; // [esp+14h] [ebp-F0h]
  int v33; // [esp+14h] [ebp-F0h]
  int v34; // [esp+14h] [ebp-F0h]
  int v35; // [esp+14h] [ebp-F0h]
  int v36; // [esp+14h] [ebp-F0h]
  int v37; // [esp+14h] [ebp-F0h]
  int v38; // [esp+14h] [ebp-F0h]
  int v39; // [esp+18h] [ebp-ECh] BYREF
  float v40; // [esp+1Ch] [ebp-E8h]
  float v41; // [esp+20h] [ebp-E4h]
  float v42; // [esp+24h] [ebp-E0h]
  float v43; // [esp+28h] [ebp-DCh]
  double v44; // [esp+2Ch] [ebp-D8h]
  int v45; // [esp+34h] [ebp-D0h]
  int v46; // [esp+38h] [ebp-CCh]
  int v47; // [esp+3Ch] [ebp-C8h]
  float v48[3]; // [esp+40h] [ebp-C4h] BYREF
  float v49[3]; // [esp+4Ch] [ebp-B8h] BYREF
  int v50; // [esp+58h] [ebp-ACh] BYREF
  unsigned int v51; // [esp+5Ch] [ebp-A8h]
  int v52; // [esp+60h] [ebp-A4h]
  int v53; // [esp+64h] [ebp-A0h]
  float v54[6]; // [esp+68h] [ebp-9Ch] BYREF
  _BYTE v55[24]; // [esp+80h] [ebp-84h] BYREF
  float v56[3]; // [esp+98h] [ebp-6Ch] BYREF
  float v57[3]; // [esp+A4h] [ebp-60h] BYREF
  float v58[12]; // [esp+B0h] [ebp-54h] BYREF
  float v59[3]; // [esp+E0h] [ebp-24h] BYREF
  float v60[3]; // [esp+ECh] [ebp-18h] BYREF
  int v61; // [esp+100h] [ebp-4h]

  v2 = this;
  v47 = this;
  v3 = 0;
  if ( *(_DWORD *)(this + 0x24) )
  {
    if ( *(_DWORD *)(this + 0x20) )
    {
      if ( *(_DWORD *)(this + 0x2C) )
      {
        v51 = 0;
        v52 = 0;
        v53 = 0;
        v4 = *(_WORD *)(this + 0x1C) == 0;
        v61 = 0;
        if ( !v4 )
        {
          v5 = 0.0;
          v6 = 0;
          v7 = (0.0 - 0.0) * (0.0 - 0.0);
          v44 = v7;
          v8 = 0.0;
          while ( 1 )
          {
            v9 = *(_DWORD *)(v2 + 0x24);
            v10 = *(_DWORD *)(v2 + 0x20);
            v30 = *(float *)(v9 + v6) * *(float *)(v10 + v6);
            v40 = *(float *)(v6 + v10 + 4) * *(float *)(v6 + v9 + 4);
            *(float *)&v39 = v8;
            v11 = v30;
            v12 = (v5 - v30) * (v5 - v30);
            v13 = (v5 - v40) * (v5 - v40);
            v31 = v13 + v12 + v7;
            if ( v8 >= COERCE_FLOAT((SLODWORD(v31) >> 1) + 0x1FC00000) )
            {
              v14 = v40;
            }
            else
            {
              v14 = v40;
              v39 = (SLODWORD(v31) >> 1) + 0x1FC00000;
            }
            v15 = *(_DWORD *)(v2 + 0x20);
            v16 = *(float *)(v15 + v6);
            v17 = (float *)(v6 + v15);
            v49[0] = v16;
            *(float *)&v32 = (v49[0] - v11) * (v49[0] - v11) + v13 + v7;
            if ( *(float *)&v39 >= (double)COERCE_FLOAT((v32 >> 1) + 0x1FC00000) )
            {
              v20 = v12;
            }
            else
            {
              v48[0] = *v17;
              v18 = v12;
              v19 = v13 + (v48[0] - v11) * (v48[0] - v11);
              v20 = v18;
              *(float *)&v33 = v19 + v7;
              v39 = (v33 >> 1) + 0x1FC00000;
            }
            v21 = *(_DWORD *)(v2 + 0x20);
            v40 = *(float *)(v6 + v21);
            v22 = *(float *)(v6 + v21 + 4) - v14;
            *(float *)&v34 = v22 * v22 + (v40 - v11) * (v40 - v11) + v7;
            if ( *(float *)&v39 < (double)COERCE_FLOAT((v34 >> 1) + 0x1FC00000) )
            {
              v40 = *(float *)(v6 + v21);
              *(float *)&v35 = (v40 - v11) * (v40 - v11)
                             + (*(float *)(v6 + v21 + 4) - v14) * (*(float *)(v6 + v21 + 4) - v14)
                             + v7;
              v39 = (v35 >> 1) + 0x1FC00000;
            }
            *(float *)&v36 = (v17[1] - v14) * (v17[1] - v14) + v20 + v7;
            if ( *(float *)&v39 < (double)COERCE_FLOAT((v36 >> 1) + 0x1FC00000) )
            {
              *(float *)&v37 = v20 + (v17[1] - v14) * (v17[1] - v14) + v7;
              v39 = (v37 >> 1) + 0x1FC00000;
            }
            sub_799780((unsigned int *)&v50, (unsigned int **)&v39);
            ++v3;
            v6 += 0xC;
            if ( v3 >= *(unsigned __int16 *)(v2 + 0x1C) )
              break;
            v5 = 0.0;
            v8 = 0.0;
            v7 = v44;
          }
          v3 = 0;
        }
        v38 = 0;
        if ( *(_WORD *)(v2 + 0x28) )
        {
          v46 = 0;
          do
          {
            LODWORD(v23) = v46 + *(_DWORD *)(v2 + 0x2C);
            v4 = *(_WORD *)(LODWORD(v23) + 0xC) == 0;
            v40 = v23;
            if ( !v4 )
            {
              v45 = 0;
              while ( 1 )
              {
                sub_7A6BB0(v58);
                v24 = v45 + *(_DWORD *)(LODWORD(v23) + 0x18);
                LOBYTE(v61) = 1;
                v42 = *(float *)v24;
                v41 = *(float *)(v24 + 4);
                v25 = *(unsigned __int8 *)(*(_DWORD *)(LODWORD(v23) + 0x10) + v3);
                v39 = *(int *)(v24 + 8);
                v26 = v51;
                v27 = v25 >> 1;
                if ( !v51 || v27 >= (int)(v52 - v51) >> 2 )
                {
                  _invalid_parameter_noinfo();
                  v26 = v51;
                }
                v43 = *(float *)(v26 + 4 * v27);
                v56[0] = v42 + v43;
                v56[1] = v41;
                v56[2] = *(float *)&v39;
                qmemcpy(v58, sub_7A6B10(v58, v54, v56), sizeof(v58));
                LOBYTE(v61) = 2;
                TESTexture::ClearComponentReferences(v55);
                LOBYTE(v61) = 1;
                TESTexture::ClearComponentReferences(v54);
                v60[0] = v42 - v43;
                v60[1] = v41;
                v60[2] = *(float *)&v39;
                qmemcpy(v58, sub_7A6B10(v58, v54, v60), sizeof(v58));
                LOBYTE(v61) = 3;
                TESTexture::ClearComponentReferences(v55);
                LOBYTE(v61) = 1;
                TESTexture::ClearComponentReferences(v54);
                *(float *)&v44 = v41 + v43;
                v59[0] = v42;
                v59[1] = *(float *)&v44;
                v59[2] = *(float *)&v39;
                qmemcpy(v58, sub_7A6B10(v58, v54, v59), sizeof(v58));
                LOBYTE(v61) = 4;
                TESTexture::ClearComponentReferences(v55);
                LOBYTE(v61) = 1;
                TESTexture::ClearComponentReferences(v54);
                *(float *)&v44 = v41 - v43;
                v57[0] = v42;
                v57[1] = *(float *)&v44;
                v57[2] = *(float *)&v39;
                qmemcpy(v58, sub_7A6B10(v58, v54, v57), sizeof(v58));
                LOBYTE(v61) = 5;
                TESTexture::ClearComponentReferences(v55);
                LOBYTE(v61) = 1;
                TESTexture::ClearComponentReferences(v54);
                *(float *)&v44 = *(float *)&v39 + v43;
                v48[0] = v42;
                v48[1] = v41;
                v48[2] = *(float *)&v44;
                qmemcpy(v58, sub_7A6B10(v58, v54, v48), sizeof(v58));
                LOBYTE(v61) = 6;
                TESTexture::ClearComponentReferences(v55);
                LOBYTE(v61) = 1;
                TESTexture::ClearComponentReferences(v54);
                *(float *)&v44 = *(float *)&v39 - v43;
                v49[0] = v42;
                v49[1] = v41;
                v49[2] = *(float *)&v44;
                qmemcpy(v58, sub_7A6B10(v58, v54, v49), sizeof(v58));
                LOBYTE(v61) = 7;
                TESTexture::ClearComponentReferences(v55);
                LOBYTE(v61) = 1;
                TESTexture::ClearComponentReferences(v54);
                qmemcpy(a2, sub_7A6C20(a2, v54, v58), 0x30u);
                LOBYTE(v61) = 8;
                TESTexture::ClearComponentReferences(v55);
                LOBYTE(v61) = 1;
                TESTexture::ClearComponentReferences(v54);
                LOBYTE(v61) = 9;
                TESTexture::ClearComponentReferences(&v58[6]);
                LOBYTE(v61) = 0;
                TESTexture::ClearComponentReferences(v58);
                v28 = *(unsigned __int16 *)(LODWORD(v40) + 0xC);
                v45 += 0xC;
                if ( ++v3 >= v28 )
                  break;
                v23 = v40;
              }
              v2 = v47;
              v3 = 0;
            }
            v29 = *(unsigned __int16 *)(v2 + 0x28);
            v46 += 0x44;
            ++v38;
          }
          while ( v38 < v29 );
        }
        if ( v51 )
          FormHeapFree(v51);
      }
    }
  }
}
