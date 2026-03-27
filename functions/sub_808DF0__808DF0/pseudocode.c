NiD3DShaderConstantMap *__thiscall sub_808DF0(_DWORD *this)
{
  BSShader *shader; // ebx
  NiD3DShaderConstantMap *result; // eax
  NiD3DShaderConstantMap *VertexConstantMap; // ebp
  NiD3DShaderConstantMap *v5; // esi
  int v6; // esi
  IDirect3DDevice9 *D3DDevice; // ebp
  int v8; // esi
  NiDX9Renderer *D3DRenderer; // ebp
  NiDX9Renderer *v10; // esi
  NiDX9RenderState *D3DRenderState; // ebp
  NiDX9RenderState *v12; // esi
  int v13; // ebp
  int v14; // esi
  LONG v15; // [esp+1Ch] [ebp-14h]
  NiD3DShaderConstantMap *v16; // [esp+20h] [ebp-10h]

  shader = GetShaderDefinition(1u)->shader;
  result = shader->member.super.PixelConstantMap;
  v15 = (LONG)result;
  if ( result )
    result = (NiD3DShaderConstantMap *)InterlockedIncrement((volatile LONG *)&result->Unk04);
  VertexConstantMap = shader->member.super.VertexConstantMap;
  v16 = VertexConstantMap;
  if ( VertexConstantMap )
    result = (NiD3DShaderConstantMap *)InterlockedIncrement((volatile LONG *)&VertexConstantMap->Unk04);
  v5 = (NiD3DShaderConstantMap *)*(this + 0xC);
  if ( v5 != VertexConstantMap )
  {
    if ( v5 )
    {
      result = (NiD3DShaderConstantMap *)InterlockedDecrement((volatile LONG *)&v5->Unk04);
      if ( !result )
        result = (NiD3DShaderConstantMap *)((int (__thiscall *)(NiD3DShaderConstantMap *, int))v5->_vtbl->Destroy)(
                                             v5,
                                             1);
    }
    *(this + 0xC) = VertexConstantMap;
    if ( VertexConstantMap )
      result = (NiD3DShaderConstantMap *)InterlockedIncrement((volatile LONG *)&VertexConstantMap->Unk04);
  }
  v6 = *(this + 0xB);
  if ( v6 != v15 )
  {
    if ( v6 )
    {
      result = (NiD3DShaderConstantMap *)InterlockedDecrement((volatile LONG *)(v6 + 4));
      if ( !result )
        result = (NiD3DShaderConstantMap *)(**(int (__thiscall ***)(int, int))v6)(v6, 1);
    }
    *(this + 0xB) = v15;
    if ( v15 )
      result = (NiD3DShaderConstantMap *)InterlockedIncrement((volatile LONG *)(v15 + 4));
  }
  D3DDevice = shader[1].member.super.super.D3DDevice;
  v8 = *(this + 0x23);
  if ( (IDirect3DDevice9 *)v8 != D3DDevice )
  {
    if ( v8 )
    {
      result = (NiD3DShaderConstantMap *)InterlockedDecrement((volatile LONG *)(v8 + 4));
      if ( !result )
        result = (NiD3DShaderConstantMap *)(**(int (__thiscall ***)(int, int))v8)(v8, 1);
    }
    *(this + 0x23) = D3DDevice;
    if ( D3DDevice )
      result = (NiD3DShaderConstantMap *)InterlockedIncrement((volatile LONG *)&D3DDevice[1]);
  }
  D3DRenderer = shader[1].member.super.super.D3DRenderer;
  v10 = (NiDX9Renderer *)*(this + 0x24);
  if ( v10 != D3DRenderer )
  {
    if ( v10 )
    {
      result = (NiD3DShaderConstantMap *)InterlockedDecrement((volatile LONG *)&v10->member);
      if ( !result )
        result = (NiD3DShaderConstantMap *)((int (__thiscall *)(NiDX9Renderer *, int))v10->__vftable->super.gap0[0])(
                                             v10,
                                             1);
    }
    *(this + 0x24) = D3DRenderer;
    if ( D3DRenderer )
      result = (NiD3DShaderConstantMap *)InterlockedIncrement((volatile LONG *)&D3DRenderer->member);
  }
  D3DRenderState = shader[1].member.super.super.D3DRenderState;
  v12 = (NiDX9RenderState *)*(this + 0x25);
  if ( v12 != D3DRenderState )
  {
    if ( v12 )
    {
      result = (NiD3DShaderConstantMap *)InterlockedDecrement((volatile LONG *)&v12->member);
      if ( !result )
        result = (NiD3DShaderConstantMap *)((int (__thiscall *)(NiDX9RenderState *, int))v12->vtbl->super.Destructor)(
                                             v12,
                                             1);
    }
    *(this + 0x25) = D3DRenderState;
    if ( D3DRenderState )
      result = (NiD3DShaderConstantMap *)InterlockedIncrement((volatile LONG *)&D3DRenderState->member);
  }
  v13 = *(_DWORD *)&shader[1].member.super.super.IsRenderSet;
  v14 = *(this + 0x26);
  if ( v14 != v13 )
  {
    if ( v14 )
    {
      result = (NiD3DShaderConstantMap *)InterlockedDecrement((volatile LONG *)(v14 + 4));
      if ( !result )
        result = (NiD3DShaderConstantMap *)(**(int (__thiscall ***)(int, int))v14)(v14, 1);
    }
    *(this + 0x26) = v13;
    if ( v13 )
      result = (NiD3DShaderConstantMap *)InterlockedIncrement((volatile LONG *)(v13 + 4));
  }
  if ( v16 )
  {
    result = (NiD3DShaderConstantMap *)InterlockedDecrement((volatile LONG *)&v16->Unk04);
    if ( !result )
      result = (NiD3DShaderConstantMap *)((int (__thiscall *)(NiD3DShaderConstantMap *, int))v16->_vtbl->Destroy)(
                                           v16,
                                           1);
  }
  if ( v15 )
  {
    result = (NiD3DShaderConstantMap *)InterlockedDecrement((volatile LONG *)(v15 + 4));
    if ( !result )
      return (NiD3DShaderConstantMap *)(**(LONG (__thiscall ***)(LONG, int))v15)(v15, 1);
  }
  return result;
}
