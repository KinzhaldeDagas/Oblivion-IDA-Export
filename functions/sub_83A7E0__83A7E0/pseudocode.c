void sub_83A7E0()
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
  NiD3DVertexShader *v10; // edi
  int v11; // ebp
  NiD3DPixelShader *v12; // edi
  int v13; // ebp

  v0 = 0;
  if ( dword_B45B34 )
  {
    v0 = (NiD3DPass *)dword_B45B34;
    ++*(_DWORD *)(dword_B45B34 + 0x60);
  }
  VertexShader = v0->VertexShader;
  v2 = dword_B45474;
  if ( VertexShader != (NiD3DVertexShader *)dword_B45474 )
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
  v4 = dword_B45268;
  if ( PixelShader != (NiD3DPixelShader *)dword_B45268 )
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
  v5 = v0 == (NiD3DPass *)dword_B45B38;
  dword_B440B4 = 0x400002;
  dword_B44744 = 0;
  if ( !v5 )
  {
    v5 = v0->RefCount-- == 1;
    if ( v5 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45B38;
    if ( dword_B45B38 )
      ++v0->RefCount;
  }
  v6 = v0->VertexShader;
  v7 = dword_B45478;
  if ( v6 != (NiD3DVertexShader *)dword_B45478 )
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
  v9 = dword_B45268;
  if ( v8 != (NiD3DPixelShader *)dword_B45268 )
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
  v5 = v0 == (NiD3DPass *)dword_B45B3C;
  dword_B440B8 = (int)&loc_840007 + 1;
  dword_B44748 = 0;
  if ( !v5 )
  {
    v5 = v0->RefCount-- == 1;
    if ( v5 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45B3C;
    if ( dword_B45B3C )
      ++v0->RefCount;
  }
  v10 = v0->VertexShader;
  v11 = dword_B4547C;
  if ( v10 != (NiD3DVertexShader *)dword_B4547C )
  {
    if ( v10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v10 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v10)(v10, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v11;
    if ( v11 )
      InterlockedIncrement((volatile LONG *)(v11 + 4));
  }
  v12 = v0->PixelShader;
  v13 = dword_B4526C;
  if ( v12 != (NiD3DPixelShader *)dword_B4526C )
  {
    if ( v12 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v12 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v12)(v12, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v13;
    if ( v13 )
      InterlockedIncrement((volatile LONG *)(v13 + 4));
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
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 8, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  dword_B440BC = 2;
  dword_B4474C = 0;
  v5 = v0->RefCount-- == 1;
  if ( v5 )
    sub_7604D0(v0);
}
