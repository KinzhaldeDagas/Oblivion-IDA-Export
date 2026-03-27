void __thiscall sub_8717B0(volatile LONG **this)
{
  NiD3DPass *v2; // esi
  NiD3DTextureStage *v3; // ebx
  int v4; // eax
  bool v5; // zf
  NiD3DTextureStage *v6; // eax
  NiD3DTextureStage *v7; // eax
  volatile LONG *v8; // ebp
  NiD3DVertexShader *VertexShader; // edi
  volatile LONG *v10; // ebp
  NiD3DPixelShader *PixelShader; // edi
  NiD3DTextureStage **v12; // edi
  NiD3DTextureStage *v13; // eax
  volatile LONG *v14; // ebp
  NiD3DVertexShader *v15; // edi
  volatile LONG *v16; // ebp
  NiD3DPixelShader *v17; // edi
  NiD3DTextureStage *v19; // [esp+20h] [ebp-10h] BYREF
  unsigned int v20; // [esp+2Ch] [ebp-4h]

  v2 = 0;
  v3 = 0;
  v20 = 0;
  v4 = dword_B476F0;
  v5 = dword_B476F0 == 0;
  LOBYTE(v20) = 1;
  if ( !v5 )
  {
    v2 = (NiD3DPass *)v4;
    if ( v4 )
      ++*(_DWORD *)(v4 + 0x60);
  }
  if ( !v2->StageCount )
  {
    v6 = (NiD3DTextureStage *)*sub_772630(&v19);
    if ( v6 )
    {
      v3 = v6;
      ++v6[7].Unk08;
    }
    v7 = v19;
    LOBYTE(v20) = 1;
    if ( v19 )
    {
      --v19[7].Unk08;
      if ( !v7[7].Unk08 )
        sub_772560(v7);
    }
    sub_801110((int)v3, 0, 1, 2);
    sub_760010(v2, v2->CurrentStage, &v3->Stage);
  }
  v8 = *(this + 0x43);
  VertexShader = v2->VertexShader;
  if ( VertexShader != (NiD3DVertexShader *)v8 )
  {
    if ( VertexShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1);
    }
    v2->VertexShader = (NiD3DVertexShader *)v8;
    if ( v8 )
      InterlockedIncrement(v8 + 1);
  }
  v10 = *(this + 0x61);
  PixelShader = v2->PixelShader;
  if ( PixelShader != (NiD3DPixelShader *)v10 )
  {
    if ( PixelShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1);
    }
    v2->PixelShader = (NiD3DPixelShader *)v10;
    if ( v10 )
      InterlockedIncrement(v10 + 1);
  }
  if ( !v2->RenderStateGroup )
    v2->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v2->RenderStateGroup, 0x1B, 1, 0);
  if ( !v2->RenderStateGroup )
    v2->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v2->RenderStateGroup, 0x13, 9, 0);
  if ( !v2->RenderStateGroup )
    v2->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v2->RenderStateGroup, 0x14, 1, 0);
  if ( !v2->RenderStateGroup )
    v2->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v2->RenderStateGroup, 0xF, 0, 0);
  if ( !v2->RenderStateGroup )
    v2->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v2->RenderStateGroup, 7, 1, 0);
  if ( !v2->RenderStateGroup )
    v2->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v2->RenderStateGroup, 0x17, 3, 0);
  if ( !v2->RenderStateGroup )
    v2->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v2->RenderStateGroup, 0xE, 0, 0);
  if ( !v2->RenderStateGroup )
    v2->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v2->RenderStateGroup, 0x34, 0, 0);
  v5 = v2 == (NiD3DPass *)dword_B476F4;
  dword_B43F54 = 0x20002;
  dword_B445E4 = 0x100;
  if ( !v5 )
  {
    v5 = v2->RefCount-- == 1;
    if ( v5 )
      sub_7604D0(v2);
    v2 = (NiD3DPass *)dword_B476F4;
    if ( dword_B476F4 )
      ++v2->RefCount;
  }
  if ( !v2->StageCount )
  {
    v12 = (NiD3DTextureStage **)sub_772630(&v19);
    v5 = v3 == *v12;
    LOBYTE(v20) = 3;
    if ( !v5 )
    {
      if ( v3 )
      {
        v5 = v3[7].Unk08-- == 1;
        if ( v5 )
          sub_772560(v3);
      }
      v3 = *v12;
      if ( *v12 )
        ++v3[7].Unk08;
    }
    v13 = v19;
    LOBYTE(v20) = 1;
    if ( v19 )
    {
      --v19[7].Unk08;
      if ( !v13[7].Unk08 )
        sub_772560(v13);
    }
    sub_801110((int)v3, 0, 1, 2);
    sub_760010(v2, v2->CurrentStage, &v3->Stage);
  }
  v14 = *(this + 0x44);
  v15 = v2->VertexShader;
  if ( v15 != (NiD3DVertexShader *)v14 )
  {
    if ( v15 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v15 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v15)(v15, 1);
    }
    v2->VertexShader = (NiD3DVertexShader *)v14;
    if ( v14 )
      InterlockedIncrement(v14 + 1);
  }
  v16 = *(this + 0x61);
  v17 = v2->PixelShader;
  if ( v17 != (NiD3DPixelShader *)v16 )
  {
    if ( v17 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v17 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v17)(v17, 1);
    }
    v2->PixelShader = (NiD3DPixelShader *)v16;
    if ( v16 )
      InterlockedIncrement(v16 + 1);
  }
  if ( !v2->RenderStateGroup )
    v2->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v2->RenderStateGroup, 0x1B, 1, 0);
  if ( !v2->RenderStateGroup )
    v2->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v2->RenderStateGroup, 0x13, 9, 0);
  if ( !v2->RenderStateGroup )
    v2->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v2->RenderStateGroup, 0x14, 1, 0);
  if ( !v2->RenderStateGroup )
    v2->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v2->RenderStateGroup, 0xF, 0, 0);
  if ( !v2->RenderStateGroup )
    v2->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v2->RenderStateGroup, 7, 1, 0);
  if ( !v2->RenderStateGroup )
    v2->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v2->RenderStateGroup, 0x17, 3, 0);
  if ( !v2->RenderStateGroup )
    v2->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v2->RenderStateGroup, 0xE, 0, 0);
  if ( !v2->RenderStateGroup )
    v2->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v2->RenderStateGroup, 0x34, 0, 0);
  dword_B43F58 = 0x60008;
  dword_B445E8 = 0x100;
  LOBYTE(v20) = 0;
  if ( v3 )
  {
    v5 = v3[7].Unk08-- == 1;
    if ( v5 )
      sub_772560(v3);
  }
  v5 = v2->RefCount-- == 1;
  v20 = 0xFFFFFFFF;
  if ( v5 )
    sub_7604D0(v2);
}
