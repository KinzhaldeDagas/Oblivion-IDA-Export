char __thiscall sub_7BC1B0(NiD3DPass **this)
{
  bool v2; // zf
  NiD3DPass **v3; // edi
  NiD3DPass *v4; // ecx
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  unsigned int **v7; // edi
  NiD3DTextureStage *v8; // eax
  NiD3DTextureStage *v9; // ecx
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  NiD3DTextureStage *v19; // eax
  int v20; // ebx
  int v21; // ebp
  int v22; // edi
  NiD3DPass **v23; // edi
  NiD3DPass *v24; // ecx
  NiD3DPass *v25; // eax
  NiD3DPass *v26; // eax
  int v27; // edi
  int v28; // edi
  int v29; // edi
  int v30; // edi
  int v31; // edi
  int v32; // edi
  int v33; // edi
  int v34; // edi
  NiD3DTextureStage *v35; // eax
  int v36; // ebx
  int v37; // ebp
  int v38; // edi
  int v39; // ebx
  int v40; // ebp
  int v41; // edi
  NiD3DPass **v42; // edi
  NiD3DPass *v43; // ecx
  NiD3DPass *v44; // eax
  NiD3DPass *v45; // eax
  unsigned int *v46; // eax
  unsigned int *v47; // edi
  NiD3DTextureStage *v48; // eax
  int v49; // edi
  int v50; // edi
  int v51; // edi
  int v52; // edi
  int v53; // edi
  int v54; // edi
  int v55; // edi
  int v56; // edi
  int v57; // ebx
  int v58; // ebp
  int v59; // edi
  int v60; // ebx
  int v61; // ebp
  int v62; // edi
  NiD3DPass **v63; // edi
  NiD3DPass *v64; // ecx
  NiD3DPass *v65; // eax
  NiD3DPass *v66; // eax
  unsigned int **v67; // ebx
  NiD3DTextureStage *v68; // edi
  NiD3DTextureStage *v69; // eax
  int v70; // edi
  int v71; // edi
  int v72; // edi
  int v73; // edi
  int v74; // edi
  int v75; // edi
  int v76; // ebx
  int v77; // ebp
  int v78; // edi
  int v79; // ebx
  int v80; // ebp
  int v81; // edi
  NiD3DPass **v82; // edi
  NiD3DPass *v83; // ecx
  NiD3DPass *v84; // eax
  NiD3DPass *v85; // eax
  unsigned int **v86; // ebx
  NiD3DTextureStage *v87; // edi
  NiD3DTextureStage *v88; // eax
  int v89; // edi
  int v90; // edi
  int v91; // edi
  int v92; // edi
  int v93; // edi
  int v94; // edi
  int v95; // edi
  int v96; // edi
  int v97; // ebx
  int v98; // ebp
  int v99; // edi
  int v100; // ebx
  int v101; // ebp
  int v102; // edi
  NiD3DPass **v103; // edi
  NiD3DPass *v104; // ecx
  NiD3DPass *v105; // eax
  NiD3DPass *v106; // eax
  unsigned int **v107; // ebx
  NiD3DTextureStage *v108; // edi
  NiD3DTextureStage *v109; // eax
  int v110; // edi
  int v111; // edi
  int v112; // edi
  int v113; // edi
  int v114; // edi
  int v115; // edi
  int v116; // edi
  int v117; // edi
  int v118; // ebx
  int v119; // ebp
  int v120; // edi
  int v121; // ebp
  int v122; // esi
  int v123; // edi
  NiD3DTextureStage *v124; // ecx
  unsigned int *a3; // [esp+28h] [ebp-18h] BYREF
  unsigned int *v127; // [esp+2Ch] [ebp-14h]
  NiD3DPass *v128; // [esp+30h] [ebp-10h] BYREF
  unsigned int v129; // [esp+3Ch] [ebp-4h]

  v127 = 0;
  v2 = *(this + 0x1C) == 0;
  v129 = 0;
  if ( v2 )
  {
    v3 = sub_7606A0(&v128);
    v4 = *(this + 0x1C);
    v2 = v4 == *v3;
    LOBYTE(v129) = 1;
    if ( !v2 )
    {
      if ( v4 )
      {
        v2 = v4->RefCount-- == 1;
        if ( v2 )
          sub_7604D0(v4);
      }
      v5 = *v3;
      v2 = *v3 == 0;
      *(this + 0x1C) = *v3;
      if ( !v2 )
        ++v5->RefCount;
    }
    v6 = v128;
    LOBYTE(v129) = 0;
    if ( v128 )
    {
      --v128->RefCount;
      if ( !v6->RefCount )
        sub_7604D0(v6);
    }
    sub_772630(&a3);
    LOBYTE(v129) = 2;
    sub_801110((int)a3, 0, 3, 2);
    sub_760010(*(this + 0x1C), (*(this + 0x1C))->CurrentStage, a3);
    v7 = (unsigned int **)sub_772630(&v128);
    v8 = (NiD3DTextureStage *)a3;
    v2 = a3 == *v7;
    LOBYTE(v129) = 3;
    if ( !v2 )
    {
      if ( a3 )
      {
        --a3[0x17];
        if ( !v8[7].Unk08 )
          sub_772560(v8);
      }
      v8 = (NiD3DTextureStage *)*v7;
      a3 = *v7;
      if ( a3 )
      {
        ++v8[7].Unk08;
        v8 = (NiD3DTextureStage *)a3;
      }
    }
    v9 = (NiD3DTextureStage *)v128;
    LOBYTE(v129) = 2;
    if ( v128 )
    {
      --*(_DWORD *)&v128->SoftwareVP;
      if ( !v9[7].Unk08 )
        sub_772560(v9);
      v8 = (NiD3DTextureStage *)a3;
    }
    sub_801110((int)v8, 1, 3, 2);
    sub_760010(*(this + 0x1C), (*(this + 0x1C))->CurrentStage, a3);
    v10 = (int)*(this + 0x1C);
    if ( !*(_DWORD *)(v10 + 0x30) )
      *(_DWORD *)(v10 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v10 + 0x30), 7, 1, 0);
    v11 = (int)*(this + 0x1C);
    if ( !*(_DWORD *)(v11 + 0x30) )
      *(_DWORD *)(v11 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v11 + 0x30), 0x17, 4, 0);
    v12 = (int)*(this + 0x1C);
    if ( !*(_DWORD *)(v12 + 0x30) )
      *(_DWORD *)(v12 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v12 + 0x30), 0xE, 0, 0);
    v13 = (int)*(this + 0x1C);
    if ( !*(_DWORD *)(v13 + 0x30) )
      *(_DWORD *)(v13 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v13 + 0x30), 0x1B, 1, 0);
    v14 = (int)*(this + 0x1C);
    if ( !*(_DWORD *)(v14 + 0x30) )
      *(_DWORD *)(v14 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v14 + 0x30), 0x13, 5, 0);
    v15 = (int)*(this + 0x1C);
    if ( !*(_DWORD *)(v15 + 0x30) )
      *(_DWORD *)(v15 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v15 + 0x30), 0x14, 6, 0);
    v16 = (int)*(this + 0x1C);
    if ( !*(_DWORD *)(v16 + 0x30) )
      *(_DWORD *)(v16 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v16 + 0x30), 0x34, 0, 0);
    v17 = (int)*(this + 0x1C);
    if ( !*(_DWORD *)(v17 + 0x30) )
      *(_DWORD *)(v17 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v17 + 0x30), 0xF, 0, 0);
    v18 = (int)*(this + 0x1C);
    if ( !*(_DWORD *)(v18 + 0x30) )
      *(_DWORD *)(v18 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v18 + 0x30), 0xA8, 7, 0);
    v19 = (NiD3DTextureStage *)a3;
    LOBYTE(v129) = 0;
    if ( a3 )
    {
      --a3[0x17];
      if ( !v19[7].Unk08 )
        sub_772560(v19);
    }
  }
  v20 = (int)*(this + 0x1C);
  v21 = (int)*(this + 0x1F);
  v22 = *(_DWORD *)(v20 + 0x58);
  if ( v22 != v21 )
  {
    if ( v22 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) )
        (**(void (__thiscall ***)(int, int))v22)(v22, 1);
    }
    *(_DWORD *)(v20 + 0x58) = v21;
    if ( v21 )
      InterlockedIncrement((volatile LONG *)(v21 + 4));
  }
  if ( !*(this + 0x2B) )
  {
    v23 = sub_7606A0(&v128);
    v24 = *(this + 0x2B);
    v2 = v24 == *v23;
    LOBYTE(v129) = 4;
    if ( !v2 )
    {
      if ( v24 )
      {
        v2 = v24->RefCount-- == 1;
        if ( v2 )
          sub_7604D0(v24);
      }
      v25 = *v23;
      v2 = *v23 == 0;
      *(this + 0x2B) = *v23;
      if ( !v2 )
        ++v25->RefCount;
    }
    v26 = v128;
    LOBYTE(v129) = 0;
    if ( v128 )
    {
      --v128->RefCount;
      if ( !v26->RefCount )
        sub_7604D0(v26);
    }
    sub_772630(&a3);
    LOBYTE(v129) = 5;
    sub_801110((int)a3, 0, 3, 2);
    sub_760010(*(this + 0x2B), (*(this + 0x2B))->CurrentStage, a3);
    v27 = (int)*(this + 0x2B);
    if ( !*(_DWORD *)(v27 + 0x30) )
      *(_DWORD *)(v27 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v27 + 0x30), 7, 0, 0);
    v28 = (int)*(this + 0x2B);
    if ( !*(_DWORD *)(v28 + 0x30) )
      *(_DWORD *)(v28 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v28 + 0x30), 0xE, 0, 0);
    v29 = (int)*(this + 0x2B);
    if ( !*(_DWORD *)(v29 + 0x30) )
      *(_DWORD *)(v29 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v29 + 0x30), 0x1B, 1, 0);
    v30 = (int)*(this + 0x2B);
    if ( !*(_DWORD *)(v30 + 0x30) )
      *(_DWORD *)(v30 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v30 + 0x30), 0x13, 5, 0);
    v31 = (int)*(this + 0x2B);
    if ( !*(_DWORD *)(v31 + 0x30) )
      *(_DWORD *)(v31 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v31 + 0x30), 0x14, 2, 0);
    v32 = (int)*(this + 0x2B);
    if ( !*(_DWORD *)(v32 + 0x30) )
      *(_DWORD *)(v32 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v32 + 0x30), 0x34, 0, 0);
    v33 = (int)*(this + 0x2B);
    if ( !*(_DWORD *)(v33 + 0x30) )
      *(_DWORD *)(v33 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v33 + 0x30), 0xF, 0, 0);
    v34 = (int)*(this + 0x2B);
    if ( !*(_DWORD *)(v34 + 0x30) )
      *(_DWORD *)(v34 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v34 + 0x30), 0xA8, 7, 0);
    v35 = (NiD3DTextureStage *)a3;
    LOBYTE(v129) = 0;
    if ( a3 )
    {
      --a3[0x17];
      if ( !v35[7].Unk08 )
        sub_772560(v35);
    }
  }
  v36 = (int)*(this + 0x2B);
  v37 = (int)*(this + 0x20);
  v38 = *(_DWORD *)(v36 + 0x58);
  if ( v38 != v37 )
  {
    if ( v38 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v38 + 4)) )
        (**(void (__thiscall ***)(int, int))v38)(v38, 1);
    }
    *(_DWORD *)(v36 + 0x58) = v37;
    if ( v37 )
      InterlockedIncrement((volatile LONG *)(v37 + 4));
  }
  v39 = (int)*(this + 0x2B);
  v40 = (int)*(this + 0x26);
  v41 = *(_DWORD *)(v39 + 0x44);
  if ( v41 != v40 )
  {
    if ( v41 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v41 + 4)) )
        (**(void (__thiscall ***)(int, int))v41)(v41, 1);
    }
    *(_DWORD *)(v39 + 0x44) = v40;
    if ( v40 )
      InterlockedIncrement((volatile LONG *)(v40 + 4));
  }
  if ( !*(this + 0x2D) )
  {
    v42 = sub_7606A0(&v128);
    v43 = *(this + 0x2D);
    v2 = v43 == *v42;
    LOBYTE(v129) = 6;
    if ( !v2 )
    {
      if ( v43 )
      {
        v2 = v43->RefCount-- == 1;
        if ( v2 )
          sub_7604D0(v43);
      }
      v44 = *v42;
      v2 = *v42 == 0;
      *(this + 0x2D) = *v42;
      if ( !v2 )
        ++v44->RefCount;
    }
    v45 = v128;
    LOBYTE(v129) = 0;
    if ( v128 )
    {
      --v128->RefCount;
      if ( !v45->RefCount )
        sub_7604D0(v45);
    }
    v46 = (unsigned int *)*sub_772630(&v128);
    if ( v46 )
    {
      v47 = v46;
      ++v46[0x17];
      v127 = v46;
    }
    else
    {
      v47 = v127;
    }
    v48 = (NiD3DTextureStage *)v128;
    LOBYTE(v129) = 0;
    if ( v128 )
    {
      --*(_DWORD *)&v128->SoftwareVP;
      if ( !v48[7].Unk08 )
        sub_772560(v48);
    }
    sub_801110((int)v47, 0, 3, 2);
    sub_760010(*(this + 0x2D), (*(this + 0x2D))->CurrentStage, v47);
    v49 = (int)*(this + 0x2D);
    if ( !*(_DWORD *)(v49 + 0x30) )
      *(_DWORD *)(v49 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v49 + 0x30), 0x1B, 1, 0);
    v50 = (int)*(this + 0x2D);
    if ( !*(_DWORD *)(v50 + 0x30) )
      *(_DWORD *)(v50 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v50 + 0x30), 0x13, 2, 0);
    v51 = (int)*(this + 0x2D);
    if ( !*(_DWORD *)(v51 + 0x30) )
      *(_DWORD *)(v51 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v51 + 0x30), 0x14, 2, 0);
    v52 = (int)*(this + 0x2D);
    if ( !*(_DWORD *)(v52 + 0x30) )
      *(_DWORD *)(v52 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v52 + 0x30), 0xF, 0, 0);
    v53 = (int)*(this + 0x2D);
    if ( !*(_DWORD *)(v53 + 0x30) )
      *(_DWORD *)(v53 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v53 + 0x30), 7, 1, 0);
    v54 = (int)*(this + 0x2D);
    if ( !*(_DWORD *)(v54 + 0x30) )
      *(_DWORD *)(v54 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v54 + 0x30), 0xE, 0, 0);
    v55 = (int)*(this + 0x2D);
    if ( !*(_DWORD *)(v55 + 0x30) )
      *(_DWORD *)(v55 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v55 + 0x30), 0x17, 4, 0);
    v56 = (int)*(this + 0x2D);
    if ( !*(_DWORD *)(v56 + 0x30) )
      *(_DWORD *)(v56 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v56 + 0x30), 0xA8, 0, 0);
  }
  v57 = (int)*(this + 0x2D);
  v58 = (int)*(this + 0x23);
  v59 = *(_DWORD *)(v57 + 0x58);
  if ( v59 != v58 )
  {
    if ( v59 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v59 + 4)) )
        (**(void (__thiscall ***)(int, int))v59)(v59, 1);
    }
    *(_DWORD *)(v57 + 0x58) = v58;
    if ( v58 )
      InterlockedIncrement((volatile LONG *)(v58 + 4));
  }
  v60 = (int)*(this + 0x2D);
  v61 = (int)*(this + 0x29);
  v62 = *(_DWORD *)(v60 + 0x44);
  if ( v62 != v61 )
  {
    if ( v62 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v62 + 4)) )
        (**(void (__thiscall ***)(int, int))v62)(v62, 1);
    }
    *(_DWORD *)(v60 + 0x44) = v61;
    if ( v61 )
      InterlockedIncrement((volatile LONG *)(v61 + 4));
  }
  if ( !*(this + 0x2E) )
  {
    v63 = sub_7606A0(&v128);
    v64 = *(this + 0x2E);
    v2 = v64 == *v63;
    LOBYTE(v129) = 8;
    if ( !v2 )
    {
      if ( v64 )
      {
        v2 = v64->RefCount-- == 1;
        if ( v2 )
          sub_7604D0(v64);
      }
      v65 = *v63;
      v2 = *v63 == 0;
      *(this + 0x2E) = *v63;
      if ( !v2 )
        ++v65->RefCount;
    }
    v66 = v128;
    LOBYTE(v129) = 0;
    if ( v128 )
    {
      --v128->RefCount;
      if ( !v66->RefCount )
        sub_7604D0(v66);
    }
    v67 = (unsigned int **)sub_772630(&v128);
    v68 = (NiD3DTextureStage *)v127;
    v2 = v127 == *v67;
    LOBYTE(v129) = 9;
    if ( !v2 )
    {
      if ( v127 )
      {
        v2 = v127[0x17]-- == 1;
        if ( v2 )
          sub_772560(v68);
      }
      v68 = (NiD3DTextureStage *)*v67;
      v127 = *v67;
      if ( v127 )
        ++v68[7].Unk08;
    }
    v69 = (NiD3DTextureStage *)v128;
    LOBYTE(v129) = 0;
    if ( v128 )
    {
      --*(_DWORD *)&v128->SoftwareVP;
      if ( !v69[7].Unk08 )
        sub_772560(v69);
    }
    sub_801110((int)v68, 0, 3, 2);
    sub_760010(*(this + 0x2E), (*(this + 0x2E))->CurrentStage, &v68->Stage);
    v70 = (int)*(this + 0x2E);
    if ( !*(_DWORD *)(v70 + 0x30) )
      *(_DWORD *)(v70 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v70 + 0x30), 0xF, 0, 0);
    v71 = (int)*(this + 0x2E);
    if ( !*(_DWORD *)(v71 + 0x30) )
      *(_DWORD *)(v71 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v71 + 0x30), 0x1B, 0, 0);
    v72 = (int)*(this + 0x2E);
    if ( !*(_DWORD *)(v72 + 0x30) )
      *(_DWORD *)(v72 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v72 + 0x30), 7, 1, 0);
    v73 = (int)*(this + 0x2E);
    if ( !*(_DWORD *)(v73 + 0x30) )
      *(_DWORD *)(v73 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v73 + 0x30), 0xE, 0, 0);
    v74 = (int)*(this + 0x2E);
    if ( !*(_DWORD *)(v74 + 0x30) )
      *(_DWORD *)(v74 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v74 + 0x30), 0x17, 4, 0);
    v75 = (int)*(this + 0x2E);
    if ( !*(_DWORD *)(v75 + 0x30) )
      *(_DWORD *)(v75 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v75 + 0x30), 0xA8, 8, 0);
  }
  v76 = (int)*(this + 0x2E);
  v77 = (int)*(this + 0x33);
  v78 = *(_DWORD *)(v76 + 0x58);
  if ( v78 != v77 )
  {
    if ( v78 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v78 + 4)) )
        (**(void (__thiscall ***)(int, int))v78)(v78, 1);
    }
    *(_DWORD *)(v76 + 0x58) = v77;
    if ( v77 )
      InterlockedIncrement((volatile LONG *)(v77 + 4));
  }
  v79 = (int)*(this + 0x2E);
  v80 = (int)*(this + 0x34);
  v81 = *(_DWORD *)(v79 + 0x44);
  if ( v81 != v80 )
  {
    if ( v81 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v81 + 4)) )
        (**(void (__thiscall ***)(int, int))v81)(v81, 1);
    }
    *(_DWORD *)(v79 + 0x44) = v80;
    if ( v80 )
      InterlockedIncrement((volatile LONG *)(v80 + 4));
  }
  if ( !*(this + 0x2F) )
  {
    v82 = sub_7606A0(&v128);
    v83 = *(this + 0x2F);
    v2 = v83 == *v82;
    LOBYTE(v129) = 0xA;
    if ( !v2 )
    {
      if ( v83 )
      {
        v2 = v83->RefCount-- == 1;
        if ( v2 )
          sub_7604D0(v83);
      }
      v84 = *v82;
      v2 = *v82 == 0;
      *(this + 0x2F) = *v82;
      if ( !v2 )
        ++v84->RefCount;
    }
    v85 = v128;
    LOBYTE(v129) = 0;
    if ( v128 )
    {
      --v128->RefCount;
      if ( !v85->RefCount )
        sub_7604D0(v85);
    }
    v86 = (unsigned int **)sub_772630(&v128);
    v87 = (NiD3DTextureStage *)v127;
    v2 = v127 == *v86;
    LOBYTE(v129) = 0xB;
    if ( !v2 )
    {
      if ( v127 )
      {
        v2 = v127[0x17]-- == 1;
        if ( v2 )
          sub_772560(v87);
      }
      v87 = (NiD3DTextureStage *)*v86;
      v127 = *v86;
      if ( v127 )
        ++v87[7].Unk08;
    }
    v88 = (NiD3DTextureStage *)v128;
    LOBYTE(v129) = 0;
    if ( v128 )
    {
      --*(_DWORD *)&v128->SoftwareVP;
      if ( !v88[7].Unk08 )
        sub_772560(v88);
    }
    sub_801110((int)v87, 0, 3, 2);
    sub_760010(*(this + 0x2F), (*(this + 0x2F))->CurrentStage, &v87->Stage);
    v89 = (int)*(this + 0x2F);
    if ( !*(_DWORD *)(v89 + 0x30) )
      *(_DWORD *)(v89 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v89 + 0x30), 0x1B, 1, 0);
    v90 = (int)*(this + 0x2F);
    if ( !*(_DWORD *)(v90 + 0x30) )
      *(_DWORD *)(v90 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v90 + 0x30), 0x13, 2, 0);
    v91 = (int)*(this + 0x2F);
    if ( !*(_DWORD *)(v91 + 0x30) )
      *(_DWORD *)(v91 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v91 + 0x30), 0x14, 2, 0);
    v92 = (int)*(this + 0x2F);
    if ( !*(_DWORD *)(v92 + 0x30) )
      *(_DWORD *)(v92 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v92 + 0x30), 0xF, 0, 0);
    v93 = (int)*(this + 0x2F);
    if ( !*(_DWORD *)(v93 + 0x30) )
      *(_DWORD *)(v93 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v93 + 0x30), 7, 1, 0);
    v94 = (int)*(this + 0x2F);
    if ( !*(_DWORD *)(v94 + 0x30) )
      *(_DWORD *)(v94 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v94 + 0x30), 0xE, 0, 0);
    v95 = (int)*(this + 0x2F);
    if ( !*(_DWORD *)(v95 + 0x30) )
      *(_DWORD *)(v95 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v95 + 0x30), 0x17, 4, 0);
    v96 = (int)*(this + 0x2F);
    if ( !*(_DWORD *)(v96 + 0x30) )
      *(_DWORD *)(v96 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v96 + 0x30), 0xA8, 8, 0);
  }
  v97 = (int)*(this + 0x2F);
  v98 = (int)*(this + 0x31);
  v99 = *(_DWORD *)(v97 + 0x58);
  if ( v99 != v98 )
  {
    if ( v99 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v99 + 4)) )
        (**(void (__thiscall ***)(int, int))v99)(v99, 1);
    }
    *(_DWORD *)(v97 + 0x58) = v98;
    if ( v98 )
      InterlockedIncrement((volatile LONG *)(v98 + 4));
  }
  v100 = (int)*(this + 0x2F);
  v101 = (int)*(this + 0x35);
  v102 = *(_DWORD *)(v100 + 0x44);
  if ( v102 != v101 )
  {
    if ( v102 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v102 + 4)) )
        (**(void (__thiscall ***)(int, int))v102)(v102, 1);
    }
    *(_DWORD *)(v100 + 0x44) = v101;
    if ( v101 )
      InterlockedIncrement((volatile LONG *)(v101 + 4));
  }
  if ( !*(this + 0x30) )
  {
    v103 = sub_7606A0(&v128);
    v104 = *(this + 0x30);
    v2 = v104 == *v103;
    LOBYTE(v129) = 0xC;
    if ( !v2 )
    {
      if ( v104 )
      {
        v2 = v104->RefCount-- == 1;
        if ( v2 )
          sub_7604D0(v104);
      }
      v105 = *v103;
      v2 = *v103 == 0;
      *(this + 0x30) = *v103;
      if ( !v2 )
        ++v105->RefCount;
    }
    v106 = v128;
    LOBYTE(v129) = 0;
    if ( v128 )
    {
      --v128->RefCount;
      if ( !v106->RefCount )
        sub_7604D0(v106);
    }
    v107 = (unsigned int **)sub_772630(&v128);
    v108 = (NiD3DTextureStage *)v127;
    v2 = v127 == *v107;
    LOBYTE(v129) = 0xD;
    if ( !v2 )
    {
      if ( v127 )
      {
        v2 = v127[0x17]-- == 1;
        if ( v2 )
          sub_772560(v108);
      }
      v108 = (NiD3DTextureStage *)*v107;
      v127 = *v107;
      if ( v127 )
        ++v108[7].Unk08;
    }
    v109 = (NiD3DTextureStage *)v128;
    LOBYTE(v129) = 0;
    if ( v128 )
    {
      --*(_DWORD *)&v128->SoftwareVP;
      if ( !v109[7].Unk08 )
        sub_772560(v109);
    }
    sub_801110((int)v108, 0, 3, 2);
    sub_760010(*(this + 0x30), (*(this + 0x30))->CurrentStage, &v108->Stage);
    v110 = (int)*(this + 0x30);
    if ( !*(_DWORD *)(v110 + 0x30) )
      *(_DWORD *)(v110 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v110 + 0x30), 0xF, 0, 0);
    v111 = (int)*(this + 0x30);
    if ( !*(_DWORD *)(v111 + 0x30) )
      *(_DWORD *)(v111 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v111 + 0x30), 0x1B, 1, 0);
    v112 = (int)*(this + 0x30);
    if ( !*(_DWORD *)(v112 + 0x30) )
      *(_DWORD *)(v112 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v112 + 0x30), 0x13, 1, 0);
    v113 = (int)*(this + 0x30);
    if ( !*(_DWORD *)(v113 + 0x30) )
      *(_DWORD *)(v113 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v113 + 0x30), 0x14, 6, 0);
    v114 = (int)*(this + 0x30);
    if ( !*(_DWORD *)(v114 + 0x30) )
      *(_DWORD *)(v114 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v114 + 0x30), 7, 1, 0);
    v115 = (int)*(this + 0x30);
    if ( !*(_DWORD *)(v115 + 0x30) )
      *(_DWORD *)(v115 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v115 + 0x30), 0xE, 0, 0);
    v116 = (int)*(this + 0x30);
    if ( !*(_DWORD *)(v116 + 0x30) )
      *(_DWORD *)(v116 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v116 + 0x30), 0x17, 4, 0);
    v117 = (int)*(this + 0x30);
    if ( !*(_DWORD *)(v117 + 0x30) )
      *(_DWORD *)(v117 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v117 + 0x30), 0xA8, 8, 0);
  }
  v118 = (int)*(this + 0x30);
  v119 = (int)*(this + 0x32);
  v120 = *(_DWORD *)(v118 + 0x58);
  if ( v120 != v119 )
  {
    if ( v120 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v120 + 4)) )
        (**(void (__thiscall ***)(int, int))v120)(v120, 1);
    }
    *(_DWORD *)(v118 + 0x58) = v119;
    if ( v119 )
      InterlockedIncrement((volatile LONG *)(v119 + 4));
  }
  v121 = (int)*(this + 0x36);
  v122 = (int)*(this + 0x30);
  v123 = *(_DWORD *)(v122 + 0x44);
  if ( v123 != v121 )
  {
    if ( v123 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v123 + 4)) )
        (**(void (__thiscall ***)(int, int))v123)(v123, 1);
    }
    *(_DWORD *)(v122 + 0x44) = v121;
    if ( v121 )
      InterlockedIncrement((volatile LONG *)(v121 + 4));
  }
  v124 = (NiD3DTextureStage *)v127;
  v129 = 0xFFFFFFFF;
  if ( v127 )
  {
    v2 = v127[0x17]-- == 1;
    if ( v2 )
      sub_772560(v124);
  }
  return 1;
}
