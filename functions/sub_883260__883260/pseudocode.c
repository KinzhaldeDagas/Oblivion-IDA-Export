void __thiscall sub_883260(volatile LONG **this)
{
  NiD3DPass *v1; // esi
  NiD3DTextureStage *v2; // edi
  int v3; // eax
  bool v4; // zf
  NiD3DTextureStage *v5; // eax
  NiD3DTextureStage *v6; // eax
  volatile LONG *v7; // ebx
  NiD3DVertexShader *VertexShader; // ebp
  volatile LONG *v9; // ebx
  NiD3DPixelShader *PixelShader; // ebp
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  NiD3DTextureStage **v14; // ebp
  NiD3DTextureStage *v15; // eax
  NiD3DTextureStage **v16; // ebp
  NiD3DTextureStage *v17; // eax
  volatile LONG *v18; // ebx
  NiD3DVertexShader *v19; // ebp
  volatile LONG *v20; // ebx
  NiD3DPixelShader *v21; // ebp
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  NiD3DTextureStage **v25; // ebp
  NiD3DTextureStage *v26; // eax
  NiD3DTextureStage **v27; // ebp
  NiD3DTextureStage *v28; // eax
  volatile LONG *v29; // ebx
  NiD3DVertexShader *v30; // ebp
  volatile LONG *v31; // ebx
  NiD3DPixelShader *v32; // ebp
  int v33; // ecx
  int v34; // edx
  int v35; // eax
  NiD3DTextureStage **v36; // ebp
  NiD3DTextureStage *v37; // eax
  NiD3DTextureStage **v38; // ebp
  NiD3DTextureStage *v39; // eax
  NiD3DTextureStage **v40; // ebp
  NiD3DTextureStage *v41; // eax
  NiD3DTextureStage **v42; // ebp
  NiD3DTextureStage *v43; // eax
  volatile LONG *v44; // ebx
  NiD3DVertexShader *v45; // ebp
  volatile LONG *v46; // ebx
  NiD3DPixelShader *v47; // ebp
  int v48; // ecx
  int v49; // edx
  int v50; // eax
  NiD3DTextureStage **v51; // ebx
  NiD3DTextureStage *v52; // eax
  volatile LONG *v53; // ebx
  NiD3DVertexShader *v54; // ebp
  volatile LONG *v55; // ebx
  NiD3DPixelShader *v56; // ebp
  int v57; // ecx
  int v58; // edx
  int v59; // eax
  NiD3DTextureStage **v60; // ebp
  NiD3DTextureStage *v61; // eax
  NiD3DTextureStage **v62; // ebp
  NiD3DTextureStage *v63; // eax
  NiD3DTextureStage **v64; // ebp
  NiD3DTextureStage *v65; // eax
  NiD3DTextureStage **v66; // ebp
  NiD3DTextureStage *v67; // eax
  volatile LONG *v68; // ebx
  NiD3DVertexShader *v69; // ebp
  volatile LONG *v70; // ebx
  NiD3DPixelShader *v71; // ebp
  int v72; // ecx
  int v73; // edx
  int v74; // eax
  NiD3DTextureStage **v75; // ebx
  NiD3DTextureStage *v76; // eax
  volatile LONG *v77; // ebx
  NiD3DVertexShader *v78; // ebp
  volatile LONG *v79; // ebx
  NiD3DPixelShader *v80; // ebp
  int v81; // ecx
  int v82; // edx
  int v83; // eax
  NiD3DTextureStage **v84; // ebp
  NiD3DTextureStage *v85; // eax
  NiD3DTextureStage **v86; // ebp
  NiD3DTextureStage *v87; // eax
  NiD3DTextureStage **v88; // ebp
  NiD3DTextureStage *v89; // eax
  NiD3DTextureStage **v90; // ebp
  NiD3DTextureStage *v91; // eax
  volatile LONG *v92; // ebx
  NiD3DVertexShader *v93; // ebp
  volatile LONG *v94; // ebx
  NiD3DPixelShader *v95; // ebp
  int v96; // ecx
  int v97; // edx
  int v98; // eax
  NiD3DTextureStage **v99; // ebx
  NiD3DTextureStage *v100; // eax
  volatile LONG *v101; // ebx
  NiD3DVertexShader *v102; // ebp
  volatile LONG *v103; // ebx
  NiD3DPixelShader *v104; // ebp
  int v105; // ecx
  int v106; // edx
  int v107; // eax
  NiD3DTextureStage **v108; // ebx
  NiD3DTextureStage *v109; // eax
  volatile LONG *v110; // ebx
  NiD3DVertexShader *v111; // ebp
  volatile LONG *v112; // ebx
  NiD3DPixelShader *v113; // ebp
  int v114; // ecx
  int v115; // edx
  int v116; // eax
  NiD3DTextureStage *v118; // [esp+54h] [ebp-10h] BYREF
  unsigned int v119; // [esp+60h] [ebp-4h]

  v1 = 0;
  v2 = 0;
  v119 = 0;
  v3 = dword_B47790[0];
  v4 = dword_B47790[0] == 0;
  LOBYTE(v119) = 1;
  if ( !v4 )
  {
    v1 = (NiD3DPass *)v3;
    if ( v3 )
      ++*(_DWORD *)(v3 + 0x60);
  }
  if ( !v1->StageCount )
  {
    v5 = (NiD3DTextureStage *)*sub_772630(&v118);
    if ( v5 )
    {
      v2 = v5;
      ++v5[7].Unk08;
    }
    v6 = v118;
    LOBYTE(v119) = 1;
    if ( v118 )
    {
      --v118[7].Unk08;
      if ( !v6[7].Unk08 )
        sub_772560(v6);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
  }
  v7 = *(this + 0x27);
  VertexShader = v1->VertexShader;
  if ( VertexShader != (NiD3DVertexShader *)v7 )
  {
    if ( VertexShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v7;
    if ( v7 )
      InterlockedIncrement(v7 + 1);
  }
  v9 = *(this + 0x43);
  PixelShader = v1->PixelShader;
  if ( PixelShader != (NiD3DPixelShader *)v9 )
  {
    if ( PixelShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v9;
    if ( v9 )
      InterlockedIncrement(v9 + 1);
  }
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v11 = dword_B441F0;
  v12 = dword_B434D0;
  dword_B43B80 = dword_B43B60;
  v13 = dword_B44880;
  v4 = v1 == (NiD3DPass *)dword_B47794;
  dword_B44210 = v11;
  dword_B434F0 = v12;
  dword_B448A0 = v13;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47794;
    if ( dword_B47794 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 2 )
  {
    v14 = (NiD3DTextureStage **)sub_772630(&v118);
    v4 = v2 == *v14;
    LOBYTE(v119) = 3;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v14;
      if ( *v14 )
        ++v2[7].Unk08;
    }
    v15 = v118;
    LOBYTE(v119) = 1;
    if ( v118 )
    {
      --v118[7].Unk08;
      if ( !v15[7].Unk08 )
        sub_772560(v15);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v16 = (NiD3DTextureStage **)sub_772630(&v118);
    v4 = v2 == *v16;
    LOBYTE(v119) = 4;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v16;
      if ( *v16 )
        ++v2[7].Unk08;
    }
    v17 = v118;
    LOBYTE(v119) = 1;
    if ( v118 )
    {
      --v118[7].Unk08;
      if ( !v17[7].Unk08 )
        sub_772560(v17);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
  }
  v18 = *(this + 0x28);
  v19 = v1->VertexShader;
  if ( v19 != (NiD3DVertexShader *)v18 )
  {
    if ( v19 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v19 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v19)(v19, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v18;
    if ( v18 )
      InterlockedIncrement(v18 + 1);
  }
  v20 = *(this + 0x44);
  v21 = v1->PixelShader;
  if ( v21 != (NiD3DPixelShader *)v20 )
  {
    if ( v21 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v21 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v21)(v21, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v20;
    if ( v20 )
      InterlockedIncrement(v20 + 1);
  }
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v22 = dword_B44214;
  v23 = dword_B434F4;
  dword_B43BDC = dword_B43B84;
  v24 = dword_B448A4;
  v4 = v1 == (NiD3DPass *)dword_B47798;
  dword_B4426C = v22;
  dword_B4354C = v23;
  dword_B448FC = v24;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47798;
    if ( dword_B47798 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 2 )
  {
    v25 = (NiD3DTextureStage **)sub_772630(&v118);
    v4 = v2 == *v25;
    LOBYTE(v119) = 5;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v25;
      if ( *v25 )
        ++v2[7].Unk08;
    }
    v26 = v118;
    LOBYTE(v119) = 1;
    if ( v118 )
    {
      --v118[7].Unk08;
      if ( !v26[7].Unk08 )
        sub_772560(v26);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v27 = (NiD3DTextureStage **)sub_772630(&v118);
    v4 = v2 == *v27;
    LOBYTE(v119) = 6;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v27;
      if ( *v27 )
        ++v2[7].Unk08;
    }
    v28 = v118;
    LOBYTE(v119) = 1;
    if ( v118 )
    {
      --v118[7].Unk08;
      if ( !v28[7].Unk08 )
        sub_772560(v28);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
  }
  v29 = *(this + 0x29);
  v30 = v1->VertexShader;
  if ( v30 != (NiD3DVertexShader *)v29 )
  {
    if ( v30 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v30 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v30)(v30, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v29;
    if ( v29 )
      InterlockedIncrement(v29 + 1);
  }
  v31 = *(this + 0x45);
  v32 = v1->PixelShader;
  if ( v32 != (NiD3DPixelShader *)v31 )
  {
    if ( v32 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v32 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v32)(v32, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v31;
    if ( v31 )
      InterlockedIncrement(v31 + 1);
  }
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v33 = dword_B44280;
  v34 = dword_B43560;
  dword_B43BE0 = dword_B43BF0;
  v35 = dword_B44910;
  v4 = v1 == (NiD3DPass *)dword_B4779C;
  dword_B44270 = v33;
  dword_B43550 = v34;
  dword_B44900 = v35;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B4779C;
    if ( dword_B4779C )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 4 )
  {
    v36 = (NiD3DTextureStage **)sub_772630(&v118);
    v4 = v2 == *v36;
    LOBYTE(v119) = 7;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v36;
      if ( *v36 )
        ++v2[7].Unk08;
    }
    v37 = v118;
    LOBYTE(v119) = 1;
    if ( v118 )
    {
      --v118[7].Unk08;
      if ( !v37[7].Unk08 )
        sub_772560(v37);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v38 = (NiD3DTextureStage **)sub_772630(&v118);
    v4 = v2 == *v38;
    LOBYTE(v119) = 8;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v38;
      if ( *v38 )
        ++v2[7].Unk08;
    }
    v39 = v118;
    LOBYTE(v119) = 1;
    if ( v118 )
    {
      --v118[7].Unk08;
      if ( !v39[7].Unk08 )
        sub_772560(v39);
    }
    sub_801110((int)v2, 1, 3, 2);
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v40 = (NiD3DTextureStage **)sub_772630(&v118);
    v4 = v2 == *v40;
    LOBYTE(v119) = 9;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v40;
      if ( *v40 )
        ++v2[7].Unk08;
    }
    v41 = v118;
    LOBYTE(v119) = 1;
    if ( v118 )
    {
      --v118[7].Unk08;
      if ( !v41[7].Unk08 )
        sub_772560(v41);
    }
    sub_801110((int)v2, 2, 3, 2);
    sub_76C910(v2, (NiRenderedTexture *)dword_B430D4);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v42 = (NiD3DTextureStage **)sub_772630(&v118);
    v4 = v2 == *v42;
    LOBYTE(v119) = 0xA;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v42;
      if ( *v42 )
        ++v2[7].Unk08;
    }
    v43 = v118;
    LOBYTE(v119) = 1;
    if ( v118 )
    {
      --v118[7].Unk08;
      if ( !v43[7].Unk08 )
        sub_772560(v43);
    }
    sub_801110((int)v2, 3, 1, 2);
    sub_76C910(v2, (NiRenderedTexture *)dword_B430EC);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
  }
  v44 = *(this + 0x2A);
  v45 = v1->VertexShader;
  if ( v45 != (NiD3DVertexShader *)v44 )
  {
    if ( v45 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v45 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v45)(v45, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v44;
    if ( v44 )
      InterlockedIncrement(v44 + 1);
  }
  v46 = *(this + 0x46);
  v47 = v1->PixelShader;
  if ( v47 != (NiD3DPixelShader *)v46 )
  {
    if ( v47 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v47 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v47)(v47, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v46;
    if ( v46 )
      InterlockedIncrement(v46 + 1);
  }
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v4 = v1 == (NiD3DPass *)dword_B477A0;
  v48 = dword_B44274;
  v49 = dword_B43554;
  dword_B43BEC = dword_B43BE4;
  v50 = dword_B44904;
  dword_B4427C = v48;
  dword_B4355C = v49;
  dword_B4490C = v50;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B477A0;
    if ( dword_B477A0 )
      ++v1->RefCount;
  }
  if ( !v1->StageCount )
  {
    v51 = (NiD3DTextureStage **)sub_772630(&v118);
    v4 = v2 == *v51;
    LOBYTE(v119) = 0xB;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v51;
      if ( *v51 )
        ++v2[7].Unk08;
    }
    v52 = v118;
    LOBYTE(v119) = 1;
    if ( v118 )
    {
      --v118[7].Unk08;
      if ( !v52[7].Unk08 )
        sub_772560(v52);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
  }
  v53 = *(this + 0x2B);
  v54 = v1->VertexShader;
  if ( v54 != (NiD3DVertexShader *)v53 )
  {
    if ( v54 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v54 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v54)(v54, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v53;
    if ( v53 )
      InterlockedIncrement(v53 + 1);
  }
  v55 = *(this + 0x47);
  v56 = v1->PixelShader;
  if ( v56 != (NiD3DPixelShader *)v55 )
  {
    if ( v56 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v56 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v56)(v56, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v55;
    if ( v55 )
      InterlockedIncrement(v55 + 1);
  }
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x13, 2, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x14, 2, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 3, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v57 = dword_B44538;
  v58 = dword_B43818;
  dword_B43EB8 = dword_B43EA8;
  v59 = dword_B44BC8;
  v4 = v1 == (NiD3DPass *)dword_B477A4;
  dword_B44548 = v57;
  dword_B43828 = v58;
  dword_B44BD8 = v59;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B477A4;
    if ( dword_B477A4 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 4 )
  {
    v60 = (NiD3DTextureStage **)sub_772630(&v118);
    v4 = v2 == *v60;
    LOBYTE(v119) = 0xC;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v60;
      if ( *v60 )
        ++v2[7].Unk08;
    }
    v61 = v118;
    LOBYTE(v119) = 1;
    if ( v118 )
    {
      --v118[7].Unk08;
      if ( !v61[7].Unk08 )
        sub_772560(v61);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v62 = (NiD3DTextureStage **)sub_772630(&v118);
    v4 = v2 == *v62;
    LOBYTE(v119) = 0xD;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v62;
      if ( *v62 )
        ++v2[7].Unk08;
    }
    v63 = v118;
    LOBYTE(v119) = 1;
    if ( v118 )
    {
      --v118[7].Unk08;
      if ( !v63[7].Unk08 )
        sub_772560(v63);
    }
    sub_801110((int)v2, 1, 3, 2);
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v64 = (NiD3DTextureStage **)sub_772630(&v118);
    v4 = v2 == *v64;
    LOBYTE(v119) = 0xE;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v64;
      if ( *v64 )
        ++v2[7].Unk08;
    }
    v65 = v118;
    LOBYTE(v119) = 1;
    if ( v118 )
    {
      --v118[7].Unk08;
      if ( !v65[7].Unk08 )
        sub_772560(v65);
    }
    sub_801110((int)v2, 2, 3, 2);
    sub_76C910(v2, (NiRenderedTexture *)dword_B430D4);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v66 = (NiD3DTextureStage **)sub_772630(&v118);
    v4 = v2 == *v66;
    LOBYTE(v119) = 0xF;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v66;
      if ( *v66 )
        ++v2[7].Unk08;
    }
    v67 = v118;
    LOBYTE(v119) = 1;
    if ( v118 )
    {
      --v118[7].Unk08;
      if ( !v67[7].Unk08 )
        sub_772560(v67);
    }
    sub_801110((int)v2, 3, 1, 2);
    sub_76C910(v2, (NiRenderedTexture *)dword_B430EC);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
  }
  v68 = *(this + 0x2C);
  v69 = v1->VertexShader;
  if ( v69 != (NiD3DVertexShader *)v68 )
  {
    if ( v69 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v69 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v69)(v69, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v68;
    if ( v68 )
      InterlockedIncrement(v68 + 1);
  }
  v70 = *(this + 0x48);
  v71 = v1->PixelShader;
  if ( v71 != (NiD3DPixelShader *)v70 )
  {
    if ( v71 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v71 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v71)(v71, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v70;
    if ( v70 )
      InterlockedIncrement(v70 + 1);
  }
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x13, 2, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x14, 2, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 3, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v4 = v1 == (NiD3DPass *)dword_B477AC;
  v72 = dword_B4453C;
  v73 = dword_B4381C;
  dword_B43EBC = dword_B43EAC;
  v74 = dword_B44BCC;
  dword_B4454C = v72;
  dword_B4382C = v73;
  dword_B44BDC = v74;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B477AC;
    if ( dword_B477AC )
      ++v1->RefCount;
  }
  if ( !v1->StageCount )
  {
    v75 = (NiD3DTextureStage **)sub_772630(&v118);
    v4 = v2 == *v75;
    LOBYTE(v119) = 0x10;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v75;
      if ( *v75 )
        ++v2[7].Unk08;
    }
    v76 = v118;
    LOBYTE(v119) = 1;
    if ( v118 )
    {
      --v118[7].Unk08;
      if ( !v76[7].Unk08 )
        sub_772560(v76);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
  }
  v77 = *(this + 0x2E);
  v78 = v1->VertexShader;
  if ( v78 != (NiD3DVertexShader *)v77 )
  {
    if ( v78 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v78 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v78)(v78, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v77;
    if ( v77 )
      InterlockedIncrement(v77 + 1);
  }
  v79 = *(this + 0x4A);
  v80 = v1->PixelShader;
  if ( v80 != (NiD3DPixelShader *)v79 )
  {
    if ( v80 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v80 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v80)(v80, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v79;
    if ( v79 )
      InterlockedIncrement(v79 + 1);
  }
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x13, 2, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x14, 2, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 3, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v81 = dword_B445EC;
  v82 = dword_B438CC;
  dword_B43F6C = dword_B43F5C;
  v83 = dword_B44C7C;
  v4 = v1 == (NiD3DPass *)dword_B477B0;
  dword_B445FC = v81;
  dword_B438DC = v82;
  dword_B44C8C = v83;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B477B0;
    if ( dword_B477B0 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 4 )
  {
    v84 = (NiD3DTextureStage **)sub_772630(&v118);
    v4 = v2 == *v84;
    LOBYTE(v119) = 0x11;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v84;
      if ( *v84 )
        ++v2[7].Unk08;
    }
    v85 = v118;
    LOBYTE(v119) = 1;
    if ( v118 )
    {
      --v118[7].Unk08;
      if ( !v85[7].Unk08 )
        sub_772560(v85);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v86 = (NiD3DTextureStage **)sub_772630(&v118);
    v4 = v2 == *v86;
    LOBYTE(v119) = 0x12;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v86;
      if ( *v86 )
        ++v2[7].Unk08;
    }
    v87 = v118;
    LOBYTE(v119) = 1;
    if ( v118 )
    {
      --v118[7].Unk08;
      if ( !v87[7].Unk08 )
        sub_772560(v87);
    }
    sub_801110((int)v2, 1, 3, 2);
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v88 = (NiD3DTextureStage **)sub_772630(&v118);
    v4 = v2 == *v88;
    LOBYTE(v119) = 0x13;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v88;
      if ( *v88 )
        ++v2[7].Unk08;
    }
    v89 = v118;
    LOBYTE(v119) = 1;
    if ( v118 )
    {
      --v118[7].Unk08;
      if ( !v89[7].Unk08 )
        sub_772560(v89);
    }
    sub_801110((int)v2, 2, 3, 2);
    sub_76C910(v2, (NiRenderedTexture *)dword_B430D4);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v90 = (NiD3DTextureStage **)sub_772630(&v118);
    v4 = v2 == *v90;
    LOBYTE(v119) = 0x14;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v90;
      if ( *v90 )
        ++v2[7].Unk08;
    }
    v91 = v118;
    LOBYTE(v119) = 1;
    if ( v118 )
    {
      --v118[7].Unk08;
      if ( !v91[7].Unk08 )
        sub_772560(v91);
    }
    sub_801110((int)v2, 3, 1, 2);
    sub_76C910(v2, (NiRenderedTexture *)dword_B430EC);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
  }
  v92 = *(this + 0x2F);
  v93 = v1->VertexShader;
  if ( v93 != (NiD3DVertexShader *)v92 )
  {
    if ( v93 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v93 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v93)(v93, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v92;
    if ( v92 )
      InterlockedIncrement(v92 + 1);
  }
  v94 = *(this + 0x4B);
  v95 = v1->PixelShader;
  if ( v95 != (NiD3DPixelShader *)v94 )
  {
    if ( v95 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v95 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v95)(v95, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v94;
    if ( v94 )
      InterlockedIncrement(v94 + 1);
  }
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x13, 2, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x14, 2, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 3, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v4 = v1 == (NiD3DPass *)dword_B477A8;
  v96 = dword_B445F0;
  v97 = dword_B438D0;
  dword_B43F70 = dword_B43F60;
  v98 = dword_B44C80;
  dword_B44600 = v96;
  dword_B438E0 = v97;
  dword_B44C90 = v98;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B477A8;
    if ( dword_B477A8 )
      ++v1->RefCount;
  }
  if ( !v1->StageCount )
  {
    v99 = (NiD3DTextureStage **)sub_772630(&v118);
    v4 = v2 == *v99;
    LOBYTE(v119) = 0x15;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v99;
      if ( *v99 )
        ++v2[7].Unk08;
    }
    v100 = v118;
    LOBYTE(v119) = 1;
    if ( v118 )
    {
      --v118[7].Unk08;
      if ( !v100[7].Unk08 )
        sub_772560(v100);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
  }
  v101 = *(this + 0x2D);
  v102 = v1->VertexShader;
  if ( v102 != (NiD3DVertexShader *)v101 )
  {
    if ( v102 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v102 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v102)(v102, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v101;
    if ( v101 )
      InterlockedIncrement(v101 + 1);
  }
  v103 = *(this + 0x49);
  v104 = v1->PixelShader;
  if ( v104 != (NiD3DPixelShader *)v103 )
  {
    if ( v104 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v104 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v104)(v104, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v103;
    if ( v103 )
      InterlockedIncrement(v103 + 1);
  }
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x13, 9, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x14, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 3, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v4 = v1 == (NiD3DPass *)dword_B477B4;
  v105 = dword_B445C0;
  v106 = dword_B438A0;
  dword_B43F4C = dword_B43F30;
  v107 = dword_B44C50;
  dword_B445DC = v105;
  dword_B438BC = v106;
  dword_B44C6C = v107;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B477B4;
    if ( dword_B477B4 )
      ++v1->RefCount;
  }
  if ( !v1->StageCount )
  {
    v108 = (NiD3DTextureStage **)sub_772630(&v118);
    v4 = v2 == *v108;
    LOBYTE(v119) = 0x16;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v108;
      if ( *v108 )
        ++v2[7].Unk08;
    }
    v109 = v118;
    LOBYTE(v119) = 1;
    if ( v118 )
    {
      --v118[7].Unk08;
      if ( !v109[7].Unk08 )
        sub_772560(v109);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
  }
  v110 = *(this + 0x30);
  v111 = v1->VertexShader;
  if ( v111 != (NiD3DVertexShader *)v110 )
  {
    if ( v111 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v111 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v111)(v111, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v110;
    if ( v110 )
      InterlockedIncrement(v110 + 1);
  }
  v112 = *(this + 0x4C);
  v113 = v1->PixelShader;
  if ( v113 != (NiD3DPixelShader *)v112 )
  {
    if ( v113 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v113 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v113)(v113, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v112;
    if ( v112 )
      InterlockedIncrement(v112 + 1);
  }
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x13, 5, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x14, 6, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 3, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v114 = dword_B447F0;
  v115 = dword_B43AD0;
  dword_B44170 = dword_B44160;
  v116 = dword_B44E80;
  dword_B44800 = v114;
  dword_B43AE0 = v115;
  dword_B44E90 = v116;
  LOBYTE(v119) = 0;
  if ( v2 )
  {
    v4 = v2[7].Unk08-- == 1;
    if ( v4 )
      sub_772560(v2);
  }
  v4 = v1->RefCount-- == 1;
  v119 = 0xFFFFFFFF;
  if ( v4 )
    sub_7604D0(v1);
}
