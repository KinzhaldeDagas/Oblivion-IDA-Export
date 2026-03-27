void __thiscall sub_7E3730(_DWORD *this)
{
  NiD3DPass *v2; // esi
  unsigned int *p_Stage; // edi
  NiD3DPass *v4; // eax
  NiD3DTextureStage *v5; // eax
  NiD3DTextureStage *v6; // eax
  volatile LONG *v7; // ebp
  NiD3DVertexShader *VertexShader; // edi
  volatile LONG *v9; // ebp
  NiD3DPixelShader *PixelShader; // edi
  bool v11; // zf
  NiD3DTextureStage *v12; // [esp+14h] [ebp-18h]
  NiD3DTextureStage *v13; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v14; // [esp+28h] [ebp-4h]

  v2 = 0;
  p_Stage = 0;
  v14 = 0;
  v12 = 0;
  v4 = (NiD3DPass *)*(this + 0x21);
  LOBYTE(v14) = 1;
  if ( v4 )
  {
    v2 = v4;
    ++v4->RefCount;
  }
  if ( !v2->StageCount )
  {
    v5 = (NiD3DTextureStage *)*sub_772630(&v13);
    if ( v5 )
    {
      ++v5[7].Unk08;
      v12 = v5;
      p_Stage = &v5->Stage;
    }
    v6 = v13;
    LOBYTE(v14) = 1;
    if ( v13 )
    {
      --v13[7].Unk08;
      if ( !v6[7].Unk08 )
        sub_772560(v6);
    }
    sub_801110((int)p_Stage, 0, 1, 2);
    sub_760010(v2, v2->CurrentStage, p_Stage);
  }
  v7 = (volatile LONG *)*(this + 0x22);
  VertexShader = v2->VertexShader;
  if ( VertexShader != (NiD3DVertexShader *)v7 )
  {
    if ( VertexShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1);
    }
    v2->VertexShader = (NiD3DVertexShader *)v7;
    if ( v7 )
      InterlockedIncrement(v7 + 1);
  }
  v9 = (volatile LONG *)*(this + 0x23);
  PixelShader = v2->PixelShader;
  if ( PixelShader != (NiD3DPixelShader *)v9 )
  {
    if ( PixelShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1);
    }
    v2->PixelShader = (NiD3DPixelShader *)v9;
    if ( v9 )
      InterlockedIncrement(v9 + 1);
  }
  if ( !v2->RenderStateGroup )
    v2->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v2->RenderStateGroup, 0xA8, 0xF, 0);
  if ( !v2->RenderStateGroup )
    v2->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v2->RenderStateGroup, 0x1B, 1, 0);
  if ( !v2->RenderStateGroup )
    v2->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v2->RenderStateGroup, 0x13, 5, 0);
  if ( !v2->RenderStateGroup )
    v2->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v2->RenderStateGroup, 0x14, 6, 0);
  if ( !v2->RenderStateGroup )
    v2->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v2->RenderStateGroup, 0xF, 0, 0);
  if ( !v2->RenderStateGroup )
    v2->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v2->RenderStateGroup, 0x34, 0, 0);
  if ( !v2->RenderStateGroup )
    v2->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v2->RenderStateGroup, 7, 1, 0);
  if ( !v2->RenderStateGroup )
    v2->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v2->RenderStateGroup, 0x17, 4, 0);
  if ( !v2->RenderStateGroup )
    v2->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v2->RenderStateGroup, 0xE, 0, 0);
  LOBYTE(v14) = 0;
  if ( v12 )
  {
    v11 = v12[7].Unk08-- == 1;
    if ( v11 )
      sub_772560(v12);
  }
  v11 = v2->RefCount-- == 1;
  v14 = 0xFFFFFFFF;
  if ( v11 )
    sub_7604D0(v2);
}
