char __cdecl sub_96CF80(
        float a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        float *a9,
        char a10,
        float *a11,
        float *a12)
{
  double v12; // st7
  float v13; // ecx
  float v14; // edx
  double v15; // st7
  double v16; // st7
  double v17; // st7
  double v18; // st7
  float v19; // edx
  double v20; // st7
  double v21; // st7
  double v22; // st7
  double v23; // st7
  double v24; // st7
  double v25; // st7
  double v26; // st7
  float *v27; // eax
  float *v28; // ecx
  float *v29; // eax
  double v30; // st6
  double v31; // st6
  double v33; // st6
  double v34; // st7
  float *v35; // eax
  float *v36; // eax
  float *v37; // eax
  char *v38; // eax
  float *Position; // eax
  double v40; // st7
  float v41; // [esp+20h] [ebp-F8h]
  float v42; // [esp+20h] [ebp-F8h]
  float v43; // [esp+20h] [ebp-F8h]
  float v44; // [esp+20h] [ebp-F8h]
  float v45; // [esp+20h] [ebp-F8h]
  __int64 v46; // [esp+20h] [ebp-F8h]
  float v47; // [esp+20h] [ebp-F8h]
  float v48; // [esp+24h] [ebp-F4h]
  float v49; // [esp+24h] [ebp-F4h]
  float v50; // [esp+24h] [ebp-F4h]
  float v51; // [esp+24h] [ebp-F4h]
  float v52; // [esp+24h] [ebp-F4h]
  float v53; // [esp+24h] [ebp-F4h]
  float v54; // [esp+28h] [ebp-F0h]
  float v55; // [esp+28h] [ebp-F0h]
  float v56; // [esp+28h] [ebp-F0h]
  float v57; // [esp+28h] [ebp-F0h]
  float v58; // [esp+28h] [ebp-F0h]
  float v59; // [esp+28h] [ebp-F0h]
  float v60; // [esp+28h] [ebp-F0h]
  float v61; // [esp+2Ch] [ebp-ECh]
  float v62; // [esp+2Ch] [ebp-ECh]
  float v63; // [esp+2Ch] [ebp-ECh]
  float v64; // [esp+2Ch] [ebp-ECh]
  float v65; // [esp+2Ch] [ebp-ECh]
  float v66; // [esp+2Ch] [ebp-ECh]
  float v67; // [esp+30h] [ebp-E8h]
  float v68; // [esp+30h] [ebp-E8h]
  float v69; // [esp+30h] [ebp-E8h]
  float v70; // [esp+30h] [ebp-E8h]
  float v71; // [esp+30h] [ebp-E8h]
  __int64 v72; // [esp+30h] [ebp-E8h]
  __int64 v73; // [esp+30h] [ebp-E8h]
  double v74; // [esp+30h] [ebp-E8h]
  float v75; // [esp+34h] [ebp-E4h]
  float v76; // [esp+34h] [ebp-E4h]
  float v77; // [esp+38h] [ebp-E0h]
  float v78; // [esp+38h] [ebp-E0h]
  float v79; // [esp+38h] [ebp-E0h]
  float v80; // [esp+38h] [ebp-E0h]
  int v81; // [esp+3Ch] [ebp-DCh] BYREF
  float v82; // [esp+40h] [ebp-D8h]
  float v83; // [esp+44h] [ebp-D4h]
  float v84; // [esp+48h] [ebp-D0h]
  float v85; // [esp+4Ch] [ebp-CCh] BYREF
  float v86; // [esp+50h] [ebp-C8h]
  float v87; // [esp+54h] [ebp-C4h]
  int v88[3]; // [esp+58h] [ebp-C0h] BYREF
  float v89; // [esp+64h] [ebp-B4h] BYREF
  float v90; // [esp+68h] [ebp-B0h]
  float v91; // [esp+6Ch] [ebp-ACh]
  float v92; // [esp+70h] [ebp-A8h]
  float v93; // [esp+74h] [ebp-A4h]
  float v94; // [esp+78h] [ebp-A0h]
  float v95; // [esp+7Ch] [ebp-9Ch]
  float v96; // [esp+80h] [ebp-98h]
  float v97; // [esp+84h] [ebp-94h]
  float v98; // [esp+88h] [ebp-90h]
  float v99; // [esp+8Ch] [ebp-8Ch] BYREF
  float v100; // [esp+90h] [ebp-88h] BYREF
  int v101[3]; // [esp+94h] [ebp-84h] BYREF
  float v102[3]; // [esp+A0h] [ebp-78h] BYREF
  NiRenderTargetGroup v103[3]; // [esp+ACh] [ebp-6Ch] BYREF

  v12 = a2[4] * a2[4];
  v13 = a2[2];
  v14 = a2[3];
  v85 = a2[1];
  v98 = v12;
  v15 = *a5;
  v89 = *a4;
  v16 = v15 - *a4;
  v86 = v13;
  v90 = a4[1];
  v41 = v16;
  v17 = a5[1];
  v87 = v14;
  v18 = v17 - a4[1];
  v19 = a4[2];
  v92 = v41;
  v91 = v19;
  v48 = v18;
  v20 = a5[2];
  v93 = v48;
  v54 = v20 - a4[2];
  v21 = *a6;
  v94 = v54;
  v42 = v21 - *a4;
  v22 = a6[1];
  v95 = v42;
  v49 = v22 - a4[1];
  v23 = a6[2];
  v96 = v49;
  v55 = v23 - a4[2];
  v97 = v55;
  v24 = sub_975DF0(&v85, &v89, &v99, &v100);
  v67 = v24 - v98;
  if ( v67 <= 0.0 )
  {
    *a8 = 0.0;
    v68 = v95 * v100;
    v75 = v96 * v100;
    v77 = v100 * v97;
    v43 = v92 * v99;
    v50 = v93 * v99;
    v56 = v99 * v94;
    *(float *)&v81 = v89 + v43;
    v82 = v90 + v50;
    v83 = v91 + v56;
    v44 = *(float *)&v81 + v68;
    v25 = v82;
    *a9 = v44;
    v51 = v25 + v75;
    v26 = v83;
    a9[1] = v51;
    v57 = v26 + v77;
    a9[2] = v57;
    if ( a10 )
    {
      v27 = sub_9741F0(&v89, (float *)v101);
      v28 = a12;
      *a12 = *v27;
      a12[1] = v27[1];
      a12[2] = v27[2];
      v29 = a11;
LABEL_18:
      v47 = -*v28;
      v53 = -v28[1];
      v40 = -v28[2];
      *v29 = v47;
      v60 = v40;
      v29[1] = v53;
      v29[2] = v60;
      return 1;
    }
    return 1;
  }
  v45 = *a3 - *a7;
  v30 = a3[1];
  *(float *)v88 = v45;
  v52 = v30 - a7[1];
  v31 = a3[2] - a7[2];
  *(float *)&v88[1] = v52;
  v58 = v31;
  *(float *)&v88[2] = v58;
  v69 = v45 * v45 + v52 * v52 + v58 * v58;
  if ( v69 * a1 <= dbl_AA3AF8 )
    return 0;
  v70 = v93 * v97 - v94 * v96;
  v76 = v94 * v95 - v97 * v92;
  v78 = v96 * v92 - v93 * v95;
  *(float *)&v81 = -v70;
  v82 = -v76;
  v83 = -v78;
  v71 = v87 * v83 + v86 * v82 + *(float *)&v81 * v85;
  v84 = *(float *)&v81 * *a4 + a4[1] * v82 + v83 * a4[2];
  v61 = v71 - v84;
  v33 = v61 * v61;
  v62 = *(float *)&v81 * *(float *)&v81 + v82 * v82 + v83 * v83;
  v63 = v98 * v62;
  if ( v63 < v33 )
  {
    sub_43F350((float *)&v81);
    v34 = *(float *)&v81 * v45 + v82 * v52 + v83 * v58;
    if ( v84 >= (double)v71 )
    {
      v65 = v34;
      if ( v65 <= (double)*(float *)&SrcStr )
        return 0;
      v36 = sub_47DA10((float *)v101, a2[4], (float *)&v81);
      *(float *)&v73 = *v36 + v85;
      *((float *)&v73 + 1) = v36[1] + v86;
      v46 = v73;
      v80 = v36[2] + v87;
      v59 = v80;
    }
    else
    {
      v64 = v34;
      if ( v64 >= (double)*(float *)&SrcStr )
        return 0;
      v35 = sub_47DA10((float *)v101, a2[4], (float *)&v81);
      *(float *)&v72 = v85 - *v35;
      *((float *)&v72 + 1) = v86 - v35[1];
      v46 = v72;
      v79 = v87 - v35[2];
      v59 = v79;
    }
    v84 = a4[1] * v82 + *(float *)&v81 * *a4 + v83 * a4[2];
    v74 = v84 + dbl_A30E40;
    v66 = v82 * *((float *)&v46 + 1) + *(float *)&v81 * *(float *)&v46 + v83 * v59;
    if ( v66 > v74 )
    {
      v37 = sub_47DA10(v102, a1, (float *)v88);
      *(float *)v101 = *v37 + *(float *)&v46;
      *(float *)&v101[1] = v37[1] + *((float *)&v46 + 1);
      *(float *)&v101[2] = v37[2] + v59;
      if ( sub_47D9E0((float *)&v81, (float *)v101) > v74 )
        return 0;
    }
  }
  sub_9767D0((float *)v103, (int)a2, (int)a4, (int)a5, (int)a6, a1, flt_A37080, flt_A79DB4, 0x20);
  sub_96F170((float *)v103, a3, a7);
  *a8 = sub_680CC0((float *)v103);
  if ( NiRenderTargetGroup::GetRenderTargetsNum(v103) != 3 && NiRenderTargetGroup::GetRenderTargetsNum(v103) != 2 )
    return 0;
  v38 = sub_4E7DE0((char *)v103);
  *a9 = *(float *)v38;
  a9[1] = *((float *)v38 + 1);
  a9[2] = *((float *)v38 + 2);
  if ( a10 )
  {
    Position = TESObjectREFR_GetPosition((TESChildCELL *)v103);
    v28 = a11;
    *a11 = *Position;
    a11[1] = Position[1];
    a11[2] = Position[2];
    v29 = a12;
    goto LABEL_18;
  }
  return 1;
}
