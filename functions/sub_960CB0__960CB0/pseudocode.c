char __cdecl sub_960CB0(
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
  float v12; // eax
  float v13; // ecx
  float v14; // edx
  double v15; // st7
  float v16; // eax
  float v17; // ecx
  double v18; // st7
  double v19; // st7
  float v20; // ecx
  float v21; // edx
  double v22; // st7
  float v23; // edx
  double v24; // st7
  double v25; // st7
  double v26; // st7
  double v27; // st7
  double v28; // st7
  double v29; // st7
  double v30; // st7
  double v31; // st7
  float *v32; // eax
  float *v33; // ecx
  float *v34; // eax
  double v35; // st7
  double v36; // st7
  double v38; // st6
  double v39; // st7
  double v40; // st5
  double v41; // st4
  double v42; // st4
  double v43; // st7
  double v44; // st7
  float *v45; // eax
  float *v46; // eax
  float *v47; // eax
  float *v48; // eax
  float *v49; // eax
  double v50; // st7
  char *v51; // eax
  float *Position; // eax
  double v53; // st7
  float v54; // [esp+20h] [ebp-10Ch]
  float v55; // [esp+20h] [ebp-10Ch]
  float v56; // [esp+20h] [ebp-10Ch]
  float v57; // [esp+20h] [ebp-10Ch]
  float v58; // [esp+20h] [ebp-10Ch]
  float v59; // [esp+20h] [ebp-10Ch]
  float v60; // [esp+20h] [ebp-10Ch]
  float v61; // [esp+24h] [ebp-108h]
  float v62; // [esp+24h] [ebp-108h]
  float v63; // [esp+24h] [ebp-108h]
  float v64; // [esp+24h] [ebp-108h]
  float v65; // [esp+24h] [ebp-108h]
  float v66; // [esp+24h] [ebp-108h]
  float v67; // [esp+24h] [ebp-108h]
  float v68; // [esp+28h] [ebp-104h]
  float v69; // [esp+28h] [ebp-104h]
  float v70; // [esp+28h] [ebp-104h]
  float v71; // [esp+28h] [ebp-104h]
  float v72; // [esp+28h] [ebp-104h]
  float v73; // [esp+28h] [ebp-104h]
  float v74; // [esp+28h] [ebp-104h]
  float v75; // [esp+2Ch] [ebp-100h]
  float v76; // [esp+2Ch] [ebp-100h]
  float v77; // [esp+2Ch] [ebp-100h]
  float v78; // [esp+2Ch] [ebp-100h]
  float v79; // [esp+2Ch] [ebp-100h]
  float v80; // [esp+2Ch] [ebp-100h]
  int v81; // [esp+30h] [ebp-FCh] BYREF
  float v82; // [esp+34h] [ebp-F8h]
  float v83; // [esp+38h] [ebp-F4h]
  double v84; // [esp+3Ch] [ebp-F0h] BYREF
  float v85; // [esp+44h] [ebp-E8h]
  float v86; // [esp+48h] [ebp-E4h]
  float v87; // [esp+4Ch] [ebp-E0h]
  int v88[3]; // [esp+50h] [ebp-DCh] BYREF
  float v89[6]; // [esp+5Ch] [ebp-D0h] BYREF
  int v90[3]; // [esp+74h] [ebp-B8h] BYREF
  float v91; // [esp+80h] [ebp-ACh] BYREF
  float v92; // [esp+84h] [ebp-A8h]
  float v93; // [esp+88h] [ebp-A4h]
  float v94; // [esp+8Ch] [ebp-A0h]
  float v95; // [esp+90h] [ebp-9Ch]
  float v96; // [esp+94h] [ebp-98h]
  float v97; // [esp+98h] [ebp-94h]
  float v98; // [esp+9Ch] [ebp-90h]
  float v99; // [esp+A0h] [ebp-8Ch]
  float v100; // [esp+A4h] [ebp-88h]
  float v101; // [esp+A8h] [ebp-84h] BYREF
  float v102; // [esp+ACh] [ebp-80h] BYREF
  float v103; // [esp+B0h] [ebp-7Ch] BYREF
  float v104[3]; // [esp+B4h] [ebp-78h] BYREF
  NiRenderTargetGroup v105[3]; // [esp+C0h] [ebp-6Ch] BYREF

  v12 = a2[8];
  v13 = a2[9];
  v14 = a2[0xA];
  v100 = a2[0xE] * a2[0xE];
  v89[0] = v12;
  v15 = *a5 - *a4;
  v89[3] = a2[0xB];
  v16 = *a4;
  v89[1] = v13;
  v54 = v15;
  v17 = a2[0xC];
  v18 = a5[1];
  v91 = v16;
  v19 = v18 - a4[1];
  v89[4] = v17;
  v20 = a4[1];
  v61 = v19;
  v89[2] = v14;
  v21 = a2[0xD];
  v22 = a5[2] - a4[2];
  v92 = v20;
  v89[5] = v21;
  v23 = a4[2];
  v68 = v22;
  v24 = *a6;
  v94 = v54;
  v25 = v24 - *a4;
  v93 = v23;
  v95 = v61;
  v55 = v25;
  v26 = a6[1];
  v97 = v55;
  v27 = v26 - a4[1];
  v96 = v68;
  v62 = v27;
  v28 = a6[2];
  v98 = v62;
  v69 = v28 - a4[2];
  v99 = v69;
  v29 = sub_9726E0(v89, &v91, &v101, &v102, &v103);
  *(float *)&v84 = v29 - v100;
  if ( *(float *)&v84 <= 0.0 )
  {
    *a8 = 0.0;
    *(float *)&v84 = v97 * v103;
    *((float *)&v84 + 1) = v98 * v103;
    v85 = v103 * v99;
    v56 = v94 * v102;
    v63 = v95 * v102;
    v70 = v102 * v96;
    *(float *)&v81 = v91 + v56;
    v82 = v92 + v63;
    v83 = v93 + v70;
    v57 = *(float *)&v81 + *(float *)&v84;
    v30 = v82;
    *a9 = v57;
    v64 = v30 + *((float *)&v84 + 1);
    v31 = v83;
    a9[1] = v64;
    v71 = v31 + v85;
    a9[2] = v71;
    if ( a10 )
    {
      v32 = sub_9741F0(&v91, (float *)v88);
      v33 = a12;
      *a12 = *v32;
      a12[1] = v32[1];
      a12[2] = v32[2];
      v34 = a11;
LABEL_21:
      v60 = -*v33;
      v67 = -v33[1];
      v53 = -v33[2];
      *v34 = v60;
      v74 = v53;
      v34[1] = v67;
      v34[2] = v74;
      return 1;
    }
    return 1;
  }
  v58 = *a3 - *a7;
  v35 = a3[1];
  *(float *)v90 = v58;
  v65 = v35 - a7[1];
  v36 = a3[2] - a7[2];
  *(float *)&v90[1] = v65;
  v72 = v36;
  *(float *)&v90[2] = v72;
  *(float *)&v84 = v58 * v58 + v65 * v65 + v72 * v72;
  if ( *(float *)&v84 * a1 <= dbl_AA3AF8 )
    return 0;
  *(float *)&v84 = v95 * v99 - v96 * v98;
  *((float *)&v84 + 1) = v96 * v97 - v99 * v94;
  v85 = v98 * v94 - v95 * v97;
  *(float *)&v81 = -*(float *)&v84;
  v82 = -*((float *)&v84 + 1);
  v83 = -v85;
  v38 = v82;
  v39 = *(float *)&v81;
  v40 = v83;
  *(float *)&v84 = a2[3] * v83 + a2[1] * *(float *)&v81 + a2[2] * v82;
  if ( a2[0xE] >= (double)a2[7] )
    v41 = a2[0xE];
  else
    v41 = a2[7];
  v86 = v41;
  v87 = v39 * *a4 + a4[1] * v38 + v40 * a4[2];
  v75 = *(float *)&v84 - v87;
  v42 = v39 * v39;
  v43 = v75 * v75;
  v76 = v38 * v38 + v42 + v40 * v40;
  v77 = v76 * v86 * v86;
  if ( v77 < v43 )
  {
    sub_43F350((float *)&v81);
    v44 = *(float *)&v81 * v58 + v82 * v65 + v83 * v72;
    if ( v87 >= (double)*(float *)&v84 )
    {
      v79 = v44;
      if ( v79 <= (double)*(float *)&SrcStr )
        return 0;
      v47 = sub_47DA10((float *)v88, v86, (float *)&v81);
      v48 = sub_47D9B0(a2 + 1, (float *)&v84, v47);
      v59 = *v48;
      v66 = v48[1];
      v73 = v48[2];
    }
    else
    {
      v78 = v44;
      if ( v78 >= (double)*(float *)&SrcStr )
        return 0;
      v45 = sub_47DA10((float *)v88, v86, (float *)&v81);
      v46 = sub_4121A0(a2 + 1, (float *)&v84, v45);
      v59 = *v46;
      v66 = v46[1];
      v73 = v46[2];
    }
    v87 = a4[1] * v82 + *(float *)&v81 * *a4 + v83 * a4[2];
    v84 = v87 + dbl_A30E40;
    v80 = v82 * v66 + *(float *)&v81 * v59 + v83 * v73;
    if ( v80 > v84 )
    {
      v49 = sub_47DA10(v104, a1, (float *)v90);
      *(float *)v88 = *v49 + v59;
      *(float *)&v88[1] = v49[1] + v66;
      *(float *)&v88[2] = v49[2] + v73;
      v50 = sub_47D9E0((float *)&v81, (float *)v88);
      if ( v50 > v84 )
        return 0;
    }
  }
  sub_974110((float *)v105, (int)a2, (int)a4, (int)a5, (int)a6, a1, flt_A37080, flt_A79DB4, 0x20);
  sub_96F170((float *)v105, a3, a7);
  *a8 = sub_680CC0((float *)v105);
  if ( NiRenderTargetGroup::GetRenderTargetsNum(v105) != 3 && NiRenderTargetGroup::GetRenderTargetsNum(v105) != 2 )
    return 0;
  v51 = sub_4E7DE0((char *)v105);
  *a9 = *(float *)v51;
  a9[1] = *((float *)v51 + 1);
  a9[2] = *((float *)v51 + 2);
  if ( a10 )
  {
    Position = TESObjectREFR_GetPosition((TESChildCELL *)v105);
    v33 = a11;
    *a11 = *Position;
    a11[1] = Position[1];
    a11[2] = Position[2];
    v34 = a12;
    goto LABEL_21;
  }
  return 1;
}
