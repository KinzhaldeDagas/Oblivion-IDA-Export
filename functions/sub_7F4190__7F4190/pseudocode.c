void __thiscall sub_7F4190(BoltShader *this)
{
  NiD3DPass *v2; // esi
  unsigned int *p_Stage; // edi
  UInt32 v4; // eax
  NiD3DTextureStage *v5; // eax
  NiD3DTextureStage *v6; // eax
  NiD3DVertexShader *v7; // ebp
  volatile LONG *VertexShader; // edi
  NiD3DPixelShader *v9; // ebp
  volatile LONG *PixelShader; // edi
  bool v11; // zf
  NiD3DTextureStage *v12; // [esp+14h] [ebp-18h]
  NiD3DTextureStage *v13; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v14; // [esp+28h] [ebp-4h]

  v2 = 0;
  p_Stage = 0;
  v14 = 0;
  v12 = 0;
  v4 = this->Unk00[0x3F];
  LOBYTE(v14) = 1;
  if ( v4 )
  {
    v2 = (NiD3DPass *)v4;
    ++*(_DWORD *)(v4 + 0x60);
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
  v7 = this->Vertex[0];
  VertexShader = (volatile LONG *)v2->VertexShader;
  if ( VertexShader != (volatile LONG *)v7 )
  {
    if ( VertexShader )
    {
      if ( !InterlockedDecrement(VertexShader + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))VertexShader)(VertexShader, 1);
    }
    v2->VertexShader = v7;
    if ( v7 )
      InterlockedIncrement((volatile LONG *)v7 + 1);
  }
  v9 = this->Pixel[0];
  PixelShader = (volatile LONG *)v2->PixelShader;
  if ( PixelShader != (volatile LONG *)v9 )
  {
    if ( PixelShader )
    {
      if ( !InterlockedDecrement(PixelShader + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))PixelShader)(PixelShader, 1);
    }
    v2->PixelShader = v9;
    if ( v9 )
      InterlockedIncrement((volatile LONG *)v9 + 1);
  }
  if ( !v2->RenderStateGroup )
    v2->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v2->RenderStateGroup, 0x16, 1, 0);
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
  sub_772CD0((_DWORD *)v2->RenderStateGroup, 0x14, 2, 0);
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
