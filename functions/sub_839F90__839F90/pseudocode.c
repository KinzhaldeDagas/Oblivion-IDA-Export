void sub_839F90()
{
  NiD3DPass *v0; // esi
  unsigned int *p_Stage; // edi
  int v2; // eax
  bool v3; // zf
  NiD3DTextureStage *v4; // eax
  NiD3DTextureStage *v5; // eax
  NiD3DVertexShader *VertexShader; // edi
  int v7; // ebp
  NiD3DPixelShader *PixelShader; // edi
  int v9; // ebp
  unsigned int **v10; // edi
  unsigned int *v11; // ebp
  NiD3DTextureStage *v12; // eax
  NiD3DVertexShader *v13; // edi
  int v14; // ebp
  NiD3DPixelShader *v15; // edi
  int v16; // ebp
  unsigned int **v17; // edi
  unsigned int *v18; // ebp
  NiD3DTextureStage *v19; // eax
  NiD3DVertexShader *v20; // edi
  int v21; // ebp
  NiD3DPixelShader *v22; // edi
  int v23; // ebp
  NiD3DVertexShader *v24; // edi
  int v25; // ebp
  NiD3DPixelShader *v26; // edi
  int v27; // ebp
  NiD3DVertexShader *v28; // edi
  int v29; // ebp
  NiD3DPixelShader *v30; // edi
  int v31; // ebp
  NiD3DTextureStage *a3; // [esp+28h] [ebp-18h]
  NiD3DTextureStage *v33; // [esp+30h] [ebp-10h] BYREF
  unsigned int v34; // [esp+3Ch] [ebp-4h]

  v0 = 0;
  p_Stage = 0;
  v34 = 0;
  a3 = 0;
  v2 = dword_B45B20;
  v3 = dword_B45B20 == 0;
  LOBYTE(v34) = 1;
  if ( !v3 )
  {
    v0 = (NiD3DPass *)v2;
    if ( v2 )
      ++*(_DWORD *)(v2 + 0x60);
  }
  if ( !v0->StageCount )
  {
    v4 = (NiD3DTextureStage *)*sub_772630(&v33);
    if ( v4 )
    {
      p_Stage = &v4->Stage;
      ++v4[7].Unk08;
      a3 = v4;
    }
    v5 = v33;
    LOBYTE(v34) = 1;
    if ( v33 )
    {
      --v33[7].Unk08;
      if ( !v5[7].Unk08 )
        sub_772560(v5);
    }
    sub_801110((int)p_Stage, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, p_Stage);
  }
  VertexShader = v0->VertexShader;
  v7 = dword_B45448;
  if ( VertexShader != (NiD3DVertexShader *)dword_B45448 )
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
  v9 = dword_B45240;
  if ( PixelShader != (NiD3DPixelShader *)dword_B45240 )
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
  v3 = v0 == (NiD3DPass *)dword_B45B24;
  dword_B440A0 = 0x400002;
  dword_B44730 = 0x20000;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45B24;
    if ( dword_B45B24 )
      ++v0->RefCount;
  }
  if ( !v0->StageCount )
  {
    v10 = (unsigned int **)sub_772630(&v33);
    v11 = &a3->Stage;
    v3 = a3 == (NiD3DTextureStage *)*v10;
    LOBYTE(v34) = 3;
    if ( !v3 )
    {
      if ( a3 )
      {
        v3 = a3[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(a3);
      }
      v11 = *v10;
      a3 = (NiD3DTextureStage *)*v10;
      if ( *v10 )
        ++v11[0x17];
    }
    v12 = v33;
    LOBYTE(v34) = 1;
    if ( v33 )
    {
      --v33[7].Unk08;
      if ( !v12[7].Unk08 )
        sub_772560(v12);
    }
    sub_801110((int)v11, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v11);
  }
  v13 = v0->VertexShader;
  v14 = dword_B4544C;
  if ( v13 != (NiD3DVertexShader *)dword_B4544C )
  {
    if ( v13 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v13 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v13)(v13, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v14;
    if ( v14 )
      InterlockedIncrement((volatile LONG *)(v14 + 4));
  }
  v15 = v0->PixelShader;
  v16 = dword_B45240;
  if ( v15 != (NiD3DPixelShader *)dword_B45240 )
  {
    if ( v15 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v15 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v15)(v15, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v16;
    if ( v16 )
      InterlockedIncrement((volatile LONG *)(v16 + 4));
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
  v3 = v0 == (NiD3DPass *)dword_B45B28;
  dword_B440A4 = (int)&loc_840007 + 1;
  dword_B44734 = 0x20000;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45B28;
    if ( dword_B45B28 )
      ++v0->RefCount;
  }
  if ( !v0->StageCount )
  {
    v17 = (unsigned int **)sub_772630(&v33);
    v18 = &a3->Stage;
    v3 = a3 == (NiD3DTextureStage *)*v17;
    LOBYTE(v34) = 4;
    if ( !v3 )
    {
      if ( a3 )
      {
        v3 = a3[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(a3);
      }
      v18 = *v17;
      a3 = (NiD3DTextureStage *)*v17;
      if ( *v17 )
        ++v18[0x17];
    }
    v19 = v33;
    LOBYTE(v34) = 1;
    if ( v33 )
    {
      --v33[7].Unk08;
      if ( !v19[7].Unk08 )
        sub_772560(v19);
    }
    sub_801110((int)v18, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, v18);
  }
  v20 = v0->VertexShader;
  v21 = dword_B45450;
  if ( v20 != (NiD3DVertexShader *)dword_B45450 )
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
  v23 = dword_B45244;
  if ( v22 != (NiD3DPixelShader *)dword_B45244 )
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
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45B2C;
  dword_B440A8 = 0x1420002;
  dword_B44738 = 0x20000;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45B2C;
    if ( dword_B45B2C )
      ++v0->RefCount;
  }
  v24 = v0->VertexShader;
  v25 = dword_B45454;
  if ( v24 != (NiD3DVertexShader *)dword_B45454 )
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
  v27 = dword_B45248;
  if ( v26 != (NiD3DPixelShader *)dword_B45248 )
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
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45B30;
  dword_B440AC = 2;
  dword_B4473C = 0;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45B30;
    if ( dword_B45B30 )
      ++v0->RefCount;
  }
  v28 = v0->VertexShader;
  v29 = dword_B45458;
  if ( v28 != (NiD3DVertexShader *)dword_B45458 )
  {
    if ( v28 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v28 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v28)(v28, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v29;
    if ( v29 )
      InterlockedIncrement((volatile LONG *)(v29 + 4));
  }
  v30 = v0->PixelShader;
  v31 = dword_B45248;
  if ( v30 != (NiD3DPixelShader *)dword_B45248 )
  {
    if ( v30 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v30 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v30)(v30, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v31;
    if ( v31 )
      InterlockedIncrement((volatile LONG *)(v31 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  dword_B440B0 = 0x40008;
  dword_B44740 = 0;
  LOBYTE(v34) = 0;
  if ( a3 )
  {
    v3 = a3[7].Unk08-- == 1;
    if ( v3 )
      sub_772560(a3);
  }
  v3 = v0->RefCount-- == 1;
  v34 = 0xFFFFFFFF;
  if ( v3 )
    sub_7604D0(v0);
}
