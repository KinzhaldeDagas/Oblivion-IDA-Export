char __cdecl sub_96CF80(
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
  BSSimpleList_VoidPtr *Connections; // eax
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

  v12 = a2[4] * a2[4]; /*0x96cfac*/
  v13 = a2[2]; /*0x96cfae*/
  v14 = a2[3]; /*0x96cfb1*/
  v85 = a2[1]; /*0x96cfb4*/
  v98 = v12; /*0x96cfb8*/
  v15 = *a5; /*0x96cfbe*/
  v89 = *a4; /*0x96cfc0*/
  v16 = v15 - *a4; /*0x96cfc4*/
  v86 = v13; /*0x96cfc6*/
  v90 = a4[1]; /*0x96cfcd*/
  v41 = v16; /*0x96cfd1*/
  v17 = a5[1]; /*0x96cfd9*/
  v87 = v14; /*0x96cfdc*/
  v18 = v17 - a4[1]; /*0x96cfe0*/
  v19 = a4[2]; /*0x96cfe3*/
  v92 = v41; /*0x96cfe6*/
  v91 = v19; /*0x96cfea*/
  v48 = v18; /*0x96cfee*/
  v20 = a5[2]; /*0x96cff6*/
  v93 = v48; /*0x96cff9*/
  v54 = v20 - a4[2]; /*0x96d000*/
  v21 = *a6; /*0x96d008*/
  v94 = v54; /*0x96d00b*/
  v42 = v21 - *a4; /*0x96d011*/
  v22 = a6[1]; /*0x96d019*/
  v95 = v42; /*0x96d01c*/
  v49 = v22 - a4[1]; /*0x96d02f*/
  v23 = a6[2]; /*0x96d037*/
  v96 = v49; /*0x96d03a*/
  v55 = v23 - a4[2]; /*0x96d049*/
  v97 = v55; /*0x96d051*/
  v24 = sub_975DF0(&v85, &v89, &v99, &v100); /*0x96d05b*/
  v67 = v24 - v98; /*0x96d070*/
  if ( v67 <= 0.0 ) /*0x96d083*/
  {
    *a8 = 0.0; /*0x96d09a*/
    v68 = v95 * v100; /*0x96d0b4*/
    v75 = v96 * v100; /*0x96d0be*/
    v77 = v100 * v97; /*0x96d0c6*/
    v43 = v92 * v99; /*0x96d0d8*/
    v50 = v93 * v99; /*0x96d0e2*/
    v56 = v99 * v94; /*0x96d0ea*/
    *(float *)&v81 = v89 + v43; /*0x96d0f6*/
    v82 = v90 + v50; /*0x96d102*/
    v83 = v91 + v56; /*0x96d10e*/
    v44 = *(float *)&v81 + v68; /*0x96d11a*/
    v25 = v82; /*0x96d122*/
    *(float *)&a9->firstNode.data = v44; /*0x96d126*/
    v51 = v25 + v75; /*0x96d12c*/
    v26 = v83; /*0x96d134*/
    *(float *)&a9->firstNode.next = v51; /*0x96d138*/
    v57 = v26 + v77; /*0x96d13f*/
    *(float *)&a9[1].firstNode.data = v57; /*0x96d147*/
    if ( a10 ) /*0x96d14a*/
    {
      v27 = sub_9741F0(&v89, (float *)v101); /*0x96d15c*/
      v28 = a12; /*0x96d163*/
      *a12 = *v27; /*0x96d16a*/
      a12[1] = v27[1]; /*0x96d16f*/
      a12[2] = v27[2]; /*0x96d175*/
      v29 = a11; /*0x96d178*/
LABEL_18:
      v47 = -*v28; /*0x96d5b6*/
      v53 = -v28[1]; /*0x96d5c3*/
      v40 = -v28[2]; /*0x96d5d2*/
      *v29 = v47; /*0x96d5d4*/
      v60 = v40; /*0x96d5d6*/
      v29[1] = v53; /*0x96d5de*/
      v29[2] = v60; /*0x96d5e1*/
      return 1; /*0x96d5e1*/
    }
    return 1; /*0x96d14a*/
  }
  v45 = *a3 - *a7; /*0x96d198*/
  v30 = a3[1]; /*0x96d1a0*/
  *(float *)v88 = v45; /*0x96d1a3*/
  v52 = v30 - a7[1]; /*0x96d1aa*/
  v31 = a3[2] - a7[2]; /*0x96d1b5*/
  *(float *)&v88[1] = v52; /*0x96d1b8*/
  v58 = v31; /*0x96d1bc*/
  *(float *)&v88[2] = v58; /*0x96d1c8*/
  v69 = v45 * v45 + v52 * v52 + v58 * v58; /*0x96d1e4*/
  if ( v69 * a1 <= dbl_AA3AF8 ) /*0x96d1fe*/
    return 0; /*0x96d20e*/
  v70 = v93 * v97 - v94 * v96; /*0x96d22f*/
  v76 = v94 * v95 - v97 * v92; /*0x96d249*/
  v78 = v96 * v92 - v93 * v95; /*0x96d253*/
  *(float *)&v81 = -v70; /*0x96d25d*/
  v82 = -v76; /*0x96d267*/
  v83 = -v78; /*0x96d271*/
  v71 = v87 * v83 + v86 * v82 + *(float *)&v81 * v85; /*0x96d29f*/
  v84 = *(float *)&v81 * *a4 + a4[1] * v82 + v83 * a4[2]; /*0x96d2b5*/
  v61 = v71 - v84; /*0x96d2c1*/
  v33 = v61 * v61; /*0x96d2db*/
  v62 = *(float *)&v81 * *(float *)&v81 + v82 * v82 + v83 * v83; /*0x96d2dd*/
  v63 = v98 * v62; /*0x96d2e9*/
  if ( v63 < v33 ) /*0x96d2f8*/
  {
    Vector3_NormalizeInPlace((float *)&v81); /*0x96d302*/
    v34 = *(float *)&v81 * v45 + v82 * v52 + v83 * v58; /*0x96d332*/
    if ( v84 >= (double)v71 ) /*0x96d334*/
    {
      v65 = v34; /*0x96d3a2*/
      if ( v65 <= (double)*(float *)&SrcStr ) /*0x96d3b5*/
        return 0; /*0x96d3b5*/
      v36 = sub_47DA10((float *)v101, a2[4], (float *)&v81); /*0x96d3cf*/
      *(float *)&v73 = *v36 + v85; /*0x96d3da*/
      *((float *)&v73 + 1) = v36[1] + v86; /*0x96d3e5*/
      v46 = v73; /*0x96d3f8*/
      v80 = v36[2] + v87; /*0x96d400*/
      v59 = v80; /*0x96d408*/
    }
    else
    {
      v64 = v34; /*0x96d336*/
      if ( v64 >= (double)*(float *)&SrcStr ) /*0x96d349*/
        return 0; /*0x96d349*/
      v35 = sub_47DA10((float *)v101, a2[4], (float *)&v81); /*0x96d363*/
      *(float *)&v72 = v85 - *v35; /*0x96d36e*/
      *((float *)&v72 + 1) = v86 - v35[1]; /*0x96d381*/
      v46 = v72; /*0x96d38d*/
      v79 = v87 - v35[2]; /*0x96d394*/
      v59 = v79; /*0x96d39c*/
    }
    v84 = a4[1] * v82 + *(float *)&v81 * *a4 + v83 * a4[2]; /*0x96d433*/
    v74 = v84 + dbl_A30E40; /*0x96d441*/
    v66 = v82 * *((float *)&v46 + 1) + *(float *)&v81 * *(float *)&v46 + v83 * v59; /*0x96d45b*/
    if ( v66 > v74 ) /*0x96d46a*/
    {
      v37 = sub_47DA10(v102, a1, (float *)v88); /*0x96d484*/
      *(float *)v101 = *v37 + *(float *)&v46; /*0x96d49a*/
      *(float *)&v101[1] = v37[1] + *((float *)&v46 + 1); /*0x96d4ac*/
      *(float *)&v101[2] = v37[2] + v59; /*0x96d4ba*/
      if ( sub_47D9E0((float *)&v81, (float *)v101) > v74 ) /*0x96d4cf*/
        return 0; /*0x96d4cf*/
    }
  }
  sub_9767D0((float *)v103, (int)a2, a4, a5, a6, a1, flt_A37080, flt_A79DB4, 0x20); /*0x96d503*/
  sub_96F170((float *)v103, a3, a7); /*0x96d51f*/
  *a8 = sub_680CC0((float *)v103); /*0x96d53e*/
  if ( NiRenderTargetGroup::GetRenderTargetsNum(v103) != 3 && NiRenderTargetGroup::GetRenderTargetsNum(v103) != 2 ) /*0x96d559*/
    return 0; /*0x96d559*/
  Connections = PathGraphNode_GetConnections(v103); /*0x96d566*/
  *a9 = *Connections; /*0x96d57c*/
  a9[1].firstNode.data = Connections[1].firstNode.data; /*0x96d587*/
  if ( a10 ) /*0x96d58a*/
  {
    Position = TESObjectREFR_GetPosition((TESChildCELL *)v103); /*0x96d593*/
    v28 = a11; /*0x96d59a*/
    *a11 = *Position; /*0x96d5a1*/
    a11[1] = Position[1]; /*0x96d5a6*/
    a11[2] = Position[2]; /*0x96d5ac*/
    v29 = a12; /*0x96d5af*/
    goto LABEL_18; /*0x96d5af*/
  }
  return 1; /*0x96d202*/
}
