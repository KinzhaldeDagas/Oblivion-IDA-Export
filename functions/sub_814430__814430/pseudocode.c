void sub_814430()
{
  NiD3DPass *v0; // esi
  NiD3DTextureStage *v1; // ebx
  int v2; // eax
  bool v3; // zf
  NiD3DTextureStage *v4; // eax
  NiD3DTextureStage *v5; // eax
  NiD3DVertexShader *VertexShader; // edi
  int v7; // ebp
  NiD3DPixelShader *PixelShader; // edi
  int v9; // ebp
  NiD3DTextureStage **v10; // edi
  NiD3DTextureStage *v11; // eax
  NiD3DVertexShader *v12; // edi
  int v13; // ebp
  NiD3DPixelShader *v14; // edi
  int v15; // ebp
  NiD3DTextureStage **v16; // edi
  NiD3DTextureStage *v17; // eax
  NiD3DTextureStage **v18; // edi
  NiD3DTextureStage *v19; // eax
  NiD3DVertexShader *v20; // edi
  int v21; // ebp
  NiD3DPixelShader *v22; // edi
  int v23; // ebp
  NiD3DTextureStage **v24; // edi
  NiD3DTextureStage *v25; // eax
  NiD3DVertexShader *v26; // edi
  int v27; // ebp
  NiD3DPixelShader *v28; // edi
  int v29; // ebp
  NiD3DTextureStage **v30; // edi
  NiD3DTextureStage *v31; // eax
  NiD3DTextureStage **v32; // edi
  NiD3DTextureStage *v33; // eax
  NiD3DVertexShader *v34; // edi
  int v35; // ebp
  NiD3DPixelShader *v36; // edi
  int v37; // ebp
  NiD3DTextureStage **v38; // edi
  NiD3DTextureStage *v39; // eax
  NiD3DVertexShader *v40; // edi
  int v41; // ebp
  NiD3DPixelShader *v42; // edi
  int v43; // ebp
  NiD3DTextureStage **v44; // edi
  NiD3DTextureStage *v45; // eax
  NiD3DTextureStage **v46; // edi
  NiD3DTextureStage *v47; // eax
  NiD3DVertexShader *v48; // edi
  int v49; // ebp
  NiD3DPixelShader *v50; // edi
  int v51; // ebp
  NiD3DTextureStage **v52; // edi
  NiD3DTextureStage *v53; // eax
  NiD3DVertexShader *v54; // edi
  int v55; // ebp
  NiD3DPixelShader *v56; // edi
  int v57; // ebp
  NiD3DTextureStage **v58; // edi
  NiD3DTextureStage *v59; // eax
  NiD3DTextureStage **v60; // edi
  NiD3DTextureStage *v61; // eax
  NiD3DVertexShader *v62; // edi
  int v63; // ebp
  NiD3DPixelShader *v64; // edi
  int v65; // ebp
  NiD3DTextureStage **v66; // edi
  NiD3DTextureStage *v67; // eax
  NiD3DVertexShader *v68; // edi
  int v69; // ebp
  NiD3DPixelShader *v70; // edi
  int v71; // ebp
  NiD3DTextureStage **v72; // edi
  NiD3DTextureStage *v73; // eax
  NiD3DVertexShader *v74; // edi
  int v75; // ebp
  NiD3DPixelShader *v76; // edi
  int v77; // ebp
  NiD3DVertexShader *v78; // edi
  int v79; // ebp
  NiD3DPixelShader *v80; // edi
  int v81; // ebp
  NiD3DVertexShader *v82; // edi
  int v83; // ebp
  NiD3DPixelShader *v84; // edi
  int v85; // ebp
  NiD3DTextureStage *v86; // [esp+64h] [ebp-10h] BYREF
  unsigned int v87; // [esp+70h] [ebp-4h]

  v0 = 0;
  v1 = 0;
  v87 = 0;
  v2 = dword_B455AC;
  v3 = dword_B455AC == 0;
  LOBYTE(v87) = 1;
  if ( !v3 )
  {
    v0 = (NiD3DPass *)v2;
    if ( v2 )
      ++*(_DWORD *)(v2 + 0x60);
  }
  if ( !v0->StageCount )
  {
    v4 = (NiD3DTextureStage *)*sub_772630(&v86);
    if ( v4 )
    {
      v1 = v4;
      ++v4[7].Unk08;
    }
    v5 = v86;
    LOBYTE(v87) = 1;
    if ( v86 )
    {
      --v86[7].Unk08;
      if ( !v5[7].Unk08 )
        sub_772560(v5);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  VertexShader = v0->VertexShader;
  v7 = dword_B45290[0];
  if ( VertexShader != (NiD3DVertexShader *)dword_B45290[0] )
  {
    if ( VertexShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v7;
    if ( v7 )
      InterlockedIncrement((volatile LONG *)(v7 + 4));
  }
  PixelShader = v0->PixelShader;
  v9 = dword_B45088[0];
  if ( PixelShader != (NiD3DPixelShader *)dword_B45088[0] )
  {
    if ( PixelShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v9;
    if ( v9 )
      InterlockedIncrement((volatile LONG *)(v9 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x16, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B455E0;
  dword_B43B2C = 0x4000A;
  dword_B441BC = 4;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B455E0;
    if ( dword_B455E0 )
      ++v0->RefCount;
  }
  if ( !v0->StageCount )
  {
    v10 = (NiD3DTextureStage **)sub_772630(&v86);
    v3 = v1 == *v10;
    LOBYTE(v87) = 3;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v10;
      if ( *v10 )
        ++v1[7].Unk08;
    }
    v11 = v86;
    LOBYTE(v87) = 1;
    if ( v86 )
    {
      --v86[7].Unk08;
      if ( !v11[7].Unk08 )
        sub_772560(v11);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v12 = v0->VertexShader;
  v13 = dword_B45290[0];
  if ( v12 != (NiD3DVertexShader *)dword_B45290[0] )
  {
    if ( v12 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v12 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v12)(v12, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v13;
    if ( v13 )
      InterlockedIncrement((volatile LONG *)(v13 + 4));
  }
  v14 = v0->PixelShader;
  v15 = dword_B45088[0];
  if ( v14 != (NiD3DPixelShader *)dword_B45088[0] )
  {
    if ( v14 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v14 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v14)(v14, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v15;
    if ( v15 )
      InterlockedIncrement((volatile LONG *)(v15 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
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
  v3 = v0 == (NiD3DPass *)dword_B455E4;
  dword_B43B60 = 2;
  dword_B441F0 = 4;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B455E4;
    if ( dword_B455E4 )
      ++v0->RefCount;
  }
  if ( !v0->StageCount )
  {
    v16 = (NiD3DTextureStage **)sub_772630(&v86);
    v3 = v1 == *v16;
    LOBYTE(v87) = 4;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v16;
      if ( *v16 )
        ++v1[7].Unk08;
    }
    v17 = v86;
    LOBYTE(v87) = 1;
    if ( v86 )
    {
      --v86[7].Unk08;
      if ( !v17[7].Unk08 )
        sub_772560(v17);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v18 = (NiD3DTextureStage **)sub_772630(&v86);
    v3 = v1 == *v18;
    LOBYTE(v87) = 5;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v18;
      if ( *v18 )
        ++v1[7].Unk08;
    }
    v19 = v86;
    LOBYTE(v87) = 1;
    if ( v86 )
    {
      --v86[7].Unk08;
      if ( !v19[7].Unk08 )
        sub_772560(v19);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v20 = v0->VertexShader;
  v21 = dword_B452F0;
  if ( v20 != (NiD3DVertexShader *)dword_B452F0 )
  {
    if ( v20 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v20 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v20)(v20, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v21;
    if ( v21 )
      InterlockedIncrement((volatile LONG *)(v21 + 4));
  }
  v22 = v0->PixelShader;
  v23 = dword_B45118;
  if ( v22 != (NiD3DPixelShader *)dword_B45118 )
  {
    if ( v22 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v22 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v22)(v22, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v23;
    if ( v23 )
      InterlockedIncrement((volatile LONG *)(v23 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
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
  v3 = v0 == (NiD3DPass *)dword_B455E8;
  dword_B43B64 = 2;
  dword_B441F4 = 0x84;
  dword_B44884 = 4;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B455E8;
    if ( dword_B455E8 )
      ++v0->RefCount;
  }
  if ( !v0->StageCount )
  {
    v24 = (NiD3DTextureStage **)sub_772630(&v86);
    v3 = v1 == *v24;
    LOBYTE(v87) = 6;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v24;
      if ( *v24 )
        ++v1[7].Unk08;
    }
    v25 = v86;
    LOBYTE(v87) = 1;
    if ( v86 )
    {
      --v86[7].Unk08;
      if ( !v25[7].Unk08 )
        sub_772560(v25);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v26 = v0->VertexShader;
  v27 = dword_B45290[0];
  if ( v26 != (NiD3DVertexShader *)dword_B45290[0] )
  {
    if ( v26 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v26 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v26)(v26, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v27;
    if ( v27 )
      InterlockedIncrement((volatile LONG *)(v27 + 4));
  }
  v28 = v0->PixelShader;
  v29 = dword_B45088[0];
  if ( v28 != (NiD3DPixelShader *)dword_B45088[0] )
  {
    if ( v28 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v28 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v28)(v28, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v29;
    if ( v29 )
      InterlockedIncrement((volatile LONG *)(v29 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0);
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
  v3 = v0 == (NiD3DPass *)dword_B455EC;
  dword_B43B68 = 2;
  dword_B441F8 = 4;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B455EC;
    if ( dword_B455EC )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v30 = (NiD3DTextureStage **)sub_772630(&v86);
    v3 = v1 == *v30;
    LOBYTE(v87) = 7;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v30;
      if ( *v30 )
        ++v1[7].Unk08;
    }
    v31 = v86;
    LOBYTE(v87) = 1;
    if ( v86 )
    {
      --v86[7].Unk08;
      if ( !v31[7].Unk08 )
        sub_772560(v31);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v32 = (NiD3DTextureStage **)sub_772630(&v86);
    v3 = v1 == *v32;
    LOBYTE(v87) = 8;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v32;
      if ( *v32 )
        ++v1[7].Unk08;
    }
    v33 = v86;
    LOBYTE(v87) = 1;
    if ( v86 )
    {
      --v86[7].Unk08;
      if ( !v33[7].Unk08 )
        sub_772560(v33);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v34 = v0->VertexShader;
  v35 = dword_B452F0;
  if ( v34 != (NiD3DVertexShader *)dword_B452F0 )
  {
    if ( v34 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v34 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v34)(v34, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v35;
    if ( v35 )
      InterlockedIncrement((volatile LONG *)(v35 + 4));
  }
  v36 = v0->PixelShader;
  v37 = dword_B45118;
  if ( v36 != (NiD3DPixelShader *)dword_B45118 )
  {
    if ( v36 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v36 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v36)(v36, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v37;
    if ( v37 )
      InterlockedIncrement((volatile LONG *)(v37 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0);
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
  v3 = v0 == (NiD3DPass *)dword_B455F0;
  dword_B43B6C = 2;
  dword_B441FC = 0x84;
  dword_B4488C = 4;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B455F0;
    if ( dword_B455F0 )
      ++v0->RefCount;
  }
  if ( !v0->StageCount )
  {
    v38 = (NiD3DTextureStage **)sub_772630(&v86);
    v3 = v1 == *v38;
    LOBYTE(v87) = 9;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v38;
      if ( *v38 )
        ++v1[7].Unk08;
    }
    v39 = v86;
    LOBYTE(v87) = 1;
    if ( v86 )
    {
      --v86[7].Unk08;
      if ( !v39[7].Unk08 )
        sub_772560(v39);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v40 = v0->VertexShader;
  v41 = dword_B4530C[0];
  if ( v40 != (NiD3DVertexShader *)dword_B4530C[0] )
  {
    if ( v40 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v40 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v40)(v40, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v41;
    if ( v41 )
      InterlockedIncrement((volatile LONG *)(v41 + 4));
  }
  v42 = v0->PixelShader;
  v43 = dword_B45088[0];
  if ( v42 != (NiD3DPixelShader *)dword_B45088[0] )
  {
    if ( v42 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v42 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v42)(v42, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v43;
    if ( v43 )
      InterlockedIncrement((volatile LONG *)(v43 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
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
  v3 = v0 == (NiD3DPass *)dword_B455F4;
  dword_B43B70 = 0x40008;
  dword_B44200 = 4;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B455F4;
    if ( dword_B455F4 )
      ++v0->RefCount;
  }
  if ( !v0->StageCount )
  {
    v44 = (NiD3DTextureStage **)sub_772630(&v86);
    v3 = v1 == *v44;
    LOBYTE(v87) = 0xA;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v44;
      if ( *v44 )
        ++v1[7].Unk08;
    }
    v45 = v86;
    LOBYTE(v87) = 1;
    if ( v86 )
    {
      --v86[7].Unk08;
      if ( !v45[7].Unk08 )
        sub_772560(v45);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v46 = (NiD3DTextureStage **)sub_772630(&v86);
    v3 = v1 == *v46;
    LOBYTE(v87) = 0xB;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v46;
      if ( *v46 )
        ++v1[7].Unk08;
    }
    v47 = v86;
    LOBYTE(v87) = 1;
    if ( v86 )
    {
      --v86[7].Unk08;
      if ( !v47[7].Unk08 )
        sub_772560(v47);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v48 = v0->VertexShader;
  v49 = dword_B4535C;
  if ( v48 != (NiD3DVertexShader *)dword_B4535C )
  {
    if ( v48 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v48 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v48)(v48, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v49;
    if ( v49 )
      InterlockedIncrement((volatile LONG *)(v49 + 4));
  }
  v50 = v0->PixelShader;
  v51 = dword_B45118;
  if ( v50 != (NiD3DPixelShader *)dword_B45118 )
  {
    if ( v50 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v50 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v50)(v50, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v51;
    if ( v51 )
      InterlockedIncrement((volatile LONG *)(v51 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
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
  v3 = v0 == (NiD3DPass *)dword_B455F8;
  dword_B43B74 = 0x40008;
  dword_B44204 = 0x84;
  dword_B44894 = 4;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B455F8;
    if ( dword_B455F8 )
      ++v0->RefCount;
  }
  if ( !v0->StageCount )
  {
    v52 = (NiD3DTextureStage **)sub_772630(&v86);
    v3 = v1 == *v52;
    LOBYTE(v87) = 0xC;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v52;
      if ( *v52 )
        ++v1[7].Unk08;
    }
    v53 = v86;
    LOBYTE(v87) = 1;
    if ( v86 )
    {
      --v86[7].Unk08;
      if ( !v53[7].Unk08 )
        sub_772560(v53);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v54 = v0->VertexShader;
  v55 = dword_B4530C[0];
  if ( v54 != (NiD3DVertexShader *)dword_B4530C[0] )
  {
    if ( v54 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v54 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v54)(v54, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v55;
    if ( v55 )
      InterlockedIncrement((volatile LONG *)(v55 + 4));
  }
  v56 = v0->PixelShader;
  v57 = dword_B45088[0];
  if ( v56 != (NiD3DPixelShader *)dword_B45088[0] )
  {
    if ( v56 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v56 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v56)(v56, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v57;
    if ( v57 )
      InterlockedIncrement((volatile LONG *)(v57 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0);
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
  v3 = v0 == (NiD3DPass *)dword_B455FC;
  dword_B43B78 = 0x40008;
  dword_B44208 = 4;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B455FC;
    if ( dword_B455FC )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v58 = (NiD3DTextureStage **)sub_772630(&v86);
    v3 = v1 == *v58;
    LOBYTE(v87) = 0xD;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v58;
      if ( *v58 )
        ++v1[7].Unk08;
    }
    v59 = v86;
    LOBYTE(v87) = 1;
    if ( v86 )
    {
      --v86[7].Unk08;
      if ( !v59[7].Unk08 )
        sub_772560(v59);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v60 = (NiD3DTextureStage **)sub_772630(&v86);
    v3 = v1 == *v60;
    LOBYTE(v87) = 0xE;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v60;
      if ( *v60 )
        ++v1[7].Unk08;
    }
    v61 = v86;
    LOBYTE(v87) = 1;
    if ( v86 )
    {
      --v86[7].Unk08;
      if ( !v61[7].Unk08 )
        sub_772560(v61);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v62 = v0->VertexShader;
  v63 = dword_B4535C;
  if ( v62 != (NiD3DVertexShader *)dword_B4535C )
  {
    if ( v62 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v62 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v62)(v62, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v63;
    if ( v63 )
      InterlockedIncrement((volatile LONG *)(v63 + 4));
  }
  v64 = v0->PixelShader;
  v65 = dword_B45118;
  if ( v64 != (NiD3DPixelShader *)dword_B45118 )
  {
    if ( v64 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v64 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v64)(v64, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v65;
    if ( v65 )
      InterlockedIncrement((volatile LONG *)(v65 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0);
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
  v3 = v0 == (NiD3DPass *)dword_B45C18;
  dword_B43B7C = 0x40008;
  dword_B4420C = 0x84;
  dword_B4489C = 4;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45C18;
    if ( dword_B45C18 )
      ++v0->RefCount;
  }
  if ( !v0->StageCount )
  {
    v66 = (NiD3DTextureStage **)sub_772630(&v86);
    v3 = v1 == *v66;
    LOBYTE(v87) = 0xF;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v66;
      if ( *v66 )
        ++v1[7].Unk08;
    }
    v67 = v86;
    LOBYTE(v87) = 1;
    if ( v86 )
    {
      --v86[7].Unk08;
      if ( !v67[7].Unk08 )
        sub_772560(v67);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v68 = v0->VertexShader;
  v69 = dword_B452F0;
  if ( v68 != (NiD3DVertexShader *)dword_B452F0 )
  {
    if ( v68 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v68 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v68)(v68, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v69;
    if ( v69 )
      InterlockedIncrement((volatile LONG *)(v69 + 4));
  }
  v70 = v0->PixelShader;
  v71 = dword_B4511C;
  if ( v70 != (NiD3DPixelShader *)dword_B4511C )
  {
    if ( v70 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v70 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v70)(v70, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v71;
    if ( v71 )
      InterlockedIncrement((volatile LONG *)(v71 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0);
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
  v3 = v0 == (NiD3DPass *)dword_B45C1C;
  dword_B44198 = 2;
  dword_B44828 = 0x84;
  dword_B44EB8 = 4;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45C1C;
    if ( dword_B45C1C )
      ++v0->RefCount;
  }
  if ( !v0->StageCount )
  {
    v72 = (NiD3DTextureStage **)sub_772630(&v86);
    v3 = v1 == *v72;
    LOBYTE(v87) = 0x10;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v72;
      if ( *v72 )
        ++v1[7].Unk08;
    }
    v73 = v86;
    LOBYTE(v87) = 1;
    if ( v86 )
    {
      --v86[7].Unk08;
      if ( !v73[7].Unk08 )
        sub_772560(v73);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v74 = v0->VertexShader;
  v75 = dword_B4535C;
  if ( v74 != (NiD3DVertexShader *)dword_B4535C )
  {
    if ( v74 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v74 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v74)(v74, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v75;
    if ( v75 )
      InterlockedIncrement((volatile LONG *)(v75 + 4));
  }
  v76 = v0->PixelShader;
  v77 = dword_B4511C;
  if ( v76 != (NiD3DPixelShader *)dword_B4511C )
  {
    if ( v76 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v76 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v76)(v76, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v77;
    if ( v77 )
      InterlockedIncrement((volatile LONG *)(v77 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0);
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
  v3 = v0 == (NiD3DPass *)dword_B455C8;
  dword_B4419C = 0x40008;
  dword_B4482C = 0x84;
  dword_B44EBC = 4;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B455C8;
    if ( dword_B455C8 )
      ++v0->RefCount;
  }
  v78 = v0->VertexShader;
  v79 = dword_B452F0;
  if ( v78 != (NiD3DVertexShader *)dword_B452F0 )
  {
    if ( v78 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v78 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v78)(v78, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v79;
    if ( v79 )
      InterlockedIncrement((volatile LONG *)(v79 + 4));
  }
  v80 = v0->PixelShader;
  v81 = dword_B45120;
  if ( v80 != (NiD3DPixelShader *)dword_B45120 )
  {
    if ( v80 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v80 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v80)(v80, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v81;
    if ( v81 )
      InterlockedIncrement((volatile LONG *)(v81 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0);
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
  v3 = v0 == (NiD3DPass *)dword_B455CC;
  dword_B43B48 = 2;
  dword_B441D8 = 0x84;
  dword_B44868 = 4;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B455CC;
    if ( dword_B455CC )
      ++v0->RefCount;
  }
  v82 = v0->VertexShader;
  v83 = dword_B4535C;
  if ( v82 != (NiD3DVertexShader *)dword_B4535C )
  {
    if ( v82 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v82 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v82)(v82, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v83;
    if ( v83 )
      InterlockedIncrement((volatile LONG *)(v83 + 4));
  }
  v84 = v0->PixelShader;
  v85 = dword_B45120;
  if ( v84 != (NiD3DPixelShader *)dword_B45120 )
  {
    if ( v84 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v84 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v84)(v84, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v85;
    if ( v85 )
      InterlockedIncrement((volatile LONG *)(v85 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0);
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
  dword_B43B4C = 0x40008;
  dword_B441DC = 0x84;
  dword_B4486C = 4;
  LOBYTE(v87) = 0;
  if ( v1 )
  {
    v3 = v1[7].Unk08-- == 1;
    if ( v3 )
      sub_772560(v1);
  }
  v3 = v0->RefCount-- == 1;
  v87 = 0xFFFFFFFF;
  if ( v3 )
    sub_7604D0(v0);
}
