void sub_81AA00()
{
  NiD3DPass *v0; // edi
  NiD3DTextureStage *v1; // esi
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
  NiD3DTextureStage *v28; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v29; // [esp+28h] [ebp-4h]

  v0 = 0;
  v1 = 0;
  v29 = 0;
  v2 = dword_B45664;
  v3 = dword_B45664 == 0;
  LOBYTE(v29) = 1;
  if ( !v3 )
  {
    v0 = (NiD3DPass *)v2;
    if ( v2 )
      ++*(_DWORD *)(v2 + 0x60);
  }
  if ( v0->StageCount < 4 )
  {
    v4 = (NiD3DTextureStage *)*sub_772630(&v28);
    if ( v4 )
    {
      v1 = v4;
      ++v4[7].Unk08;
    }
    v5 = v28;
    LOBYTE(v29) = 1;
    if ( v28 )
    {
      --v28[7].Unk08;
      if ( !v5[7].Unk08 )
        sub_772560(v5);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v6 = (NiD3DTextureStage **)sub_772630(&v28);
    v3 = v1 == *v6;
    LOBYTE(v29) = 3;
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
    v7 = v28;
    LOBYTE(v29) = 1;
    if ( v28 )
    {
      --v28[7].Unk08;
      if ( !v7[7].Unk08 )
        sub_772560(v7);
    }
    sub_801110((int)v1, 1, 3, 2);
    sub_76C910(v1, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v8 = (NiD3DTextureStage **)sub_772630(&v28);
    v3 = v1 == *v8;
    LOBYTE(v29) = 4;
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
    v9 = v28;
    LOBYTE(v29) = 1;
    if ( v28 )
    {
      --v28[7].Unk08;
      if ( !v9[7].Unk08 )
        sub_772560(v9);
    }
    sub_801110((int)v1, 2, 3, 2);
    sub_76C910(v1, (NiRenderedTexture *)dword_B430D4);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v10 = (NiD3DTextureStage **)sub_772630(&v28);
    v3 = v1 == *v10;
    LOBYTE(v29) = 5;
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
    v11 = v28;
    LOBYTE(v29) = 1;
    if ( v28 )
    {
      --v28[7].Unk08;
      if ( !v11[7].Unk08 )
        sub_772560(v11);
    }
    sub_801110((int)v1, 3, 1, 2);
    sub_76C910(v1, (NiRenderedTexture *)dword_B430EC);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  VertexShader = v0->VertexShader;
  v13 = dword_B452D0;
  if ( VertexShader != (NiD3DVertexShader *)dword_B452D0 )
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
  v15 = dword_B450FC;
  if ( PixelShader != (NiD3DPixelShader *)dword_B450FC )
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
  v3 = v0 == (NiD3DPass *)dword_B45668;
  dword_B43BE4 = 0x1082;
  dword_B44274 = 0x1C;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45668;
    if ( dword_B45668 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 4 )
  {
    v16 = (NiD3DTextureStage **)sub_772630(&v28);
    v3 = v1 == *v16;
    LOBYTE(v29) = 6;
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
    v17 = v28;
    LOBYTE(v29) = 1;
    if ( v28 )
    {
      --v28[7].Unk08;
      if ( !v17[7].Unk08 )
        sub_772560(v17);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v18 = (NiD3DTextureStage **)sub_772630(&v28);
    v3 = v1 == *v18;
    LOBYTE(v29) = 7;
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
    v19 = v28;
    LOBYTE(v29) = 1;
    if ( v28 )
    {
      --v28[7].Unk08;
      if ( !v19[7].Unk08 )
        sub_772560(v19);
    }
    sub_801110((int)v1, 1, 3, 2);
    sub_76C910(v1, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v20 = (NiD3DTextureStage **)sub_772630(&v28);
    v3 = v1 == *v20;
    LOBYTE(v29) = 8;
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
    v21 = v28;
    LOBYTE(v29) = 1;
    if ( v28 )
    {
      --v28[7].Unk08;
      if ( !v21[7].Unk08 )
        sub_772560(v21);
    }
    sub_801110((int)v1, 2, 3, 2);
    sub_76C910(v1, (NiRenderedTexture *)dword_B430D4);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v22 = (NiD3DTextureStage **)sub_772630(&v28);
    v3 = v1 == *v22;
    LOBYTE(v29) = 9;
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
    v23 = v28;
    LOBYTE(v29) = 1;
    if ( v28 )
    {
      --v28[7].Unk08;
      if ( !v23[7].Unk08 )
        sub_772560(v23);
    }
    sub_801110((int)v1, 3, 1, 2);
    sub_76C910(v1, (NiRenderedTexture *)dword_B430EC);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v24 = v0->VertexShader;
  v25 = dword_B4534C;
  if ( v24 != (NiD3DVertexShader *)dword_B4534C )
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
  v27 = dword_B450FC;
  if ( v26 != (NiD3DPixelShader *)dword_B450FC )
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
  dword_B43BE8 = 0x41088;
  dword_B44278 = 0x1C;
  LOBYTE(v29) = 0;
  if ( v1 )
  {
    v3 = v1[7].Unk08-- == 1;
    if ( v3 )
      sub_772560(v1);
  }
  v3 = v0->RefCount-- == 1;
  v29 = 0xFFFFFFFF;
  if ( v3 )
    sub_7604D0(v0);
}
