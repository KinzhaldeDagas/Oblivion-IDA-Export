int __thiscall sub_6B2A30(unsigned int **this, int a2)
{
  unsigned int v3; // edx
  int v4; // eax
  unsigned int v5; // esi
  unsigned int v6; // edi
  unsigned int *v7; // ebp
  int *v8; // esi
  int v9; // edi
  int *v10; // esi
  int v11; // edi
  int *v12; // ebp
  int *v13; // esi
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
  int *v121; // [esp+64h] [ebp+4h]
  int v122; // [esp+64h] [ebp+4h]

  v3 = (*this)[1];
  v4 = a2;
  qmemcpy(v120, (const void *)(v3 + 0x48 * a2 + 0x2C), sizeof(v120));
  v5 = *(_DWORD *)(4 * v120[3] + 0xB16320);
  v6 = *(_DWORD *)(4 * v120[3] + 0xB16360);
  v7 = (unsigned int *)(4 * v120[3] + 0xB16320);
  v119 = (unsigned int *)(4 * v120[3] + 0xB16360);
  if ( v120[4] && v120[5] == 2 )
  {
    if ( v120[6] )
    {
      v8 = (int *)(this + 0x100A);
      v9 = 8;
      do
      {
        *v8++ = sub_6AF6F0(*(this + 1), *v7);
        --v9;
      }
      while ( v9 );
      v121 = (int *)(this + 0x1024);
      v118 = 3;
      do
      {
        v10 = v121;
        v11 = 3;
        do
        {
          *v10 = sub_6AF6F0(*(this + 1), *v7);
          v10 += 0xD;
          --v11;
        }
        while ( v11 );
        ++v121;
        --v118;
      }
      while ( v118 );
      v12 = (int *)(this + 0x1027);
      v122 = 6;
      do
      {
        v13 = v12;
        v14 = 3;
        do
        {
          *v13 = sub_6AF6F0(*(this + 1), *v119);
          v13 += 0xD;
          --v14;
        }
        while ( v14 );
        ++v12;
        --v122;
      }
      while ( v122 );
      *(this + 0x102D) = 0;
      *(this + 0x103A) = 0;
      *(this + 0x1047) = 0;
      return 0;
    }
    else
    {
      v16 = (unsigned int *)sub_6AF6F0(*(this + 1), v5);
      v17 = *(this + 1);
      *(this + 0x1021) = v16;
      v18 = (unsigned int *)sub_6AF6F0(v17, v5);
      v19 = *(this + 1);
      *(this + 0x102E) = v18;
      v20 = (unsigned int *)sub_6AF6F0(v19, v5);
      v21 = *(this + 1);
      *(this + 0x103B) = v20;
      v22 = (unsigned int *)sub_6AF6F0(v21, v5);
      v23 = *(this + 1);
      *(this + 0x1022) = v22;
      v24 = (unsigned int *)sub_6AF6F0(v23, v5);
      v25 = *(this + 1);
      *(this + 0x102F) = v24;
      v26 = (unsigned int *)sub_6AF6F0(v25, v5);
      v27 = *(this + 1);
      *(this + 0x103C) = v26;
      v28 = (unsigned int *)sub_6AF6F0(v27, v5);
      v29 = *(this + 1);
      *(this + 0x1023) = v28;
      v30 = (unsigned int *)sub_6AF6F0(v29, v5);
      v31 = *(this + 1);
      *(this + 0x1030) = v30;
      v32 = (unsigned int *)sub_6AF6F0(v31, v5);
      v33 = *(this + 1);
      *(this + 0x103D) = v32;
      v34 = (unsigned int *)sub_6AF6F0(v33, v5);
      v35 = *(this + 1);
      *(this + 0x1024) = v34;
      v36 = (unsigned int *)sub_6AF6F0(v35, v5);
      v37 = *(this + 1);
      *(this + 0x1031) = v36;
      v38 = (unsigned int *)sub_6AF6F0(v37, v5);
      v39 = *(this + 1);
      *(this + 0x103E) = v38;
      v40 = (unsigned int *)sub_6AF6F0(v39, v5);
      v41 = *(this + 1);
      *(this + 0x1025) = v40;
      v42 = (unsigned int *)sub_6AF6F0(v41, v5);
      v43 = *(this + 1);
      *(this + 0x1032) = v42;
      v44 = (unsigned int *)sub_6AF6F0(v43, v5);
      v45 = *(this + 1);
      *(this + 0x103F) = v44;
      v46 = (unsigned int *)sub_6AF6F0(v45, v5);
      v47 = *(this + 1);
      *(this + 0x1026) = v46;
      v48 = (unsigned int *)sub_6AF6F0(v47, v5);
      v49 = *(this + 1);
      *(this + 0x1033) = v48;
      v50 = (unsigned int *)sub_6AF6F0(v49, v5);
      v51 = *(this + 1);
      *(this + 0x1040) = v50;
      v52 = (unsigned int *)sub_6AF6F0(v51, v6);
      v53 = *(this + 1);
      *(this + 0x1027) = v52;
      *(this + 0x1034) = (unsigned int *)sub_6AF6F0(v53, v6);
      v54 = (unsigned int *)sub_6AF6F0(*(this + 1), v6);
      v55 = *(this + 1);
      *(this + 0x1041) = v54;
      v56 = (unsigned int *)sub_6AF6F0(v55, v6);
      v57 = *(this + 1);
      *(this + 0x1028) = v56;
      v58 = (unsigned int *)sub_6AF6F0(v57, v6);
      v59 = *(this + 1);
      *(this + 0x1035) = v58;
      v60 = (unsigned int *)sub_6AF6F0(v59, v6);
      v61 = *(this + 1);
      *(this + 0x1042) = v60;
      v62 = (unsigned int *)sub_6AF6F0(v61, v6);
      v63 = *(this + 1);
      *(this + 0x1029) = v62;
      v64 = (unsigned int *)sub_6AF6F0(v63, v6);
      v65 = *(this + 1);
      *(this + 0x1036) = v64;
      v66 = (unsigned int *)sub_6AF6F0(v65, v6);
      v67 = *(this + 1);
      *(this + 0x1043) = v66;
      v68 = (unsigned int *)sub_6AF6F0(v67, v6);
      v69 = *(this + 1);
      *(this + 0x102A) = v68;
      v70 = (unsigned int *)sub_6AF6F0(v69, v6);
      v71 = *(this + 1);
      *(this + 0x1037) = v70;
      v72 = (unsigned int *)sub_6AF6F0(v71, v6);
      v73 = *(this + 1);
      *(this + 0x1044) = v72;
      v74 = (unsigned int *)sub_6AF6F0(v73, v6);
      v75 = *(this + 1);
      *(this + 0x102B) = v74;
      v76 = (unsigned int *)sub_6AF6F0(v75, v6);
      v77 = *(this + 1);
      *(this + 0x1038) = v76;
      v78 = (unsigned int *)sub_6AF6F0(v77, v6);
      v79 = *(this + 1);
      *(this + 0x1045) = v78;
      v80 = (unsigned int *)sub_6AF6F0(v79, v6);
      v81 = *(this + 1);
      *(this + 0x102C) = v80;
      v82 = (unsigned int *)sub_6AF6F0(v81, v6);
      v83 = *(this + 1);
      *(this + 0x1039) = v82;
      *(this + 0x1046) = (unsigned int *)sub_6AF6F0(v83, v6);
      *(this + 0x102D) = 0;
      *(this + 0x103A) = 0;
      *(this + 0x1047) = 0;
      return 0;
    }
  }
  else
  {
    if ( !*(_DWORD *)(v3 + 0x1C) || !a2 )
    {
      v84 = (unsigned int *)sub_6AF6F0(*(this + 1), v5);
      v85 = *(this + 1);
      *(this + 0x100A) = v84;
      v86 = (unsigned int *)sub_6AF6F0(v85, v5);
      v87 = *(this + 1);
      *(this + 0x100B) = v86;
      v88 = (unsigned int *)sub_6AF6F0(v87, v5);
      v89 = *(this + 1);
      *(this + 0x100C) = v88;
      v90 = (unsigned int *)sub_6AF6F0(v89, v5);
      v91 = *(this + 1);
      *(this + 0x100D) = v90;
      v92 = (unsigned int *)sub_6AF6F0(v91, v5);
      v93 = *(this + 1);
      *(this + 0x100E) = v92;
      *(this + 0x100F) = (unsigned int *)sub_6AF6F0(v93, v5);
      v4 = a2;
    }
    if ( !*(_DWORD *)((*this)[1] + 0x20) || !v4 )
    {
      v94 = (unsigned int *)sub_6AF6F0(*(this + 1), v5);
      v95 = *(this + 1);
      *(this + 0x1010) = v94;
      v96 = (unsigned int *)sub_6AF6F0(v95, v5);
      v97 = *(this + 1);
      *(this + 0x1011) = v96;
      v98 = (unsigned int *)sub_6AF6F0(v97, v5);
      v99 = *(this + 1);
      *(this + 0x1012) = v98;
      v100 = (unsigned int *)sub_6AF6F0(v99, v5);
      v101 = *(this + 1);
      *(this + 0x1013) = v100;
      *(this + 0x1014) = (unsigned int *)sub_6AF6F0(v101, v5);
      v4 = a2;
    }
    if ( !*(_DWORD *)((*this)[1] + 0x24) || !v4 )
    {
      v102 = (unsigned int *)sub_6AF6F0(*(this + 1), v6);
      v103 = *(this + 1);
      *(this + 0x1015) = v102;
      v104 = (unsigned int *)sub_6AF6F0(v103, v6);
      v105 = *(this + 1);
      *(this + 0x1016) = v104;
      v106 = (unsigned int *)sub_6AF6F0(v105, v6);
      v107 = *(this + 1);
      *(this + 0x1017) = v106;
      v108 = (unsigned int *)sub_6AF6F0(v107, v6);
      v109 = *(this + 1);
      *(this + 0x1018) = v108;
      *(this + 0x1019) = (unsigned int *)sub_6AF6F0(v109, v6);
      v4 = a2;
    }
    if ( !*(_DWORD *)((*this)[1] + 0x28) || !v4 )
    {
      v110 = (unsigned int *)sub_6AF6F0(*(this + 1), v6);
      v111 = *(this + 1);
      *(this + 0x101A) = v110;
      v112 = (unsigned int *)sub_6AF6F0(v111, v6);
      v113 = *(this + 1);
      *(this + 0x101B) = v112;
      v114 = (unsigned int *)sub_6AF6F0(v113, v6);
      v115 = *(this + 1);
      *(this + 0x101C) = v114;
      v116 = (unsigned int *)sub_6AF6F0(v115, v6);
      v117 = *(this + 1);
      *(this + 0x101D) = v116;
      *(this + 0x101E) = (unsigned int *)sub_6AF6F0(v117, v6);
    }
    *(this + 0x101F) = 0;
    *(this + 0x1020) = 0;
    return 0;
  }
}
