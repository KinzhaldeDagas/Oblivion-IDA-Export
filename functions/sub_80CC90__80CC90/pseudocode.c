NiD3DShaderConstantMap *__thiscall sub_80CC90(NiD3DShaderConstantMap **this)
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

  shader = GetShaderDefinition(1u)->shader; /*0x80ccc0*/
  result = shader->member.super.PixelConstantMap; /*0x80ccc3*/
  v15 = result; /*0x80cccb*/
  if ( result ) /*0x80cccf*/
    result = (NiD3DShaderConstantMap *)InterlockedIncrement((volatile LONG *)&result->Unk04); /*0x80ccd5*/
  VertexConstantMap = shader->member.super.VertexConstantMap; /*0x80ccdb*/
  v16 = VertexConstantMap; /*0x80cce8*/
  if ( VertexConstantMap ) /*0x80ccec*/
    result = (NiD3DShaderConstantMap *)InterlockedIncrement((volatile LONG *)&VertexConstantMap->Unk04); /*0x80ccf2*/
  v5 = *(this + 0xC); /*0x80ccf8*/
  if ( v5 != VertexConstantMap ) /*0x80cd02*/
  {
    if ( v5 ) /*0x80cd06*/
    {
      result = (NiD3DShaderConstantMap *)InterlockedDecrement((volatile LONG *)&v5->Unk04); /*0x80cd0c*/
      if ( !result ) /*0x80cd14*/
        result = (NiD3DShaderConstantMap *)((int (__thiscall *)(NiD3DShaderConstantMap *, int))v5->_vtbl->Destroy)( /*0x80cd22*/
                                             v5,
                                             1);
    }
    *(this + 0xC) = VertexConstantMap; /*0x80cd26*/
    if ( VertexConstantMap ) /*0x80cd29*/
      result = (NiD3DShaderConstantMap *)InterlockedIncrement((volatile LONG *)&VertexConstantMap->Unk04); /*0x80cd2f*/
  }
  v6 = *(this + 0xB); /*0x80cd35*/
  if ( v6 != v15 ) /*0x80cd3e*/
  {
    if ( v6 ) /*0x80cd42*/
    {
      result = (NiD3DShaderConstantMap *)InterlockedDecrement((volatile LONG *)&v6->Unk04); /*0x80cd48*/
      if ( !result ) /*0x80cd50*/
        result = (NiD3DShaderConstantMap *)((int (__thiscall *)(NiD3DShaderConstantMap *, int))v6->_vtbl->Destroy)( /*0x80cd5e*/
                                             v6,
                                             1);
    }
    *(this + 0xB) = v15; /*0x80cd62*/
    if ( v15 ) /*0x80cd65*/
      result = (NiD3DShaderConstantMap *)InterlockedIncrement((volatile LONG *)&v15->Unk04); /*0x80cd6b*/
  }
  D3DDevice = shader[1].member.super.super.D3DDevice; /*0x80cd71*/
  v8 = (int)*(this + 0x23); /*0x80cd77*/
  if ( (IDirect3DDevice9 *)v8 != D3DDevice ) /*0x80cd7f*/
  {
    if ( v8 ) /*0x80cd83*/
    {
      result = (NiD3DShaderConstantMap *)InterlockedDecrement((volatile LONG *)(v8 + 4)); /*0x80cd89*/
      if ( !result ) /*0x80cd91*/
        result = (NiD3DShaderConstantMap *)(**(int (__thiscall ***)(int, int))v8)(v8, 1); /*0x80cd9f*/
    }
    *(this + 0x23) = (NiD3DShaderConstantMap *)D3DDevice; /*0x80cda3*/
    if ( D3DDevice ) /*0x80cda9*/
      result = (NiD3DShaderConstantMap *)InterlockedIncrement((volatile LONG *)&D3DDevice[1]); /*0x80cdaf*/
  }
  D3DRenderer = shader[1].member.super.super.D3DRenderer; /*0x80cdb5*/
  v10 = (NiDX9Renderer *)*(this + 0x24); /*0x80cdbb*/
  if ( v10 != D3DRenderer ) /*0x80cdc3*/
  {
    if ( v10 ) /*0x80cdc7*/
    {
      result = (NiD3DShaderConstantMap *)InterlockedDecrement((volatile LONG *)&v10->member); /*0x80cdcd*/
      if ( !result ) /*0x80cdd5*/
        result = (NiD3DShaderConstantMap *)((int (__thiscall *)(NiDX9Renderer *, int))v10->__vftable->super.gap0[0])( /*0x80cde3*/
                                             v10,
                                             1);
    }
    *(this + 0x24) = (NiD3DShaderConstantMap *)D3DRenderer; /*0x80cde7*/
    if ( D3DRenderer ) /*0x80cded*/
      result = (NiD3DShaderConstantMap *)InterlockedIncrement((volatile LONG *)&D3DRenderer->member); /*0x80cdf3*/
  }
  D3DRenderState = shader[1].member.super.super.D3DRenderState; /*0x80cdf9*/
  v12 = (NiDX9RenderState *)*(this + 0x25); /*0x80cdff*/
  if ( v12 != D3DRenderState ) /*0x80ce07*/
  {
    if ( v12 ) /*0x80ce0b*/
    {
      result = (NiD3DShaderConstantMap *)InterlockedDecrement((volatile LONG *)&v12->member); /*0x80ce11*/
      if ( !result ) /*0x80ce19*/
        result = (NiD3DShaderConstantMap *)((int (__thiscall *)(NiDX9RenderState *, int))v12->vtbl->super.Destructor)( /*0x80ce27*/
                                             v12,
                                             1);
    }
    *(this + 0x25) = (NiD3DShaderConstantMap *)D3DRenderState; /*0x80ce2b*/
    if ( D3DRenderState ) /*0x80ce31*/
      result = (NiD3DShaderConstantMap *)InterlockedIncrement((volatile LONG *)&D3DRenderState->member); /*0x80ce37*/
  }
  v13 = *(NiD3DShaderConstantMap **)&shader[1].member.super.super.IsRenderSet; /*0x80ce3d*/
  v14 = *(this + 0x26); /*0x80ce43*/
  if ( v14 != v13 ) /*0x80ce4b*/
  {
    if ( v14 ) /*0x80ce4f*/
    {
      result = (NiD3DShaderConstantMap *)InterlockedDecrement((volatile LONG *)&v14->Unk04); /*0x80ce55*/
      if ( !result ) /*0x80ce5d*/
        result = (NiD3DShaderConstantMap *)((int (__thiscall *)(NiD3DShaderConstantMap *, int))v14->_vtbl->Destroy)( /*0x80ce6b*/
                                             v14,
                                             1);
    }
    *(this + 0x26) = v13; /*0x80ce6f*/
    if ( v13 ) /*0x80ce75*/
      result = (NiD3DShaderConstantMap *)InterlockedIncrement((volatile LONG *)&v13->Unk04); /*0x80ce7b*/
  }
  if ( v16 ) /*0x80ce8c*/
  {
    result = (NiD3DShaderConstantMap *)InterlockedDecrement((volatile LONG *)&v16->Unk04); /*0x80ce92*/
    if ( !result ) /*0x80ce9a*/
      result = (NiD3DShaderConstantMap *)((int (__thiscall *)(NiD3DShaderConstantMap *, int))v16->_vtbl->Destroy)( /*0x80cea4*/
                                           v16,
                                           1);
  }
  if ( v15 ) /*0x80ceb4*/
  {
    result = (NiD3DShaderConstantMap *)InterlockedDecrement((volatile LONG *)&v15->Unk04); /*0x80ceba*/
    if ( !result ) /*0x80cec2*/
      return ((NiD3DShaderConstantMap *(__thiscall *)(NiD3DShaderConstantMap *, int))v15->_vtbl->Destroy)(v15, 1); /*0x80cecc*/
  }
  return result; /*0x80cece*/
}
