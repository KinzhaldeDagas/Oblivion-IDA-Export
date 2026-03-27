void sub_85E660()
{
  NiD3DPass *v0; // esi
  int v1; // eax
  bool v2; // zf
  NiD3DVertexShader *VertexShader; // edi
  int v4; // ebp
  NiD3DPixelShader *PixelShader; // edi
  int v6; // ebp
  NiD3DVertexShader *v7; // edi
  int v8; // ebp
  NiD3DPixelShader *v9; // edi
  int v10; // ebp
  NiD3DVertexShader *v11; // edi
  int v12; // ebp
  NiD3DPixelShader *v13; // edi
  int v14; // ebp
  NiD3DVertexShader *v15; // edi
  int v16; // ebp
  NiD3DPixelShader *v17; // edi
  int v18; // ebp
  NiD3DVertexShader *v19; // edi
  int v20; // ebp
  NiD3DPixelShader *v21; // edi
  int v22; // ebp
  NiD3DVertexShader *v23; // edi
  int v24; // ebp
  NiD3DPixelShader *v25; // edi
  int v26; // ebp
  NiD3DVertexShader *v27; // edi
  int v28; // ebp
  NiD3DPixelShader *v29; // edi
  int v30; // ebp
  NiD3DVertexShader *v31; // edi
  int v32; // ebp
  NiD3DPixelShader *v33; // edi
  int v34; // ebp
  NiD3DVertexShader *v35; // edi
  int v36; // ebp
  NiD3DPixelShader *v37; // edi
  int v38; // ebp
  NiD3DVertexShader *v39; // edi
  int v40; // ebp
  NiD3DPixelShader *v41; // edi
  int v42; // ebp
  NiD3DVertexShader *v43; // edi
  int v44; // ebp
  NiD3DPixelShader *v45; // edi
  int v46; // ebp
  NiD3DVertexShader *v47; // edi
  int v48; // ebp
  NiD3DPixelShader *v49; // edi
  int v50; // ebp
  NiD3DVertexShader *v51; // edi
  int v52; // ebp
  NiD3DPixelShader *v53; // edi
  int v54; // ebp
  NiD3DVertexShader *v55; // edi
  int v56; // ebp
  NiD3DPixelShader *v57; // edi
  int v58; // ebp
  NiD3DVertexShader *v59; // edi
  int v60; // ebp
  NiD3DPixelShader *v61; // edi
  int v62; // ebp
  unsigned int *v63; // eax
  NiD3DTextureStage *v64; // eax
  unsigned int *v65; // edi
  unsigned int *v66; // eax
  NiD3DTextureStage *v67; // eax
  unsigned int *v68; // edi
  unsigned int *v69; // eax
  NiD3DTextureStage *v70; // eax
  unsigned int *v71; // edi
  unsigned int *v72; // eax
  NiD3DTextureStage *v73; // eax
  unsigned int *v74; // edi
  unsigned int *v75; // eax
  NiD3DTextureStage *v76; // eax
  unsigned int *v77; // edi
  unsigned int *v78; // eax
  NiD3DTextureStage *v79; // eax
  unsigned int *v80; // edi
  unsigned int *v81; // eax
  NiD3DTextureStage *v82; // eax
  unsigned int *v83; // edi
  unsigned int *v84; // eax
  NiD3DTextureStage *v85; // eax
  unsigned int *v86; // edi
  unsigned int *v87; // eax
  NiD3DTextureStage *v88; // eax
  unsigned int *v89; // edi
  unsigned int *v90; // eax
  NiD3DTextureStage *v91; // eax
  unsigned int *v92; // edi
  unsigned int *v93; // eax
  NiD3DTextureStage *v94; // eax
  unsigned int *v95; // edi
  unsigned int *v96; // eax
  NiD3DTextureStage *v97; // eax
  unsigned int *v98; // edi
  unsigned int *v99; // eax
  NiD3DTextureStage *v100; // eax
  unsigned int *v101; // edi
  unsigned int *v102; // eax
  NiD3DTextureStage *v103; // eax
  unsigned int *v104; // edi
  NiD3DPass *v105; // esi
  NiD3DPass *v106; // esi
  NiD3DPass *v107; // esi
  unsigned int *v108; // eax
  NiD3DTextureStage *v109; // eax
  unsigned int *v110; // edi
  NiD3DPass *v111; // esi
  unsigned int *v112; // eax
  NiD3DTextureStage *v113; // eax
  unsigned int *v114; // ebp
  NiD3DPass *v115; // esi
  unsigned int *v116; // eax
  NiD3DTextureStage *v117; // eax
  NiD3DPassVtbl **v118; // esi
  NiD3DPassVtbl **v119; // esi
  NiD3DPass *v120; // esi
  unsigned int *v121; // eax
  NiD3DTextureStage *v122; // eax
  unsigned int *v123; // edi
  unsigned int *v124; // eax
  NiD3DTextureStage *v125; // eax
  unsigned int *v126; // edi
  NiD3DPass *v127; // esi
  unsigned int *v128; // eax
  NiD3DTextureStage *v129; // eax
  unsigned int *v130; // edi
  unsigned int *v131; // eax
  NiD3DTextureStage *v132; // eax
  unsigned int *v133; // edi
  NiD3DPass *v134; // esi
  unsigned int *v135; // eax
  NiD3DTextureStage *v136; // eax
  unsigned int *v137; // edi
  NiD3DPass *v138; // esi
  unsigned int *v139; // eax
  NiD3DTextureStage *v140; // eax
  NiD3DPassVtbl **v141; // esi
  NiD3DPassVtbl **v142; // esi
  NiD3DPass *v143; // esi
  NiD3DTextureStage *v144; // ecx
  NiD3DPassVtbl **v145; // [esp+78h] [ebp-18h] BYREF
  unsigned int *a3; // [esp+7Ch] [ebp-14h] BYREF
  NiD3DTextureStage *v147; // [esp+80h] [ebp-10h] BYREF
  unsigned int v148; // [esp+8Ch] [ebp-4h]

  v0 = 0;
  v145 = 0;
  v148 = 0;
  a3 = 0;
  v1 = dword_B473D0[0];
  v2 = dword_B473D0[0] == 0;
  LOBYTE(v148) = 1;
  if ( !v2 )
  {
    v0 = (NiD3DPass *)v1;
    v145 = (NiD3DPassVtbl **)v1;
    if ( v1 )
      ++*(_DWORD *)(v1 + 0x60);
  }
  sub_85E570(v0);
  VertexShader = v0->VertexShader;
  v4 = dword_B47300;
  if ( VertexShader != (NiD3DVertexShader *)dword_B47300 )
  {
    if ( VertexShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v4;
    if ( v4 )
      InterlockedIncrement((volatile LONG *)(v4 + 4));
  }
  PixelShader = v0->PixelShader;
  v6 = dword_B46F6C;
  if ( PixelShader != (NiD3DPixelShader *)dword_B46F6C )
  {
    if ( PixelShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v6;
    if ( v6 )
      InterlockedIncrement((volatile LONG *)(v6 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x16, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xA8, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B473D4;
  dword_B46988[0] = 0x812;
  dword_B46A60[0] = 0;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B473D4;
    v145 = (NiD3DPassVtbl **)dword_B473D4;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  v7 = v0->VertexShader;
  v8 = dword_B47300;
  if ( v7 != (NiD3DVertexShader *)dword_B47300 )
  {
    if ( v7 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v7 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v7)(v7, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v8;
    if ( v8 )
      InterlockedIncrement((volatile LONG *)(v8 + 4));
  }
  v9 = v0->PixelShader;
  v10 = dword_B46F6C;
  if ( v9 != (NiD3DPixelShader *)dword_B46F6C )
  {
    if ( v9 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v9 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v9)(v9, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v10;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)(v10 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B473D8;
  dword_B4698C = 2;
  dword_B46A64 = 0;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B473D8;
    v145 = (NiD3DPassVtbl **)dword_B473D8;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  v11 = v0->VertexShader;
  v12 = dword_B47304;
  if ( v11 != (NiD3DVertexShader *)dword_B47304 )
  {
    if ( v11 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v11 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v11)(v11, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v12;
    if ( v12 )
      InterlockedIncrement((volatile LONG *)(v12 + 4));
  }
  v13 = v0->PixelShader;
  v14 = dword_B46F70;
  if ( v13 != (NiD3DPixelShader *)dword_B46F70 )
  {
    if ( v13 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v13 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v13)(v13, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v14;
    if ( v14 )
      InterlockedIncrement((volatile LONG *)(v14 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B473DC;
  dword_B46990 = 0xC;
  dword_B46A68 = 0;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B473DC;
    v145 = (NiD3DPassVtbl **)dword_B473DC;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  v15 = v0->VertexShader;
  v16 = dword_B47288[0];
  if ( v15 != (NiD3DVertexShader *)dword_B47288[0] )
  {
    if ( v15 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v15 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v15)(v15, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v16;
    if ( v16 )
      InterlockedIncrement((volatile LONG *)(v16 + 4));
  }
  v17 = v0->PixelShader;
  v18 = dword_B46ED8[0];
  if ( v17 != (NiD3DPixelShader *)dword_B46ED8[0] )
  {
    if ( v17 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v17 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v17)(v17, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v18;
    if ( v18 )
      InterlockedIncrement((volatile LONG *)(v18 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B473E0;
  dword_B46994 = 0x30002;
  dword_B46A6C = 0x16;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B473E0;
    v145 = (NiD3DPassVtbl **)dword_B473E0;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  v19 = v0->VertexShader;
  v20 = dword_B4728C;
  if ( v19 != (NiD3DVertexShader *)dword_B4728C )
  {
    if ( v19 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v19 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v19)(v19, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v20;
    if ( v20 )
      InterlockedIncrement((volatile LONG *)(v20 + 4));
  }
  v21 = v0->PixelShader;
  v22 = dword_B46ED8[0];
  if ( v21 != (NiD3DPixelShader *)dword_B46ED8[0] )
  {
    if ( v21 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v21 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v21)(v21, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v22;
    if ( v22 )
      InterlockedIncrement((volatile LONG *)(v22 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B473E4;
  dword_B46998 = 0x3000C;
  dword_B46A70 = 0x16;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B473E4;
    v145 = (NiD3DPassVtbl **)dword_B473E4;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  v23 = v0->VertexShader;
  v24 = dword_B47290;
  if ( v23 != (NiD3DVertexShader *)dword_B47290 )
  {
    if ( v23 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v23 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v23)(v23, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v24;
    if ( v24 )
      InterlockedIncrement((volatile LONG *)(v24 + 4));
  }
  v25 = v0->PixelShader;
  v26 = dword_B46EE0;
  if ( v25 != (NiD3DPixelShader *)dword_B46EE0 )
  {
    if ( v25 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v25 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v25)(v25, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v26;
    if ( v26 )
      InterlockedIncrement((volatile LONG *)(v26 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B473E8;
  dword_B4699C = 0x30002;
  dword_B46A74 = 0x1E;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B473E8;
    v145 = (NiD3DPassVtbl **)dword_B473E8;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  v27 = v0->VertexShader;
  v28 = dword_B47288[0];
  if ( v27 != (NiD3DVertexShader *)dword_B47288[0] )
  {
    if ( v27 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v27 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v27)(v27, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v28;
    if ( v28 )
      InterlockedIncrement((volatile LONG *)(v28 + 4));
  }
  v29 = v0->PixelShader;
  v30 = dword_B46EE8;
  if ( v29 != (NiD3DPixelShader *)dword_B46EE8 )
  {
    if ( v29 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v29 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v29)(v29, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v30;
    if ( v30 )
      InterlockedIncrement((volatile LONG *)(v30 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B473EC;
  dword_B469A0 = 0x30002;
  dword_B46A78 = 0x16;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B473EC;
    v145 = (NiD3DPassVtbl **)dword_B473EC;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  v31 = v0->VertexShader;
  v32 = dword_B47288[0];
  if ( v31 != (NiD3DVertexShader *)dword_B47288[0] )
  {
    if ( v31 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v31 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v31)(v31, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v32;
    if ( v32 )
      InterlockedIncrement((volatile LONG *)(v32 + 4));
  }
  v33 = v0->PixelShader;
  v34 = dword_B46EF0;
  if ( v33 != (NiD3DPixelShader *)dword_B46EF0 )
  {
    if ( v33 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v33 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v33)(v33, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v34;
    if ( v34 )
      InterlockedIncrement((volatile LONG *)(v34 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B473F0;
  dword_B469A4 = 0x30002;
  dword_B46A7C = 0x16;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B473F0;
    v145 = (NiD3DPassVtbl **)dword_B473F0;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  v35 = v0->VertexShader;
  v36 = dword_B4728C;
  if ( v35 != (NiD3DVertexShader *)dword_B4728C )
  {
    if ( v35 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v35 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v35)(v35, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v36;
    if ( v36 )
      InterlockedIncrement((volatile LONG *)(v36 + 4));
  }
  v37 = v0->PixelShader;
  v38 = dword_B46EF0;
  if ( v37 != (NiD3DPixelShader *)dword_B46EF0 )
  {
    if ( v37 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v37 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v37)(v37, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v38;
    if ( v38 )
      InterlockedIncrement((volatile LONG *)(v38 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B473F4;
  dword_B469A8 = 0x3000C;
  dword_B46A80 = 0x16;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B473F4;
    v145 = (NiD3DPassVtbl **)dword_B473F4;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  v39 = v0->VertexShader;
  v40 = dword_B47288[0];
  if ( v39 != (NiD3DVertexShader *)dword_B47288[0] )
  {
    if ( v39 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v39 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v39)(v39, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v40;
    if ( v40 )
      InterlockedIncrement((volatile LONG *)(v40 + 4));
  }
  v41 = v0->PixelShader;
  v42 = dword_B46EF8;
  if ( v41 != (NiD3DPixelShader *)dword_B46EF8 )
  {
    if ( v41 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v41 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v41)(v41, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v42;
    if ( v42 )
      InterlockedIncrement((volatile LONG *)(v42 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B473F8;
  dword_B469AC = 0x30002;
  dword_B46A84 = 0x36;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B473F8;
    v145 = (NiD3DPassVtbl **)dword_B473F8;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  v43 = v0->VertexShader;
  v44 = dword_B4728C;
  if ( v43 != (NiD3DVertexShader *)dword_B4728C )
  {
    if ( v43 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v43 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v43)(v43, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v44;
    if ( v44 )
      InterlockedIncrement((volatile LONG *)(v44 + 4));
  }
  v45 = v0->PixelShader;
  v46 = dword_B46EF8;
  if ( v45 != (NiD3DPixelShader *)dword_B46EF8 )
  {
    if ( v45 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v45 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v45)(v45, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v46;
    if ( v46 )
      InterlockedIncrement((volatile LONG *)(v46 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B473FC;
  dword_B469B0 = 0x3000C;
  dword_B46A88 = 0x36;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B473FC;
    v145 = (NiD3DPassVtbl **)dword_B473FC;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  v47 = v0->VertexShader;
  v48 = dword_B47290;
  if ( v47 != (NiD3DVertexShader *)dword_B47290 )
  {
    if ( v47 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v47 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v47)(v47, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v48;
    if ( v48 )
      InterlockedIncrement((volatile LONG *)(v48 + 4));
  }
  v49 = v0->PixelShader;
  v50 = dword_B46ED8[0];
  if ( v49 != (NiD3DPixelShader *)dword_B46ED8[0] )
  {
    if ( v49 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v49 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v49)(v49, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v50;
    if ( v50 )
      InterlockedIncrement((volatile LONG *)(v50 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B47400;
  dword_B469B4 = 0x30002;
  dword_B46A8C = 0x16;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B47400;
    v145 = (NiD3DPassVtbl **)dword_B47400;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  v51 = v0->VertexShader;
  v52 = dword_B47294;
  if ( v51 != (NiD3DVertexShader *)dword_B47294 )
  {
    if ( v51 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v51 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v51)(v51, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v52;
    if ( v52 )
      InterlockedIncrement((volatile LONG *)(v52 + 4));
  }
  v53 = v0->PixelShader;
  v54 = dword_B46ED8[0];
  if ( v53 != (NiD3DPixelShader *)dword_B46ED8[0] )
  {
    if ( v53 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v53 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v53)(v53, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v54;
    if ( v54 )
      InterlockedIncrement((volatile LONG *)(v54 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B47404;
  dword_B469B8 = 0x3000C;
  dword_B46A90 = 0x16;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B47404;
    v145 = (NiD3DPassVtbl **)dword_B47404;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  v55 = v0->VertexShader;
  v56 = dword_B47290;
  if ( v55 != (NiD3DVertexShader *)dword_B47290 )
  {
    if ( v55 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v55 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v55)(v55, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v56;
    if ( v56 )
      InterlockedIncrement((volatile LONG *)(v56 + 4));
  }
  v57 = v0->PixelShader;
  v58 = dword_B46EE8;
  if ( v57 != (NiD3DPixelShader *)dword_B46EE8 )
  {
    if ( v57 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v57 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v57)(v57, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v58;
    if ( v58 )
      InterlockedIncrement((volatile LONG *)(v58 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B47408;
  dword_B469BC = 0x30012;
  dword_B46A94 = 0x16;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B47408;
    v145 = (NiD3DPassVtbl **)dword_B47408;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  v59 = v0->VertexShader;
  v60 = dword_B47290;
  if ( v59 != (NiD3DVertexShader *)dword_B47290 )
  {
    if ( v59 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v59 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v59)(v59, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v60;
    if ( v60 )
      InterlockedIncrement((volatile LONG *)(v60 + 4));
  }
  v61 = v0->PixelShader;
  v62 = dword_B46EF8;
  if ( v61 != (NiD3DPixelShader *)dword_B46EF8 )
  {
    if ( v61 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v61 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v61)(v61, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v62;
    if ( v62 )
      InterlockedIncrement((volatile LONG *)(v62 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B4740C;
  dword_B469C0 = 0x30002;
  dword_B46A98 = 0x36;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B4740C;
    v145 = (NiD3DPassVtbl **)dword_B4740C;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B47294);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B46EF8);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B47410;
  dword_B469C4 = 0x3000C;
  dword_B46A9C = 0x36;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B47410;
    v145 = (NiD3DPassVtbl **)dword_B47410;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B47298);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B46F00);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B47414;
  dword_B469C8 = 0xC430002;
  dword_B46AA0 = 0x16;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B47414;
    v145 = (NiD3DPassVtbl **)dword_B47414;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B4729C);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B46F00);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B47418;
  dword_B469CC = 0xC43000C;
  dword_B46AA4 = 0x16;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B47418;
    v145 = (NiD3DPassVtbl **)dword_B47418;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B472A0);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B46F08);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B4741C;
  dword_B469D0 = 0xC430002;
  dword_B46AA8 = 0x1E;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B4741C;
    v145 = (NiD3DPassVtbl **)dword_B4741C;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B47298);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B46F10);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B47420;
  dword_B469D4 = 0xC430002;
  dword_B46AAC = 0x16;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B47420;
    v145 = (NiD3DPassVtbl **)dword_B47420;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B47298);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B46F18);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B47424;
  dword_B469D8 = 0xC430002;
  dword_B46AB0 = 0x16;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B47424;
    v145 = (NiD3DPassVtbl **)dword_B47424;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B4729C);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B46F18);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B47428;
  dword_B469DC = 0xC43000C;
  dword_B46AB4 = 0x16;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B47428;
    v145 = (NiD3DPassVtbl **)dword_B47428;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B47298);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B46F20);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B4742C;
  dword_B469E0 = 0xC430002;
  dword_B46AB8 = 0x36;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B4742C;
    v145 = (NiD3DPassVtbl **)dword_B4742C;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B4729C);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B46F20);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B47430;
  dword_B469E4 = 0xC43000C;
  dword_B46ABC = 0x36;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B47430;
    v145 = (NiD3DPassVtbl **)dword_B47430;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B472A0);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B46F00);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B47434;
  dword_B469E8 = 0xC430002;
  dword_B46AC0 = 0x16;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B47434;
    v145 = (NiD3DPassVtbl **)dword_B47434;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B472A4);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B46F00);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B47438;
  dword_B469EC = 0xC43000C;
  dword_B46AC4 = 0x16;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B47438;
    v145 = (NiD3DPassVtbl **)dword_B47438;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B472A0);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B46F10);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B4743C;
  dword_B469F0 = 0xC430002;
  dword_B46AC8 = 0x16;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B4743C;
    v145 = (NiD3DPassVtbl **)dword_B4743C;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B472A0);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B46F20);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B47440;
  dword_B469F4 = 0xC430002;
  dword_B46ACC = 0x36;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B47440;
    v145 = (NiD3DPassVtbl **)dword_B47440;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B472A4);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B46F20);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B47444;
  dword_B469F8 = 0xC43000C;
  dword_B46AD0 = 0x36;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B47444;
    v145 = (NiD3DPassVtbl **)dword_B47444;
    if ( v145 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v63 = sub_772630(&v147);
    LOBYTE(v148) = 2;
    sub_75FAE0((NiD3DTextureStage **)&a3, v63);
    v64 = v147;
    LOBYTE(v148) = 1;
    if ( v147 )
    {
      --v147[7].Unk08;
      if ( !v64[7].Unk08 )
        sub_772560(v64);
    }
    v65 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v65);
    v66 = sub_772630(&v147);
    LOBYTE(v148) = 3;
    sub_75FAE0((NiD3DTextureStage **)&a3, v66);
    v67 = v147;
    LOBYTE(v148) = 1;
    if ( v147 )
    {
      --v147[7].Unk08;
      if ( !v67[7].Unk08 )
        sub_772560(v67);
    }
    v68 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v68);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B472A8);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B46F28[0]);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B47448;
  dword_B469FC = 0x8802;
  dword_B46AD4 = 0x10;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B47448;
    v145 = (NiD3DPassVtbl **)dword_B47448;
    if ( v145 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v69 = sub_772630(&v147);
    LOBYTE(v148) = 4;
    sub_75FAE0((NiD3DTextureStage **)&a3, v69);
    v70 = v147;
    LOBYTE(v148) = 1;
    if ( v147 )
    {
      --v147[7].Unk08;
      if ( !v70[7].Unk08 )
        sub_772560(v70);
    }
    v71 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v71);
    v72 = sub_772630(&v147);
    LOBYTE(v148) = 5;
    sub_75FAE0((NiD3DTextureStage **)&a3, v72);
    v73 = v147;
    LOBYTE(v148) = 1;
    if ( v147 )
    {
      --v147[7].Unk08;
      if ( !v73[7].Unk08 )
        sub_772560(v73);
    }
    v74 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v74);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B472A8);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B46F2C);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B4744C;
  dword_B46A00 = 0x8802;
  dword_B46AD8 = 0x10;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B4744C;
    v145 = (NiD3DPassVtbl **)dword_B4744C;
    if ( v145 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v75 = sub_772630(&v147);
    LOBYTE(v148) = 6;
    sub_75FAE0((NiD3DTextureStage **)&a3, v75);
    v76 = v147;
    LOBYTE(v148) = 1;
    if ( v147 )
    {
      --v147[7].Unk08;
      if ( !v76[7].Unk08 )
        sub_772560(v76);
    }
    v77 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v77);
    v78 = sub_772630(&v147);
    LOBYTE(v148) = 7;
    sub_75FAE0((NiD3DTextureStage **)&a3, v78);
    v79 = v147;
    LOBYTE(v148) = 1;
    if ( v147 )
    {
      --v147[7].Unk08;
      if ( !v79[7].Unk08 )
        sub_772560(v79);
    }
    v80 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v80);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B472AC);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B46F28[0]);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B47450;
  dword_B46A04 = 0x8802;
  dword_B46ADC = 0x10;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B47450;
    v145 = (NiD3DPassVtbl **)dword_B47450;
    if ( v145 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v81 = sub_772630(&v147);
    LOBYTE(v148) = 8;
    sub_75FAE0((NiD3DTextureStage **)&a3, v81);
    v82 = v147;
    LOBYTE(v148) = 1;
    if ( v147 )
    {
      --v147[7].Unk08;
      if ( !v82[7].Unk08 )
        sub_772560(v82);
    }
    v83 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v83);
    v84 = sub_772630(&v147);
    LOBYTE(v148) = 9;
    sub_75FAE0((NiD3DTextureStage **)&a3, v84);
    v85 = v147;
    LOBYTE(v148) = 1;
    if ( v147 )
    {
      --v147[7].Unk08;
      if ( !v85[7].Unk08 )
        sub_772560(v85);
    }
    v86 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v86);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B472AC);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B46F2C);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B47454;
  dword_B46A08 = 0x8802;
  dword_B46AE0 = 0x10;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B47454;
    v145 = (NiD3DPassVtbl **)dword_B47454;
    if ( v145 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v87 = sub_772630(&v147);
    LOBYTE(v148) = 0xA;
    sub_75FAE0((NiD3DTextureStage **)&a3, v87);
    v88 = v147;
    LOBYTE(v148) = 1;
    if ( v147 )
    {
      --v147[7].Unk08;
      if ( !v88[7].Unk08 )
        sub_772560(v88);
    }
    v89 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v89);
    v90 = sub_772630(&v147);
    LOBYTE(v148) = 0xB;
    sub_75FAE0((NiD3DTextureStage **)&a3, v90);
    v91 = v147;
    LOBYTE(v148) = 1;
    if ( v147 )
    {
      --v147[7].Unk08;
      if ( !v91[7].Unk08 )
        sub_772560(v91);
    }
    v92 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v92);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B472B0);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B46F28[0]);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B47458;
  dword_B46A0C = 0x1000800C;
  dword_B46AE4 = 0x10;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B47458;
    v145 = (NiD3DPassVtbl **)dword_B47458;
    if ( v145 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v93 = sub_772630(&v147);
    LOBYTE(v148) = 0xC;
    sub_75FAE0((NiD3DTextureStage **)&a3, v93);
    v94 = v147;
    LOBYTE(v148) = 1;
    if ( v147 )
    {
      --v147[7].Unk08;
      if ( !v94[7].Unk08 )
        sub_772560(v94);
    }
    v95 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v95);
    v96 = sub_772630(&v147);
    LOBYTE(v148) = 0xD;
    sub_75FAE0((NiD3DTextureStage **)&a3, v96);
    v97 = v147;
    LOBYTE(v148) = 1;
    if ( v147 )
    {
      --v147[7].Unk08;
      if ( !v97[7].Unk08 )
        sub_772560(v97);
    }
    v98 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v98);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B472B4);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B46F28[0]);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B4745C;
  dword_B46A10 = 0x1000800C;
  dword_B46AE8 = 0x10;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B4745C;
    v145 = (NiD3DPassVtbl **)dword_B4745C;
    if ( v145 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v99 = sub_772630(&v147);
    LOBYTE(v148) = 0xE;
    sub_75FAE0((NiD3DTextureStage **)&a3, v99);
    v100 = v147;
    LOBYTE(v148) = 1;
    if ( v147 )
    {
      --v147[7].Unk08;
      if ( !v100[7].Unk08 )
        sub_772560(v100);
    }
    v101 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v101);
    v102 = sub_772630(&v147);
    LOBYTE(v148) = 0xF;
    sub_75FAE0((NiD3DTextureStage **)&a3, v102);
    v103 = v147;
    LOBYTE(v148) = 1;
    if ( v147 )
    {
      --v147[7].Unk08;
      if ( !v103[7].Unk08 )
        sub_772560(v103);
    }
    v104 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v104);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B472B8);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B46F30);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v2 = v0 == (NiD3DPass *)dword_B47460;
  dword_B46A14 = 0x208802;
  dword_B46AEC = 0x10;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B47460;
    v145 = (NiD3DPassVtbl **)dword_B47460;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B472BC);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B46F34);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 9, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x98, 0x3F, 1u);
  v2 = v0 == (NiD3DPass *)dword_B47464;
  dword_B46A18 = 0x30802;
  dword_B46AF0 = 0xC10;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B47464;
    v145 = (NiD3DPassVtbl **)dword_B47464;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B472C0);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B46F34);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 9, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x98, 0x3F, 1u);
  v2 = v0 == (NiD3DPass *)dword_B47468;
  dword_B46A1C = 0x30802;
  dword_B46AF4 = 0xC10;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B47468;
    v145 = (NiD3DPassVtbl **)dword_B47468;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B472C4);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B46F34);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 9, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x98, 0x3F, 1u);
  v2 = v0 == (NiD3DPass *)dword_B4746C;
  dword_B46A20 = 0x3080C;
  dword_B46AF8 = 0xC10;
  if ( !v2 )
  {
    v2 = v0->RefCount-- == 1;
    if ( v2 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B4746C;
    v145 = (NiD3DPassVtbl **)dword_B4746C;
    if ( v145 )
      ++v0->RefCount;
  }
  sub_85E570(v0);
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B472C8);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B46F34);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 9, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x98, 0x3F, 1u);
  dword_B46A24 = 0x3080C;
  dword_B46AFC = 0xC10;
  sub_76C890((NiD3DPass **)&v145, &dword_B47470);
  v105 = (NiD3DPass *)v145;
  sub_85E570((NiD3DPass *)v145);
  sub_7715E0(v105->Stages.data->Texture, 0);
  sub_7AECB0(v105, (NiD3DVertexShader *)dword_B472CC);
  sub_7AEC60(&v105->__vftable, (NiD3DPixelShader *)dword_B46F38);
  if ( !v105->RenderStateGroup )
    v105->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v105->RenderStateGroup, 7, 1, 0);
  if ( !v105->RenderStateGroup )
    v105->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v105->RenderStateGroup, 0x17, 4, 0);
  if ( !v105->RenderStateGroup )
    v105->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v105->RenderStateGroup, 0xE, 0, 0);
  if ( !v105->RenderStateGroup )
    v105->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v105->RenderStateGroup, 0x1B, 1, 0);
  if ( !v105->RenderStateGroup )
    v105->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v105->RenderStateGroup, 0x13, 9, 0);
  if ( !v105->RenderStateGroup )
    v105->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v105->RenderStateGroup, 0x14, 6, 0);
  if ( !v105->RenderStateGroup )
    v105->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v105->RenderStateGroup, 0xF, 1, 0);
  if ( !v105->RenderStateGroup )
    v105->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v105->RenderStateGroup, 0x19, 5, 0);
  if ( !v105->RenderStateGroup )
    v105->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v105->RenderStateGroup, 0x18, 0, 0);
  if ( !v105->RenderStateGroup )
    v105->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v105->RenderStateGroup, 0x34, 0, 0);
  dword_B46A28 = 2;
  dword_B46B00 = 0;
  sub_76C890((NiD3DPass **)&v145, &dword_B47474);
  v106 = (NiD3DPass *)v145;
  sub_85E570((NiD3DPass *)v145);
  sub_7715E0(v106->Stages.data->Texture, 0);
  sub_7AECB0(v106, (NiD3DVertexShader *)dword_B472CC);
  sub_7AEC60(&v106->__vftable, (NiD3DPixelShader *)dword_B46F3C);
  if ( !v106->RenderStateGroup )
    v106->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v106->RenderStateGroup, 7, 1, 0);
  if ( !v106->RenderStateGroup )
    v106->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v106->RenderStateGroup, 0x17, 4, 0);
  if ( !v106->RenderStateGroup )
    v106->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v106->RenderStateGroup, 0xE, 0, 0);
  if ( !v106->RenderStateGroup )
    v106->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v106->RenderStateGroup, 0x1B, 1, 0);
  if ( !v106->RenderStateGroup )
    v106->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v106->RenderStateGroup, 0x13, 9, 0);
  if ( !v106->RenderStateGroup )
    v106->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v106->RenderStateGroup, 0x14, 6, 0);
  if ( !v106->RenderStateGroup )
    v106->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v106->RenderStateGroup, 0xF, 1, 0);
  if ( !v106->RenderStateGroup )
    v106->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v106->RenderStateGroup, 0x19, 5, 0);
  if ( !v106->RenderStateGroup )
    v106->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v106->RenderStateGroup, 0x18, 0, 0);
  if ( !v106->RenderStateGroup )
    v106->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v106->RenderStateGroup, 0x34, 0, 0);
  dword_B46A2C = 2;
  dword_B46B04 = 0;
  sub_76C890((NiD3DPass **)&v145, &dword_B47480);
  v107 = (NiD3DPass *)v145;
  if ( !v145[6] )
  {
    v108 = sub_772630(&v147);
    LOBYTE(v148) = 0x10;
    sub_75FAE0((NiD3DTextureStage **)&a3, v108);
    v109 = v147;
    LOBYTE(v148) = 1;
    if ( v147 )
    {
      --v147[7].Unk08;
      if ( !v109[7].Unk08 )
        sub_772560(v109);
    }
    v110 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v107, v107->CurrentStage, v110);
  }
  sub_7AECB0(v107, (NiD3DVertexShader *)dword_B472D8);
  sub_7AEC60(&v107->__vftable, (NiD3DPixelShader *)dword_B46F48);
  if ( !v107->RenderStateGroup )
    v107->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v107->RenderStateGroup, 0x1B, 0, 0);
  if ( !v107->RenderStateGroup )
    v107->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v107->RenderStateGroup, 0xF, 0, 0);
  if ( !v107->RenderStateGroup )
    v107->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v107->RenderStateGroup, 7, 1, 0);
  if ( !v107->RenderStateGroup )
    v107->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v107->RenderStateGroup, 0x17, 4, 0);
  if ( !v107->RenderStateGroup )
    v107->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v107->RenderStateGroup, 0xE, 1, 0);
  if ( !v107->RenderStateGroup )
    v107->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v107->RenderStateGroup, 0x34, 0, 0);
  dword_B46A38 = 0x12;
  dword_B46B10 = 0x200;
  sub_76C890((NiD3DPass **)&v145, &dword_B47484);
  v111 = (NiD3DPass *)v145;
  if ( !v145[6] )
  {
    v112 = sub_772630(&v147);
    LOBYTE(v148) = 0x11;
    sub_75FAE0((NiD3DTextureStage **)&a3, v112);
    v113 = v147;
    LOBYTE(v148) = 1;
    if ( v147 )
    {
      --v147[7].Unk08;
      if ( !v113[7].Unk08 )
        sub_772560(v113);
    }
    v114 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v111, v111->CurrentStage, v114);
  }
  sub_7AECB0(v111, (NiD3DVertexShader *)dword_B472DC);
  sub_7AEC60(&v111->__vftable, (NiD3DPixelShader *)dword_B46F4C);
  if ( !v111->RenderStateGroup )
    v111->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v111->RenderStateGroup, 0x1B, 0, 0);
  if ( !v111->RenderStateGroup )
    v111->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v111->RenderStateGroup, 0xF, 0, 0);
  if ( !v111->RenderStateGroup )
    v111->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v111->RenderStateGroup, 7, 1, 0);
  if ( !v111->RenderStateGroup )
    v111->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v111->RenderStateGroup, 0x17, 4, 0);
  if ( !v111->RenderStateGroup )
    v111->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v111->RenderStateGroup, 0xE, 1, 0);
  if ( !v111->RenderStateGroup )
    v111->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v111->RenderStateGroup, 0x34, 0, 0);
  dword_B46A3C = 0x2C;
  dword_B46B14 = 0x200;
  sub_76C890((NiD3DPass **)&v145, &dword_B47488);
  v115 = (NiD3DPass *)v145;
  if ( !v145[6] )
  {
    v116 = sub_772630(&v147);
    LOBYTE(v148) = 0x12;
    sub_75FAE0((NiD3DTextureStage **)&a3, v116);
    v117 = v147;
    LOBYTE(v148) = 1;
    if ( v147 )
    {
      --v147[7].Unk08;
      if ( !v117[7].Unk08 )
        sub_772560(v117);
    }
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v115, v115->CurrentStage, a3);
  }
  sub_7AECB0(v115, (NiD3DVertexShader *)dword_B472E0);
  sub_7AEC60(&v115->__vftable, (NiD3DPixelShader *)dword_B46F50);
  if ( !v115->RenderStateGroup )
    v115->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v115->RenderStateGroup, 0x1B, 1, 0);
  if ( !v115->RenderStateGroup )
    v115->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v115->RenderStateGroup, 0x13, 5, 0);
  if ( !v115->RenderStateGroup )
    v115->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v115->RenderStateGroup, 0x14, 6, 0);
  if ( !v115->RenderStateGroup )
    v115->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v115->RenderStateGroup, 0xF, 0, 0);
  if ( !v115->RenderStateGroup )
    v115->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v115->RenderStateGroup, 7, 1, 0);
  if ( !v115->RenderStateGroup )
    v115->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v115->RenderStateGroup, 0x17, 4, 0);
  if ( !v115->RenderStateGroup )
    v115->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v115->RenderStateGroup, 0xE, 0, 0);
  if ( !v115->RenderStateGroup )
    v115->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v115->RenderStateGroup, 0x34, 0, 0);
  dword_B46A40 = 0x108012;
  dword_B46B18 = 0x200;
  sub_76C890((NiD3DPass **)&v145, &dword_B4748C);
  v118 = v145;
  sub_7AECB0((NiD3DPass *)v145, (NiD3DVertexShader *)dword_B472E4);
  sub_7AEC60(v118, (NiD3DPixelShader *)dword_B46F54);
  if ( !v118[0xC] )
    v118[0xC] = (NiD3DPassVtbl *)sub_772DF0();
  sub_772CD0(v118[0xC], 0x1B, 0, 0);
  if ( !v118[0xC] )
    v118[0xC] = (NiD3DPassVtbl *)sub_772DF0();
  sub_772CD0(v118[0xC], 0xF, 0, 0);
  if ( !v118[0xC] )
    v118[0xC] = (NiD3DPassVtbl *)sub_772DF0();
  sub_772CD0(v118[0xC], 7, 0, 0);
  if ( !v118[0xC] )
    v118[0xC] = (NiD3DPassVtbl *)sub_772DF0();
  sub_772CD0(v118[0xC], 0xE, 0, 0);
  if ( !v118[0xC] )
    v118[0xC] = (NiD3DPassVtbl *)sub_772DF0();
  sub_772CD0(v118[0xC], 0x34, 0, 0);
  dword_B46A44 = 2;
  dword_B46B1C = 0;
  sub_76C890((NiD3DPass **)&v145, &dword_B47490);
  v119 = v145;
  sub_7AECB0((NiD3DPass *)v145, (NiD3DVertexShader *)dword_B472E8);
  sub_7AEC60(v119, (NiD3DPixelShader *)dword_B46F58);
  if ( !v119[0xC] )
    v119[0xC] = (NiD3DPassVtbl *)sub_772DF0();
  sub_772CD0(v119[0xC], 0x1B, 0, 0);
  if ( !v119[0xC] )
    v119[0xC] = (NiD3DPassVtbl *)sub_772DF0();
  sub_772CD0(v119[0xC], 0xF, 0, 0);
  if ( !v119[0xC] )
    v119[0xC] = (NiD3DPassVtbl *)sub_772DF0();
  sub_772CD0(v119[0xC], 7, 0, 0);
  if ( !v119[0xC] )
    v119[0xC] = (NiD3DPassVtbl *)sub_772DF0();
  sub_772CD0(v119[0xC], 0xE, 0, 0);
  if ( !v119[0xC] )
    v119[0xC] = (NiD3DPassVtbl *)sub_772DF0();
  sub_772CD0(v119[0xC], 0x34, 0, 0);
  dword_B46A48 = 0xC;
  dword_B46B20 = 0;
  sub_76C890((NiD3DPass **)&v145, &dword_B474A0);
  v120 = (NiD3DPass *)v145;
  if ( (unsigned int)v145[6] < 2 )
  {
    v121 = sub_772630(&v147);
    LOBYTE(v148) = 0x13;
    sub_75FAE0((NiD3DTextureStage **)&a3, v121);
    v122 = v147;
    LOBYTE(v148) = 1;
    if ( v147 )
    {
      --v147[7].Unk08;
      if ( !v122[7].Unk08 )
        sub_772560(v122);
    }
    v123 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v120, v120->CurrentStage, v123);
    v124 = sub_772630(&v147);
    LOBYTE(v148) = 0x14;
    sub_75FAE0((NiD3DTextureStage **)&a3, v124);
    v125 = v147;
    LOBYTE(v148) = 1;
    if ( v147 )
    {
      --v147[7].Unk08;
      if ( !v125[7].Unk08 )
        sub_772560(v125);
    }
    v126 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v120, v120->CurrentStage, v126);
  }
  sub_7AECB0(v120, (NiD3DVertexShader *)dword_B472F8);
  sub_7AEC60(&v120->__vftable, (NiD3DPixelShader *)dword_B46F64);
  if ( !v120->RenderStateGroup )
    v120->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v120->RenderStateGroup, 0x1B, 1, 0);
  if ( !v120->RenderStateGroup )
    v120->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v120->RenderStateGroup, 0x13, 5, 0);
  if ( !v120->RenderStateGroup )
    v120->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v120->RenderStateGroup, 0x14, 6, 0);
  if ( !v120->RenderStateGroup )
    v120->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v120->RenderStateGroup, 0xF, 0, 0);
  if ( !v120->RenderStateGroup )
    v120->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v120->RenderStateGroup, 7, 1, 0);
  if ( !v120->RenderStateGroup )
    v120->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v120->RenderStateGroup, 0x17, 3, 0);
  if ( !v120->RenderStateGroup )
    v120->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v120->RenderStateGroup, 0xE, 0, 0);
  if ( !v120->RenderStateGroup )
    v120->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v120->RenderStateGroup, 0x34, 0, 0);
  dword_B46A58 = 0;
  dword_B46B30 = 0;
  sub_76C890((NiD3DPass **)&v145, &dword_B474A4);
  v127 = (NiD3DPass *)v145;
  if ( (unsigned int)v145[6] < 2 )
  {
    v128 = sub_772630(&v147);
    LOBYTE(v148) = 0x15;
    sub_75FAE0((NiD3DTextureStage **)&a3, v128);
    v129 = v147;
    LOBYTE(v148) = 1;
    if ( v147 )
    {
      --v147[7].Unk08;
      if ( !v129[7].Unk08 )
        sub_772560(v129);
    }
    v130 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v127, v127->CurrentStage, v130);
    v131 = sub_772630(&v147);
    LOBYTE(v148) = 0x16;
    sub_75FAE0((NiD3DTextureStage **)&a3, v131);
    v132 = v147;
    LOBYTE(v148) = 1;
    if ( v147 )
    {
      --v147[7].Unk08;
      if ( !v132[7].Unk08 )
        sub_772560(v132);
    }
    v133 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v127, v127->CurrentStage, v133);
  }
  sub_7AECB0(v127, (NiD3DVertexShader *)dword_B472FC);
  sub_7AEC60(&v127->__vftable, (NiD3DPixelShader *)dword_B46F68);
  if ( !v127->RenderStateGroup )
    v127->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v127->RenderStateGroup, 0x1B, 1, 0);
  if ( !v127->RenderStateGroup )
    v127->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v127->RenderStateGroup, 0x13, 5, 0);
  if ( !v127->RenderStateGroup )
    v127->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v127->RenderStateGroup, 0x14, 6, 0);
  if ( !v127->RenderStateGroup )
    v127->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v127->RenderStateGroup, 0xF, 0, 0);
  if ( !v127->RenderStateGroup )
    v127->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v127->RenderStateGroup, 7, 1, 0);
  if ( !v127->RenderStateGroup )
    v127->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v127->RenderStateGroup, 0x17, 3, 0);
  if ( !v127->RenderStateGroup )
    v127->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v127->RenderStateGroup, 0xE, 0, 0);
  if ( !v127->RenderStateGroup )
    v127->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v127->RenderStateGroup, 0x34, 0, 0);
  dword_B46A5C = 0;
  dword_B46B34 = 0;
  sub_76C890((NiD3DPass **)&v145, &dword_B47478);
  v134 = (NiD3DPass *)v145;
  if ( !v145[6] )
  {
    v135 = sub_772630(&v147);
    LOBYTE(v148) = 0x17;
    sub_75FAE0((NiD3DTextureStage **)&a3, v135);
    v136 = v147;
    LOBYTE(v148) = 1;
    if ( v147 )
    {
      --v147[7].Unk08;
      if ( !v136[7].Unk08 )
        sub_772560(v136);
    }
    v137 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v134, v134->CurrentStage, v137);
  }
  sub_7AECB0(v134, (NiD3DVertexShader *)dword_B472D0);
  sub_7AEC60(&v134->__vftable, (NiD3DPixelShader *)dword_B46F40);
  if ( !v134->RenderStateGroup )
    v134->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v134->RenderStateGroup, 0x1B, 0, 0);
  if ( !v134->RenderStateGroup )
    v134->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v134->RenderStateGroup, 7, 1, 0);
  if ( !v134->RenderStateGroup )
    v134->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v134->RenderStateGroup, 0x17, 4, 0);
  if ( !v134->RenderStateGroup )
    v134->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v134->RenderStateGroup, 0xE, 1, 0);
  if ( !v134->RenderStateGroup )
    v134->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v134->RenderStateGroup, 0x34, 0, 0);
  dword_B46A30 = 0x12;
  dword_B46B08 = 0x400;
  sub_76C890((NiD3DPass **)&v145, &dword_B4747C);
  v138 = (NiD3DPass *)v145;
  if ( !v145[6] )
  {
    v139 = sub_772630(&v147);
    LOBYTE(v148) = 0x18;
    sub_75FAE0((NiD3DTextureStage **)&a3, v139);
    v140 = v147;
    LOBYTE(v148) = 1;
    if ( v147 )
    {
      --v147[7].Unk08;
      if ( !v140[7].Unk08 )
        sub_772560(v140);
    }
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v138, v138->CurrentStage, a3);
  }
  sub_7AECB0(v138, (NiD3DVertexShader *)dword_B472D4);
  sub_7AEC60(&v138->__vftable, (NiD3DPixelShader *)dword_B46F40);
  if ( !v138->RenderStateGroup )
    v138->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v138->RenderStateGroup, 0x1B, 0, 0);
  if ( !v138->RenderStateGroup )
    v138->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v138->RenderStateGroup, 7, 1, 0);
  if ( !v138->RenderStateGroup )
    v138->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v138->RenderStateGroup, 0x17, 4, 0);
  if ( !v138->RenderStateGroup )
    v138->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v138->RenderStateGroup, 0xE, 1, 0);
  if ( !v138->RenderStateGroup )
    v138->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v138->RenderStateGroup, 0x34, 0, 0);
  dword_B46A34 = 0x2C;
  dword_B46B0C = 0x400;
  sub_76C890((NiD3DPass **)&v145, &dword_B47494);
  v141 = v145;
  sub_7AECB0((NiD3DPass *)v145, (NiD3DVertexShader *)dword_B472EC);
  sub_7AEC60(v141, (NiD3DPixelShader *)dword_B46F5C);
  if ( !v141[0xC] )
    v141[0xC] = (NiD3DPassVtbl *)sub_772DF0();
  sub_772CD0(v141[0xC], 0x1B, 0, 0);
  if ( !v141[0xC] )
    v141[0xC] = (NiD3DPassVtbl *)sub_772DF0();
  sub_772CD0(v141[0xC], 0xF, 0, 0);
  if ( !v141[0xC] )
    v141[0xC] = (NiD3DPassVtbl *)sub_772DF0();
  sub_772CD0(v141[0xC], 7, 1, 0);
  if ( !v141[0xC] )
    v141[0xC] = (NiD3DPassVtbl *)sub_772DF0();
  sub_772CD0(v141[0xC], 0x17, 4, 0);
  if ( !v141[0xC] )
    v141[0xC] = (NiD3DPassVtbl *)sub_772DF0();
  sub_772CD0(v141[0xC], 0xE, 1, 0);
  if ( !v141[0xC] )
    v141[0xC] = (NiD3DPassVtbl *)sub_772DF0();
  sub_772CD0(v141[0xC], 0x34, 0, 0);
  dword_B46A4C = 0x12;
  dword_B46B24 = 0;
  sub_76C890((NiD3DPass **)&v145, &dword_B47498);
  v142 = v145;
  sub_7AECB0((NiD3DPass *)v145, (NiD3DVertexShader *)dword_B472F0);
  sub_7AEC60(v142, (NiD3DPixelShader *)dword_B46F5C);
  if ( !v142[0xC] )
    v142[0xC] = (NiD3DPassVtbl *)sub_772DF0();
  sub_772CD0(v142[0xC], 0x1B, 0, 0);
  if ( !v142[0xC] )
    v142[0xC] = (NiD3DPassVtbl *)sub_772DF0();
  sub_772CD0(v142[0xC], 0xF, 0, 0);
  if ( !v142[0xC] )
    v142[0xC] = (NiD3DPassVtbl *)sub_772DF0();
  sub_772CD0(v142[0xC], 7, 1, 0);
  if ( !v142[0xC] )
    v142[0xC] = (NiD3DPassVtbl *)sub_772DF0();
  sub_772CD0(v142[0xC], 0x17, 4, 0);
  if ( !v142[0xC] )
    v142[0xC] = (NiD3DPassVtbl *)sub_772DF0();
  sub_772CD0(v142[0xC], 0xE, 1, 0);
  if ( !v142[0xC] )
    v142[0xC] = (NiD3DPassVtbl *)sub_772DF0();
  sub_772CD0(v142[0xC], 0x34, 0, 0);
  dword_B46A50 = 0x2C;
  dword_B46B28 = 0;
  sub_76C890((NiD3DPass **)&v145, &dword_B4749C);
  v143 = (NiD3DPass *)v145;
  sub_7AECB0((NiD3DPass *)v145, (NiD3DVertexShader *)dword_B472F4);
  sub_7AEC60(&v143->__vftable, (NiD3DPixelShader *)dword_B46F60);
  if ( !v143->RenderStateGroup )
    v143->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v143->RenderStateGroup, 0x1B, 0, 0);
  if ( !v143->RenderStateGroup )
    v143->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v143->RenderStateGroup, 0xF, 0, 0);
  if ( !v143->RenderStateGroup )
    v143->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v143->RenderStateGroup, 7, 1, 0);
  if ( !v143->RenderStateGroup )
    v143->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v143->RenderStateGroup, 0x17, 8, 0);
  if ( !v143->RenderStateGroup )
    v143->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v143->RenderStateGroup, 0xE, 1, 0);
  if ( !v143->RenderStateGroup )
    v143->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v143->RenderStateGroup, 0x34, 0, 0);
  v144 = (NiD3DTextureStage *)a3;
  v2 = a3 == 0;
  dword_B46A54 = 2;
  dword_B46B2C = 0;
  LOBYTE(v148) = 0;
  if ( !v2 )
  {
    v2 = v144[7].Unk08-- == 1;
    if ( v2 )
      sub_772560(v144);
  }
  v2 = v143->RefCount-- == 1;
  v148 = 0xFFFFFFFF;
  if ( v2 )
    sub_7604D0(v143);
}
