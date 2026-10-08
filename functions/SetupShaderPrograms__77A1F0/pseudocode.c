//
// DX11 integration audit 2026-10-01: the prepared bucket now joins its ordered four-map six-bank register delta with scalar/resource state and guarded native cache/metadata effects. The map delta must share device/revision/limits/preimage with its captured baseline. This is assembly of proved effects only: does not certify all reachable callbacks, lifetime/pool writer exclusion, native refcount retirement or authorization to suppress this wrapper. 7FB6F0 projected SetClipPlane calls at7FC759/7FC7AB are guarded by selectors14E..151, outside current ordinary12D..146 bucket admission. Its ordinary765480 model call passes pushToDevice=false, so no D3DTS_WORLD write should be added to the handoff. Source globals and normalization side effects still require their separate modeled commits.
//
// Observation timing consequence verified 2026-10-02: the final D3D device draw consumes state after this setup path and its pass-owned/shader-owned map applications. Capturing at the actual owned device draw is a distinct current-time copy, with fresh code/owner/source checks and zero active writers throughout; it must not be represented as revival of a RenderPass-entry epoch. Existing native dispatch/order/bookkeeping obligations are unchanged.
NiObjectNET *__thiscall NiD3DShader_SetupShaderPrograms(
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

  if ( a2 ) /*0x77a1fe*/
  {
    ExtraData = NiObjectNET_GetExtraData(a2, off_B29F84); /*0x77a208*/
    if ( ExtraData ) /*0x77a20f*/
    {
      ExtraData[1].member.m_pcName = 0; /*0x77a211*/
      ExtraData[2].__vftable = 0; /*0x77a214*/
    }
  }
  v12 = ((int (__thiscall *)(NiD3DPass *, NiObjectNET *, int, int, int, int, int, int, int, UInt32))this->member.CurrentPass->__vftable->sub_75FBA0)( /*0x77a247*/
          this->member.CurrentPass,
          a2,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          this->member.CurrentPassIndex);       // Current NiD3DPass binds pixel/vertex programs and applies pass-owned constant maps.
  PixelConstantMap = this->member.PixelConstantMap; /*0x77a249*/
  v19 = (NiObjectNET *)v12; /*0x77a24e*/
  if ( PixelConstantMap ) /*0x77a252*/
  {
    if ( this->member.CurrentPass->PixelShader ) /*0x77a257*/
      ((void (__thiscall *)(NiD3DShaderConstantMap *, NiD3DPixelShader *, NiObjectNET *, int, int, int, int, int, int, int, UInt32, int))PixelConstantMap->_vtbl->sub_9A8E30)( /*0x77a28e*/
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
        1);                                     // Apply shader-level PixelConstantMap to the bound pass pixel shader.
  }
  VertexConstantMap = this->member.VertexConstantMap;// MoonSugarEffect decode: SetupShaderPrograms applies shader-level VertexConstantMap from shader+0x30 to CurrentPass->VertexShader at pass+0x58, after pass-owned constants from pass+0x50 are applied in sub_75FBA0. /*0x77a290*/
  if ( VertexConstantMap ) /*0x77a295*/
  {
    if ( this->member.CurrentPass->VertexShader ) /*0x77a29a*/
      ((void (__thiscall *)(NiD3DShaderConstantMap *, NiD3DVertexShader *, NiObjectNET *, int, int, int, int, int, int, int, UInt32, int))VertexConstantMap->_vtbl->sub_9A8E30)( /*0x77a2d1*/
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
        1);                                     // Apply shader-level VertexConstantMap to the bound pass vertex shader.
  }
  if ( !this->member.CurrentPassIndex ) /*0x77a2d3*/
  {
    ShaderDeclaration = this->member.ShaderDeclaration; /*0x77a2d9*/
    if ( ShaderDeclaration ) /*0x77a2de*/
    {
      vtbl = this->member.super.D3DRenderState->vtbl; /*0x77a2e5*/
      v17 = (*((int (__thiscall **)(NiD3DShaderDeclaration *, _DWORD))ShaderDeclaration->__vftable + 0x1D))( /*0x77a2ec*/
              ShaderDeclaration,
              0);                               // Materialize or reuse the active NiDX9 declaration's IDirect3DVertexDeclaration9.
      ((void (__thiscall *)(NiDX9RenderState *, int))vtbl->SetVertexDeclaration)(this->member.super.D3DRenderState, v17);// Bind the active Lighting30 D3D vertex declaration before drawing pass zero. /*0x77a2f8*/
    }
  }
  return v19; /*0x77a2fe*/
}
