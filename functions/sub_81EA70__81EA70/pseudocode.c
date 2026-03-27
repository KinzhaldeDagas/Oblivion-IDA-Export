void sub_81EA70()
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
  NiD3DVertexShader *v18; // edi
  int v19; // ebp
  NiD3DPixelShader *v20; // edi
  int v21; // ebp
  unsigned int **v22; // edi
  unsigned int *p_Stage; // ebp
  NiD3DTextureStage *v24; // eax
  NiD3DVertexShader *v25; // edi
  int v26; // ebp
  NiD3DPixelShader *v27; // edi
  int v28; // ebp
  NiD3DTextureStage *a3; // [esp+20h] [ebp-18h]
  NiD3DTextureStage *v30; // [esp+28h] [ebp-10h] BYREF
  unsigned int v31; // [esp+34h] [ebp-4h]

  v0 = 0;
  v1 = 0;
  v31 = 0;
  a3 = 0;
  v2 = dword_B45BE0;
  v3 = dword_B45BE0 == 0;
  LOBYTE(v31) = 1;
  if ( !v3 )
  {
    v0 = (NiD3DPass *)v2;
    if ( v2 )
      ++*(_DWORD *)(v2 + 0x60);
  }
  if ( !v0->StageCount )
  {
    v4 = (NiD3DTextureStage *)*sub_772630(&v30);
    if ( v4 )
    {
      v1 = v4;
      ++v4[7].Unk08;
      a3 = v4;
    }
    v5 = v30;
    LOBYTE(v31) = 1;
    if ( v30 )
    {
      --v30[7].Unk08;
      if ( !v5[7].Unk08 )
        sub_772560(v5);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  VertexShader = v0->VertexShader;
  v7 = dword_B452D4;
  if ( VertexShader != (NiD3DVertexShader *)dword_B452D4 )
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
  v9 = dword_B45100;
  if ( PixelShader != (NiD3DPixelShader *)dword_B45100 )
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
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 6, 0);
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
  v3 = v0 == (NiD3DPass *)dword_B45BE4;
  dword_B44160 = 0x18002;
  dword_B447F0 = 0;
  dword_B43AD0 = 0x18000;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45BE4;
    if ( dword_B45BE4 )
      ++v0->RefCount;
  }
  if ( !v0->StageCount )
  {
    v10 = (NiD3DTextureStage **)sub_772630(&v30);
    v3 = v1 == *v10;
    LOBYTE(v31) = 3;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v10;
      a3 = *v10;
      if ( *v10 )
        ++v1[7].Unk08;
    }
    v11 = v30;
    LOBYTE(v31) = 1;
    if ( v30 )
    {
      --v30[7].Unk08;
      if ( !v11[7].Unk08 )
        sub_772560(v11);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v12 = v0->VertexShader;
  v13 = dword_B452D8;
  if ( v12 != (NiD3DVertexShader *)dword_B452D8 )
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
  v15 = dword_B45104;
  if ( v14 != (NiD3DPixelShader *)dword_B45104 )
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
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 6, 0);
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
  v3 = v0 == (NiD3DPass *)dword_B45BE8;
  dword_B44164 = 0x18002;
  dword_B447F4 = 0;
  dword_B43AD4 = 0x18000;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45BE8;
    if ( dword_B45BE8 )
      ++v0->RefCount;
  }
  if ( !v0->StageCount )
  {
    v16 = (NiD3DTextureStage **)sub_772630(&v30);
    v3 = v1 == *v16;
    LOBYTE(v31) = 4;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = *v16;
      a3 = *v16;
      if ( *v16 )
        ++v1[7].Unk08;
    }
    v17 = v30;
    LOBYTE(v31) = 1;
    if ( v30 )
    {
      --v30[7].Unk08;
      if ( !v17[7].Unk08 )
        sub_772560(v17);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v18 = v0->VertexShader;
  v19 = dword_B45310;
  if ( v18 != (NiD3DVertexShader *)dword_B45310 )
  {
    if ( v18 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v18 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v18)(v18, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v19;
    if ( v19 )
      InterlockedIncrement((volatile LONG *)(v19 + 4));
  }
  v20 = v0->PixelShader;
  v21 = dword_B45100;
  if ( v20 != (NiD3DPixelShader *)dword_B45100 )
  {
    if ( v20 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v20 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v20)(v20, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v21;
    if ( v21 )
      InterlockedIncrement((volatile LONG *)(v21 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 6, 0);
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
  v3 = v0 == (NiD3DPass *)dword_B45BEC;
  dword_B44168 = 0x58008;
  dword_B447F8 = 0;
  dword_B43AD8 = 0x18000;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45BEC;
    if ( dword_B45BEC )
      ++v0->RefCount;
  }
  if ( !v0->StageCount )
  {
    v22 = (unsigned int **)sub_772630(&v30);
    p_Stage = &a3->Stage;
    v3 = a3 == (NiD3DTextureStage *)*v22;
    LOBYTE(v31) = 5;
    if ( !v3 )
    {
      if ( a3 )
      {
        v3 = a3[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(a3);
      }
      p_Stage = *v22;
      a3 = (NiD3DTextureStage *)*v22;
      if ( *v22 )
        ++p_Stage[0x17];
    }
    v24 = v30;
    LOBYTE(v31) = 1;
    if ( v30 )
    {
      --v30[7].Unk08;
      if ( !v24[7].Unk08 )
        sub_772560(v24);
    }
    sub_801110((int)p_Stage, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, p_Stage);
  }
  v25 = v0->VertexShader;
  v26 = dword_B45314;
  if ( v25 != (NiD3DVertexShader *)dword_B45314 )
  {
    if ( v25 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v25 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v25)(v25, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v26;
    if ( v26 )
      InterlockedIncrement((volatile LONG *)(v26 + 4));
  }
  v27 = v0->PixelShader;
  v28 = dword_B45104;
  if ( v27 != (NiD3DPixelShader *)dword_B45104 )
  {
    if ( v27 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v27 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v27)(v27, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v28;
    if ( v28 )
      InterlockedIncrement((volatile LONG *)(v28 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x13, 5, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x14, 6, 0);
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
  dword_B4416C = 0x58008;
  dword_B447FC = 0;
  dword_B43ADC = 0x18000;
  LOBYTE(v31) = 0;
  if ( a3 )
  {
    v3 = a3[7].Unk08-- == 1;
    if ( v3 )
      sub_772560(a3);
  }
  v3 = v0->RefCount-- == 1;
  v31 = 0xFFFFFFFF;
  if ( v3 )
    sub_7604D0(v0);
}
