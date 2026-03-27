void __userpurge sub_4C7A30(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectLAND **a5,
        char a6,
        _BYTE *a7)
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

  if ( !a5 )
    return;
  v8 = *(TESObjectCELL **)(a1 + 0x20);
  if ( v8 )
    WorldSpace = TESObjectCELL_GetWorldSpace(v8);
  else
    WorldSpace = 0;
  v10 = *(_DWORD *)(a1 + 0x24);
  if ( v10 )
  {
    YCoordinate = *(_DWORD *)(v10 + 0x9C);
  }
  else
  {
    v12 = *(TESObjectCELL **)(a1 + 0x20);
    if ( v12 )
      YCoordinate = TESObjectCELL_GetYCoordinate(v12);
    else
      YCoordinate = 0;
  }
  v13 = *(_DWORD *)(a1 + 0x24);
  if ( v13 )
  {
    XCoordinate = *(_DWORD *)(v13 + 0x98);
  }
  else
  {
    v15 = *(TESObjectCELL **)(a1 + 0x20);
    if ( v15 )
      XCoordinate = TESObjectCELL_GetXCoordinate(v15);
    else
      XCoordinate = 0;
  }
  v16 = sub_447740((TESWorldSpace **)TESDataHandler, XCoordinate - 1, YCoordinate + 1, WorldSpace, 0);
  v17 = (TESObjectCELL *)v16;
  if ( !v16 )
    goto LABEL_24;
  v18 = *((_DWORD *)sub_4CE3C0((TESObjectCELL *)v16) + 9);
  if ( !v18 || !*(_DWORD *)(v18 + 4) )
  {
    v19 = *((_DWORD *)sub_4CE3C0(v17) + 9);
    if ( (!v19 || !*(_DWORD *)(v19 + 4)) && a6 && a7 )
    {
      v20 = sub_4CE3C0(v17);
      *a5 = v20;
      sub_4C79A0((int)v20, a1, a2, a3, a4, 0);
      *a7 = 1;
      goto LABEL_25;
    }
LABEL_24:
    *a5 = 0;
    goto LABEL_25;
  }
  *a5 = sub_4CE3C0(v17);
LABEL_25:
  v21 = *(TESObjectCELL **)(a1 + 0x20);
  if ( v21 )
    v22 = TESObjectCELL_GetWorldSpace(v21);
  else
    v22 = 0;
  v23 = *(_DWORD *)(a1 + 0x24);
  if ( v23 )
  {
    v24 = *(_DWORD *)(v23 + 0x9C);
  }
  else
  {
    v25 = *(TESObjectCELL **)(a1 + 0x20);
    if ( v25 )
      v24 = TESObjectCELL_GetYCoordinate(v25);
    else
      v24 = 0;
  }
  v26 = *(_DWORD *)(a1 + 0x24);
  if ( v26 )
  {
    v27 = *(_DWORD *)(v26 + 0x98);
  }
  else
  {
    v28 = *(TESObjectCELL **)(a1 + 0x20);
    if ( v28 )
      v27 = TESObjectCELL_GetXCoordinate(v28);
    else
      v27 = 0;
  }
  v29 = sub_447740((TESWorldSpace **)TESDataHandler, v27, v24 + 1, v22, 0);
  v30 = (TESObjectCELL *)v29;
  if ( !v29 )
    goto LABEL_47;
  v31 = *((_DWORD *)sub_4CE3C0((TESObjectCELL *)v29) + 9);
  if ( v31 && *(_DWORD *)(v31 + 4) )
  {
    a5[1] = sub_4CE3C0(v30);
    goto LABEL_48;
  }
  if ( ((v32 = *((_DWORD *)sub_4CE3C0(v30) + 9)) == 0 || !*(_DWORD *)(v32 + 4)) && a6 && a7 )
  {
    v33 = sub_4CE3C0(v30);
    a5[1] = v33;
    sub_4C79A0((int)v33, a1, a2, a3, a4, 0);
    a7[1] = 1;
  }
  else
  {
LABEL_47:
    a5[1] = 0;
  }
