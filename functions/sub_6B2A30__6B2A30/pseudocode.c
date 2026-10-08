int __thiscall sub_6B2A30(unsigned int **this, int a2)
{
  unsigned int v3; // edx
  int v4; // eax
  unsigned int v5; // esi
  unsigned int v6; // edi
  unsigned int *v7; // ebp
  unsigned int **v8; // esi
  int v9; // edi
  _DWORD *v10; // esi
  int v11; // edi
  unsigned int **v12; // ebp
  _DWORD *v13; // esi
  int v14; // edi
  unsigned int *v16; // eax
  unsigned int *v17; // ecx
  unsigned int *v18; // eax
  unsigned int *v19; // ecx
  unsigned int *v20; // eax
  unsigned int *v21; // ecx
  unsigned int *v22; // eax
  unsigned int *v23; // ecx
  unsigned int *v24; // eax
  unsigned int *v25; // ecx
  unsigned int *v26; // eax
  unsigned int *v27; // ecx
  unsigned int *v28; // eax
  unsigned int *v29; // ecx
  unsigned int *v30; // eax
  unsigned int *v31; // ecx
  unsigned int *v32; // eax
  unsigned int *v33; // ecx
  unsigned int *v34; // eax
  unsigned int *v35; // ecx
  unsigned int *v36; // eax
  unsigned int *v37; // ecx
  unsigned int *v38; // eax
  unsigned int *v39; // ecx
  unsigned int *v40; // eax
  unsigned int *v41; // ecx
  unsigned int *v42; // eax
  unsigned int *v43; // ecx
  unsigned int *v44; // eax
  unsigned int *v45; // ecx
  unsigned int *v46; // eax
  unsigned int *v47; // ecx
  unsigned int *v48; // eax
  unsigned int *v49; // ecx
  unsigned int *v50; // eax
  unsigned int *v51; // ecx
  unsigned int *v52; // eax
  unsigned int *v53; // ecx
  unsigned int *v54; // eax
  unsigned int *v55; // ecx
  unsigned int *v56; // eax
  unsigned int *v57; // ecx
  unsigned int *v58; // eax
  unsigned int *v59; // ecx
  unsigned int *v60; // eax
  unsigned int *v61; // ecx
  unsigned int *v62; // eax
  unsigned int *v63; // ecx
  unsigned int *v64; // eax
  unsigned int *v65; // ecx
  unsigned int *v66; // eax
  unsigned int *v67; // ecx
  unsigned int *v68; // eax
  unsigned int *v69; // ecx
  unsigned int *v70; // eax
  unsigned int *v71; // ecx
  unsigned int *v72; // eax
  unsigned int *v73; // ecx
  unsigned int *v74; // eax
  unsigned int *v75; // ecx
  unsigned int *v76; // eax
  unsigned int *v77; // ecx
  unsigned int *v78; // eax
  unsigned int *v79; // ecx
  unsigned int *v80; // eax
  unsigned int *v81; // ecx
  unsigned int *v82; // eax
  unsigned int *v83; // ecx
  unsigned int *v84; // eax
  unsigned int *v85; // ecx
  unsigned int *v86; // eax
  unsigned int *v87; // ecx
  unsigned int *v88; // eax
  unsigned int *v89; // ecx
  unsigned int *v90; // eax
  unsigned int *v91; // ecx
  unsigned int *v92; // eax
  unsigned int *v93; // ecx
  unsigned int *v94; // eax
  unsigned int *v95; // ecx
  unsigned int *v96; // eax
  unsigned int *v97; // ecx
  unsigned int *v98; // eax
  unsigned int *v99; // ecx
  unsigned int *v100; // eax
  unsigned int *v101; // ecx
  unsigned int *v102; // eax
  unsigned int *v103; // ecx
  unsigned int *v104; // eax
  unsigned int *v105; // ecx
  unsigned int *v106; // eax
  unsigned int *v107; // ecx
  unsigned int *v108; // eax
  unsigned int *v109; // ecx
  unsigned int *v110; // eax
  unsigned int *v111; // ecx
  unsigned int *v112; // eax
  unsigned int *v113; // ecx
  unsigned int *v114; // eax
  unsigned int *v115; // ecx
  unsigned int *v116; // eax
  unsigned int *v117; // ecx
  int v118; // [esp+10h] [ebp-50h]
  unsigned int *v119; // [esp+14h] [ebp-4Ch]
  _DWORD v120[18]; // [esp+18h] [ebp-48h] BYREF
  unsigned int **v121; // [esp+64h] [ebp+4h]
  int v122; // [esp+64h] [ebp+4h]

  v3 = (*this)[1]; /*0x6b2a38*/
  v4 = a2; /*0x6b2a3b*/
  qmemcpy(v120, (const void *)(v3 + 0x48 * a2 + 0x2C), sizeof(v120)); /*0x6b2a52*/
  v5 = *(_DWORD *)(4 * v120[3] + 0xB16320); /*0x6b2a5d*/
  v6 = *(_DWORD *)(4 * v120[3] + 0xB16360); /*0x6b2a64*/
  v7 = (unsigned int *)(4 * v120[3] + 0xB16320); /*0x6b2a6b*/
  v119 = (unsigned int *)(4 * v120[3] + 0xB16360); /*0x6b2a79*/
  if ( v120[4] && v120[5] == 2 ) /*0x6b2a88*/
  {
    if ( v120[6] ) /*0x6b2a93*/
    {
      v8 = this + 0x100A; /*0x6b2a99*/
      v9 = 8; /*0x6b2a9f*/
      do /*0x6b2ab8*/
      {
        *v8++ = (unsigned int *)sub_6AF6F0(*(this + 1), *v7); /*0x6b2ab0*/
        --v9; /*0x6b2ab5*/
      }
      while ( v9 ); /*0x6b2ab8*/
      v121 = this + 0x1024; /*0x6b2ac0*/
      v118 = 3; /*0x6b2ac4*/
      do /*0x6b2b00*/
      {
        v10 = v121; /*0x6b2ad0*/
        v11 = 3; /*0x6b2ad4*/
        do /*0x6b2af4*/
        {
          *v10 = sub_6AF6F0(*(this + 1), *v7); /*0x6b2aec*/
          v10 += 0xD; /*0x6b2aee*/
          --v11; /*0x6b2af1*/
        }
        while ( v11 ); /*0x6b2af4*/
        ++v121; /*0x6b2af6*/
        --v118; /*0x6b2afb*/
      }
      while ( v118 ); /*0x6b2b00*/
      v12 = this + 0x1027; /*0x6b2b02*/
      v122 = 6; /*0x6b2b08*/
      do /*0x6b2b38*/
      {
        v13 = v12; /*0x6b2b10*/
        v14 = 3; /*0x6b2b12*/
        do /*0x6b2b2e*/
        {
          *v13 = sub_6AF6F0(*(this + 1), *v119); /*0x6b2b26*/
          v13 += 0xD; /*0x6b2b28*/
          --v14; /*0x6b2b2b*/
        }
        while ( v14 ); /*0x6b2b2e*/
        ++v12; /*0x6b2b30*/
        --v122; /*0x6b2b33*/
      }
      while ( v122 ); /*0x6b2b38*/
      *(this + 0x102D) = 0; /*0x6b2b3f*/
      *(this + 0x103A) = 0; /*0x6b2b45*/
      *(this + 0x1047) = 0; /*0x6b2b4b*/
      return 0; /*0x6b2b3b*/
    }
    else
    {
      v16 = (unsigned int *)sub_6AF6F0(*(this + 1), v5); /*0x6b2b5c*/
      v17 = *(this + 1); /*0x6b2b61*/
      *(this + 0x1021) = v16; /*0x6b2b65*/
      v18 = (unsigned int *)sub_6AF6F0(v17, v5); /*0x6b2b6b*/
      v19 = *(this + 1); /*0x6b2b70*/
      *(this + 0x102E) = v18; /*0x6b2b74*/
      v20 = (unsigned int *)sub_6AF6F0(v19, v5); /*0x6b2b7a*/
      v21 = *(this + 1); /*0x6b2b7f*/
      *(this + 0x103B) = v20; /*0x6b2b83*/
      v22 = (unsigned int *)sub_6AF6F0(v21, v5); /*0x6b2b89*/
      v23 = *(this + 1); /*0x6b2b8e*/
      *(this + 0x1022) = v22; /*0x6b2b92*/
      v24 = (unsigned int *)sub_6AF6F0(v23, v5); /*0x6b2b98*/
      v25 = *(this + 1); /*0x6b2b9d*/
      *(this + 0x102F) = v24; /*0x6b2ba1*/
      v26 = (unsigned int *)sub_6AF6F0(v25, v5); /*0x6b2ba7*/
      v27 = *(this + 1); /*0x6b2bac*/
      *(this + 0x103C) = v26; /*0x6b2bb0*/
      v28 = (unsigned int *)sub_6AF6F0(v27, v5); /*0x6b2bb6*/
      v29 = *(this + 1); /*0x6b2bbb*/
      *(this + 0x1023) = v28; /*0x6b2bbf*/
      v30 = (unsigned int *)sub_6AF6F0(v29, v5); /*0x6b2bc5*/
      v31 = *(this + 1); /*0x6b2bca*/
      *(this + 0x1030) = v30; /*0x6b2bce*/
      v32 = (unsigned int *)sub_6AF6F0(v31, v5); /*0x6b2bd4*/
      v33 = *(this + 1); /*0x6b2bd9*/
      *(this + 0x103D) = v32; /*0x6b2bdd*/
      v34 = (unsigned int *)sub_6AF6F0(v33, v5); /*0x6b2be3*/
      v35 = *(this + 1); /*0x6b2be8*/
      *(this + 0x1024) = v34; /*0x6b2bec*/
      v36 = (unsigned int *)sub_6AF6F0(v35, v5); /*0x6b2bf2*/
      v37 = *(this + 1); /*0x6b2bf7*/
      *(this + 0x1031) = v36; /*0x6b2bfb*/
      v38 = (unsigned int *)sub_6AF6F0(v37, v5); /*0x6b2c01*/
      v39 = *(this + 1); /*0x6b2c06*/
      *(this + 0x103E) = v38; /*0x6b2c0a*/
      v40 = (unsigned int *)sub_6AF6F0(v39, v5); /*0x6b2c10*/
      v41 = *(this + 1); /*0x6b2c15*/
      *(this + 0x1025) = v40; /*0x6b2c19*/
      v42 = (unsigned int *)sub_6AF6F0(v41, v5); /*0x6b2c1f*/
      v43 = *(this + 1); /*0x6b2c24*/
      *(this + 0x1032) = v42; /*0x6b2c28*/
      v44 = (unsigned int *)sub_6AF6F0(v43, v5); /*0x6b2c2e*/
      v45 = *(this + 1); /*0x6b2c33*/
      *(this + 0x103F) = v44; /*0x6b2c37*/
      v46 = (unsigned int *)sub_6AF6F0(v45, v5); /*0x6b2c3d*/
      v47 = *(this + 1); /*0x6b2c42*/
      *(this + 0x1026) = v46; /*0x6b2c46*/
      v48 = (unsigned int *)sub_6AF6F0(v47, v5); /*0x6b2c4c*/
      v49 = *(this + 1); /*0x6b2c51*/
      *(this + 0x1033) = v48; /*0x6b2c55*/
      v50 = (unsigned int *)sub_6AF6F0(v49, v5); /*0x6b2c5b*/
      v51 = *(this + 1); /*0x6b2c60*/
      *(this + 0x1040) = v50; /*0x6b2c64*/
      v52 = (unsigned int *)sub_6AF6F0(v51, v6); /*0x6b2c6a*/
      v53 = *(this + 1); /*0x6b2c6f*/
      *(this + 0x1027) = v52; /*0x6b2c73*/
      *(this + 0x1034) = (unsigned int *)sub_6AF6F0(v53, v6); /*0x6b2c7e*/
      v54 = (unsigned int *)sub_6AF6F0(*(this + 1), v6); /*0x6b2c88*/
      v55 = *(this + 1); /*0x6b2c8d*/
      *(this + 0x1041) = v54; /*0x6b2c91*/
      v56 = (unsigned int *)sub_6AF6F0(v55, v6); /*0x6b2c97*/
      v57 = *(this + 1); /*0x6b2c9c*/
      *(this + 0x1028) = v56; /*0x6b2ca0*/
      v58 = (unsigned int *)sub_6AF6F0(v57, v6); /*0x6b2ca6*/
      v59 = *(this + 1); /*0x6b2cab*/
      *(this + 0x1035) = v58; /*0x6b2caf*/
      v60 = (unsigned int *)sub_6AF6F0(v59, v6); /*0x6b2cb5*/
      v61 = *(this + 1); /*0x6b2cba*/
      *(this + 0x1042) = v60; /*0x6b2cbe*/
      v62 = (unsigned int *)sub_6AF6F0(v61, v6); /*0x6b2cc4*/
      v63 = *(this + 1); /*0x6b2cc9*/
      *(this + 0x1029) = v62; /*0x6b2ccd*/
      v64 = (unsigned int *)sub_6AF6F0(v63, v6); /*0x6b2cd3*/
      v65 = *(this + 1); /*0x6b2cd8*/
      *(this + 0x1036) = v64; /*0x6b2cdc*/
      v66 = (unsigned int *)sub_6AF6F0(v65, v6); /*0x6b2ce2*/
      v67 = *(this + 1); /*0x6b2ce7*/
      *(this + 0x1043) = v66; /*0x6b2ceb*/
      v68 = (unsigned int *)sub_6AF6F0(v67, v6); /*0x6b2cf1*/
      v69 = *(this + 1); /*0x6b2cf6*/
      *(this + 0x102A) = v68; /*0x6b2cfa*/
      v70 = (unsigned int *)sub_6AF6F0(v69, v6); /*0x6b2d00*/
      v71 = *(this + 1); /*0x6b2d05*/
      *(this + 0x1037) = v70; /*0x6b2d09*/
      v72 = (unsigned int *)sub_6AF6F0(v71, v6); /*0x6b2d0f*/
      v73 = *(this + 1); /*0x6b2d14*/
      *(this + 0x1044) = v72; /*0x6b2d18*/
      v74 = (unsigned int *)sub_6AF6F0(v73, v6); /*0x6b2d1e*/
      v75 = *(this + 1); /*0x6b2d23*/
      *(this + 0x102B) = v74; /*0x6b2d27*/
      v76 = (unsigned int *)sub_6AF6F0(v75, v6); /*0x6b2d2d*/
      v77 = *(this + 1); /*0x6b2d32*/
      *(this + 0x1038) = v76; /*0x6b2d36*/
      v78 = (unsigned int *)sub_6AF6F0(v77, v6); /*0x6b2d3c*/
      v79 = *(this + 1); /*0x6b2d41*/
      *(this + 0x1045) = v78; /*0x6b2d45*/
      v80 = (unsigned int *)sub_6AF6F0(v79, v6); /*0x6b2d4b*/
      v81 = *(this + 1); /*0x6b2d50*/
      *(this + 0x102C) = v80; /*0x6b2d54*/
      v82 = (unsigned int *)sub_6AF6F0(v81, v6); /*0x6b2d5a*/
      v83 = *(this + 1); /*0x6b2d5f*/
      *(this + 0x1039) = v82; /*0x6b2d63*/
      *(this + 0x1046) = (unsigned int *)sub_6AF6F0(v83, v6); /*0x6b2d6f*/
      *(this + 0x102D) = 0; /*0x6b2d79*/
      *(this + 0x103A) = 0; /*0x6b2d7f*/
      *(this + 0x1047) = 0; /*0x6b2d85*/
      return 0; /*0x6b2d75*/
    }
  }
  else
  {
    if ( !*(_DWORD *)(v3 + 0x1C) || !a2 ) /*0x6b2d9a*/
    {
      v84 = (unsigned int *)sub_6AF6F0(*(this + 1), v5); /*0x6b2da0*/
      v85 = *(this + 1); /*0x6b2da5*/
      *(this + 0x100A) = v84; /*0x6b2da9*/
      v86 = (unsigned int *)sub_6AF6F0(v85, v5); /*0x6b2daf*/
      v87 = *(this + 1); /*0x6b2db4*/
      *(this + 0x100B) = v86; /*0x6b2db8*/
      v88 = (unsigned int *)sub_6AF6F0(v87, v5); /*0x6b2dbe*/
      v89 = *(this + 1); /*0x6b2dc3*/
      *(this + 0x100C) = v88; /*0x6b2dc7*/
      v90 = (unsigned int *)sub_6AF6F0(v89, v5); /*0x6b2dcd*/
      v91 = *(this + 1); /*0x6b2dd2*/
      *(this + 0x100D) = v90; /*0x6b2dd6*/
      v92 = (unsigned int *)sub_6AF6F0(v91, v5); /*0x6b2ddc*/
      v93 = *(this + 1); /*0x6b2de1*/
      *(this + 0x100E) = v92; /*0x6b2de5*/
      *(this + 0x100F) = (unsigned int *)sub_6AF6F0(v93, v5); /*0x6b2df0*/
      v4 = a2; /*0x6b2df6*/
    }
    if ( !*(_DWORD *)((*this)[1] + 0x20) || !v4 ) /*0x6b2e07*/
    {
      v94 = (unsigned int *)sub_6AF6F0(*(this + 1), v5); /*0x6b2e0d*/
      v95 = *(this + 1); /*0x6b2e12*/
      *(this + 0x1010) = v94; /*0x6b2e16*/
      v96 = (unsigned int *)sub_6AF6F0(v95, v5); /*0x6b2e1c*/
      v97 = *(this + 1); /*0x6b2e21*/
      *(this + 0x1011) = v96; /*0x6b2e25*/
      v98 = (unsigned int *)sub_6AF6F0(v97, v5); /*0x6b2e2b*/
      v99 = *(this + 1); /*0x6b2e30*/
      *(this + 0x1012) = v98; /*0x6b2e34*/
      v100 = (unsigned int *)sub_6AF6F0(v99, v5); /*0x6b2e3a*/
      v101 = *(this + 1); /*0x6b2e3f*/
      *(this + 0x1013) = v100; /*0x6b2e43*/
      *(this + 0x1014) = (unsigned int *)sub_6AF6F0(v101, v5); /*0x6b2e4e*/
      v4 = a2; /*0x6b2e54*/
    }
    if ( !*(_DWORD *)((*this)[1] + 0x24) || !v4 ) /*0x6b2e65*/
    {
      v102 = (unsigned int *)sub_6AF6F0(*(this + 1), v6); /*0x6b2e6b*/
      v103 = *(this + 1); /*0x6b2e70*/
      *(this + 0x1015) = v102; /*0x6b2e74*/
      v104 = (unsigned int *)sub_6AF6F0(v103, v6); /*0x6b2e7a*/
      v105 = *(this + 1); /*0x6b2e7f*/
      *(this + 0x1016) = v104; /*0x6b2e83*/
      v106 = (unsigned int *)sub_6AF6F0(v105, v6); /*0x6b2e89*/
      v107 = *(this + 1); /*0x6b2e8e*/
      *(this + 0x1017) = v106; /*0x6b2e92*/
      v108 = (unsigned int *)sub_6AF6F0(v107, v6); /*0x6b2e98*/
      v109 = *(this + 1); /*0x6b2e9d*/
      *(this + 0x1018) = v108; /*0x6b2ea1*/
      *(this + 0x1019) = (unsigned int *)sub_6AF6F0(v109, v6); /*0x6b2eac*/
      v4 = a2; /*0x6b2eb2*/
    }
    if ( !*(_DWORD *)((*this)[1] + 0x28) || !v4 ) /*0x6b2ec3*/
    {
      v110 = (unsigned int *)sub_6AF6F0(*(this + 1), v6); /*0x6b2ec9*/
      v111 = *(this + 1); /*0x6b2ece*/
      *(this + 0x101A) = v110; /*0x6b2ed2*/
      v112 = (unsigned int *)sub_6AF6F0(v111, v6); /*0x6b2ed8*/
      v113 = *(this + 1); /*0x6b2edd*/
      *(this + 0x101B) = v112; /*0x6b2ee1*/
      v114 = (unsigned int *)sub_6AF6F0(v113, v6); /*0x6b2ee7*/
      v115 = *(this + 1); /*0x6b2eec*/
      *(this + 0x101C) = v114; /*0x6b2ef0*/
      v116 = (unsigned int *)sub_6AF6F0(v115, v6); /*0x6b2ef6*/
      v117 = *(this + 1); /*0x6b2efb*/
      *(this + 0x101D) = v116; /*0x6b2eff*/
      *(this + 0x101E) = (unsigned int *)sub_6AF6F0(v117, v6); /*0x6b2f0a*/
    }
    *(this + 0x101F) = 0; /*0x6b2f15*/
    *(this + 0x1020) = 0; /*0x6b2f1b*/
    return 0; /*0x6b2f12*/
  }
}
