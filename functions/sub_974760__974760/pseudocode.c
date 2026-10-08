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

  if ( *(_DWORD *)(this + 0x18) == 2 ) /*0x97476a*/
  {
    v38 = *(float *)(this + 0x1C); /*0x974777*/
    v39 = *a2 * v38; /*0x974783*/
    v40 = a2[1] * v38; /*0x97478c*/
    v4 = *(float **)(this + 0x38); /*0x974793*/
    v41 = v38 * a2[2]; /*0x974796*/
    v42 = v39 + v4[1]; /*0x9747a1*/
    v43 = v4[2] + v40; /*0x9747b0*/
    v5 = v43; /*0x9747b4*/
    v6 = v4[3]; /*0x9747b8*/
    *(float *)(this + 0x20) = v42; /*0x9747bb*/
    v7 = v6 + v41; /*0x9747be*/
    *(float *)(this + 0x24) = v5; /*0x9747c2*/
    v44 = v7; /*0x9747c5*/
    *(float *)(this + 0x28) = v44; /*0x9747cd*/
    v48 = *(float *)(this + 0x44); /*0x9747d3*/
    v39 = v4[4] * v48; /*0x9747e0*/
    v40 = v4[5] * v48; /*0x9747e9*/
    v41 = v48 * v4[6]; /*0x9747f0*/
    *(float *)(this + 0x20) = *(float *)(this + 0x20) + v39; /*0x9747fb*/
    *(float *)(this + 0x24) = v40 + *(float *)(this + 0x24); /*0x974805*/
    *(float *)(this + 0x28) = *(float *)(this + 0x28) + v41; /*0x97480f*/
    v8 = (float *)(*(_DWORD *)(this + 0x38) + 0x1C); /*0x974818*/
    v49 = *(float *)(this + 0x48); /*0x97481b*/
    v39 = *v8 * v49; /*0x974827*/
    v40 = v8[1] * v49; /*0x974830*/
    v41 = v49 * v8[2]; /*0x974837*/
    *(float *)(this + 0x20) = *(float *)(this + 0x20) + v39; /*0x974842*/
    *(float *)(this + 0x24) = v40 + *(float *)(this + 0x24); /*0x97484c*/
    *(float *)(this + 0x28) = *(float *)(this + 0x28) + v41; /*0x974856*/
    v9 = (float *)(*(_DWORD *)(this + 0x38) + 0x28); /*0x97485f*/
    v50 = *(float *)(this + 0x4C); /*0x974862*/
    v39 = *v9 * v50; /*0x97486e*/
    v40 = v9[1] * v50; /*0x974877*/
    v41 = v50 * v9[2]; /*0x974885*/
    *(float *)(this + 0x20) = *(float *)(this + 0x20) + v39; /*0x974890*/
    *(float *)(this + 0x24) = v40 + *(float *)(this + 0x24); /*0x97489a*/
    *(float *)(this + 0x28) = *(float *)(this + 0x28) + v41; /*0x9748a4*/
    v51 = *(float *)(this + 0x1C); /*0x9748aa*/
    v42 = *a3 * v51; /*0x9748b6*/
    v43 = a3[1] * v51; /*0x9748bf*/
    v10 = (float *)(*(_DWORD *)(this + 0x3C) + 4); /*0x9748c9*/
    v44 = v51 * a3[2]; /*0x9748cc*/
    v39 = *v10 + v42; /*0x9748d6*/
    v40 = v10[1] + v43; /*0x9748e1*/
    v41 = v10[2] + v44; /*0x9748ec*/
    v42 = v39 - *(float *)(this + 0x20); /*0x9748f7*/
    v43 = v40 - *(float *)(this + 0x24); /*0x974906*/
    v11 = v43; /*0x97490a*/
    v12 = v41 - *(float *)(this + 0x28); /*0x974912*/
    *(float *)(this + 0x2C) = v42; /*0x974915*/
    *(float *)(this + 0x30) = v11; /*0x974917*/
    v44 = v12; /*0x97491a*/
    *(float *)(this + 0x34) = v44; /*0x974922*/
    Vector3_NormalizeInPlace((float *)(this + 0x2C)); /*0x974925*/
  }
  else
  {
    v52 = a3[2] * a3[2] + *a3 * *a3 + a3[1] * a3[1]; /*0x974961*/
    v13 = v52; /*0x97497d*/
    v53 = a2[2] * a2[2] + *a2 * *a2 + a2[1] * a2[1]; /*0x97497f*/
    v54 = v13 - v53; /*0x974987*/
    if ( dbl_AA3DC8 <= v54 ) /*0x97499c*/
    {
      v25 = *(_DWORD *)(this + 0x38); /*0x974ae5*/
      if ( v54 <= dbl_AA3AF8 ) /*0x974ae8*/
      {
        v28 = *(_DWORD *)(this + 0x3C); /*0x974bd2*/
        v29 = (float *)(v25 + 4); /*0x974bd8*/
        v30 = *(float *)(v28 + 4) + *v29; /*0x974bdb*/
        v28 += 4; /*0x974bdd*/
        v45 = v30; /*0x974be0*/
        v46 = *(float *)(v28 + 4) + v29[1]; /*0x974bea*/
        v47 = *(float *)(v28 + 8) + v29[2]; /*0x974bf4*/
        v31 = dbl_A2FAA0; /*0x974c04*/
        v42 = v45 * v31; /*0x974c06*/
        v32 = v46; /*0x974c0e*/
        *(float *)(this + 0x20) = v42; /*0x974c12*/
        v43 = v32 * v31; /*0x974c17*/
        *(float *)(this + 0x24) = v43; /*0x974c1f*/
        v44 = v31 * v47; /*0x974c26*/
        *(float *)(this + 0x28) = v44; /*0x974c2e*/
      }
      else
      {
        *(_DWORD *)(this + 0x20) = *(_DWORD *)(v25 + 4); /*0x974af1*/
        *(_DWORD *)(this + 0x24) = *(_DWORD *)(v25 + 8); /*0x974af7*/
        *(_DWORD *)(this + 0x28) = *(_DWORD *)(v25 + 0xC); /*0x974afd*/
        v57 = *(float *)(this + 0x44); /*0x974b03*/
        v39 = *(float *)(v25 + 0x10) * v57; /*0x974b10*/
        v40 = *(float *)(v25 + 0x14) * v57; /*0x974b19*/
        v41 = v57 * *(float *)(v25 + 0x18); /*0x974b20*/
        *(float *)(this + 0x20) = *(float *)(this + 0x20) + v39; /*0x974b2b*/
        *(float *)(this + 0x24) = *(float *)(this + 0x24) + v40; /*0x974b35*/
        *(float *)(this + 0x28) = v41 + *(float *)(this + 0x28); /*0x974b3f*/
        v26 = (float *)(*(_DWORD *)(this + 0x38) + 0x1C); /*0x974b48*/
        v58 = *(float *)(this + 0x48); /*0x974b4b*/
        v39 = *v26 * v58; /*0x974b57*/
        v40 = v26[1] * v58; /*0x974b60*/
        v41 = v58 * v26[2]; /*0x974b67*/
        *(float *)(this + 0x20) = *(float *)(this + 0x20) + v39; /*0x974b72*/
        *(float *)(this + 0x24) = *(float *)(this + 0x24) + v40; /*0x974b7c*/
        *(float *)(this + 0x28) = v41 + *(float *)(this + 0x28); /*0x974b86*/
        v27 = (float *)(*(_DWORD *)(this + 0x38) + 0x28); /*0x974b8f*/
        v59 = *(float *)(this + 0x4C); /*0x974b92*/
        v39 = *v27 * v59; /*0x974b9e*/
        v40 = v27[1] * v59; /*0x974ba7*/
        v41 = v59 * v27[2]; /*0x974bae*/
        *(float *)(this + 0x20) = *(float *)(this + 0x20) + v39; /*0x974bb9*/
        *(float *)(this + 0x24) = *(float *)(this + 0x24) + v40; /*0x974bc3*/
        *(float *)(this + 0x28) = v41 + *(float *)(this + 0x28); /*0x974bcd*/
      }
      v33 = *(_DWORD *)(this + 0x3C); /*0x974c31*/
      v34 = *(float *)(v33 + 4); /*0x974c34*/
      v33 += 4; /*0x974c37*/
      v45 = v34 - *(float *)(this + 0x20); /*0x974c40*/
      v46 = *(float *)(v33 + 4) - *(float *)(this + 0x24); /*0x974c4e*/
      v35 = *(float *)(v33 + 8); /*0x974c52*/
      v36 = v46; /*0x974c55*/
      v37 = v35 - *(float *)(this + 0x28); /*0x974c59*/
      *(float *)(this + 0x2C) = v45; /*0x974c5c*/
      *(float *)(this + 0x30) = v36; /*0x974c5e*/
      v47 = v37; /*0x974c61*/
      *(float *)(this + 0x34) = v47; /*0x974c69*/
      Vector3_NormalizeInPlace((float *)(this + 0x2C)); /*0x974c6c*/
    }
    else
    {
      v14 = a2[1]; /*0x9749a6*/
      v39 = *a2; /*0x9749a9*/
      v15 = a2[2]; /*0x9749ad*/
      v40 = v14; /*0x9749b5*/
      v41 = v15; /*0x9749b9*/
      Vector3_NormalizeInPlace(&v39); /*0x9749bd*/
      v16 = *(float **)(this + 0x3C); /*0x9749c4*/
      v17 = (float *)(*(_DWORD *)(this + 0x38) + 4); /*0x9749cf*/
      v55 = v16[4] + v16[4]; /*0x9749d6*/
      v42 = v39 * v55; /*0x9749e4*/
      v43 = v40 * v55; /*0x9749ee*/
      v44 = v55 * v41; /*0x9749f6*/
      v45 = *v17 - v42; /*0x974a00*/
      v46 = v17[1] - v43; /*0x974a0b*/
      v47 = v17[2] - v44; /*0x974a16*/
      v39 = v45 - v16[1]; /*0x974a21*/
      v40 = v46 - v16[2]; /*0x974a2c*/
      v41 = v47 - v16[3]; /*0x974a37*/
      Vector3_NormalizeInPlace(&v39); /*0x974a3b*/
      v56 = v16[4]; /*0x974a45*/
      v18 = v39; /*0x974a4d*/
      v45 = v39 * v56; /*0x974a55*/
      v19 = v40; /*0x974a59*/
      v46 = v40 * v56; /*0x974a61*/
      v20 = v41; /*0x974a6d*/
      v47 = v56 * v41; /*0x974a6f*/
      v42 = v16[1] + v45; /*0x974a7a*/
      v43 = v16[2] + v46; /*0x974a89*/
      v21 = v43; /*0x974a8d*/
      v22 = v16[3]; /*0x974a91*/
      *(float *)(this + 0x20) = v42; /*0x974a94*/
      v23 = v22 + v47; /*0x974a97*/
      *(float *)(this + 0x24) = v21; /*0x974a9b*/
      v44 = v23; /*0x974a9e*/
      *(float *)(this + 0x28) = v44; /*0x974aa8*/
      v45 = -v18; /*0x974aad*/
      v46 = -v19; /*0x974ab7*/
      v24 = v46; /*0x974abb*/
      *(float *)(this + 0x2C) = v45; /*0x974abf*/
      *(float *)(this + 0x30) = v24; /*0x974ac4*/
      v47 = -v20; /*0x974ac7*/
      *(float *)(this + 0x34) = v47; /*0x974ad0*/
    }
  }
}