LABEL_48:
  v34 = *(TESObjectCELL **)(a1 + 0x20);
  if ( v34 )
    v35 = TESObjectCELL_GetWorldSpace(v34);
  else
    v35 = 0;
  v36 = *(_DWORD *)(a1 + 0x24);
  if ( v36 )
  {
    v37 = *(_DWORD *)(v36 + 0x9C);
  }
  else
  {
    v38 = *(TESObjectCELL **)(a1 + 0x20);
    if ( v38 )
      v37 = TESObjectCELL_GetYCoordinate(v38);
    else
      v37 = 0;
  }
  v39 = *(_DWORD *)(a1 + 0x24);
  if ( v39 )
  {
    v40 = *(_DWORD *)(v39 + 0x98);
  }
  else
  {
    v41 = *(TESObjectCELL **)(a1 + 0x20);
    if ( v41 )
      v40 = TESObjectCELL_GetXCoordinate(v41);
    else
      v40 = 0;
  }
  v42 = sub_447740((TESWorldSpace **)TESDataHandler, v40 + 1, v37 + 1, v35, 0);
  v43 = (TESObjectCELL *)v42;
  if ( !v42 )
    goto LABEL_70;
  v44 = *((_DWORD *)sub_4CE3C0((TESObjectCELL *)v42) + 9);
  if ( !v44 || !*(_DWORD *)(v44 + 4) )
  {
    v45 = *((_DWORD *)sub_4CE3C0(v43) + 9);
    if ( (!v45 || !*(_DWORD *)(v45 + 4)) && a6 && a7 )
    {
      v46 = sub_4CE3C0(v43);
      a5[2] = v46;
      sub_4C79A0((int)v46, a1, a2, a3, a4, 0);
      a7[2] = 1;
      goto LABEL_71;
    }
LABEL_70:
    a5[2] = 0;
    goto LABEL_71;
  }
  a5[2] = sub_4CE3C0(v43);
LABEL_71:
  v47 = *(TESObjectCELL **)(a1 + 0x20);
  if ( v47 )
    v48 = TESObjectCELL_GetWorldSpace(v47);
  else
    v48 = 0;
  v49 = *(_DWORD *)(a1 + 0x24);
  if ( v49 )
  {
    v50 = *(_DWORD *)(v49 + 0x9C);
  }
  else
  {
    v51 = *(TESObjectCELL **)(a1 + 0x20);
    if ( v51 )
      v50 = TESObjectCELL_GetYCoordinate(v51);
    else
      v50 = 0;
  }
  v52 = *(_DWORD *)(a1 + 0x24);
  if ( v52 )
  {
    v53 = *(_DWORD *)(v52 + 0x98);
  }
  else
  {
    v54 = *(TESObjectCELL **)(a1 + 0x20);
    if ( v54 )
      v53 = TESObjectCELL_GetXCoordinate(v54);
    else
      v53 = 0;
  }
  v55 = sub_447740((TESWorldSpace **)TESDataHandler, v53 - 1, v50, v48, 0);
  v56 = (TESObjectCELL *)v55;
  if ( !v55 )
    goto LABEL_93;
  v57 = *((_DWORD *)sub_4CE3C0((TESObjectCELL *)v55) + 9);
  if ( v57 && *(_DWORD *)(v57 + 4) )
  {
    a5[3] = sub_4CE3C0(v56);
    goto LABEL_94;
  }
  if ( ((v58 = *((_DWORD *)sub_4CE3C0(v56) + 9)) == 0 || !*(_DWORD *)(v58 + 4)) && a6 && a7 )
  {
    v59 = sub_4CE3C0(v56);
    a5[3] = v59;
    sub_4C79A0((int)v59, a1, a2, a3, a4, 0);
    a7[3] = 1;
  }
  else
  {
LABEL_93:
    a5[3] = 0;
  }
