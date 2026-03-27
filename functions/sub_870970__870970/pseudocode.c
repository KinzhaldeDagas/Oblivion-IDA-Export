void __thiscall sub_870970(volatile LONG **this)
{
  NiD3DPass *v1; // esi
  NiD3DTextureStage *v2; // edi
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
  volatile LONG *v13; // ebx
  NiD3DVertexShader *VertexShader; // ebp
  volatile LONG *v15; // ebx
  NiD3DPixelShader *PixelShader; // ebp
  NiD3DTextureStage **v17; // ebp
  NiD3DTextureStage *v18; // eax
  NiD3DTextureStage **v19; // ebp
  NiD3DTextureStage *v20; // eax
  NiD3DTextureStage **v21; // ebp
  NiD3DTextureStage *v22; // eax
  NiD3DTextureStage **v23; // ebp
  NiD3DTextureStage *v24; // eax
  volatile LONG *v25; // ebx
  NiD3DVertexShader *v26; // ebp
  volatile LONG *v27; // ebx
  NiD3DPixelShader *v28; // ebp
  NiD3DTextureStage **v29; // ebp
  NiD3DTextureStage *v30; // eax
  NiD3DTextureStage **v31; // ebp
  NiD3DTextureStage *v32; // eax
  NiD3DTextureStage **v33; // ebp
  NiD3DTextureStage *v34; // eax
  NiD3DTextureStage **v35; // ebp
  NiD3DTextureStage *v36; // eax
  volatile LONG *v37; // ebx
  NiD3DVertexShader *v38; // ebp
  volatile LONG *v39; // ebx
  NiD3DPixelShader *v40; // ebp
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
  NiD3DTextureStage *v54; // [esp+24h] [ebp-10h] BYREF
  unsigned int v55; // [esp+30h] [ebp-4h]

  v1 = 0;
  v2 = 0;
  v55 = 0;
  v3 = dword_B476E0;
  v4 = dword_B476E0 == 0;
  LOBYTE(v55) = 1;
  if ( !v4 )
  {
    v1 = (NiD3DPass *)v3;
    if ( v3 )
      ++*(_DWORD *)(v3 + 0x60);
  }
  if ( v1->StageCount < 4 )
  {
    v5 = (NiD3DTextureStage *)*sub_772630(&v54);
    if ( v5 )
    {
      v2 = v5;
      ++v5[7].Unk08;
    }
    v6 = v54;
    LOBYTE(v55) = 1;
    if ( v54 )
    {
      --v54[7].Unk08;
      if ( !v6[7].Unk08 )
        sub_772560(v6);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, 0, &v2->Stage);
    v7 = (NiD3DTextureStage **)sub_772630(&v54);
    v4 = v2 == *v7;
    LOBYTE(v55) = 3;
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
    v8 = v54;
    LOBYTE(v55) = 1;
    if ( v54 )
    {
      --v54[7].Unk08;
      if ( !v8[7].Unk08 )
        sub_772560(v8);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, 1u, &v2->Stage);
    v9 = (NiD3DTextureStage **)sub_772630(&v54);
    v4 = v2 == *v9;
    LOBYTE(v55) = 4;
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
    v10 = v54;
    LOBYTE(v55) = 1;
    if ( v54 )
    {
      --v54[7].Unk08;
      if ( !v10[7].Unk08 )
        sub_772560(v10);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, 2u, &v2->Stage);
    v11 = (NiD3DTextureStage **)sub_772630(&v54);
    v4 = v2 == *v11;
    LOBYTE(v55) = 5;
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
    v12 = v54;
    LOBYTE(v55) = 1;
    if ( v54 )
    {
      --v54[7].Unk08;
      if ( !v12[7].Unk08 )
        sub_772560(v12);
    }
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v2, 3, 3, 0);
    sub_760010(v1, 3u, &v2->Stage);
  }
  v13 = *(this + 0x3F);
  VertexShader = v1->VertexShader;
  if ( VertexShader != (NiD3DVertexShader *)v13 )
  {
    if ( VertexShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v13;
    if ( v13 )
      InterlockedIncrement(v13 + 1);
  }
  v15 = *(this + 0x5F);
  PixelShader = v1->PixelShader;
  if ( PixelShader != (NiD3DPixelShader *)v15 )
  {
    if ( PixelShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v15;
    if ( v15 )
      InterlockedIncrement(v15 + 1);
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
  v4 = v1 == (NiD3DPass *)dword_B476E4;
  dword_B43EC8 = 0x21802;
  dword_B44558 = 0x18;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B476E4;
    if ( dword_B476E4 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 4 )
  {
    v17 = (NiD3DTextureStage **)sub_772630(&v54);
    v4 = v2 == *v17;
    LOBYTE(v55) = 6;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v17;
      if ( *v17 )
        ++v2[7].Unk08;
    }
    v18 = v54;
    LOBYTE(v55) = 1;
    if ( v54 )
    {
      --v54[7].Unk08;
      if ( !v18[7].Unk08 )
        sub_772560(v18);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, 0, &v2->Stage);
    v19 = (NiD3DTextureStage **)sub_772630(&v54);
    v4 = v2 == *v19;
    LOBYTE(v55) = 7;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v19;
      if ( *v19 )
        ++v2[7].Unk08;
    }
    v20 = v54;
    LOBYTE(v55) = 1;
    if ( v54 )
    {
      --v54[7].Unk08;
      if ( !v20[7].Unk08 )
        sub_772560(v20);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, 1u, &v2->Stage);
    v21 = (NiD3DTextureStage **)sub_772630(&v54);
    v4 = v2 == *v21;
    LOBYTE(v55) = 8;
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
    v22 = v54;
    LOBYTE(v55) = 1;
    if ( v54 )
    {
      --v54[7].Unk08;
      if ( !v22[7].Unk08 )
        sub_772560(v22);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, 2u, &v2->Stage);
    v23 = (NiD3DTextureStage **)sub_772630(&v54);
    v4 = v2 == *v23;
    LOBYTE(v55) = 9;
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
    v24 = v54;
    LOBYTE(v55) = 1;
    if ( v54 )
    {
      --v54[7].Unk08;
      if ( !v24[7].Unk08 )
        sub_772560(v24);
    }
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v2, 3, 3, 0);
    sub_760010(v1, 3u, &v2->Stage);
  }
  v25 = *(this + 0x40);
  v26 = v1->VertexShader;
  if ( v26 != (NiD3DVertexShader *)v25 )
  {
    if ( v26 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v26 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v26)(v26, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v25;
    if ( v25 )
      InterlockedIncrement(v25 + 1);
  }
  v27 = *(this + 0x5F);
  v28 = v1->PixelShader;
  if ( v28 != (NiD3DPixelShader *)v27 )
  {
    if ( v28 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v28 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v28)(v28, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v27;
    if ( v27 )
      InterlockedIncrement(v27 + 1);
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
  v4 = v1 == (NiD3DPass *)dword_B476E8;
  dword_B43ED4 = 0x61808;
  dword_B44564 = 0x18;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B476E8;
    if ( dword_B476E8 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 4 )
  {
    v29 = (NiD3DTextureStage **)sub_772630(&v54);
    v4 = v2 == *v29;
    LOBYTE(v55) = 0xA;
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
    v30 = v54;
    LOBYTE(v55) = 1;
    if ( v54 )
    {
      --v54[7].Unk08;
      if ( !v30[7].Unk08 )
        sub_772560(v30);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, 0, &v2->Stage);
    v31 = (NiD3DTextureStage **)sub_772630(&v54);
    v4 = v2 == *v31;
    LOBYTE(v55) = 0xB;
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
    v32 = v54;
    LOBYTE(v55) = 1;
    if ( v54 )
    {
      --v54[7].Unk08;
      if ( !v32[7].Unk08 )
        sub_772560(v32);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, 1u, &v2->Stage);
    v33 = (NiD3DTextureStage **)sub_772630(&v54);
    v4 = v2 == *v33;
    LOBYTE(v55) = 0xC;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v33;
      if ( *v33 )
        ++v2[7].Unk08;
    }
    v34 = v54;
    LOBYTE(v55) = 1;
    if ( v54 )
    {
      --v54[7].Unk08;
      if ( !v34[7].Unk08 )
        sub_772560(v34);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, 2u, &v2->Stage);
    v35 = (NiD3DTextureStage **)sub_772630(&v54);
    v4 = v2 == *v35;
    LOBYTE(v55) = 0xD;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = *v35;
      if ( *v35 )
        ++v2[7].Unk08;
    }
    v36 = v54;
    LOBYTE(v55) = 1;
    if ( v54 )
    {
      --v54[7].Unk08;
      if ( !v36[7].Unk08 )
        sub_772560(v36);
    }
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v2, 3, 3, 0);
    sub_760010(v1, 3u, &v2->Stage);
  }
  v37 = *(this + 0x41);
  v38 = v1->VertexShader;
  if ( v38 != (NiD3DVertexShader *)v37 )
  {
    if ( v38 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v38 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v38)(v38, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v37;
    if ( v37 )
      InterlockedIncrement(v37 + 1);
  }
  v39 = *(this + 0x60);
  v40 = v1->PixelShader;
  if ( v40 != (NiD3DPixelShader *)v39 )
  {
    if ( v40 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v40 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v40)(v40, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v39;
    if ( v39 )
      InterlockedIncrement(v39 + 1);
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
  v4 = v1 == (NiD3DPass *)dword_B476EC;
  dword_B43F00 = 0x23802;
  dword_B44590 = 0x38;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B476EC;
    if ( dword_B476EC )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 4 )
  {
    v41 = (NiD3DTextureStage **)sub_772630(&v54);
    v4 = v2 == *v41;
    LOBYTE(v55) = 0xE;
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
    v42 = v54;
    LOBYTE(v55) = 1;
    if ( v54 )
    {
      --v54[7].Unk08;
      if ( !v42[7].Unk08 )
        sub_772560(v42);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, 0, &v2->Stage);
    v43 = (NiD3DTextureStage **)sub_772630(&v54);
    v4 = v2 == *v43;
    LOBYTE(v55) = 0xF;
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
    v44 = v54;
    LOBYTE(v55) = 1;
    if ( v54 )
    {
      --v54[7].Unk08;
      if ( !v44[7].Unk08 )
        sub_772560(v44);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, 1u, &v2->Stage);
    v45 = (NiD3DTextureStage **)sub_772630(&v54);
    v4 = v2 == *v45;
    LOBYTE(v55) = 0x10;
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
    v46 = v54;
    LOBYTE(v55) = 1;
    if ( v54 )
    {
      --v54[7].Unk08;
      if ( !v46[7].Unk08 )
        sub_772560(v46);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, 2u, &v2->Stage);
    v47 = (NiD3DTextureStage **)sub_772630(&v54);
    v4 = v2 == *v47;
    LOBYTE(v55) = 0x11;
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
    v48 = v54;
    LOBYTE(v55) = 1;
    if ( v54 )
    {
      --v54[7].Unk08;
      if ( !v48[7].Unk08 )
        sub_772560(v48);
    }
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v2, 3, 3, 0);
    sub_760010(v1, 3u, &v2->Stage);
  }
  v49 = *(this + 0x42);
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
  v51 = *(this + 0x60);
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
  dword_B43F0C = 0x63808;
  dword_B4459C = 0x38;
  LOBYTE(v55) = 0;
  if ( v2 )
  {
    v4 = v2[7].Unk08-- == 1;
    if ( v4 )
      sub_772560(v2);
  }
  v4 = v1->RefCount-- == 1;
  v55 = 0xFFFFFFFF;
  if ( v4 )
    sub_7604D0(v1);
}
