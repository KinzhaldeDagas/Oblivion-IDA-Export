void __thiscall sub_871C30(volatile LONG **this)
{
  NiD3DPass *v1; // edi
  NiD3DTextureStage *v2; // esi
  int v3; // eax
  bool v4; // zf
  NiD3DTextureStage *v5; // eax
  NiD3DTextureStage *v6; // eax
  NiD3DTextureStage **v7; // ebx
  NiD3DTextureStage *v8; // eax
  NiD3DTextureStage **v9; // ebx
  NiD3DTextureStage *v10; // eax
  NiD3DTextureStage **v11; // ebx
  NiD3DTextureStage *v12; // eax
  NiD3DTextureStage **v13; // ebx
  NiD3DTextureStage *v14; // eax
  NiD3DTextureStage **v15; // ebx
  NiD3DTextureStage *v16; // eax
  volatile LONG *v17; // ebx
  NiD3DVertexShader *VertexShader; // ebp
  volatile LONG *v19; // ebx
  NiD3DPixelShader *PixelShader; // ebp
  NiD3DTextureStage **v21; // ebp
  NiD3DTextureStage *v22; // eax
  NiD3DTextureStage **v23; // ebp
  NiD3DTextureStage *v24; // eax
  NiD3DTextureStage **v25; // ebp
  NiD3DTextureStage *v26; // eax
  NiD3DTextureStage **v27; // ebp
  NiD3DTextureStage *v28; // eax
  NiD3DTextureStage **v29; // ebp
  NiD3DTextureStage *v30; // eax
  NiD3DTextureStage **v31; // ebp
  NiD3DTextureStage *v32; // eax
  volatile LONG *v33; // ebx
  NiD3DVertexShader *v34; // ebp
  volatile LONG *v35; // ebx
  NiD3DPixelShader *v36; // ebp
  NiD3DTextureStage **v37; // ebp
  NiD3DTextureStage *v38; // eax
  NiD3DTextureStage **v39; // ebp
  NiD3DTextureStage *v40; // eax
  NiD3DTextureStage **v41; // ebp
  NiD3DTextureStage *v42; // eax
  NiD3DTextureStage **v43; // ebp
  NiD3DTextureStage *v44; // eax
  NiD3DTextureStage **v45; // ebp
  NiD3DTextureStage *v46; // eax
  NiD3DTextureStage **v47; // ebp
  NiD3DTextureStage *v48; // eax
  volatile LONG *v49; // ebx
  NiD3DVertexShader *v50; // ebp
  volatile LONG *v51; // ebx
  NiD3DPixelShader *v52; // ebp
  NiD3DTextureStage **v53; // ebp
  NiD3DTextureStage *v54; // eax
  NiD3DTextureStage **v55; // ebp
  NiD3DTextureStage *v56; // eax
  NiD3DTextureStage **v57; // ebp
  NiD3DTextureStage *v58; // eax
  NiD3DTextureStage **v59; // ebp
  NiD3DTextureStage *v60; // eax
  NiD3DTextureStage **v61; // ebp
  NiD3DTextureStage *v62; // eax
  NiD3DTextureStage **v63; // ebp
  NiD3DTextureStage *v64; // eax
  volatile LONG *v65; // ebx
  NiD3DVertexShader *v66; // ebp
  volatile LONG *v67; // ebx
  NiD3DPixelShader *v68; // ebp
  NiD3DTextureStage **v69; // ebp
  NiD3DTextureStage *v70; // eax
  NiD3DTextureStage **v71; // ebp
  NiD3DTextureStage *v72; // eax
  NiD3DTextureStage **v73; // ebp
  NiD3DTextureStage *v74; // eax
  NiD3DTextureStage **v75; // ebp
  NiD3DTextureStage *v76; // eax
  NiD3DTextureStage **v77; // ebp
  NiD3DTextureStage *v78; // eax
  NiD3DTextureStage **v79; // ebp
  NiD3DTextureStage *v80; // eax
  volatile LONG *v81; // ebx
  NiD3DVertexShader *v82; // ebp
  volatile LONG *v83; // ebx
  NiD3DPixelShader *v84; // ebp
  NiD3DTextureStage **v85; // ebp
  NiD3DTextureStage *v86; // eax
  NiD3DTextureStage **v87; // ebp
  NiD3DTextureStage *v88; // eax
  NiD3DTextureStage **v89; // ebp
  NiD3DTextureStage *v90; // eax
  NiD3DTextureStage **v91; // ebp
  NiD3DTextureStage *v92; // eax
  NiD3DTextureStage **v93; // ebp
  NiD3DTextureStage *v94; // eax
  NiD3DTextureStage **v95; // ebp
  NiD3DTextureStage *v96; // eax
  volatile LONG *v97; // ebx
  NiD3DVertexShader *v98; // ebp
  volatile LONG *v99; // ebx
  NiD3DPixelShader *v100; // ebp
  NiD3DTextureStage *v102; // [esp+34h] [ebp-10h] BYREF
  unsigned int v103; // [esp+40h] [ebp-4h]

  v1 = 0;
  v2 = 0;
  v103 = 0;
  v3 = dword_B476F8;
  v4 = dword_B476F8 == 0;
  LOBYTE(v103) = 1;
  if ( !v4 )
  {
    v1 = (NiD3DPass *)v3;
    if ( v3 )
      ++*(_DWORD *)(v3 + 0x60);
  }
  if ( v1->StageCount < 6 )
  {
    v5 = (NiD3DTextureStage *)*sub_772630(&v102);
    if ( v5 )
    {
      v2 = v5;
      ++v5[7].Unk08;
    }
    v6 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v6[7].Unk08 )
        sub_772560(v6);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v7 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v7;
    LOBYTE(v103) = 3;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v7;
      if ( *v7 )
        ++v2[7].Unk08;
    }
    v8 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v8[7].Unk08 )
        sub_772560(v8);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v9 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v9;
    LOBYTE(v103) = 4;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v9;
      if ( *v9 )
        ++v2[7].Unk08;
    }
    v10 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v10[7].Unk08 )
        sub_772560(v10);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v11 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v11;
    LOBYTE(v103) = 5;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v11;
      if ( *v11 )
        ++v2[7].Unk08;
    }
    v12 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v12[7].Unk08 )
        sub_772560(v12);
    }
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v2, 3, 3, 0);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v13 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v13;
    LOBYTE(v103) = 6;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v13;
      if ( *v13 )
        ++v2[7].Unk08;
    }
    v14 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v14[7].Unk08 )
        sub_772560(v14);
    }
    sub_801110((int)v2, 4, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v15 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v15;
    LOBYTE(v103) = 7;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v15;
      if ( *v15 )
        ++v2[7].Unk08;
    }
    v16 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v16[7].Unk08 )
        sub_772560(v16);
    }
    sub_801110((int)v2, 5, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
  }
  v17 = *(this + 0x45);
  VertexShader = v1->VertexShader;
  if ( VertexShader != (NiD3DVertexShader *)v17 )
  {
    if ( VertexShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v17;
    if ( v17 )
      InterlockedIncrement(v17 + 1);
  }
  v19 = *(this + 0x62);
  PixelShader = v1->PixelShader;
  if ( PixelShader != (NiD3DPixelShader *)v19 )
  {
    if ( PixelShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v19;
    if ( v19 )
      InterlockedIncrement(v19 + 1);
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
  v4 = v1 == (NiD3DPass *)dword_B476FC;
  dword_B43F7C = 0x20082;
  dword_B4460C = 0x108;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B476FC;
    if ( dword_B476FC )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 6 )
  {
    v21 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v21;
    LOBYTE(v103) = 8;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v21;
      if ( *v21 )
        ++v2[7].Unk08;
    }
    v22 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v22[7].Unk08 )
        sub_772560(v22);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v23 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v23;
    LOBYTE(v103) = 9;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v23;
      if ( *v23 )
        ++v2[7].Unk08;
    }
    v24 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v24[7].Unk08 )
        sub_772560(v24);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v25 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v25;
    LOBYTE(v103) = 0xA;
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
    v26 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v26[7].Unk08 )
        sub_772560(v26);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v27 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v27;
    LOBYTE(v103) = 0xB;
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
    v28 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v28[7].Unk08 )
        sub_772560(v28);
    }
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v2, 3, 3, 0);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v29 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v29;
    LOBYTE(v103) = 0xC;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v29;
      if ( *v29 )
        ++v2[7].Unk08;
    }
    v30 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v30[7].Unk08 )
        sub_772560(v30);
    }
    sub_801110((int)v2, 4, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v31 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v31;
    LOBYTE(v103) = 0xD;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v31;
      if ( *v31 )
        ++v2[7].Unk08;
    }
    v32 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v32[7].Unk08 )
        sub_772560(v32);
    }
    sub_801110((int)v2, 5, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
  }
  v33 = *(this + 0x46);
  v34 = v1->VertexShader;
  if ( v34 != (NiD3DVertexShader *)v33 )
  {
    if ( v34 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v34 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v34)(v34, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v33;
    if ( v33 )
      InterlockedIncrement(v33 + 1);
  }
  v35 = *(this + 0x62);
  v36 = v1->PixelShader;
  if ( v36 != (NiD3DPixelShader *)v35 )
  {
    if ( v36 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v36 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v36)(v36, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v35;
    if ( v35 )
      InterlockedIncrement(v35 + 1);
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
  v4 = v1 == (NiD3DPass *)dword_B47700;
  dword_B43F88 = 0x60088;
  dword_B44618 = 0x108;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47700;
    if ( dword_B47700 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 6 )
  {
    v37 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v37;
    LOBYTE(v103) = 0xE;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v37;
      if ( *v37 )
        ++v2[7].Unk08;
    }
    v38 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v38[7].Unk08 )
        sub_772560(v38);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v39 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v39;
    LOBYTE(v103) = 0xF;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v39;
      if ( *v39 )
        ++v2[7].Unk08;
    }
    v40 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v40[7].Unk08 )
        sub_772560(v40);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v41 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v41;
    LOBYTE(v103) = 0x10;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v41;
      if ( *v41 )
        ++v2[7].Unk08;
    }
    v42 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v42[7].Unk08 )
        sub_772560(v42);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v43 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v43;
    LOBYTE(v103) = 0x11;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v43;
      if ( *v43 )
        ++v2[7].Unk08;
    }
    v44 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v44[7].Unk08 )
        sub_772560(v44);
    }
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v2, 3, 3, 0);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v45 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v45;
    LOBYTE(v103) = 0x12;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v45;
      if ( *v45 )
        ++v2[7].Unk08;
    }
    v46 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v46[7].Unk08 )
        sub_772560(v46);
    }
    sub_801110((int)v2, 4, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v47 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v47;
    LOBYTE(v103) = 0x13;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v47;
      if ( *v47 )
        ++v2[7].Unk08;
    }
    v48 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v48[7].Unk08 )
        sub_772560(v48);
    }
    sub_801110((int)v2, 5, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
  }
  v49 = *(this + 0x47);
  v50 = v1->VertexShader;
  if ( v50 != (NiD3DVertexShader *)v49 )
  {
    if ( v50 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v50 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v50)(v50, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v49;
    if ( v49 )
      InterlockedIncrement(v49 + 1);
  }
  v51 = *(this + 0x63);
  v52 = v1->PixelShader;
  if ( v52 != (NiD3DPixelShader *)v51 )
  {
    if ( v52 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v52 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v52)(v52, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v51;
    if ( v51 )
      InterlockedIncrement(v51 + 1);
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
  v4 = v1 == (NiD3DPass *)dword_B47704;
  dword_B43F98 = 0x200F2;
  dword_B44628 = 0x108;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47704;
    if ( dword_B47704 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 6 )
  {
    v53 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v53;
    LOBYTE(v103) = 0x14;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v53;
      if ( *v53 )
        ++v2[7].Unk08;
    }
    v54 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v54[7].Unk08 )
        sub_772560(v54);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v55 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v55;
    LOBYTE(v103) = 0x15;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v55;
      if ( *v55 )
        ++v2[7].Unk08;
    }
    v56 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v56[7].Unk08 )
        sub_772560(v56);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v57 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v57;
    LOBYTE(v103) = 0x16;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v57;
      if ( *v57 )
        ++v2[7].Unk08;
    }
    v58 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v58[7].Unk08 )
        sub_772560(v58);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v59 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v59;
    LOBYTE(v103) = 0x17;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v59;
      if ( *v59 )
        ++v2[7].Unk08;
    }
    v60 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v60[7].Unk08 )
        sub_772560(v60);
    }
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v2, 3, 3, 0);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v61 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v61;
    LOBYTE(v103) = 0x18;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v61;
      if ( *v61 )
        ++v2[7].Unk08;
    }
    v62 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v62[7].Unk08 )
        sub_772560(v62);
    }
    sub_801110((int)v2, 4, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v63 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v63;
    LOBYTE(v103) = 0x19;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v63;
      if ( *v63 )
        ++v2[7].Unk08;
    }
    v64 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v64[7].Unk08 )
        sub_772560(v64);
    }
    sub_801110((int)v2, 5, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
  }
  v65 = *(this + 0x48);
  v66 = v1->VertexShader;
  if ( v66 != (NiD3DVertexShader *)v65 )
  {
    if ( v66 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v66 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v66)(v66, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v65;
    if ( v65 )
      InterlockedIncrement(v65 + 1);
  }
  v67 = *(this + 0x63);
  v68 = v1->PixelShader;
  if ( v68 != (NiD3DPixelShader *)v67 )
  {
    if ( v68 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v68 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v68)(v68, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v67;
    if ( v67 )
      InterlockedIncrement(v67 + 1);
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
  v4 = v1 == (NiD3DPass *)dword_B47708;
  dword_B43FA4 = 0x600F8;
  dword_B44634 = 0x108;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47708;
    if ( dword_B47708 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 6 )
  {
    v69 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v69;
    LOBYTE(v103) = 0x1A;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v69;
      if ( *v69 )
        ++v2[7].Unk08;
    }
    v70 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v70[7].Unk08 )
        sub_772560(v70);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v71 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v71;
    LOBYTE(v103) = 0x1B;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v71;
      if ( *v71 )
        ++v2[7].Unk08;
    }
    v72 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v72[7].Unk08 )
        sub_772560(v72);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v73 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v73;
    LOBYTE(v103) = 0x1C;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v73;
      if ( *v73 )
        ++v2[7].Unk08;
    }
    v74 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v74[7].Unk08 )
        sub_772560(v74);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v75 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v75;
    LOBYTE(v103) = 0x1D;
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
    v76 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v76[7].Unk08 )
        sub_772560(v76);
    }
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v2, 3, 3, 0);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v77 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v77;
    LOBYTE(v103) = 0x1E;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v77;
      if ( *v77 )
        ++v2[7].Unk08;
    }
    v78 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v78[7].Unk08 )
        sub_772560(v78);
    }
    sub_801110((int)v2, 4, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v79 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v79;
    LOBYTE(v103) = 0x1F;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v79;
      if ( *v79 )
        ++v2[7].Unk08;
    }
    v80 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v80[7].Unk08 )
        sub_772560(v80);
    }
    sub_801110((int)v2, 5, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
  }
  v81 = *(this + 0x49);
  v82 = v1->VertexShader;
  if ( v82 != (NiD3DVertexShader *)v81 )
  {
    if ( v82 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v82 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v82)(v82, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v81;
    if ( v81 )
      InterlockedIncrement(v81 + 1);
  }
  v83 = *(this + 0x64);
  v84 = v1->PixelShader;
  if ( v84 != (NiD3DPixelShader *)v83 )
  {
    if ( v84 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v84 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v84)(v84, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v83;
    if ( v83 )
      InterlockedIncrement(v83 + 1);
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
  v4 = v1 == (NiD3DPass *)dword_B4770C;
  dword_B43FB4 = 0x20802;
  dword_B44644 = 0x108;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B4770C;
    if ( dword_B4770C )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 6 )
  {
    v85 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v85;
    LOBYTE(v103) = 0x20;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v85;
      if ( *v85 )
        ++v2[7].Unk08;
    }
    v86 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v86[7].Unk08 )
        sub_772560(v86);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v87 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v87;
    LOBYTE(v103) = 0x21;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v87;
      if ( *v87 )
        ++v2[7].Unk08;
    }
    v88 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v88[7].Unk08 )
        sub_772560(v88);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v89 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v89;
    LOBYTE(v103) = 0x22;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v89;
      if ( *v89 )
        ++v2[7].Unk08;
    }
    v90 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v90[7].Unk08 )
        sub_772560(v90);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v91 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v91;
    LOBYTE(v103) = 0x23;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v91;
      if ( *v91 )
        ++v2[7].Unk08;
    }
    v92 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v92[7].Unk08 )
        sub_772560(v92);
    }
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v2, 3, 3, 0);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v93 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v93;
    LOBYTE(v103) = 0x24;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v93;
      if ( *v93 )
        ++v2[7].Unk08;
    }
    v94 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v94[7].Unk08 )
        sub_772560(v94);
    }
    sub_801110((int)v2, 4, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v95 = (NiD3DTextureStage **)sub_772630(&v102);
    v4 = v2 == *v95;
    LOBYTE(v103) = 0x25;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v95;
      if ( *v95 )
        ++v2[7].Unk08;
    }
    v96 = v102;
    LOBYTE(v103) = 1;
    if ( v102 )
    {
      --v102[7].Unk08;
      if ( !v96[7].Unk08 )
        sub_772560(v96);
    }
    sub_801110((int)v2, 5, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
  }
  v97 = *(this + 0x4A);
  v98 = v1->VertexShader;
  if ( v98 != (NiD3DVertexShader *)v97 )
  {
    if ( v98 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v98 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v98)(v98, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v97;
    if ( v97 )
      InterlockedIncrement(v97 + 1);
  }
  v99 = *(this + 0x64);
  v100 = v1->PixelShader;
  if ( v100 != (NiD3DPixelShader *)v99 )
  {
    if ( v100 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v100 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v100)(v100, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v99;
    if ( v99 )
      InterlockedIncrement(v99 + 1);
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
  dword_B43FC0 = 0x60808;
  dword_B44650 = 0x108;
  LOBYTE(v103) = 0;
  if ( v2 )
  {
    v4 = v2[7].Unk08-- == 1;
    if ( v4 )
      sub_772560(v2);
  }
  v4 = v1->RefCount-- == 1;
  v103 = 0xFFFFFFFF;
  if ( v4 )
    sub_7604D0(v1);
}
