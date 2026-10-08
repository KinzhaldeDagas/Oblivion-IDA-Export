// MoonSugarEffect decode: Parallax/Skin vtable +0x88 does not construct maps; it ref/copies PixelConstantMap and VertexConstantMap from GetShaderDefinition(1)->shader plus device/renderer/render-state refs.
NiD3DShaderConstantMap *__thiscall sub_808DF0(NiD3DShaderConstantMap **this)
{
  BSShader *shader; // ebx
  NiD3DShaderConstantMap *result; // eax
  NiD3DShaderConstantMap *VertexConstantMap; // ebp
  NiD3DShaderConstantMap *v5; // esi
  NiD3DShaderConstantMap *v6; // esi
  IDirect3DDevice9 *D3DDevice; // ebp
  int v8; // esi
  NiDX9Renderer *D3DRenderer; // ebp
  NiDX9Renderer *v10; // esi
  NiDX9RenderState *D3DRenderState; // ebp
  NiDX9RenderState *v12; // esi
  NiD3DShaderConstantMap *v13; // ebp
  NiD3DShaderConstantMap *v14; // esi
  NiD3DShaderConstantMap *v15; // [esp+1Ch] [ebp-14h]
  NiD3DShaderConstantMap *v16; // [esp+20h] [ebp-10h]

  shader = GetShaderDefinition(1u)->shader; /*0x808e20*/
  result = shader->member.super.PixelConstantMap; /*0x808e26*/
  v15 = result; /*0x808e2e*/
  if ( result ) /*0x808e32*/
    result = (NiD3DShaderConstantMap *)InterlockedIncrement((volatile LONG *)&result->Unk04); /*0x808e38*/
  VertexConstantMap = shader->member.super.VertexConstantMap; /*0x808e3e*/
  v16 = VertexConstantMap; /*0x808e4b*/
  if ( VertexConstantMap ) /*0x808e4f*/
    result = (NiD3DShaderConstantMap *)InterlockedIncrement((volatile LONG *)&VertexConstantMap->Unk04); /*0x808e55*/
  v5 = *(this + 0xC); /*0x808e5b*/
  if ( v5 != VertexConstantMap ) /*0x808e65*/
  {
    if ( v5 ) /*0x808e69*/
    {
      result = (NiD3DShaderConstantMap *)InterlockedDecrement((volatile LONG *)&v5->Unk04); /*0x808e6f*/
      if ( !result ) /*0x808e77*/
        result = (NiD3DShaderConstantMap *)((int (__thiscall *)(NiD3DShaderConstantMap *, int))v5->_vtbl->Destroy)( /*0x808e85*/
                                             v5,
                                             1);
    }
    *(this + 0xC) = VertexConstantMap; /*0x808e89*/
    if ( VertexConstantMap ) /*0x808e8c*/
      result = (NiD3DShaderConstantMap *)InterlockedIncrement((volatile LONG *)&VertexConstantMap->Unk04); /*0x808e92*/
  }
  v6 = *(this + 0xB); /*0x808e98*/
  if ( v6 != v15 ) /*0x808ea1*/
  {
    if ( v6 ) /*0x808ea5*/
    {
      result = (NiD3DShaderConstantMap *)InterlockedDecrement((volatile LONG *)&v6->Unk04); /*0x808eab*/
      if ( !result ) /*0x808eb3*/
        result = (NiD3DShaderConstantMap *)((int (__thiscall *)(NiD3DShaderConstantMap *, int))v6->_vtbl->Destroy)( /*0x808ec1*/
                                             v6,
                                             1);
    }
    *(this + 0xB) = v15; /*0x808ec5*/
    if ( v15 ) /*0x808ec8*/
      result = (NiD3DShaderConstantMap *)InterlockedIncrement((volatile LONG *)&v15->Unk04); /*0x808ece*/
  }
  D3DDevice = shader[1].member.super.super.D3DDevice; /*0x808ed4*/
  v8 = (int)*(this + 0x23); /*0x808eda*/
  if ( (IDirect3DDevice9 *)v8 != D3DDevice ) /*0x808ee2*/
  {
    if ( v8 ) /*0x808ee6*/
    {
      result = (NiD3DShaderConstantMap *)InterlockedDecrement((volatile LONG *)(v8 + 4)); /*0x808eec*/
      if ( !result ) /*0x808ef4*/
        result = (NiD3DShaderConstantMap *)(**(int (__thiscall ***)(int, int))v8)(v8, 1); /*0x808f02*/
    }
    *(this + 0x23) = (NiD3DShaderConstantMap *)D3DDevice; /*0x808f06*/
    if ( D3DDevice ) /*0x808f0c*/
      result = (NiD3DShaderConstantMap *)InterlockedIncrement((volatile LONG *)&D3DDevice[1]); /*0x808f12*/
  }
  D3DRenderer = shader[1].member.super.super.D3DRenderer; /*0x808f18*/
  v10 = (NiDX9Renderer *)*(this + 0x24); /*0x808f1e*/
  if ( v10 != D3DRenderer ) /*0x808f26*/
  {
    if ( v10 ) /*0x808f2a*/
    {
      result = (NiD3DShaderConstantMap *)InterlockedDecrement((volatile LONG *)&v10->member); /*0x808f30*/
      if ( !result ) /*0x808f38*/
        result = (NiD3DShaderConstantMap *)((int (__thiscall *)(NiDX9Renderer *, int))v10->__vftable->super.gap0[0])( /*0x808f46*/
                                             v10,
                                             1);
    }
    *(this + 0x24) = (NiD3DShaderConstantMap *)D3DRenderer; /*0x808f4a*/
    if ( D3DRenderer ) /*0x808f50*/
      result = (NiD3DShaderConstantMap *)InterlockedIncrement((volatile LONG *)&D3DRenderer->member); /*0x808f56*/
  }
  D3DRenderState = shader[1].member.super.super.D3DRenderState; /*0x808f5c*/
  v12 = (NiDX9RenderState *)*(this + 0x25); /*0x808f62*/
  if ( v12 != D3DRenderState ) /*0x808f6a*/
  {
    if ( v12 ) /*0x808f6e*/
    {
      result = (NiD3DShaderConstantMap *)InterlockedDecrement((volatile LONG *)&v12->member); /*0x808f74*/
      if ( !result ) /*0x808f7c*/
        result = (NiD3DShaderConstantMap *)((int (__thiscall *)(NiDX9RenderState *, int))v12->vtbl->super.Destructor)( /*0x808f8a*/
                                             v12,
                                             1);
    }
    *(this + 0x25) = (NiD3DShaderConstantMap *)D3DRenderState; /*0x808f8e*/
    if ( D3DRenderState ) /*0x808f94*/
      result = (NiD3DShaderConstantMap *)InterlockedIncrement((volatile LONG *)&D3DRenderState->member); /*0x808f9a*/
  }
  v13 = *(NiD3DShaderConstantMap **)&shader[1].member.super.super.IsRenderSet; /*0x808fa0*/
  v14 = *(this + 0x26); /*0x808fa6*/
  if ( v14 != v13 ) /*0x808fae*/
  {
    if ( v14 ) /*0x808fb2*/
    {
      result = (NiD3DShaderConstantMap *)InterlockedDecrement((volatile LONG *)&v14->Unk04); /*0x808fb8*/
      if ( !result ) /*0x808fc0*/
        result = (NiD3DShaderConstantMap *)((int (__thiscall *)(NiD3DShaderConstantMap *, int))v14->_vtbl->Destroy)( /*0x808fce*/
                                             v14,
                                             1);
    }
    *(this + 0x26) = v13; /*0x808fd2*/
    if ( v13 ) /*0x808fd8*/
      result = (NiD3DShaderConstantMap *)InterlockedIncrement((volatile LONG *)&v13->Unk04); /*0x808fde*/
  }
  if ( v16 ) /*0x808fef*/
  {
    result = (NiD3DShaderConstantMap *)InterlockedDecrement((volatile LONG *)&v16->Unk04); /*0x808ff5*/
    if ( !result ) /*0x808ffd*/
      result = (NiD3DShaderConstantMap *)((int (__thiscall *)(NiD3DShaderConstantMap *, int))v16->_vtbl->Destroy)( /*0x809007*/
                                           v16,
                                           1);
  }
  if ( v15 ) /*0x809017*/
  {
    result = (NiD3DShaderConstantMap *)InterlockedDecrement((volatile LONG *)&v15->Unk04); /*0x80901d*/
    if ( !result ) /*0x809025*/
      return ((NiD3DShaderConstantMap *(__thiscall *)(NiD3DShaderConstantMap *, int))v15->_vtbl->Destroy)(v15, 1); /*0x80902f*/
  }
  return result; /*0x809031*/
}