LABEL_94:
  v60 = *(TESObjectCELL **)(a1 + 0x20);
  if ( v60 )
    v61 = TESObjectCELL_GetWorldSpace(v60);
  else
    v61 = 0;
  v62 = *(_DWORD *)(a1 + 0x24);
  if ( v62 )
  {
    v63 = *(_DWORD *)(v62 + 0x9C);
  }
  else
  {
    v64 = *(TESObjectCELL **)(a1 + 0x20);
    if ( v64 )
      v63 = TESObjectCELL_GetYCoordinate(v64);
    else
      v63 = 0;
  }
  v65 = *(_DWORD *)(a1 + 0x24);
  if ( v65 )
  {
    v66 = *(_DWORD *)(v65 + 0x98);
  }
  else
  {
    v67 = *(TESObjectCELL **)(a1 + 0x20);
    if ( v67 )
      v66 = TESObjectCELL_GetXCoordinate(v67);
    else
      v66 = 0;
  }
  v68 = sub_447740((TESWorldSpace **)TESDataHandler, v66 + 1, v63, v61, 0);
  v69 = (TESObjectCELL *)v68;
  if ( !v68 )
    goto LABEL_116;
  v70 = *((_DWORD *)sub_4CE3C0((TESObjectCELL *)v68) + 9);
  if ( !v70 || !*(_DWORD *)(v70 + 4) )
  {
    v71 = *((_DWORD *)sub_4CE3C0(v69) + 9);
    if ( (!v71 || !*(_DWORD *)(v71 + 4)) && a6 && a7 )
    {
      v72 = sub_4CE3C0(v69);
      a5[4] = v72;
      sub_4C79A0((int)v72, a1, a2, a3, a4, 0);
      a7[4] = 1;
      goto LABEL_117;
    }
LABEL_116:
    a5[4] = 0;
    goto LABEL_117;
  }
  a5[4] = sub_4CE3C0(v69);
LABEL_117:
  v73 = *(TESObjectCELL **)(a1 + 0x20);
  if ( v73 )
    v74 = TESObjectCELL_GetWorldSpace(v73);
  else
    v74 = 0;
  v75 = *(_DWORD *)(a1 + 0x24);
  if ( v75 )
  {
    v76 = *(_DWORD *)(v75 + 0x9C);
  }
  else
  {
    v77 = *(TESObjectCELL **)(a1 + 0x20);
    if ( v77 )
      v76 = TESObjectCELL_GetYCoordinate(v77);
    else
      v76 = 0;
  }
  v78 = *(_DWORD *)(a1 + 0x24);
  if ( v78 )
  {
    v79 = *(_DWORD *)(v78 + 0x98);
  }
  else
  {
    v80 = *(TESObjectCELL **)(a1 + 0x20);
    if ( v80 )
      v79 = TESObjectCELL_GetXCoordinate(v80);
    else
      v79 = 0;
  }
  v81 = sub_447740((TESWorldSpace **)TESDataHandler, v79 - 1, v76 - 1, v74, 0);
  v82 = (TESObjectCELL *)v81;
  if ( !v81 )
    goto LABEL_139;
  v83 = *((_DWORD *)sub_4CE3C0((TESObjectCELL *)v81) + 9);
  if ( v83 && *(_DWORD *)(v83 + 4) )
  {
    a5[5] = sub_4CE3C0(v82);
    goto LABEL_140;
  }
  if ( ((v84 = *((_DWORD *)sub_4CE3C0(v82) + 9)) == 0 || !*(_DWORD *)(v84 + 4)) && a6 && a7 )
  {
    v85 = sub_4CE3C0(v82);
    a5[5] = v85;
    sub_4C79A0((int)v85, a1, a2, a3, a4, 0);
    a7[5] = 1;
  }
  else
  {
LABEL_139:
    a5[5] = 0;
  }
