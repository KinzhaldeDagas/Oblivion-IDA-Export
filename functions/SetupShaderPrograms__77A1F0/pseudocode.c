NiObjectNET *__thiscall SetupShaderPrograms(
        NiD3DShader *this,
        NiObjectNET *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  NiExtraData *ExtraData; // eax
  int v12; // eax
  NiD3DShaderConstantMap *PixelConstantMap; // ecx
  NiD3DShaderConstantMap *VertexConstantMap; // ecx
  NiD3DShaderDeclaration *ShaderDeclaration; // ecx
  NiDX9RenderStateVtbl *vtbl; // edi
  int v17; // eax
  NiObjectNET *v19; // [esp+84h] [ebp+4h]

  if ( a2 )
  {
    ExtraData = NiObjectNET_GetExtraData(a2, off_B29F84);
    if ( ExtraData )
    {
      ExtraData[1].member.m_pcName = 0;
      ExtraData[2].__vftable = 0;
    }
  }
  v12 = ((int (__thiscall *)(NiD3DPass *, NiObjectNET *, int, int, int, int, int, int, int, UInt32))this->member.CurrentPass->__vftable->sub_75FBA0)(
          this->member.CurrentPass,
          a2,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          this->member.CurrentPassIndex);
  PixelConstantMap = this->member.PixelConstantMap;
  v19 = (NiObjectNET *)v12;
  if ( PixelConstantMap )
  {
    if ( this->member.CurrentPass->PixelShader )
      ((void (__thiscall *)(NiD3DShaderConstantMap *, NiD3DPixelShader *, NiObjectNET *, int, int, int, int, int, int, int, UInt32, int))PixelConstantMap->_vtbl->sub_9A8E30)(
        PixelConstantMap,
        this->member.CurrentPass->PixelShader,
        a2,
        a3,
        a4,
        a5,
        a6,
        a7,
        a8,
        a9,
        this->member.CurrentPassIndex,
        1);
  }
  VertexConstantMap = this->member.VertexConstantMap;
  if ( VertexConstantMap )
  {
    if ( this->member.CurrentPass->VertexShader )
      ((void (__thiscall *)(NiD3DShaderConstantMap *, NiD3DVertexShader *, NiObjectNET *, int, int, int, int, int, int, int, UInt32, int))VertexConstantMap->_vtbl->sub_9A8E30)(
        VertexConstantMap,
        this->member.CurrentPass->VertexShader,
        a2,
        a3,
        a4,
        a5,
        a6,
        a7,
        a8,
        a9,
        this->member.CurrentPassIndex,
        1);
  }
  if ( !this->member.CurrentPassIndex )
  {
    ShaderDeclaration = this->member.ShaderDeclaration;
    if ( ShaderDeclaration )
    {
      vtbl = this->member.super.D3DRenderState->vtbl;
      v17 = (*((int (__thiscall **)(NiD3DShaderDeclaration *, _DWORD))ShaderDeclaration->__vftable + 0x1D))(
              ShaderDeclaration,
              0);
      ((void (__thiscall *)(NiDX9RenderState *, int))vtbl->SetVertexDeclaration)(this->member.super.D3DRenderState, v17);
    }
  }
  return v19;
}
