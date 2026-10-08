char __cdecl sub_960CB0(
        float a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        BSSimpleList_VoidPtr *a9,
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
  BSSimpleList_VoidPtr *Connections; // eax
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

  v12 = a2[8]; /*0x960cd2*/
  v13 = a2[9]; /*0x960cde*/
  v14 = a2[0xA]; /*0x960ce1*/
  v100 = a2[0xE] * a2[0xE]; /*0x960ce4*/
  v89[0] = v12; /*0x960ceb*/
  v15 = *a5 - *a4; /*0x960cf4*/
  v89[3] = a2[0xB]; /*0x960cf6*/
  v16 = *a4; /*0x960cfa*/
  v89[1] = v13; /*0x960cfc*/
  v54 = v15; /*0x960d00*/
  v17 = a2[0xC]; /*0x960d04*/
  v18 = a5[1]; /*0x960d07*/
  v91 = v16; /*0x960d0a*/
  v19 = v18 - a4[1]; /*0x960d0e*/
  v89[4] = v17; /*0x960d15*/
  v20 = a4[1]; /*0x960d19*/
  v61 = v19; /*0x960d1c*/
  v89[2] = v14; /*0x960d20*/
  v21 = a2[0xD]; /*0x960d27*/
  v22 = a5[2] - a4[2]; /*0x960d2a*/
  v92 = v20; /*0x960d2d*/
  v89[5] = v21; /*0x960d35*/
  v23 = a4[2]; /*0x960d39*/
  v68 = v22; /*0x960d3c*/
  v24 = *a6; /*0x960d40*/
  v94 = v54; /*0x960d43*/
  v25 = v24 - *a4; /*0x960d47*/
  v93 = v23; /*0x960d49*/
  v95 = v61; /*0x960d51*/
  v55 = v25; /*0x960d58*/
  v26 = a6[1]; /*0x960d60*/
  v97 = v55; /*0x960d63*/
  v27 = v26 - a4[1]; /*0x960d6a*/
  v96 = v68; /*0x960d6d*/
  v62 = v27; /*0x960d7c*/
  v28 = a6[2]; /*0x960d84*/
  v98 = v62; /*0x960d87*/
  v69 = v28 - a4[2]; /*0x960d9d*/
  v99 = v69; /*0x960da5*/
  v29 = sub_9726E0(v89, &v91, &v101, &v102, &v103); /*0x960dba*/
  *(float *)&v84 = v29 - v100; /*0x960dc9*/
  if ( *(float *)&v84 <= 0.0 ) /*0x960ddc*/
  {
    *a8 = 0.0; /*0x960df1*/
    *(float *)&v84 = v97 * v103; /*0x960e0e*/
    *((float *)&v84 + 1) = v98 * v103; /*0x960e1b*/
    v85 = v103 * v99; /*0x960e26*/
    v56 = v94 * v102; /*0x960e3b*/
    v63 = v95 * v102; /*0x960e48*/
    v70 = v102 * v96; /*0x960e53*/
    *(float *)&v81 = v91 + v56; /*0x960e5f*/
    v82 = v92 + v63; /*0x960e6b*/
    v83 = v93 + v70; /*0x960e77*/
    v57 = *(float *)&v81 + *(float *)&v84; /*0x960e83*/
    v30 = v82; /*0x960e8b*/
    *(float *)&a9->firstNode.data = v57; /*0x960e8f*/
    v64 = v30 + *((float *)&v84 + 1); /*0x960e95*/
    v31 = v83; /*0x960e9d*/
    *(float *)&a9->firstNode.next = v64; /*0x960ea1*/
    v71 = v31 + v85; /*0x960ea8*/
    *(float *)&a9[1].firstNode.data = v71; /*0x960eb0*/
    if ( a10 ) /*0x960eb3*/
    {
      v32 = sub_9741F0(&v91, (float *)v88); /*0x960ec2*/
      v33 = a12; /*0x960ec9*/
      *a12 = *v32; /*0x960ed0*/
      a12[1] = v32[1]; /*0x960ed5*/
      a12[2] = v32[2]; /*0x960edb*/
      v34 = a11; /*0x960ede*/
LABEL_21:
      v60 = -*v33; /*0x96130e*/
      v67 = -v33[1]; /*0x96131b*/
      v53 = -v33[2]; /*0x96132a*/
      *v34 = v60; /*0x96132c*/
      v74 = v53; /*0x96132e*/
      v34[1] = v67; /*0x961336*/
      v34[2] = v74; /*0x961339*/
      return 1; /*0x961339*/
    }
    return 1; /*0x960eb3*/
  }
  v58 = *a3 - *a7; /*0x960efe*/
  v35 = a3[1]; /*0x960f06*/
  *(float *)v90 = v58; /*0x960f09*/
  v65 = v35 - a7[1]; /*0x960f10*/
  v36 = a3[2] - a7[2]; /*0x960f1b*/
  *(float *)&v90[1] = v65; /*0x960f1e*/
  v72 = v36; /*0x960f22*/
  *(float *)&v90[2] = v72; /*0x960f2e*/
  *(float *)&v84 = v58 * v58 + v65 * v65 + v72 * v72; /*0x960f4a*/
  if ( *(float *)&v84 * a1 <= dbl_AA3AF8 ) /*0x960f64*/
    return 0; /*0x960f72*/
  *(float *)&v84 = v95 * v99 - v96 * v98; /*0x960f9f*/
  *((float *)&v84 + 1) = v96 * v97 - v99 * v94; /*0x960fbc*/
  v85 = v98 * v94 - v95 * v97; /*0x960fc6*/
  *(float *)&v81 = -*(float *)&v84; /*0x960fd0*/
  v82 = -*((float *)&v84 + 1); /*0x960fda*/
  v83 = -v85; /*0x960fe4*/
  v38 = v82; /*0x960feb*/
  v39 = *(float *)&v81; /*0x960ffe*/
  v40 = v83; /*0x96100d*/
  *(float *)&v84 = a2[3] * v83 + a2[1] * *(float *)&v81 + a2[2] * v82; /*0x961011*/
  if ( a2[0xE] >= (double)a2[7] ) /*0x961022*/
    v41 = a2[0xE]; /*0x961029*/
  else
    v41 = a2[7]; /*0x961024*/
  v86 = v41; /*0x96102c*/
  v87 = v39 * *a4 + a4[1] * v38 + v40 * a4[2]; /*0x961042*/
  v75 = *(float *)&v84 - v87; /*0x96104e*/
  v42 = v39 * v39; /*0x961060*/
  v43 = v75 * v75; /*0x961060*/
  v76 = v38 * v38 + v42 + v40 * v40; /*0x961068*/
  v77 = v76 * v86 * v86; /*0x96107a*/
  if ( v77 < v43 ) /*0x961089*/
  {
    Vector3_NormalizeInPlace((float *)&v81); /*0x961093*/
    v44 = *(float *)&v81 * v58 + v82 * v65 + v83 * v72; /*0x9610c3*/
    if ( v87 >= (double)*(float *)&v84 ) /*0x9610c5*/
    {
      v79 = v44; /*0x96111e*/
      if ( v79 <= (double)*(float *)&SrcStr ) /*0x961131*/
        return 0; /*0x961131*/
      v47 = sub_47DA10((float *)v88, v86, (float *)&v81); /*0x961149*/
      v48 = sub_47D9B0(a2 + 1, (float *)&v84, v47); /*0x96115a*/
      v59 = *v48; /*0x961167*/
      v66 = v48[1]; /*0x96116b*/
      v73 = v48[2]; /*0x96116f*/
    }
    else
    {
      v78 = v44; /*0x9610c7*/
      if ( v78 >= (double)*(float *)&SrcStr ) /*0x9610da*/
        return 0; /*0x9610da*/
      v45 = sub_47DA10((float *)v88, v86, (float *)&v81); /*0x9610f2*/
      v46 = sub_4121A0(a2 + 1, (float *)&v84, v45); /*0x961103*/
      v59 = *v46; /*0x96110d*/
      v66 = v46[1]; /*0x961114*/
      v73 = v46[2]; /*0x961118*/
    }
    v87 = a4[1] * v82 + *(float *)&v81 * *a4 + v83 * a4[2]; /*0x961197*/
    v84 = v87 + dbl_A30E40; /*0x9611a5*/
    v80 = v82 * v66 + *(float *)&v81 * v59 + v83 * v73; /*0x9611bf*/
    if ( v80 > v84 ) /*0x9611ce*/
    {
      v49 = sub_47DA10(v104, a1, (float *)v90); /*0x9611e8*/
      *(float *)v88 = *v49 + v59; /*0x9611fa*/
      *(float *)&v88[1] = v49[1] + v66; /*0x961205*/
      *(float *)&v88[2] = v49[2] + v73; /*0x961215*/
      v50 = sub_47D9E0((float *)&v81, (float *)v88); /*0x961219*/
      if ( v50 > v84 ) /*0x961227*/
        return 0; /*0x961227*/
    }
  }
  sub_974110((float *)v105, (int)a2, a4, a5, a6, a1, flt_A37080, flt_A79DB4, 0x20); /*0x96125b*/
  sub_96F170((float *)v105, a3, a7); /*0x961277*/
  *a8 = sub_680CC0((float *)v105); /*0x961296*/
  if ( NiRenderTargetGroup::GetRenderTargetsNum(v105) != 3 && NiRenderTargetGroup::GetRenderTargetsNum(v105) != 2 ) /*0x9612b1*/
    return 0; /*0x9612b1*/
  Connections = PathGraphNode_GetConnections(v105); /*0x9612be*/
  *a9 = *Connections; /*0x9612d4*/
  a9[1].firstNode.data = Connections[1].firstNode.data; /*0x9612df*/
  if ( a10 ) /*0x9612e2*/
  {
    Position = TESObjectREFR_GetPosition((TESChildCELL *)v105); /*0x9612eb*/
    v33 = a11; /*0x9612f2*/
    *a11 = *Position; /*0x9612f9*/
    a11[1] = Position[1]; /*0x9612fe*/
    a11[2] = Position[2]; /*0x961304*/
    v34 = a12; /*0x961307*/
    goto LABEL_21; /*0x961307*/
  }
  return 1; /*0x960f66*/
}
