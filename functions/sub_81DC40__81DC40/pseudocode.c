void sub_81DC40()
{
  NiD3DPass *v0; // esi
  NiD3DTextureStage *v1; // edi
  int v2; // eax
  bool v3; // zf
  NiD3DTextureStage *v4; // eax
  NiD3DTextureStage *v5; // eax
  NiD3DTextureStage **v6; // ebp
  NiD3DTextureStage *v7; // eax
  NiD3DTextureStage **v8; // ebp
  NiD3DTextureStage *v9; // eax
  NiD3DTextureStage **v10; // ebp
  NiD3DTextureStage *v11; // eax
  NiD3DVertexShader *VertexShader; // ebp
  int v13; // ebx
  NiD3DPixelShader *PixelShader; // ebp
  int v15; // ebx
  NiD3DTextureStage **v16; // ebp
  NiD3DTextureStage *v17; // eax
  NiD3DTextureStage **v18; // ebp
  NiD3DTextureStage *v19; // eax
  NiD3DTextureStage **v20; // ebp
  NiD3DTextureStage *v21; // eax
  NiD3DTextureStage **v22; // ebp
  NiD3DTextureStage *v23; // eax
  NiD3DVertexShader *v24; // ebp
  int v25; // ebx
  NiD3DPixelShader *v26; // ebp
  int v27; // ebx
  NiD3DTextureStage **v28; // ebp
  NiD3DTextureStage *v29; // eax
  NiD3DTextureStage **v30; // ebp
  NiD3DTextureStage *v31; // eax
  NiD3DTextureStage **v32; // ebp
  NiD3DTextureStage *v33; // eax
  NiD3DTextureStage **v34; // ebp
  NiD3DTextureStage *v35; // eax
  NiD3DVertexShader *v36; // ebp
  int v37; // ebx
  NiD3DPixelShader *v38; // ebp
  int v39; // ebx
  NiD3DTextureStage **v40; // ebp
  NiD3DTextureStage *v41; // eax
  NiD3DTextureStage **v42; // ebp
  NiD3DTextureStage *v43; // eax
  NiD3DTextureStage **v44; // ebp
  NiD3DTextureStage *v45; // eax
  NiD3DTextureStage **v46; // ebp
  NiD3DTextureStage *v47; // eax
  NiD3DVertexShader *v48; // ebp
  int v49; // ebx
  NiD3DPixelShader *v50; // ebp
  int v51; // ebx
  NiD3DTextureStage *v52; // [esp+20h] [ebp-10h] BYREF
  unsigned int v53; // [esp+2Ch] [ebp-4h]

  v0 = 0;
  v1 = 0;
  v53 = 0;
  v2 = dword_B45BA0;
  v3 = dword_B45BA0 == 0;
  LOBYTE(v53) = 1;
  if ( !v3 )
  {
    v0 = (NiD3DPass *)v2;
    if ( v2 )
      ++*(_DWORD *)(v2 + 0x60);
  }
  if ( v0->StageCount < 4 )
  {
    v4 = (NiD3DTextureStage *)*sub_772630(&v52);
    if ( v4 )
    {
      v1 = v4;
      ++v4[7].Unk08;
    }
    v5 = v52;
    LOBYTE(v53) = 1;
    if ( v52 )
    {
      --v52[7].Unk08;
      if ( !v5[7].Unk08 )
        sub_772560(v5);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v6 = (NiD3DTextureStage **)sub_772630(&v52);
    v3 = v1 == *v6;
    LOBYTE(v53) = 3;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v6;
      if ( *v6 )
        ++v1[7].Unk08;
    }
    v7 = v52;
    LOBYTE(v53) = 1;
    if ( v52 )
    {
      --v52[7].Unk08;
      if ( !v7[7].Unk08 )
        sub_772560(v7);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v8 = (NiD3DTextureStage **)sub_772630(&v52);
    v3 = v1 == *v8;
    LOBYTE(v53) = 4;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v8;
      if ( *v8 )
        ++v1[7].Unk08;
    }
    v9 = v52;
    LOBYTE(v53) = 1;
    if ( v52 )
    {
      --v52[7].Unk08;
      if ( !v9[7].Unk08 )
        sub_772560(v9);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v10 = (NiD3DTextureStage **)sub_772630(&v52);
    v3 = v1 == *v10;
    LOBYTE(v53) = 5;
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
    v11 = v52;
    LOBYTE(v53) = 1;
    if ( v52 )
    {
      --v52[7].Unk08;
      if ( !v11[7].Unk08 )
        sub_772560(v11);
    }
    sub_801110((int)v1, 3, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  VertexShader = v0->VertexShader;
  v13 = dword_B452DC;
  if ( VertexShader != (NiD3DVertexShader *)dword_B452DC )
  {
    if ( VertexShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v13;
    if ( v13 )
      InterlockedIncrement((volatile LONG *)(v13 + 4));
  }
  PixelShader = v0->PixelShader;
  v15 = dword_B45108;
  if ( PixelShader != (NiD3DPixelShader *)dword_B45108 )
  {
    if ( PixelShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v15;
    if ( v15 )
      InterlockedIncrement((volatile LONG *)(v15 + 4));
  }
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
  v3 = v0 == (NiD3DPass *)dword_B45BA4;
  dword_B44120 = 0x20006;
  dword_B447B0 = 4;
  dword_B44E40 = 4;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45BA4;
    if ( dword_B45BA4 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 4 )
  {
    v16 = (NiD3DTextureStage **)sub_772630(&v52);
    v3 = v1 == *v16;
    LOBYTE(v53) = 6;
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
    v17 = v52;
    LOBYTE(v53) = 1;
    if ( v52 )
    {
      --v52[7].Unk08;
      if ( !v17[7].Unk08 )
        sub_772560(v17);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v18 = (NiD3DTextureStage **)sub_772630(&v52);
    v3 = v1 == *v18;
    LOBYTE(v53) = 7;
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
    v19 = v52;
    LOBYTE(v53) = 1;
    if ( v52 )
    {
      --v52[7].Unk08;
      if ( !v19[7].Unk08 )
        sub_772560(v19);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v20 = (NiD3DTextureStage **)sub_772630(&v52);
    v3 = v1 == *v20;
    LOBYTE(v53) = 8;
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
    v21 = v52;
    LOBYTE(v53) = 1;
    if ( v52 )
    {
      --v52[7].Unk08;
      if ( !v21[7].Unk08 )
        sub_772560(v21);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v22 = (NiD3DTextureStage **)sub_772630(&v52);
    v3 = v1 == *v22;
    LOBYTE(v53) = 9;
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
    v23 = v52;
    LOBYTE(v53) = 1;
    if ( v52 )
    {
      --v52[7].Unk08;
      if ( !v23[7].Unk08 )
        sub_772560(v23);
    }
    sub_801110((int)v1, 3, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v24 = v0->VertexShader;
  v25 = dword_B452DC;
  if ( v24 != (NiD3DVertexShader *)dword_B452DC )
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
  v27 = dword_B4510C;
  if ( v26 != (NiD3DPixelShader *)dword_B4510C )
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
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
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
  v3 = v0 == (NiD3DPass *)dword_B45BA8;
  dword_B44124 = 0x20006;
  dword_B447B4 = 4;
  dword_B44E44 = 4;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45BA8;
    if ( dword_B45BA8 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 4 )
  {
    v28 = (NiD3DTextureStage **)sub_772630(&v52);
    v3 = v1 == *v28;
    LOBYTE(v53) = 0xA;
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
    v29 = v52;
    LOBYTE(v53) = 1;
    if ( v52 )
    {
      --v52[7].Unk08;
      if ( !v29[7].Unk08 )
        sub_772560(v29);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v30 = (NiD3DTextureStage **)sub_772630(&v52);
    v3 = v1 == *v30;
    LOBYTE(v53) = 0xB;
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
    v31 = v52;
    LOBYTE(v53) = 1;
    if ( v52 )
    {
      --v52[7].Unk08;
      if ( !v31[7].Unk08 )
        sub_772560(v31);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v32 = (NiD3DTextureStage **)sub_772630(&v52);
    v3 = v1 == *v32;
    LOBYTE(v53) = 0xC;
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
    v33 = v52;
    LOBYTE(v53) = 1;
    if ( v52 )
    {
      --v52[7].Unk08;
      if ( !v33[7].Unk08 )
        sub_772560(v33);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v34 = (NiD3DTextureStage **)sub_772630(&v52);
    v3 = v1 == *v34;
    LOBYTE(v53) = 0xD;
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
    v35 = v52;
    LOBYTE(v53) = 1;
    if ( v52 )
    {
      --v52[7].Unk08;
      if ( !v35[7].Unk08 )
        sub_772560(v35);
    }
    sub_801110((int)v1, 3, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v36 = v0->VertexShader;
  v37 = dword_B45350;
  if ( v36 != (NiD3DVertexShader *)dword_B45350 )
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
  v39 = dword_B45108;
  if ( v38 != (NiD3DPixelShader *)dword_B45108 )
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
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
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
  v3 = v0 == (NiD3DPass *)dword_B45BAC;
  dword_B44128 = 0x6000C;
  dword_B447B8 = 4;
  dword_B44E48 = 4;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45BAC;
    if ( dword_B45BAC )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 4 )
  {
    v40 = (NiD3DTextureStage **)sub_772630(&v52);
    v3 = v1 == *v40;
    LOBYTE(v53) = 0xE;
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
    v41 = v52;
    LOBYTE(v53) = 1;
    if ( v52 )
    {
      --v52[7].Unk08;
      if ( !v41[7].Unk08 )
        sub_772560(v41);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v42 = (NiD3DTextureStage **)sub_772630(&v52);
    v3 = v1 == *v42;
    LOBYTE(v53) = 0xF;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v42;
      if ( *v42 )
        ++v1[7].Unk08;
    }
    v43 = v52;
    LOBYTE(v53) = 1;
    if ( v52 )
    {
      --v52[7].Unk08;
      if ( !v43[7].Unk08 )
        sub_772560(v43);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v44 = (NiD3DTextureStage **)sub_772630(&v52);
    v3 = v1 == *v44;
    LOBYTE(v53) = 0x10;
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
    v45 = v52;
    LOBYTE(v53) = 1;
    if ( v52 )
    {
      --v52[7].Unk08;
      if ( !v45[7].Unk08 )
        sub_772560(v45);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v46 = (NiD3DTextureStage **)sub_772630(&v52);
    v3 = v1 == *v46;
    LOBYTE(v53) = 0x11;
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
    v47 = v52;
    LOBYTE(v53) = 1;
    if ( v52 )
    {
      --v52[7].Unk08;
      if ( !v47[7].Unk08 )
        sub_772560(v47);
    }
    sub_801110((int)v1, 3, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v48 = v0->VertexShader;
  v49 = dword_B45350;
  if ( v48 != (NiD3DVertexShader *)dword_B45350 )
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
  v51 = dword_B4510C;
  if ( v50 != (NiD3DPixelShader *)dword_B4510C )
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
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0);
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
  dword_B4412C = 0x6000C;
  dword_B447BC = 4;
  dword_B44E4C = 4;
  LOBYTE(v53) = 0;
  if ( v1 )
  {
    v3 = v1[7].Unk08-- == 1;
    if ( v3 )
      sub_772560(v1);
  }
  v3 = v0->RefCount-- == 1;
  v53 = 0xFFFFFFFF;
  if ( v3 )
    sub_7604D0(v0);
}
