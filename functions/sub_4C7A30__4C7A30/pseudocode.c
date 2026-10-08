void __thiscall sub_4C7A30(int this, TESObjectLAND **a2, char a3, _BYTE *a4)
{
  TESObjectCELL *v8; // ecx
  TESWorldSpace *WorldSpace; // edi
  int v10; // eax
  int YCoordinate; // esi
  TESObjectCELL *v12; // ecx
  int v13; // eax
  int XCoordinate; // eax
  TESObjectCELL *v15; // ecx
  TESForm *v16; // eax
  TESObjectCELL *v17; // esi
  int v18; // eax
  int v19; // eax
  TESObjectLAND *v20; // eax
  TESObjectCELL *v21; // ecx
  TESWorldSpace *v22; // edi
  int v23; // eax
  int v24; // esi
  TESObjectCELL *v25; // ecx
  int v26; // eax
  signed int v27; // eax
  TESObjectCELL *v28; // ecx
  TESForm *v29; // eax
  TESObjectCELL *v30; // esi
  int v31; // eax
  int v32; // eax
  TESObjectLAND *v33; // eax
  TESObjectCELL *v34; // ecx
  TESWorldSpace *v35; // edi
  int v36; // eax
  int v37; // esi
  TESObjectCELL *v38; // ecx
  int v39; // eax
  int v40; // eax
  TESObjectCELL *v41; // ecx
  TESForm *v42; // eax
  TESObjectCELL *v43; // esi
  int v44; // eax
  int v45; // eax
  TESObjectLAND *v46; // eax
  TESObjectCELL *v47; // ecx
  TESWorldSpace *v48; // edi
  int v49; // eax
  signed int v50; // esi
  TESObjectCELL *v51; // ecx
  int v52; // eax
  int v53; // eax
  TESObjectCELL *v54; // ecx
  TESForm *v55; // eax
  TESObjectCELL *v56; // esi
  int v57; // eax
  int v58; // eax
  TESObjectLAND *v59; // eax
  TESObjectCELL *v60; // ecx
  TESWorldSpace *v61; // edi
  int v62; // eax
  signed int v63; // esi
  TESObjectCELL *v64; // ecx
  int v65; // eax
  int v66; // eax
  TESObjectCELL *v67; // ecx
  TESForm *v68; // eax
  TESObjectCELL *v69; // esi
  int v70; // eax
  int v71; // eax
  TESObjectLAND *v72; // eax
  TESObjectCELL *v73; // ecx
  TESWorldSpace *v74; // edi
  int v75; // eax
  int v76; // esi
  TESObjectCELL *v77; // ecx
  int v78; // eax
  int v79; // eax
  TESObjectCELL *v80; // ecx
  TESForm *v81; // eax
  TESObjectCELL *v82; // esi
  int v83; // eax
  int v84; // eax
  TESObjectLAND *v85; // eax
  TESObjectCELL *v86; // ecx
  TESWorldSpace *v87; // edi
  int v88; // eax
  int v89; // esi
  TESObjectCELL *v90; // ecx
  int v91; // eax
  signed int v92; // eax
  TESObjectCELL *v93; // ecx
  TESForm *v94; // eax
  TESObjectCELL *v95; // esi
  int v96; // eax
  int v97; // eax
  TESObjectLAND *v98; // eax
  TESObjectCELL *v99; // ecx
  TESWorldSpace *v100; // edi
  int v101; // eax
  int v102; // esi
  TESObjectCELL *v103; // ecx
  int v104; // eax
  int v105; // eax
  TESObjectCELL *v106; // ecx
  TESForm *v107; // eax
  TESObjectCELL *v108; // esi
  int v109; // eax
  int v110; // eax
  TESObjectLAND *v111; // eax

  if ( !a2 ) /*0x4c7a3a*/
    return; /*0x4c7a3a*/
  v8 = *(TESObjectCELL **)(this + 0x20); /*0x4c7a40*/
  if ( v8 ) /*0x4c7a46*/
    WorldSpace = TESObjectCELL_GetWorldSpace(v8); /*0x4c7a4d*/
  else
    WorldSpace = 0; /*0x4c7a51*/
  v10 = *(_DWORD *)(this + 0x24); /*0x4c7a53*/
  if ( v10 ) /*0x4c7a59*/
  {
    YCoordinate = *(_DWORD *)(v10 + 0x9C); /*0x4c7a5b*/
  }
  else
  {
    v12 = *(TESObjectCELL **)(this + 0x20); /*0x4c7a63*/
    if ( v12 ) /*0x4c7a68*/
      YCoordinate = TESObjectCELL_GetYCoordinate(v12); /*0x4c7a6f*/
    else
      YCoordinate = 0; /*0x4c7a73*/
  }
  v13 = *(_DWORD *)(this + 0x24); /*0x4c7a75*/
  if ( v13 ) /*0x4c7a7a*/
  {
    XCoordinate = *(_DWORD *)(v13 + 0x98); /*0x4c7a7c*/
  }
  else
  {
    v15 = *(TESObjectCELL **)(this + 0x20); /*0x4c7a84*/
    if ( v15 ) /*0x4c7a89*/
      XCoordinate = TESObjectCELL_GetXCoordinate(v15); /*0x4c7a8b*/
    else
      XCoordinate = 0; /*0x4c7a92*/
  }
  v16 = sub_447740((TESWorldSpace **)g_TESDataHandler, XCoordinate - 1, YCoordinate + 1, WorldSpace, 0); /*0x4c7aa4*/
  v17 = (TESObjectCELL *)v16; /*0x4c7aa9*/
  if ( !v16 ) /*0x4c7aad*/
    goto LABEL_24; /*0x4c7aad*/
  v18 = *((_DWORD *)sub_4CE3C0((TESObjectCELL *)v16) + 9); /*0x4c7ab6*/
  if ( !v18 || !*(_DWORD *)(v18 + 4) ) /*0x4c7abd*/
  {
    v19 = *((_DWORD *)sub_4CE3C0(v17) + 9); /*0x4c7ad8*/
    if ( (!v19 || !*(_DWORD *)(v19 + 4)) && a3 && a4 ) /*0x4c7af0*/
    {
      v20 = sub_4CE3C0(v17); /*0x4c7af4*/
      *a2 = v20; /*0x4c7b00*/
      sub_4C79A0((int)v20, 0); /*0x4c7b02*/
      *a4 = 1; /*0x4c7b07*/
      goto LABEL_25; /*0x4c7b0a*/
    }
LABEL_24:
    *a2 = 0; /*0x4c7b0c*/
    goto LABEL_25; /*0x4c7b10*/
  }
  *a2 = sub_4CE3C0(v17); /*0x4c7acd*/
LABEL_25:
  v21 = *(TESObjectCELL **)(this + 0x20); /*0x4c7b12*/
  if ( v21 ) /*0x4c7b17*/
    v22 = TESObjectCELL_GetWorldSpace(v21); /*0x4c7b1e*/
  else
    v22 = 0; /*0x4c7b22*/
  v23 = *(_DWORD *)(this + 0x24); /*0x4c7b24*/
  if ( v23 ) /*0x4c7b29*/
  {
    v24 = *(_DWORD *)(v23 + 0x9C); /*0x4c7b2b*/
  }
  else
  {
    v25 = *(TESObjectCELL **)(this + 0x20); /*0x4c7b33*/
    if ( v25 ) /*0x4c7b38*/
      v24 = TESObjectCELL_GetYCoordinate(v25); /*0x4c7b3f*/
    else
      v24 = 0; /*0x4c7b43*/
  }
  v26 = *(_DWORD *)(this + 0x24); /*0x4c7b45*/
  if ( v26 ) /*0x4c7b4a*/
  {
    v27 = *(_DWORD *)(v26 + 0x98); /*0x4c7b4c*/
  }
  else
  {
    v28 = *(TESObjectCELL **)(this + 0x20); /*0x4c7b54*/
    if ( v28 ) /*0x4c7b59*/
      v27 = TESObjectCELL_GetXCoordinate(v28); /*0x4c7b5b*/
    else
      v27 = 0; /*0x4c7b62*/
  }
  v29 = sub_447740((TESWorldSpace **)g_TESDataHandler, v27, v24 + 1, v22, 0); /*0x4c7b71*/
  v30 = (TESObjectCELL *)v29; /*0x4c7b76*/
  if ( !v29 ) /*0x4c7b7a*/
    goto LABEL_47; /*0x4c7b7a*/
  v31 = *((_DWORD *)sub_4CE3C0((TESObjectCELL *)v29) + 9); /*0x4c7b83*/
  if ( v31 && *(_DWORD *)(v31 + 4) ) /*0x4c7b8a*/
  {
    a2[1] = sub_4CE3C0(v30); /*0x4c7b9a*/
    goto LABEL_48; /*0x4c7b9d*/
  }
  if ( ((v32 = *((_DWORD *)sub_4CE3C0(v30) + 9)) == 0 || !*(_DWORD *)(v32 + 4)) && a3 && a4 ) /*0x4c7bbe*/
  {
    v33 = sub_4CE3C0(v30); /*0x4c7bc2*/
    a2[1] = v33; /*0x4c7bce*/
    sub_4C79A0((int)v33, 0); /*0x4c7bd1*/
    a4[1] = 1; /*0x4c7bd6*/
  }
  else
  {
LABEL_47:
    a2[1] = 0; /*0x4c7be0*/
  }
LABEL_48:
  v34 = *(TESObjectCELL **)(this + 0x20); /*0x4c7be3*/
  if ( v34 ) /*0x4c7be8*/
    v35 = TESObjectCELL_GetWorldSpace(v34); /*0x4c7bef*/
  else
    v35 = 0; /*0x4c7bf3*/
  v36 = *(_DWORD *)(this + 0x24); /*0x4c7bf5*/
  if ( v36 ) /*0x4c7bfa*/
  {
    v37 = *(_DWORD *)(v36 + 0x9C); /*0x4c7bfc*/
  }
  else
  {
    v38 = *(TESObjectCELL **)(this + 0x20); /*0x4c7c04*/
    if ( v38 ) /*0x4c7c09*/
      v37 = TESObjectCELL_GetYCoordinate(v38); /*0x4c7c10*/
    else
      v37 = 0; /*0x4c7c14*/
  }
  v39 = *(_DWORD *)(this + 0x24); /*0x4c7c16*/
  if ( v39 ) /*0x4c7c1b*/
  {
    v40 = *(_DWORD *)(v39 + 0x98); /*0x4c7c1d*/
  }
  else
  {
    v41 = *(TESObjectCELL **)(this + 0x20); /*0x4c7c25*/
    if ( v41 ) /*0x4c7c2a*/
      v40 = TESObjectCELL_GetXCoordinate(v41); /*0x4c7c2c*/
    else
      v40 = 0; /*0x4c7c33*/
  }
  v42 = sub_447740((TESWorldSpace **)g_TESDataHandler, v40 + 1, v37 + 1, v35, 0); /*0x4c7c45*/
  v43 = (TESObjectCELL *)v42; /*0x4c7c4a*/
  if ( !v42 ) /*0x4c7c4e*/
    goto LABEL_70; /*0x4c7c4e*/
  v44 = *((_DWORD *)sub_4CE3C0((TESObjectCELL *)v42) + 9); /*0x4c7c57*/
  if ( !v44 || !*(_DWORD *)(v44 + 4) ) /*0x4c7c5e*/
  {
    v45 = *((_DWORD *)sub_4CE3C0(v43) + 9); /*0x4c7c7a*/
    if ( (!v45 || !*(_DWORD *)(v45 + 4)) && a3 && a4 ) /*0x4c7c92*/
    {
      v46 = sub_4CE3C0(v43); /*0x4c7c96*/
      a2[2] = v46; /*0x4c7ca2*/
      sub_4C79A0((int)v46, 0); /*0x4c7ca5*/
      a4[2] = 1; /*0x4c7caa*/
      goto LABEL_71; /*0x4c7cae*/
    }
LABEL_70:
    a2[2] = 0; /*0x4c7cb0*/
    goto LABEL_71; /*0x4c7cb4*/
  }
  a2[2] = sub_4CE3C0(v43); /*0x4c7c6e*/
LABEL_71:
  v47 = *(TESObjectCELL **)(this + 0x20); /*0x4c7cb7*/
  if ( v47 ) /*0x4c7cbc*/
    v48 = TESObjectCELL_GetWorldSpace(v47); /*0x4c7cc3*/
  else
    v48 = 0; /*0x4c7cc7*/
  v49 = *(_DWORD *)(this + 0x24); /*0x4c7cc9*/
  if ( v49 ) /*0x4c7cce*/
  {
    v50 = *(_DWORD *)(v49 + 0x9C); /*0x4c7cd0*/
  }
  else
  {
    v51 = *(TESObjectCELL **)(this + 0x20); /*0x4c7cd8*/
    if ( v51 ) /*0x4c7cdd*/
      v50 = TESObjectCELL_GetYCoordinate(v51); /*0x4c7ce4*/
    else
      v50 = 0; /*0x4c7ce8*/
  }
  v52 = *(_DWORD *)(this + 0x24); /*0x4c7cea*/
  if ( v52 ) /*0x4c7cef*/
  {
    v53 = *(_DWORD *)(v52 + 0x98); /*0x4c7cf1*/
  }
  else
  {
    v54 = *(TESObjectCELL **)(this + 0x20); /*0x4c7cf9*/
    if ( v54 ) /*0x4c7cfe*/
      v53 = TESObjectCELL_GetXCoordinate(v54); /*0x4c7d00*/
    else
      v53 = 0; /*0x4c7d07*/
  }
  v55 = sub_447740((TESWorldSpace **)g_TESDataHandler, v53 - 1, v50, v48, 0); /*0x4c7d16*/
  v56 = (TESObjectCELL *)v55; /*0x4c7d1b*/
  if ( !v55 ) /*0x4c7d1f*/
    goto LABEL_93; /*0x4c7d1f*/
  v57 = *((_DWORD *)sub_4CE3C0((TESObjectCELL *)v55) + 9); /*0x4c7d28*/
  if ( v57 && *(_DWORD *)(v57 + 4) ) /*0x4c7d2f*/
  {
    a2[3] = sub_4CE3C0(v56); /*0x4c7d3f*/
    goto LABEL_94; /*0x4c7d42*/
  }
  if ( ((v58 = *((_DWORD *)sub_4CE3C0(v56) + 9)) == 0 || !*(_DWORD *)(v58 + 4)) && a3 && a4 ) /*0x4c7d63*/
  {
    v59 = sub_4CE3C0(v56); /*0x4c7d67*/
    a2[3] = v59; /*0x4c7d73*/
    sub_4C79A0((int)v59, 0); /*0x4c7d76*/
    a4[3] = 1; /*0x4c7d7b*/
  }
  else
  {
LABEL_93:
    a2[3] = 0; /*0x4c7d85*/
  }
LABEL_94:
  v60 = *(TESObjectCELL **)(this + 0x20); /*0x4c7d88*/
  if ( v60 ) /*0x4c7d8d*/
    v61 = TESObjectCELL_GetWorldSpace(v60); /*0x4c7d94*/
  else
    v61 = 0; /*0x4c7d98*/
  v62 = *(_DWORD *)(this + 0x24); /*0x4c7d9a*/
  if ( v62 ) /*0x4c7d9f*/
  {
    v63 = *(_DWORD *)(v62 + 0x9C); /*0x4c7da1*/
  }
  else
  {
    v64 = *(TESObjectCELL **)(this + 0x20); /*0x4c7da9*/
    if ( v64 ) /*0x4c7dae*/
      v63 = TESObjectCELL_GetYCoordinate(v64); /*0x4c7db5*/
    else
      v63 = 0; /*0x4c7db9*/
  }
  v65 = *(_DWORD *)(this + 0x24); /*0x4c7dbb*/
  if ( v65 ) /*0x4c7dc0*/
  {
    v66 = *(_DWORD *)(v65 + 0x98); /*0x4c7dc2*/
  }
  else
  {
    v67 = *(TESObjectCELL **)(this + 0x20); /*0x4c7dca*/
    if ( v67 ) /*0x4c7dcf*/
      v66 = TESObjectCELL_GetXCoordinate(v67); /*0x4c7dd1*/
    else
      v66 = 0; /*0x4c7dd8*/
  }
  v68 = sub_447740((TESWorldSpace **)g_TESDataHandler, v66 + 1, v63, v61, 0); /*0x4c7de7*/
  v69 = (TESObjectCELL *)v68; /*0x4c7dec*/
  if ( !v68 ) /*0x4c7df0*/
    goto LABEL_116; /*0x4c7df0*/
  v70 = *((_DWORD *)sub_4CE3C0((TESObjectCELL *)v68) + 9); /*0x4c7df9*/
  if ( !v70 || !*(_DWORD *)(v70 + 4) ) /*0x4c7e00*/
  {
    v71 = *((_DWORD *)sub_4CE3C0(v69) + 9); /*0x4c7e1c*/
    if ( (!v71 || !*(_DWORD *)(v71 + 4)) && a3 && a4 ) /*0x4c7e34*/
    {
      v72 = sub_4CE3C0(v69); /*0x4c7e38*/
      a2[4] = v72; /*0x4c7e44*/
      sub_4C79A0((int)v72, 0); /*0x4c7e47*/
      a4[4] = 1; /*0x4c7e4c*/
      goto LABEL_117; /*0x4c7e50*/
    }
LABEL_116:
    a2[4] = 0; /*0x4c7e52*/
    goto LABEL_117; /*0x4c7e56*/
  }
  a2[4] = sub_4CE3C0(v69); /*0x4c7e10*/
LABEL_117:
  v73 = *(TESObjectCELL **)(this + 0x20); /*0x4c7e59*/
  if ( v73 ) /*0x4c7e5e*/
    v74 = TESObjectCELL_GetWorldSpace(v73); /*0x4c7e65*/
  else
    v74 = 0; /*0x4c7e69*/
  v75 = *(_DWORD *)(this + 0x24); /*0x4c7e6b*/
  if ( v75 ) /*0x4c7e70*/
  {
    v76 = *(_DWORD *)(v75 + 0x9C); /*0x4c7e72*/
  }
  else
  {
    v77 = *(TESObjectCELL **)(this + 0x20); /*0x4c7e7a*/
    if ( v77 ) /*0x4c7e7f*/
      v76 = TESObjectCELL_GetYCoordinate(v77); /*0x4c7e86*/
    else
      v76 = 0; /*0x4c7e8a*/
  }
  v78 = *(_DWORD *)(this + 0x24); /*0x4c7e8c*/
  if ( v78 ) /*0x4c7e91*/
  {
    v79 = *(_DWORD *)(v78 + 0x98); /*0x4c7e93*/
  }
  else
  {
    v80 = *(TESObjectCELL **)(this + 0x20); /*0x4c7e9b*/
    if ( v80 ) /*0x4c7ea0*/
      v79 = TESObjectCELL_GetXCoordinate(v80); /*0x4c7ea2*/
    else
      v79 = 0; /*0x4c7ea9*/
  }
  v81 = sub_447740((TESWorldSpace **)g_TESDataHandler, v79 - 1, v76 - 1, v74, 0); /*0x4c7ebb*/
  v82 = (TESObjectCELL *)v81; /*0x4c7ec0*/
  if ( !v81 ) /*0x4c7ec4*/
    goto LABEL_139; /*0x4c7ec4*/
  v83 = *((_DWORD *)sub_4CE3C0((TESObjectCELL *)v81) + 9); /*0x4c7ecd*/
  if ( v83 && *(_DWORD *)(v83 + 4) ) /*0x4c7ed4*/
  {
    a2[5] = sub_4CE3C0(v82); /*0x4c7ee4*/
    goto LABEL_140; /*0x4c7ee7*/
  }
  if ( ((v84 = *((_DWORD *)sub_4CE3C0(v82) + 9)) == 0 || !*(_DWORD *)(v84 + 4)) && a3 && a4 ) /*0x4c7f08*/
  {
    v85 = sub_4CE3C0(v82); /*0x4c7f0c*/
    a2[5] = v85; /*0x4c7f18*/
    sub_4C79A0((int)v85, 0); /*0x4c7f1b*/
    a4[5] = 1; /*0x4c7f20*/
  }
  else
  {
LABEL_139:
    a2[5] = 0; /*0x4c7f2a*/
  }
LABEL_140:
  v86 = *(TESObjectCELL **)(this + 0x20); /*0x4c7f2d*/
  if ( v86 ) /*0x4c7f32*/
    v87 = TESObjectCELL_GetWorldSpace(v86); /*0x4c7f39*/
  else
    v87 = 0; /*0x4c7f3d*/
  v88 = *(_DWORD *)(this + 0x24); /*0x4c7f3f*/
  if ( v88 ) /*0x4c7f44*/
  {
    v89 = *(_DWORD *)(v88 + 0x9C); /*0x4c7f46*/
  }
  else
  {
    v90 = *(TESObjectCELL **)(this + 0x20); /*0x4c7f4e*/
    if ( v90 ) /*0x4c7f53*/
      v89 = TESObjectCELL_GetYCoordinate(v90); /*0x4c7f5a*/
    else
      v89 = 0; /*0x4c7f5e*/
  }
  v91 = *(_DWORD *)(this + 0x24); /*0x4c7f60*/
  if ( v91 ) /*0x4c7f65*/
  {
    v92 = *(_DWORD *)(v91 + 0x98); /*0x4c7f67*/
  }
  else
  {
    v93 = *(TESObjectCELL **)(this + 0x20); /*0x4c7f6f*/
    if ( v93 ) /*0x4c7f74*/
      v92 = TESObjectCELL_GetXCoordinate(v93); /*0x4c7f76*/
    else
      v92 = 0; /*0x4c7f7d*/
  }
  v94 = sub_447740((TESWorldSpace **)g_TESDataHandler, v92, v89 - 1, v87, 0); /*0x4c7f8c*/
  v95 = (TESObjectCELL *)v94; /*0x4c7f91*/
  if ( !v94 ) /*0x4c7f95*/
    goto LABEL_162; /*0x4c7f95*/
  v96 = *((_DWORD *)sub_4CE3C0((TESObjectCELL *)v94) + 9); /*0x4c7f9e*/
  if ( !v96 || !*(_DWORD *)(v96 + 4) ) /*0x4c7fa5*/
  {
    v97 = *((_DWORD *)sub_4CE3C0(v95) + 9); /*0x4c7fc1*/
    if ( (!v97 || !*(_DWORD *)(v97 + 4)) && a3 && a4 ) /*0x4c7fd9*/
    {
      v98 = sub_4CE3C0(v95); /*0x4c7fdd*/
      a2[6] = v98; /*0x4c7fe9*/
      sub_4C79A0((int)v98, 0); /*0x4c7fec*/
      a4[6] = 1; /*0x4c7ff1*/
      goto LABEL_163; /*0x4c7ff5*/
    }
LABEL_162:
    a2[6] = 0; /*0x4c7ff7*/
    goto LABEL_163; /*0x4c7ffb*/
  }
  a2[6] = sub_4CE3C0(v95); /*0x4c7fb5*/
LABEL_163:
  v99 = *(TESObjectCELL **)(this + 0x20); /*0x4c7ffe*/
  if ( v99 ) /*0x4c8003*/
    v100 = TESObjectCELL_GetWorldSpace(v99); /*0x4c800a*/
  else
    v100 = 0; /*0x4c800e*/
  v101 = *(_DWORD *)(this + 0x24); /*0x4c8010*/
  if ( v101 ) /*0x4c8015*/
  {
    v102 = *(_DWORD *)(v101 + 0x9C); /*0x4c8017*/
  }
  else
  {
    v103 = *(TESObjectCELL **)(this + 0x20); /*0x4c801f*/
    if ( v103 ) /*0x4c8024*/
      v102 = TESObjectCELL_GetYCoordinate(v103); /*0x4c802b*/
    else
      v102 = 0; /*0x4c802f*/
  }
  v104 = *(_DWORD *)(this + 0x24); /*0x4c8031*/
  if ( v104 ) /*0x4c8036*/
  {
    v105 = *(_DWORD *)(v104 + 0x98); /*0x4c8038*/
  }
  else
  {
    v106 = *(TESObjectCELL **)(this + 0x20); /*0x4c8040*/
    if ( v106 ) /*0x4c8045*/
      v105 = TESObjectCELL_GetXCoordinate(v106); /*0x4c8047*/
    else
      v105 = 0; /*0x4c804e*/
  }
  v107 = sub_447740((TESWorldSpace **)g_TESDataHandler, v105 + 1, v102 - 1, v100, 0); /*0x4c8060*/
  v108 = (TESObjectCELL *)v107; /*0x4c8065*/
  if ( !v107 ) /*0x4c8069*/
    goto LABEL_185; /*0x4c8069*/
  v109 = *((_DWORD *)sub_4CE3C0((TESObjectCELL *)v107) + 9); /*0x4c8072*/
  if ( v109 && *(_DWORD *)(v109 + 4) ) /*0x4c8079*/
  {
    a2[7] = sub_4CE3C0(v108); /*0x4c808c*/
    return; /*0x4c8090*/
  }
  if ( ((v110 = *((_DWORD *)sub_4CE3C0(v108) + 9)) == 0 || !*(_DWORD *)(v110 + 4)) && a3 && a4 ) /*0x4c80b2*/
  {
    v111 = sub_4CE3C0(v108); /*0x4c80b6*/
    a2[7] = v111; /*0x4c80c2*/
    sub_4C79A0((int)v111, 0); /*0x4c80c5*/
    a4[7] = 1; /*0x4c80cb*/
  }
  else
  {
LABEL_185:
    a2[7] = 0; /*0x4c80da*/
  }
}
