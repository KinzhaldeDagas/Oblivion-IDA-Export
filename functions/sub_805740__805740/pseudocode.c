void __thiscall sub_805740(NiD3DPass **this)
{
  NiD3DPass *v1; // esi
  NiD3DTextureStage *v2; // edi
  NiD3DPass *v3; // eax
  NiD3DTextureStage *v4; // eax
  NiD3DTextureStage *v5; // eax
  NiD3DTextureStage **v6; // ebx
  bool v7; // zf
  NiD3DTextureStage *v8; // eax
  volatile LONG *v9; // ebx
  NiD3DVertexShader *VertexShader; // ebp
  volatile LONG *v11; // ebx
  NiD3DPixelShader *PixelShader; // ebp
  NiD3DTextureStage **v13; // ebp
  NiD3DTextureStage *v14; // eax
  NiD3DTextureStage **v15; // ebp
  NiD3DTextureStage *v16; // eax
  volatile LONG *v17; // ebx
  NiD3DVertexShader *v18; // ebp
  volatile LONG *v19; // ebx
  NiD3DPixelShader *v20; // ebp
  NiD3DTextureStage *v22; // [esp+20h] [ebp-10h] BYREF
  unsigned int v23; // [esp+2Ch] [ebp-4h]

  v1 = 0;
  v2 = 0;
  v23 = 0;
  v3 = *(this + 0x1F);
  LOBYTE(v23) = 1;
  if ( v3 )
  {
    v1 = v3;
    ++v3->RefCount;
  }
  if ( v1->StageCount < 2 )
  {
    v4 = (NiD3DTextureStage *)*sub_772630(&v22);
    if ( v4 )
    {
      v2 = v4;
      ++v4[7].Unk08;
    }
    v5 = v22;
    LOBYTE(v23) = 1;
    if ( v22 )
    {
      --v22[7].Unk08;
      if ( !v5[7].Unk08 )
        sub_772560(v5);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v6 = (NiD3DTextureStage **)sub_772630(&v22);
    v7 = v2 == *v6;
    LOBYTE(v23) = 3;
    if ( !v7 )
    {
      if ( v2 )
      {
        v7 = v2[7].Unk08-- == 1;
        if ( v7 )
          sub_772560(v2);
      }
      v2 = *v6;
      if ( *v6 )
        ++v2[7].Unk08;
    }
    v8 = v22;
    LOBYTE(v23) = 1;
    if ( v22 )
    {
      --v22[7].Unk08;
      if ( !v8[7].Unk08 )
        sub_772560(v8);
    }
    sub_801110((int)v2, 1, 3, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
  }
  v9 = (volatile LONG *)*(this + 0x21);
  VertexShader = v1->VertexShader;
  if ( VertexShader != (NiD3DVertexShader *)v9 )
  {
    if ( VertexShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v9;
    if ( v9 )
      InterlockedIncrement(v9 + 1);
  }
  v11 = (volatile LONG *)*(this + 0x23);
  PixelShader = v1->PixelShader;
  if ( PixelShader != (NiD3DPixelShader *)v11 )
  {
    if ( PixelShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v11;
    if ( v11 )
      InterlockedIncrement(v11 + 1);
  }
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x13, 9, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x14, 6, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x19, 5, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x18, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  if ( v1 != *(this + 0x20) )
  {
    v7 = v1->RefCount-- == 1;
    if ( v7 )
      sub_7604D0(v1);
    v1 = *(this + 0x20);
    if ( v1 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 2 )
  {
    v13 = (NiD3DTextureStage **)sub_772630(&v22);
    v7 = v2 == *v13;
    LOBYTE(v23) = 4;
    if ( !v7 )
    {
      if ( v2 )
      {
        v7 = v2[7].Unk08-- == 1;
        if ( v7 )
          sub_772560(v2);
      }
      v2 = *v13;
      if ( *v13 )
        ++v2[7].Unk08;
    }
    v14 = v22;
    LOBYTE(v23) = 1;
    if ( v22 )
    {
      --v22[7].Unk08;
      if ( !v14[7].Unk08 )
        sub_772560(v14);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
    v15 = (NiD3DTextureStage **)sub_772630(&v22);
    v7 = v2 == *v15;
    LOBYTE(v23) = 5;
    if ( !v7 )
    {
      if ( v2 )
      {
        v7 = v2[7].Unk08-- == 1;
        if ( v7 )
          sub_772560(v2);
      }
      v2 = *v15;
      if ( *v15 )
        ++v2[7].Unk08;
    }
    v16 = v22;
    LOBYTE(v23) = 1;
    if ( v22 )
    {
      --v22[7].Unk08;
      if ( !v16[7].Unk08 )
        sub_772560(v16);
    }
    sub_801110((int)v2, 1, 3, 2);
    sub_760010(v1, v1->CurrentStage, &v2->Stage);
  }
  v17 = (volatile LONG *)*(this + 0x22);
  v18 = v1->VertexShader;
  if ( v18 != (NiD3DVertexShader *)v17 )
  {
    if ( v18 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v18 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v18)(v18, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v17;
    if ( v17 )
      InterlockedIncrement(v17 + 1);
  }
  v19 = (volatile LONG *)*(this + 0x24);
  v20 = v1->PixelShader;
  if ( v20 != (NiD3DPixelShader *)v19 )
  {
    if ( v20 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v20 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v20)(v20, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v19;
    if ( v19 )
      InterlockedIncrement(v19 + 1);
  }
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x13, 9, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x14, 6, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x19, 5, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x18, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  LOBYTE(v23) = 0;
  if ( v2 )
  {
    v7 = v2[7].Unk08-- == 1;
    if ( v7 )
      sub_772560(v2);
  }
  v7 = v1->RefCount-- == 1;
  v23 = 0xFFFFFFFF;
  if ( v7 )
    sub_7604D0(v1);
}
