void sub_820910()
{
  NiD3DPass *v0; // esi
  NiD3DVertexShader *VertexShader; // edi
  int v2; // ebp
  NiD3DPixelShader *PixelShader; // edi
  int v4; // ebp
  bool v5; // zf
  NiD3DVertexShader *v6; // edi
  int v7; // ebp
  NiD3DPixelShader *v8; // edi
  int v9; // ebp

  v0 = 0;
  if ( dword_B455A0[0] )
  {
    v0 = (NiD3DPass *)dword_B455A0[0];
    ++*(_DWORD *)(dword_B455A0[0] + 0x60);
  }
  VertexShader = v0->VertexShader;
  v2 = dword_B45290[0];
  if ( VertexShader != (NiD3DVertexShader *)dword_B45290[0] )
  {
    if ( VertexShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v2;
    if ( v2 )
      InterlockedIncrement((volatile LONG *)(v2 + 4));
  }
  PixelShader = v0->PixelShader;
  v4 = dword_B45088[0];
  if ( PixelShader != (NiD3DPixelShader *)dword_B45088[0] )
  {
    if ( PixelShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v4;
    if ( v4 )
      InterlockedIncrement((volatile LONG *)(v4 + 4));
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
  v5 = v0 == (NiD3DPass *)dword_B455A8;
  dword_B43B20[0] = 2;
  dword_B441B0[0] = 0;
  if ( !v5 )
  {
    v5 = v0->RefCount-- == 1;
    if ( v5 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B455A8;
    if ( dword_B455A8 )
      ++v0->RefCount;
  }
  v6 = v0->VertexShader;
  v7 = dword_B4530C[0];
  if ( v6 != (NiD3DVertexShader *)dword_B4530C[0] )
  {
    if ( v6 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v6 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v6)(v6, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v7;
    if ( v7 )
      InterlockedIncrement((volatile LONG *)(v7 + 4));
  }
  v8 = v0->PixelShader;
  v9 = dword_B45088[0];
  if ( v8 != (NiD3DPixelShader *)dword_B45088[0] )
  {
    if ( v8 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v8 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v8)(v8, 1);
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
  dword_B43B28 = 0x40008;
  dword_B441B8 = 0;
  v5 = v0->RefCount-- == 1;
  if ( v5 )
    sub_7604D0(v0);
}