LABEL_140:
  v86 = *(TESObjectCELL **)(a1 + 0x20);
  if ( v86 )
    v87 = TESObjectCELL_GetWorldSpace(v86);
  else
    v87 = 0;
  v88 = *(_DWORD *)(a1 + 0x24);
  if ( v88 )
  {
    v89 = *(_DWORD *)(v88 + 0x9C);
  }
  else
  {
    v90 = *(TESObjectCELL **)(a1 + 0x20);
    if ( v90 )
      v89 = TESObjectCELL_GetYCoordinate(v90);
    else
      v89 = 0;
  }
  v91 = *(_DWORD *)(a1 + 0x24);
  if ( v91 )
  {
    v92 = *(_DWORD *)(v91 + 0x98);
  }
  else
  {
    v93 = *(TESObjectCELL **)(a1 + 0x20);
    if ( v93 )
      v92 = TESObjectCELL_GetXCoordinate(v93);
    else
      v92 = 0;
  }
  v94 = sub_447740((TESWorldSpace **)TESDataHandler, v92, v89 - 1, v87, 0);
  v95 = (TESObjectCELL *)v94;
  if ( !v94 )
    goto LABEL_162;
  v96 = *((_DWORD *)sub_4CE3C0((TESObjectCELL *)v94) + 9);
  if ( !v96 || !*(_DWORD *)(v96 + 4) )
  {
    v97 = *((_DWORD *)sub_4CE3C0(v95) + 9);
    if ( (!v97 || !*(_DWORD *)(v97 + 4)) && a6 && a7 )
    {
      v98 = sub_4CE3C0(v95);
      a5[6] = v98;
      sub_4C79A0((int)v98, a1, a2, a3, a4, 0);
      a7[6] = 1;
      goto LABEL_163;
    }
LABEL_162:
    a5[6] = 0;
    goto LABEL_163;
  }
  a5[6] = sub_4CE3C0(v95);
LABEL_163:
  v99 = *(TESObjectCELL **)(a1 + 0x20);
  if ( v99 )
    v100 = TESObjectCELL_GetWorldSpace(v99);
  else
    v100 = 0;
  v101 = *(_DWORD *)(a1 + 0x24);
  if ( v101 )
  {
    v102 = *(_DWORD *)(v101 + 0x9C);
  }
  else
  {
    v103 = *(TESObjectCELL **)(a1 + 0x20);
    if ( v103 )
      v102 = TESObjectCELL_GetYCoordinate(v103);
    else
      v102 = 0;
  }
  v104 = *(_DWORD *)(a1 + 0x24);
  if ( v104 )
  {
    v105 = *(_DWORD *)(v104 + 0x98);
  }
  else
  {
    v106 = *(TESObjectCELL **)(a1 + 0x20);
    if ( v106 )
      v105 = TESObjectCELL_GetXCoordinate(v106);
    else
      v105 = 0;
  }
  v107 = sub_447740((TESWorldSpace **)TESDataHandler, v105 + 1, v102 - 1, v100, 0);
  v108 = (TESObjectCELL *)v107;
  if ( !v107 )
    goto LABEL_185;
  v109 = *((_DWORD *)sub_4CE3C0((TESObjectCELL *)v107) + 9);
  if ( v109 && *(_DWORD *)(v109 + 4) )
  {
    a5[7] = sub_4CE3C0(v108);
    return;
  }
  if ( ((v110 = *((_DWORD *)sub_4CE3C0(v108) + 9)) == 0 || !*(_DWORD *)(v110 + 4)) && a6 && a7 )
  {
    v111 = sub_4CE3C0(v108);
    a5[7] = v111;
    sub_4C79A0((int)v111, a1, a2, a3, a4, 0);
    a7[7] = 1;
  }
  else
  {
LABEL_185:
    a5[7] = 0;
  }
}
