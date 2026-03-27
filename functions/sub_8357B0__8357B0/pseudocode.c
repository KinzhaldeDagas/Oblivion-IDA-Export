void sub_8357B0()
{
  NiD3DPass *v0; // esi
  NiD3DTextureStage *v1; // edi
  int v2; // eax
  bool v3; // zf
  NiD3DTextureStage *v4; // eax
  NiD3DTextureStage *v5; // eax
  NiD3DTextureStage **v6; // ebp
  NiD3DTextureStage *v7; // eax
  NiD3DVertexShader *VertexShader; // ebp
  int v9; // ebx
  NiD3DPixelShader *PixelShader; // ebp
  int v11; // ebx
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
  NiD3DTextureStage **v28; // ebp
  NiD3DTextureStage *v29; // eax
  NiD3DTextureStage **v30; // ebp
  NiD3DTextureStage *v31; // eax
  NiD3DVertexShader *v32; // ebp
  int v33; // ebx
  NiD3DPixelShader *v34; // ebp
  int v35; // ebx
  NiD3DTextureStage *v36; // [esp+20h] [ebp-10h] BYREF
  unsigned int v37; // [esp+2Ch] [ebp-4h]

  v0 = 0;
  v1 = 0;
  v37 = 0;
  v2 = dword_B45BB0;
  v3 = dword_B45BB0 == 0;
  LOBYTE(v37) = 1;
  if ( !v3 )
  {
    v0 = (NiD3DPass *)v2;
    if ( v2 )
      ++*(_DWORD *)(v2 + 0x60);
  }
  if ( v0->StageCount < 2 )
  {
    v4 = (NiD3DTextureStage *)*sub_772630(&v36);
    if ( v4 )
    {
      v1 = v4;
      ++v4[7].Unk08;
    }
    v5 = v36;
    LOBYTE(v37) = 1;
    if ( v36 )
    {
      --v36[7].Unk08;
      if ( !v5[7].Unk08 )
        sub_772560(v5);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v6 = (NiD3DTextureStage **)sub_772630(&v36);
    v3 = v1 == *v6;
    LOBYTE(v37) = 3;
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
    v7 = v36;
    LOBYTE(v37) = 1;
    if ( v36 )
    {
      --v36[7].Unk08;
      if ( !v7[7].Unk08 )
        sub_772560(v7);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  VertexShader = v0->VertexShader;
  v9 = dword_B453F8;
  if ( VertexShader != (NiD3DVertexShader *)dword_B453F8 )
  {
    if ( VertexShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v9;
    if ( v9 )
      InterlockedIncrement((volatile LONG *)(v9 + 4));
  }
  PixelShader = v0->PixelShader;
  v11 = dword_B451F0;
  if ( PixelShader != (NiD3DPixelShader *)dword_B451F0 )
  {
    if ( PixelShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v11;
    if ( v11 )
      InterlockedIncrement((volatile LONG *)(v11 + 4));
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
  v3 = v0 == (NiD3DPass *)dword_B45BB4;
  dword_B44130 = 0x20006;
  dword_B447C0 = 0x104;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45BB4;
    if ( dword_B45BB4 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v12 = (NiD3DTextureStage **)sub_772630(&v36);
    v3 = v1 == *v12;
    LOBYTE(v37) = 4;
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
    v13 = v36;
    LOBYTE(v37) = 1;
    if ( v36 )
    {
      --v36[7].Unk08;
      if ( !v13[7].Unk08 )
        sub_772560(v13);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v14 = (NiD3DTextureStage **)sub_772630(&v36);
    v3 = v1 == *v14;
    LOBYTE(v37) = 5;
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
    v15 = v36;
    LOBYTE(v37) = 1;
    if ( v36 )
    {
      --v36[7].Unk08;
      if ( !v15[7].Unk08 )
        sub_772560(v15);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v16 = v0->VertexShader;
  v17 = dword_B453FC;
  if ( v16 != (NiD3DVertexShader *)dword_B453FC )
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
  v19 = dword_B451F0;
  if ( v18 != (NiD3DPixelShader *)dword_B451F0 )
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
  v3 = v0 == (NiD3DPass *)dword_B45BB8;
  dword_B44134 = 0x260008;
  dword_B447C4 = 0x104;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45BB8;
    if ( dword_B45BB8 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v20 = (NiD3DTextureStage **)sub_772630(&v36);
    v3 = v1 == *v20;
    LOBYTE(v37) = 6;
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
    v21 = v36;
    LOBYTE(v37) = 1;
    if ( v36 )
    {
      --v36[7].Unk08;
      if ( !v21[7].Unk08 )
        sub_772560(v21);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v22 = (NiD3DTextureStage **)sub_772630(&v36);
    v3 = v1 == *v22;
    LOBYTE(v37) = 7;
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
    v23 = v36;
    LOBYTE(v37) = 1;
    if ( v36 )
    {
      --v36[7].Unk08;
      if ( !v23[7].Unk08 )
        sub_772560(v23);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v24 = v0->VertexShader;
  v25 = dword_B453F8;
  if ( v24 != (NiD3DVertexShader *)dword_B453F8 )
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
  v27 = dword_B451F4;
  if ( v26 != (NiD3DPixelShader *)dword_B451F4 )
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
  v3 = v0 == (NiD3DPass *)dword_B45BBC;
  dword_B44138 = 0x20006;
  dword_B447C8 = 0x104;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45BBC;
    if ( dword_B45BBC )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 2 )
  {
    v28 = (NiD3DTextureStage **)sub_772630(&v36);
    v3 = v1 == *v28;
    LOBYTE(v37) = 8;
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
    v29 = v36;
    LOBYTE(v37) = 1;
    if ( v36 )
    {
      --v36[7].Unk08;
      if ( !v29[7].Unk08 )
        sub_772560(v29);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
    v30 = (NiD3DTextureStage **)sub_772630(&v36);
    v3 = v1 == *v30;
    LOBYTE(v37) = 9;
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
    v31 = v36;
    LOBYTE(v37) = 1;
    if ( v36 )
    {
      --v36[7].Unk08;
      if ( !v31[7].Unk08 )
        sub_772560(v31);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, v0->CurrentStage, &v1->Stage);
  }
  v32 = v0->VertexShader;
  v33 = dword_B45400;
  if ( v32 != (NiD3DVertexShader *)dword_B45400 )
  {
    if ( v32 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v32 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v32)(v32, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v33;
    if ( v33 )
      InterlockedIncrement((volatile LONG *)(v33 + 4));
  }
  v34 = v0->PixelShader;
  v35 = dword_B451F8;
  if ( v34 != (NiD3DPixelShader *)dword_B451F8 )
  {
    if ( v34 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v34 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v34)(v34, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v35;
    if ( v35 )
      InterlockedIncrement((volatile LONG *)(v35 + 4));
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
  dword_B4413C = 0x4020006;
  dword_B447CC = 0x10C;
  LOBYTE(v37) = 0;
  if ( v1 )
  {
    v3 = v1[7].Unk08-- == 1;
    if ( v3 )
      sub_772560(v1);
  }
  v3 = v0->RefCount-- == 1;
  v37 = 0xFFFFFFFF;
  if ( v3 )
    sub_7604D0(v0);
}
