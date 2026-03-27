void sub_81B120()
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
  NiD3DTextureStage **v10; // ebx
  NiD3DTextureStage *v11; // eax
  NiD3DVertexShader *v12; // ebp
  int v13; // ebx
  NiD3DPixelShader *v14; // ebp
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
  NiD3DTextureStage *v40; // [esp+20h] [ebp-10h] BYREF
  unsigned int v41; // [esp+2Ch] [ebp-4h]

  v0 = 0;
  v1 = 0;
  v41 = 0;
  v2 = dword_B45928;
  v3 = dword_B45928 == 0;
  LOBYTE(v41) = 1;
  if ( !v3 )
  {
    v0 = (NiD3DPass *)v2;
    if ( v2 )
      ++*(_DWORD *)(v2 + 0x60);
  }
  if ( !v0->StageCount )
  {
    v4 = (NiD3DTextureStage *)*sub_772630(&v40);
    if ( v4 )
    {
      v1 = v4;
      ++v4[7].Unk08;
    }
    v5 = v40;
    LOBYTE(v41) = 1;
    if ( v40 )
    {
      --v40[7].Unk08;
      if ( !v5[7].Unk08 )
        sub_772560(v5);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  VertexShader = v0->VertexShader;
  v7 = dword_B452A0;
  if ( VertexShader != (NiD3DVertexShader *)dword_B452A0 )
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
  v9 = dword_B45090;
  if ( PixelShader != (NiD3DPixelShader *)dword_B45090 )
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
  v3 = v0 == (NiD3DPass *)dword_B45930;
  dword_B43EA8 = 0x82;
  dword_B44538 = 8;
  dword_B44BC8 = 8;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45930;
    if ( dword_B45930 )
      ++v0->RefCount;
  }
  if ( !v0->StageCount )
  {
    v10 = (NiD3DTextureStage **)sub_772630(&v40);
    v3 = v1 == *v10;
    LOBYTE(v41) = 3;
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
    v11 = v40;
    LOBYTE(v41) = 1;
    if ( v40 )
    {
      --v40[7].Unk08;
      if ( !v11[7].Unk08 )
        sub_772560(v11);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v12 = v0->VertexShader;
  v13 = dword_B4531C;
  if ( v12 != (NiD3DVertexShader *)dword_B4531C )
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
  v15 = dword_B45090;
  if ( v14 != (NiD3DPixelShader *)dword_B45090 )
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
  v3 = v0 == (NiD3DPass *)dword_B4592C;
  dword_B43EB0 = 0x40808;
  dword_B44540 = 8;
  dword_B44BD0 = 8;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B4592C;
    if ( dword_B4592C )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 4 )
  {
    v16 = (NiD3DTextureStage **)sub_772630(&v40);
    v3 = v1 == *v16;
    LOBYTE(v41) = 4;
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
    v17 = v40;
    LOBYTE(v41) = 1;
    if ( v40 )
    {
      --v40[7].Unk08;
      if ( !v17[7].Unk08 )
        sub_772560(v17);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v18 = (NiD3DTextureStage **)sub_772630(&v40);
    v3 = v1 == *v18;
    LOBYTE(v41) = 5;
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
    v19 = v40;
    LOBYTE(v41) = 1;
    if ( v40 )
    {
      --v40[7].Unk08;
      if ( !v19[7].Unk08 )
        sub_772560(v19);
    }
    sub_801110((int)v1, 1, 3, 2);
    sub_76C910(v1, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v20 = (NiD3DTextureStage **)sub_772630(&v40);
    v3 = v1 == *v20;
    LOBYTE(v41) = 6;
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
    v21 = v40;
    LOBYTE(v41) = 1;
    if ( v40 )
    {
      --v40[7].Unk08;
      if ( !v21[7].Unk08 )
        sub_772560(v21);
    }
    sub_801110((int)v1, 2, 3, 2);
    sub_76C910(v1, (NiRenderedTexture *)dword_B430D4);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v22 = (NiD3DTextureStage **)sub_772630(&v40);
    v3 = v1 == *v22;
    LOBYTE(v41) = 7;
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
    v23 = v40;
    LOBYTE(v41) = 1;
    if ( v40 )
    {
      --v40[7].Unk08;
      if ( !v23[7].Unk08 )
        sub_772560(v23);
    }
    sub_801110((int)v1, 3, 1, 2);
    sub_76C910(v1, (NiRenderedTexture *)dword_B430EC);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v24 = v0->VertexShader;
  v25 = dword_B4529C;
  if ( v24 != (NiD3DVertexShader *)dword_B4529C )
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
  v27 = dword_B4508C;
  if ( v26 != (NiD3DPixelShader *)dword_B4508C )
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
  v3 = v0 == (NiD3DPass *)dword_B45934;
  dword_B43EAC = 0x802;
  dword_B4453C = 8;
  dword_B44BCC = 8;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45934;
    if ( dword_B45934 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 4 )
  {
    v28 = (NiD3DTextureStage **)sub_772630(&v40);
    v3 = v1 == *v28;
    LOBYTE(v41) = 8;
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
    v29 = v40;
    LOBYTE(v41) = 1;
    if ( v40 )
    {
      --v40[7].Unk08;
      if ( !v29[7].Unk08 )
        sub_772560(v29);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v30 = (NiD3DTextureStage **)sub_772630(&v40);
    v3 = v1 == *v30;
    LOBYTE(v41) = 9;
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
    v31 = v40;
    LOBYTE(v41) = 1;
    if ( v40 )
    {
      --v40[7].Unk08;
      if ( !v31[7].Unk08 )
        sub_772560(v31);
    }
    sub_801110((int)v1, 1, 3, 2);
    sub_76C910(v1, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v32 = (NiD3DTextureStage **)sub_772630(&v40);
    v3 = v1 == *v32;
    LOBYTE(v41) = 0xA;
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
    v33 = v40;
    LOBYTE(v41) = 1;
    if ( v40 )
    {
      --v40[7].Unk08;
      if ( !v33[7].Unk08 )
        sub_772560(v33);
    }
    sub_801110((int)v1, 2, 3, 2);
    sub_76C910(v1, (NiRenderedTexture *)dword_B430D4);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v34 = (NiD3DTextureStage **)sub_772630(&v40);
    v3 = v1 == *v34;
    LOBYTE(v41) = 0xB;
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
    v35 = v40;
    LOBYTE(v41) = 1;
    if ( v40 )
    {
      --v40[7].Unk08;
      if ( !v35[7].Unk08 )
        sub_772560(v35);
    }
    sub_801110((int)v1, 3, 1, 2);
    sub_76C910(v1, (NiRenderedTexture *)dword_B430EC);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v36 = v0->VertexShader;
  v37 = dword_B45318;
  if ( v36 != (NiD3DVertexShader *)dword_B45318 )
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
  v39 = dword_B4508C;
  if ( v38 != (NiD3DPixelShader *)dword_B4508C )
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
  dword_B43EB4 = 0x40808;
  dword_B44544 = 8;
  dword_B44BD4 = 8;
  LOBYTE(v41) = 0;
  if ( v1 )
  {
    v3 = v1[7].Unk08-- == 1;
    if ( v3 )
      sub_772560(v1);
  }
  v3 = v0->RefCount-- == 1;
  v41 = 0xFFFFFFFF;
  if ( v3 )
    sub_7604D0(v0);
}
