void __thiscall sub_974760(int this, float *a2, float *a3)
{
  float *v4; // eax
  float v5; // edx
  double v6; // st7
  double v7; // st7
  float *v8; // eax
  float *v9; // eax
  float *v10; // eax
  float v11; // eax
  double v12; // st7
  double v13; // st7
  float v14; // edx
  float v15; // eax
  float *v16; // edi
  float *v17; // eax
  double v18; // st6
  double v19; // st5
  double v20; // st7
  float v21; // edx
  double v22; // st4
  double v23; // st4
  float v24; // edx
  int v25; // eax
  float *v26; // eax
  float *v27; // eax
  int v28; // ecx
  float *v29; // eax
  double v30; // st7
  double v31; // rt0
  double v32; // st6
  int v33; // eax
  double v34; // st7
  double v35; // st7
  float v36; // eax
  double v37; // st7
  float v38; // [esp+4h] [ebp-28h]
  float v39; // [esp+8h] [ebp-24h] BYREF
  float v40; // [esp+Ch] [ebp-20h]
  float v41; // [esp+10h] [ebp-1Ch]
  float v42; // [esp+14h] [ebp-18h]
  float v43; // [esp+18h] [ebp-14h]
  float v44; // [esp+1Ch] [ebp-10h]
  float v45; // [esp+20h] [ebp-Ch]
  float v46; // [esp+24h] [ebp-8h]
  float v47; // [esp+28h] [ebp-4h]
  float v48; // [esp+30h] [ebp+4h]
  float v49; // [esp+30h] [ebp+4h]
  float v50; // [esp+30h] [ebp+4h]
  float v51; // [esp+30h] [ebp+4h]
  float v52; // [esp+34h] [ebp+8h]
  float v53; // [esp+34h] [ebp+8h]
  float v54; // [esp+34h] [ebp+8h]
  float v55; // [esp+34h] [ebp+8h]
  float v56; // [esp+34h] [ebp+8h]
  float v57; // [esp+34h] [ebp+8h]
  float v58; // [esp+34h] [ebp+8h]
  float v59; // [esp+34h] [ebp+8h]

  if ( *(_DWORD *)(this + 0x18) == 2 )
  {
    v38 = *(float *)(this + 0x1C);
    v39 = *a2 * v38;
    v40 = a2[1] * v38;
    v4 = *(float **)(this + 0x38);
    v41 = v38 * a2[2];
    v42 = v39 + v4[1];
    v43 = v4[2] + v40;
    v5 = v43;
    v6 = v4[3];
    *(float *)(this + 0x20) = v42;
    v7 = v6 + v41;
    *(float *)(this + 0x24) = v5;
    v44 = v7;
    *(float *)(this + 0x28) = v44;
    v48 = *(float *)(this + 0x44);
    v39 = v4[4] * v48;
    v40 = v4[5] * v48;
    v41 = v48 * v4[6];
    *(float *)(this + 0x20) = *(float *)(this + 0x20) + v39;
    *(float *)(this + 0x24) = v40 + *(float *)(this + 0x24);
    *(float *)(this + 0x28) = *(float *)(this + 0x28) + v41;
    v8 = (float *)(*(_DWORD *)(this + 0x38) + 0x1C);
    v49 = *(float *)(this + 0x48);
    v39 = *v8 * v49;
    v40 = v8[1] * v49;
    v41 = v49 * v8[2];
    *(float *)(this + 0x20) = *(float *)(this + 0x20) + v39;
    *(float *)(this + 0x24) = v40 + *(float *)(this + 0x24);
    *(float *)(this + 0x28) = *(float *)(this + 0x28) + v41;
    v9 = (float *)(*(_DWORD *)(this + 0x38) + 0x28);
    v50 = *(float *)(this + 0x4C);
    v39 = *v9 * v50;
    v40 = v9[1] * v50;
    v41 = v50 * v9[2];
    *(float *)(this + 0x20) = *(float *)(this + 0x20) + v39;
    *(float *)(this + 0x24) = v40 + *(float *)(this + 0x24);
    *(float *)(this + 0x28) = *(float *)(this + 0x28) + v41;
    v51 = *(float *)(this + 0x1C);
    v42 = *a3 * v51;
    v43 = a3[1] * v51;
    v10 = (float *)(*(_DWORD *)(this + 0x3C) + 4);
    v44 = v51 * a3[2];
    v39 = *v10 + v42;
    v40 = v10[1] + v43;
    v41 = v10[2] + v44;
    v42 = v39 - *(float *)(this + 0x20);
    v43 = v40 - *(float *)(this + 0x24);
    v11 = v43;
    v12 = v41 - *(float *)(this + 0x28);
    *(float *)(this + 0x2C) = v42;
    *(float *)(this + 0x30) = v11;
    v44 = v12;
    *(float *)(this + 0x34) = v44;
    sub_43F350((float *)(this + 0x2C));
  }
  else
  {
    v52 = a3[2] * a3[2] + *a3 * *a3 + a3[1] * a3[1];
    v13 = v52;
    v53 = a2[2] * a2[2] + *a2 * *a2 + a2[1] * a2[1];
    v54 = v13 - v53;
    if ( dbl_AA3DC8 <= v54 )
    {
      v25 = *(_DWORD *)(this + 0x38);
      if ( v54 <= dbl_AA3AF8 )
      {
        v28 = *(_DWORD *)(this + 0x3C);
        v29 = (float *)(v25 + 4);
        v30 = *(float *)(v28 + 4) + *v29;
        v28 += 4;
        v45 = v30;
        v46 = *(float *)(v28 + 4) + v29[1];
        v47 = *(float *)(v28 + 8) + v29[2];
        v31 = dbl_A2FAA0;
        v42 = v45 * v31;
        v32 = v46;
        *(float *)(this + 0x20) = v42;
        v43 = v32 * v31;
        *(float *)(this + 0x24) = v43;
        v44 = v31 * v47;
        *(float *)(this + 0x28) = v44;
      }
      else
      {
        *(_DWORD *)(this + 0x20) = *(_DWORD *)(v25 + 4);
        *(_DWORD *)(this + 0x24) = *(_DWORD *)(v25 + 8);
        *(_DWORD *)(this + 0x28) = *(_DWORD *)(v25 + 0xC);
        v57 = *(float *)(this + 0x44);
        v39 = *(float *)(v25 + 0x10) * v57;
        v40 = *(float *)(v25 + 0x14) * v57;
        v41 = v57 * *(float *)(v25 + 0x18);
        *(float *)(this + 0x20) = *(float *)(this + 0x20) + v39;
        *(float *)(this + 0x24) = *(float *)(this + 0x24) + v40;
        *(float *)(this + 0x28) = v41 + *(float *)(this + 0x28);
        v26 = (float *)(*(_DWORD *)(this + 0x38) + 0x1C);
        v58 = *(float *)(this + 0x48);
        v39 = *v26 * v58;
        v40 = v26[1] * v58;
        v41 = v58 * v26[2];
        *(float *)(this + 0x20) = *(float *)(this + 0x20) + v39;
        *(float *)(this + 0x24) = *(float *)(this + 0x24) + v40;
        *(float *)(this + 0x28) = v41 + *(float *)(this + 0x28);
        v27 = (float *)(*(_DWORD *)(this + 0x38) + 0x28);
        v59 = *(float *)(this + 0x4C);
        v39 = *v27 * v59;
        v40 = v27[1] * v59;
        v41 = v59 * v27[2];
        *(float *)(this + 0x20) = *(float *)(this + 0x20) + v39;
        *(float *)(this + 0x24) = *(float *)(this + 0x24) + v40;
        *(float *)(this + 0x28) = v41 + *(float *)(this + 0x28);
      }
      v33 = *(_DWORD *)(this + 0x3C);
      v34 = *(float *)(v33 + 4);
      v33 += 4;
      v45 = v34 - *(float *)(this + 0x20);
      v46 = *(float *)(v33 + 4) - *(float *)(this + 0x24);
      v35 = *(float *)(v33 + 8);
      v36 = v46;
      v37 = v35 - *(float *)(this + 0x28);
      *(float *)(this + 0x2C) = v45;
      *(float *)(this + 0x30) = v36;
      v47 = v37;
      *(float *)(this + 0x34) = v47;
      sub_43F350((float *)(this + 0x2C));
    }
    else
    {
      v14 = a2[1];
      v39 = *a2;
      v15 = a2[2];
      v40 = v14;
      v41 = v15;
      sub_43F350(&v39);
      v16 = *(float **)(this + 0x3C);
      v17 = (float *)(*(_DWORD *)(this + 0x38) + 4);
      v55 = v16[4] + v16[4];
      v42 = v39 * v55;
      v43 = v40 * v55;
      v44 = v55 * v41;
      v45 = *v17 - v42;
      v46 = v17[1] - v43;
      v47 = v17[2] - v44;
      v39 = v45 - v16[1];
      v40 = v46 - v16[2];
      v41 = v47 - v16[3];
      sub_43F350(&v39);
      v56 = v16[4];
      v18 = v39;
      v45 = v39 * v56;
      v19 = v40;
      v46 = v40 * v56;
      v20 = v41;
      v47 = v56 * v41;
      v42 = v16[1] + v45;
      v43 = v16[2] + v46;
      v21 = v43;
      v22 = v16[3];
      *(float *)(this + 0x20) = v42;
      v23 = v22 + v47;
      *(float *)(this + 0x24) = v21;
      v44 = v23;
      *(float *)(this + 0x28) = v44;
      v45 = -v18;
      v46 = -v19;
      v24 = v46;
      *(float *)(this + 0x2C) = v45;
      *(float *)(this + 0x30) = v24;
      v47 = -v20;
      *(float *)(this + 0x34) = v47;
    }
  }
}
