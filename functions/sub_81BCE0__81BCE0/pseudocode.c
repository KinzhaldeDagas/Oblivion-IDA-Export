void sub_81BCE0()
{
  NiD3DPass *v0; // esi
  NiD3DTextureStage *v1; // edi
  int v2; // eax
  bool v3; // zf
  NiD3DTextureStage *v4; // eax
  NiD3DTextureStage *v5; // eax
  NiD3DVertexShader *VertexShader; // ebp
  int v7; // ebx
  NiD3DPixelShader *PixelShader; // ebp
  int v9; // ebx
  NiD3DTextureStage **v10; // ebp
  NiD3DTextureStage *v11; // eax
  NiD3DTextureStage **v12; // ebp
  NiD3DTextureStage *v13; // eax
  NiD3DTextureStage **v14; // ebp
  NiD3DTextureStage *v15; // eax
  NiD3DVertexShader *v16; // ebp
  int v17; // ebx
  NiD3DPixelShader *v18; // ebp
  int v19; // ebx
  NiD3DTextureStage **v20; // ebp
  NiD3DTextureStage *v21; // eax
  NiD3DTextureStage **v22; // ebp
  NiD3DTextureStage *v23; // eax
  NiD3DVertexShader *v24; // ebp
  int v25; // ebx
  NiD3DPixelShader *v26; // ebp
  int v27; // ebx
  NiD3DTextureStage **v28; // ebx
  NiD3DTextureStage *v29; // eax
  NiD3DVertexShader *v30; // ebp
  int v31; // ebx
  NiD3DPixelShader *v32; // ebp
  int v33; // ebx
  NiD3DTextureStage **v34; // ebx
  NiD3DTextureStage *v35; // eax
  NiD3DVertexShader *v36; // ebp
  int v37; // ebx
  NiD3DPixelShader *v38; // ebp
  int v39; // ebx
  NiD3DTextureStage **v40; // ebx
  NiD3DTextureStage *v41; // eax
  NiD3DVertexShader *v42; // ebp
  int v43; // ebx
  NiD3DPixelShader *v44; // ebp
  int v45; // ebx
  NiD3DTextureStage **v46; // ebp
  NiD3DTextureStage *v47; // eax
  NiD3DTextureStage **v48; // ebp
  NiD3DTextureStage *v49; // eax
  NiD3DTextureStage **v50; // ebp
  NiD3DTextureStage *v51; // eax
  NiD3DVertexShader *v52; // ebp
  int v53; // ebx
  NiD3DPixelShader *v54; // ebp
  int v55; // ebx
  NiD3DTextureStage **v56; // ebp
  NiD3DTextureStage *v57; // eax
  NiD3DTextureStage **v58; // ebp
  NiD3DTextureStage *v59; // eax
  NiD3DVertexShader *v60; // ebp
  int v61; // ebx
  NiD3DPixelShader *v62; // ebp
  int v63; // ebx
  NiD3DTextureStage *v64; // [esp+40h] [ebp-10h] BYREF
  unsigned int v65; // [esp+4Ch] [ebp-4h]

  v0 = 0;
  v1 = 0;
  v65 = 0;
  v2 = dword_B459B0;
  v3 = dword_B459B0 == 0;
  LOBYTE(v65) = 1;
  if ( !v3 )
  {
    v0 = (NiD3DPass *)v2;
    if ( v2 )
      ++*(_DWORD *)(v2 + 0x60);
  }
  if ( !v0->StageCount )
  {
    v4 = (NiD3DTextureStage *)*sub_772630(&v64);
    if ( v4 )
    {
      v1 = v4;
      ++v4[7].Unk08;
    }
    v5 = v64;
    LOBYTE(v65) = 1;
    if ( v64 )
    {
      --v64[7].Unk08;
      if ( !v5[7].Unk08 )
        sub_772560(v5);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  VertexShader = v0->VertexShader;
  v7 = dword_B452A4;
  if ( VertexShader != (NiD3DVertexShader *)dword_B452A4 )
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
  v9 = dword_B45094;
  if ( PixelShader != (NiD3DPixelShader *)dword_B45094 )
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
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 9, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 3, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B459B4;
  dword_B43F30 = 2;
  dword_B445C0 = 0;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B459B4;
    if ( dword_B459B4 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 3 )
  {
    v10 = (NiD3DTextureStage **)sub_772630(&v64);
    v3 = v1 == *v10;
    LOBYTE(v65) = 3;
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
    v11 = v64;
    LOBYTE(v65) = 1;
    if ( v64 )
    {
      --v64[7].Unk08;
      if ( !v11[7].Unk08 )
        sub_772560(v11);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v12 = (NiD3DTextureStage **)sub_772630(&v64);
    v3 = v1 == *v12;
    LOBYTE(v65) = 4;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v12;
      if ( *v12 )
        ++v1[7].Unk08;
    }
    v13 = v64;
    LOBYTE(v65) = 1;
    if ( v64 )
    {
      --v64[7].Unk08;
      if ( !v13[7].Unk08 )
        sub_772560(v13);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v14 = (NiD3DTextureStage **)sub_772630(&v64);
    v3 = v1 == *v14;
    LOBYTE(v65) = 5;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v14;
      if ( *v14 )
        ++v1[7].Unk08;
    }
    v15 = v64;
    LOBYTE(v65) = 1;
    if ( v64 )
    {
      --v64[7].Unk08;
      if ( !v15[7].Unk08 )
        sub_772560(v15);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v16 = v0->VertexShader;
  v17 = dword_B452AC;
  if ( v16 != (NiD3DVertexShader *)dword_B452AC )
  {
    if ( v16 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v16 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v16)(v16, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v17;
    if ( v17 )
      InterlockedIncrement((volatile LONG *)(v17 + 4));
  }
  v18 = v0->PixelShader;
  v19 = dword_B4509C;
  if ( v18 != (NiD3DPixelShader *)dword_B4509C )
  {
    if ( v18 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v18 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v18)(v18, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v19;
    if ( v19 )
      InterlockedIncrement((volatile LONG *)(v19 + 4));
  }
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
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 3, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B459B8;
  dword_B43F34 = 2;
  dword_B445C4 = 0;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B459B8;
    if ( dword_B459B8 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v20 = (NiD3DTextureStage **)sub_772630(&v64);
    v3 = v1 == *v20;
    LOBYTE(v65) = 6;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v20;
      if ( *v20 )
        ++v1[7].Unk08;
    }
    v21 = v64;
    LOBYTE(v65) = 1;
    if ( v64 )
    {
      --v64[7].Unk08;
      if ( !v21[7].Unk08 )
        sub_772560(v21);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v22 = (NiD3DTextureStage **)sub_772630(&v64);
    v3 = v1 == *v22;
    LOBYTE(v65) = 7;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v22;
      if ( *v22 )
        ++v1[7].Unk08;
    }
    v23 = v64;
    LOBYTE(v65) = 1;
    if ( v64 )
    {
      --v64[7].Unk08;
      if ( !v23[7].Unk08 )
        sub_772560(v23);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v24 = v0->VertexShader;
  v25 = dword_B452A8;
  if ( v24 != (NiD3DVertexShader *)dword_B452A8 )
  {
    if ( v24 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v24 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v24)(v24, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v25;
    if ( v25 )
      InterlockedIncrement((volatile LONG *)(v25 + 4));
  }
  v26 = v0->PixelShader;
  v27 = dword_B450A0;
  if ( v26 != (NiD3DPixelShader *)dword_B450A0 )
  {
    if ( v26 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v26 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v26)(v26, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v27;
    if ( v27 )
      InterlockedIncrement((volatile LONG *)(v27 + 4));
  }
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
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 3, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B459BC;
  dword_B43F38 = 2;
  dword_B445C8 = 0x80;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B459BC;
    if ( dword_B459BC )
      ++v0->RefCount;
  }
  if ( !v0->StageCount )
  {
    v28 = (NiD3DTextureStage **)sub_772630(&v64);
    v3 = v1 == *v28;
    LOBYTE(v65) = 8;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v28;
      if ( *v28 )
        ++v1[7].Unk08;
    }
    v29 = v64;
    LOBYTE(v65) = 1;
    if ( v64 )
    {
      --v64[7].Unk08;
      if ( !v29[7].Unk08 )
        sub_772560(v29);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v30 = v0->VertexShader;
  v31 = dword_B45320;
  if ( v30 != (NiD3DVertexShader *)dword_B45320 )
  {
    if ( v30 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v30 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v30)(v30, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v31;
    if ( v31 )
      InterlockedIncrement((volatile LONG *)(v31 + 4));
  }
  v32 = v0->PixelShader;
  v33 = dword_B45094;
  if ( v32 != (NiD3DPixelShader *)dword_B45094 )
  {
    if ( v32 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v32 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v32)(v32, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v33;
    if ( v33 )
      InterlockedIncrement((volatile LONG *)(v33 + 4));
  }
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
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 3, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B459C0;
  dword_B43F3C = 0x40008;
  dword_B445CC = 0;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B459C0;
    if ( dword_B459C0 )
      ++v0->RefCount;
  }
  if ( !v0->StageCount )
  {
    v34 = (NiD3DTextureStage **)sub_772630(&v64);
    v3 = v1 == *v34;
    LOBYTE(v65) = 9;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v34;
      if ( *v34 )
        ++v1[7].Unk08;
    }
    v35 = v64;
    LOBYTE(v65) = 1;
    if ( v64 )
    {
      --v64[7].Unk08;
      if ( !v35[7].Unk08 )
        sub_772560(v35);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v36 = v0->VertexShader;
  v37 = dword_B452A8;
  if ( v36 != (NiD3DVertexShader *)dword_B452A8 )
  {
    if ( v36 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v36 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v36)(v36, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v37;
    if ( v37 )
      InterlockedIncrement((volatile LONG *)(v37 + 4));
  }
  v38 = v0->PixelShader;
  v39 = dword_B45098;
  if ( v38 != (NiD3DPixelShader *)dword_B45098 )
  {
    if ( v38 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v38 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v38)(v38, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v39;
    if ( v39 )
      InterlockedIncrement((volatile LONG *)(v39 + 4));
  }
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
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 3, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B459C4;
  dword_B43F40 = 2;
  dword_B445D0 = 0;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B459C4;
    if ( dword_B459C4 )
      ++v0->RefCount;
  }
  if ( !v0->StageCount )
  {
    v40 = (NiD3DTextureStage **)sub_772630(&v64);
    v3 = v1 == *v40;
    LOBYTE(v65) = 0xA;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v40;
      if ( *v40 )
        ++v1[7].Unk08;
    }
    v41 = v64;
    LOBYTE(v65) = 1;
    if ( v64 )
    {
      --v64[7].Unk08;
      if ( !v41[7].Unk08 )
        sub_772560(v41);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v42 = v0->VertexShader;
  v43 = dword_B45324;
  if ( v42 != (NiD3DVertexShader *)dword_B45324 )
  {
    if ( v42 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v42 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v42)(v42, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v43;
    if ( v43 )
      InterlockedIncrement((volatile LONG *)(v43 + 4));
  }
  v44 = v0->PixelShader;
  v45 = dword_B45098;
  if ( v44 != (NiD3DPixelShader *)dword_B45098 )
  {
    if ( v44 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v44 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v44)(v44, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v45;
    if ( v45 )
      InterlockedIncrement((volatile LONG *)(v45 + 4));
  }
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
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 3, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B459C8;
  dword_B43F44 = 0x40008;
  dword_B445D4 = 0;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B459C8;
    if ( dword_B459C8 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 3 )
  {
    v46 = (NiD3DTextureStage **)sub_772630(&v64);
    v3 = v1 == *v46;
    LOBYTE(v65) = 0xB;
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
    v47 = v64;
    LOBYTE(v65) = 1;
    if ( v64 )
    {
      --v64[7].Unk08;
      if ( !v47[7].Unk08 )
        sub_772560(v47);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v48 = (NiD3DTextureStage **)sub_772630(&v64);
    v3 = v1 == *v48;
    LOBYTE(v65) = 0xC;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v48;
      if ( *v48 )
        ++v1[7].Unk08;
    }
    v49 = v64;
    LOBYTE(v65) = 1;
    if ( v64 )
    {
      --v64[7].Unk08;
      if ( !v49[7].Unk08 )
        sub_772560(v49);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v50 = (NiD3DTextureStage **)sub_772630(&v64);
    v3 = v1 == *v50;
    LOBYTE(v65) = 0xD;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v50;
      if ( *v50 )
        ++v1[7].Unk08;
    }
    v51 = v64;
    LOBYTE(v65) = 1;
    if ( v64 )
    {
      --v64[7].Unk08;
      if ( !v51[7].Unk08 )
        sub_772560(v51);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v52 = v0->VertexShader;
  v53 = dword_B45328;
  if ( v52 != (NiD3DVertexShader *)dword_B45328 )
  {
    if ( v52 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v52 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v52)(v52, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v53;
    if ( v53 )
      InterlockedIncrement((volatile LONG *)(v53 + 4));
  }
  v54 = v0->PixelShader;
  v55 = dword_B4509C;
  if ( v54 != (NiD3DPixelShader *)dword_B4509C )
  {
    if ( v54 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v54 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v54)(v54, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v55;
    if ( v55 )
      InterlockedIncrement((volatile LONG *)(v55 + 4));
  }
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
  v3 = v0 == (NiD3DPass *)dword_B459D0;
  dword_B43F48 = 0x40008;
  dword_B445D8 = 0;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B459D0;
    if ( dword_B459D0 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v56 = (NiD3DTextureStage **)sub_772630(&v64);
    v3 = v1 == *v56;
    LOBYTE(v65) = 0xE;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v56;
      if ( *v56 )
        ++v1[7].Unk08;
    }
    v57 = v64;
    LOBYTE(v65) = 1;
    if ( v64 )
    {
      --v64[7].Unk08;
      if ( !v57[7].Unk08 )
        sub_772560(v57);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v58 = (NiD3DTextureStage **)sub_772630(&v64);
    v3 = v1 == *v58;
    LOBYTE(v65) = 0xF;
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
    v59 = v64;
    LOBYTE(v65) = 1;
    if ( v64 )
    {
      --v64[7].Unk08;
      if ( !v59[7].Unk08 )
        sub_772560(v59);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v60 = v0->VertexShader;
  v61 = dword_B45324;
  if ( v60 != (NiD3DVertexShader *)dword_B45324 )
  {
    if ( v60 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v60 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v60)(v60, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v61;
    if ( v61 )
      InterlockedIncrement((volatile LONG *)(v61 + 4));
  }
  v62 = v0->PixelShader;
  v63 = dword_B450A0;
  if ( v62 != (NiD3DPixelShader *)dword_B450A0 )
  {
    if ( v62 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v62 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v62)(v62, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v63;
    if ( v63 )
      InterlockedIncrement((volatile LONG *)(v63 + 4));
  }
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
  dword_B43F50 = 0x40008;
  dword_B445E0 = 0x80;
  LOBYTE(v65) = 0;
  if ( v1 )
  {
    v3 = v1[7].Unk08-- == 1;
    if ( v3 )
      sub_772560(v1);
  }
  v3 = v0->RefCount-- == 1;
  v65 = 0xFFFFFFFF;
  if ( v3 )
    sub_7604D0(v0);
}
