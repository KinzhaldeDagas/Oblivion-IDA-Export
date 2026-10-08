// Source-match: CFrondEngine::BuildProfileVectors. Builds extrusion cross-section profile, mirrored profile side, normals, and tangents from the profile curve and guide radius.
unsigned int __thiscall sub_79DA10(_DWORD *this, unsigned int a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  _DWORD *v5; // ebp
  double v6; // st7
  int v7; // eax
  int v9; // edi
  double v10; // st7
  double v11; // st6
  double v12; // st5
  float *v13; // ecx
  int v14; // edi
  unsigned int v15; // eax
  unsigned int v16; // eax
  float v17; // edx
  float v18; // ecx
  float v19; // eax
  double v20; // st7
  unsigned int v21; // edi
  unsigned int result; // eax
  double v23; // st7
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // ebp
  double v28; // st7
  __int16 v29; // fps
  double v30; // st7
  bool v31; // zf
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  double v36; // st7
  __int16 v37; // fps
  unsigned int v38; // ebx
  unsigned int v39; // eax
  unsigned int v40; // eax
  int v41; // ebp
  unsigned int v42; // eax
  int v43; // ebx
  double v44; // st7
  __int16 v45; // fps
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // ebp
  double v49; // st7
  __int16 v50; // fps
  float v52; // [esp+18h] [ebp-20h]
  unsigned int v53; // [esp+18h] [ebp-20h]
  unsigned int v54; // [esp+18h] [ebp-20h]
  unsigned int v55; // [esp+18h] [ebp-20h]
  float v56; // [esp+20h] [ebp-18h]
  float v57; // [esp+2Ch] [ebp-Ch] BYREF
  float v58; // [esp+30h] [ebp-8h]
  float v59; // [esp+34h] [ebp-4h]
  float v60; // [esp+3Ch] [ebp+4h]
  float v61; // [esp+3Ch] [ebp+4h]
  float v62; // [esp+3Ch] [ebp+4h]
  float v63; // [esp+3Ch] [ebp+4h]
  unsigned int v64; // [esp+3Ch] [ebp+4h]
  float v65; // [esp+3Ch] [ebp+4h]
  float v66; // [esp+3Ch] [ebp+4h]
  float v67; // [esp+3Ch] [ebp+4h]
  unsigned int v68; // [esp+3Ch] [ebp+4h]
  float v69; // [esp+3Ch] [ebp+4h]
  float v70; // [esp+3Ch] [ebp+4h]
  float v71; // [esp+3Ch] [ebp+4h]
  float v72; // [esp+3Ch] [ebp+4h]
  float v73; // [esp+3Ch] [ebp+4h]
  float v74; // [esp+3Ch] [ebp+4h]
  float v75; // [esp+3Ch] [ebp+4h]
  float v76; // [esp+3Ch] [ebp+4h]
  float v77; // [esp+3Ch] [ebp+4h]
  float v78; // [esp+3Ch] [ebp+4h]
  float v79; // [esp+3Ch] [ebp+4h]
  unsigned int v80; // [esp+40h] [ebp+8h]
  unsigned int v81; // [esp+40h] [ebp+8h]
  unsigned int v82; // [esp+40h] [ebp+8h]
  unsigned int v83; // [esp+40h] [ebp+8h]
  float v84; // [esp+40h] [ebp+8h]

  v4 = a2; /*0x79da16*/
  v5 = this; /*0x79da1d*/
  v6 = OB_stBezierSpline_Evaluate_010201A0((float *)*(this + 0xC), 0.0); /*0x79da2a*/
  v7 = v5[0xD]; /*0x79da32*/
  v9 = 0; /*0x79da39*/
  v52 = v6 * *(float *)(a2 + 0x14); /*0x79da3b*/
  v10 = 1.0; /*0x79da41*/
  if ( v7 ) /*0x79da43*/
  {
    v57 = 0.0; /*0x79da47*/
    while ( 1 ) /*0x79da5a*/
    {
      v11 = (double)v9; /*0x79da5a*/
      if ( v9 < 0 ) /*0x79da5e*/
        v11 = v11 + flt_A2FC78; /*0x79da60*/
      v12 = (double)v7; /*0x79da6c*/
      if ( v7 < 0 ) /*0x79da70*/
        v12 = v12 + flt_A2FC78; /*0x79da72*/
      v13 = (float *)v5[0xC]; /*0x79da7b*/
      v60 = v10 - v11 / (v12 - v10); /*0x79da82*/
      v58 = -v60 * *(float *)(v4 + 0x14); /*0x79da91*/
      v59 = OB_stBezierSpline_Evaluate_010201A0(v13, v60) * *(float *)(v4 + 0x14) - v52; /*0x79daab*/
      OB_CBranch_childVectorPush_010201A0(a3, (int *)&v57); /*0x79daaf*/
      v7 = v5[0xD]; /*0x79dab4*/
      if ( ++v9 >= (unsigned int)v7 ) /*0x79dabc*/
        break; /*0x79dabc*/
      v10 = 1.0; /*0x79da50*/
    }
  }
  v14 = v5[0xD] - 2; /*0x79dac5*/
  if ( v14 >= 0 ) /*0x79dac8*/
  {
    v4 = 0xC * v14; /*0x79dacf*/
    do /*0x79db33*/
    {
      v15 = a3[1]; /*0x79dad1*/
      if ( !v15 || v14 >= (unsigned int)((int)(a3[2] - v15) / 0xC) ) /*0x79daef*/
        _invalid_parameter_noinfo(v4, v14, (int)a3); /*0x79daf1*/
      v16 = a3[1]; /*0x79daf6*/
      v17 = *(float *)(v16 + v4 + 4); /*0x79daf9*/
      v18 = *(float *)(v16 + v4); /*0x79dafd*/
      v19 = *(float *)(v4 + v16 + 8); /*0x79db02*/
      v58 = v17; /*0x79db05*/
      v20 = v17 * dbl_A3D360; /*0x79db0d*/
      v57 = v18; /*0x79db13*/
      v58 = v20; /*0x79db1e*/
      v59 = v19; /*0x79db22*/
      OB_CBranch_childVectorPush_010201A0(a3, (int *)&v57); /*0x79db26*/
      --v14; /*0x79db2b*/
      v4 -= 0xC; /*0x79db2e*/
    }
    while ( v14 >= 0 ); /*0x79db33*/
  }
  v21 = 0; /*0x79db37*/
  result = sub_6F1080(a3); /*0x79db39*/
  if ( result ) /*0x79db40*/
  {
    do /*0x79dfcf*/
    {
      if ( v21 == v5[0xD] - 1 ) /*0x79db58*/
      {
        v23 = flt_B2BA00; /*0x79db5a*/
      }
      else
      {
        if ( v21 ) /*0x79db67*/
        {
          v31 = v21 == sub_6F1080(a3) - 1; /*0x79dc47*/
          v32 = a3[1]; /*0x79dc49*/
          if ( v31 ) /*0x79dc4c*/
          {
            if ( !v32 || v21 >= (int)(a3[2] - v32) / 0xC ) /*0x79dc6d*/
              _invalid_parameter_noinfo(v4, v21, (int)a3); /*0x79dc6f*/
            v33 = a3[1]; /*0x79dc74*/
            v81 = v33 + 0xC * v21; /*0x79dc83*/
            v4 = v21 - 1; /*0x79dc87*/
            if ( !v33 || v4 >= (int)(a3[2] - v33) / 0xC ) /*0x79dca3*/
              _invalid_parameter_noinfo(v4, v21, (int)a3); /*0x79dca5*/
            v34 = a3[1]; /*0x79dcaa*/
            v53 = v34 + 0xC * v4; /*0x79dcb5*/
            if ( !v34 || v21 >= (int)(a3[2] - v34) / 0xC ) /*0x79dcd2*/
              _invalid_parameter_noinfo(v4, v21, (int)a3); /*0x79dcd4*/
            v35 = a3[1]; /*0x79dcd9*/
            v64 = v35; /*0x79dcde*/
            if ( !v35 || v4 >= (int)(a3[2] - v35) / 0xC ) /*0x79dcfb*/
              _invalid_parameter_noinfo(v4, v21, (int)a3); /*0x79dcfd*/
            v65 = *(float *)(v64 + 0xC * v21 + 8) - *(float *)(a3[1] + 0xC * v4 + 8); /*0x79dd1c*/
            v36 = v65; /*0x79dd20*/
            v66 = *(float *)(v81 + 4) - *(float *)(v53 + 4); /*0x79dd2a*/
            sub_98598A(v66, v36, v37); /*0x79dd32*/
            v67 = v36; /*0x79dd37*/
            v30 = v67; /*0x79dd3b*/
          }
          else
          {
            v38 = v21 + 1; /*0x79dd46*/
            if ( !v32 || v38 >= (int)(a3[2] - v32) / 0xC ) /*0x79dd62*/
              _invalid_parameter_noinfo(v38, v21, (int)a3); /*0x79dd64*/
            v39 = a3[1]; /*0x79dd69*/
            v82 = v39 + 0xC * v38; /*0x79dd74*/
            if ( !v39 || v21 >= (int)(a3[2] - v39) / 0xC ) /*0x79dd91*/
              _invalid_parameter_noinfo(v38, v21, (int)a3); /*0x79dd93*/
            v40 = a3[1]; /*0x79dd98*/
            v41 = 0xC * v21; /*0x79dda0*/
            v54 = v40 + 0xC * v21; /*0x79ddab*/
            if ( !v40 || v38 >= (int)(a3[2] - v40) / 0xC ) /*0x79ddc8*/
              _invalid_parameter_noinfo(v38, v21, (int)a3); /*0x79ddca*/
            v42 = a3[1]; /*0x79ddcf*/
            v68 = v42 + 0xC * v38; /*0x79ddda*/
            if ( !v42 || v21 >= (int)(a3[2] - v42) / 0xC ) /*0x79ddf7*/
              _invalid_parameter_noinfo(v38, v21, (int)a3); /*0x79ddf9*/
            v43 = a3[1]; /*0x79de05*/
            v69 = *(float *)(v68 + 8) - *(float *)(v43 + v41 + 8); /*0x79de14*/
            v44 = v69; /*0x79de18*/
            v70 = *(float *)(v82 + 4) - *(float *)(v54 + 4); /*0x79de22*/
            sub_98598A(v70, v44, v45); /*0x79de2a*/
            v71 = v44; /*0x79de2f*/
            v56 = v71; /*0x79de39*/
            if ( !v43 || v21 >= (int)(a3[2] - v43) / 0xC ) /*0x79de56*/
              _invalid_parameter_noinfo(v43, v21, (int)a3); /*0x79de58*/
            v46 = a3[1]; /*0x79de5d*/
            v83 = v46 + v41; /*0x79de64*/
            v4 = v21 - 1; /*0x79de68*/
            if ( !v46 || v4 >= (int)(a3[2] - v46) / 0xC ) /*0x79de84*/
              _invalid_parameter_noinfo(v4, v21, (int)a3); /*0x79de86*/
            v47 = a3[1]; /*0x79de8b*/
            v55 = v47 + 0xC * v4; /*0x79de96*/
            if ( !v47 || v21 >= (int)(a3[2] - v47) / 0xC ) /*0x79deb3*/
              _invalid_parameter_noinfo(v4, v21, (int)a3); /*0x79deb5*/
            v48 = a3[1]; /*0x79deba*/
            if ( !v48 || v4 >= (int)(a3[2] - v48) / 0xC ) /*0x79ded8*/
              _invalid_parameter_noinfo(v4, v21, (int)a3); /*0x79deda*/
            v72 = *(float *)(0xC * v21 + v48 + 8) - *(float *)(a3[1] + 0xC * v4 + 8); /*0x79def9*/
            v49 = v72; /*0x79defd*/
            v73 = *(float *)(v83 + 4) - *(float *)(v55 + 4); /*0x79df07*/
            sub_98598A(v73, v49, v50); /*0x79df0f*/
            v74 = v49; /*0x79df14*/
            v30 = (v74 + v56) * dbl_A2FAA0; /*0x79df20*/
          }
        }
        else
        {
          v24 = a3[1]; /*0x79db6d*/
          if ( !v24 || (unsigned int)((int)(a3[2] - v24) / 0xC) <= 1 ) /*0x79db8c*/
            _invalid_parameter_noinfo(v4, 0, (int)a3); /*0x79db8e*/
          v25 = a3[1]; /*0x79db93*/
          v80 = v25 + 0xC; /*0x79db9b*/
          if ( !v25 || !((int)(a3[2] - v25) / 0xC) ) /*0x79dbb4*/
            _invalid_parameter_noinfo(v4, 0, (int)a3); /*0x79dbb8*/
          v26 = a3[1]; /*0x79dbbd*/
          v27 = v26; /*0x79dbc2*/
          if ( !v26 || (unsigned int)((int)(a3[2] - v26) / 0xC) <= 1 ) /*0x79dbde*/
            _invalid_parameter_noinfo(v4, 0, (int)a3); /*0x79dbe0*/
          v4 = a3[1]; /*0x79dbe5*/
          if ( !v4 || !((int)(a3[2] - v4) / 0xC) ) /*0x79dbff*/
            _invalid_parameter_noinfo(v4, 0, (int)a3); /*0x79dc03*/
          v61 = *(float *)(v4 + 0x14) - *(float *)(a3[1] + 8); /*0x79dc15*/
          v28 = v61; /*0x79dc19*/
          v62 = *(float *)(v80 + 4) - *(float *)(v27 + 4); /*0x79dc23*/
          sub_98598A(v62, v28, v29); /*0x79dc2b*/
          v63 = v28; /*0x79dc30*/
          v30 = v63; /*0x79dc34*/
        }
        v23 = v30 + flt_B2BA00; /*0x79df26*/
        v5 = this; /*0x79df2c*/
      }
      v75 = v23; /*0x79df30*/
      v84 = cos(v75); /*0x79df3d*/
      v58 = v84; /*0x79df45*/
      v76 = sin(v75); /*0x79df52*/
      v59 = v76; /*0x79df5a*/
      v77 = v76 * v76 + v84 * v84 + 0.0 * 0.0; /*0x79df76*/
      v78 = sqrt(v77); /*0x79df83*/
      v79 = 1.0 / v78; /*0x79df98*/
      v57 = dbl_A2FC68 * v79; /*0x79dfa8*/
      v58 = v84 * v79; /*0x79dfb2*/
      v59 = v79 * v59; /*0x79dfba*/
      OB_CBranch_childVectorPush_010201A0(a4, (int *)&v57); /*0x79dfbe*/
      ++v21; /*0x79dfc5*/
      result = sub_6F1080(a3); /*0x79dfc8*/
    }
    while ( v21 < result ); /*0x79dfcf*/
  }
  return result; /*0x79dfd5*/
}
