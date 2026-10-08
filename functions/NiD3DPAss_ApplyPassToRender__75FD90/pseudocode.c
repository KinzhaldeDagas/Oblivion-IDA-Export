// Apply a NiD3DPass to DX9: select vertex-processing mode, apply every authored render state, apply each active texture-stage/sampler group and texture binding, then disable unused stages. This is the last caster state boundary before constants/programs and draw.
UInt8 __thiscall NiD3DPAss::ApplyPassToRender(
        NiD3DPass *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  NiD3DVertexShader *VertexShader; // ecx
  UInt8 v11; // bp
  void (__thiscall **v12)(_DWORD, int); // esi
  int v13; // eax
  NiD3DRenderStateGroup *RenderStateGroup; // ecx
  unsigned int end; // ebx
  unsigned int i; // esi
  NiD3DTextureStage *v17; // ecx

  VertexShader = this->VertexShader;            // DeferredRendering: ApplyPass reads VertexShader from NiD3DPass +0x58 before render states and texture stages; use this hook for pass telemetry before draw calls. /*0x75fd95*/
  v11 = 0; /*0x75fd98*/
  if ( VertexShader ) /*0x75fd9c*/
  {
    v12 = (void (__thiscall **)(_DWORD, int))(*(_DWORD *)LODWORD(MEMORY[0xB3F9B0][0x9A4]) + 0xEC); /*0x75fdaa*/
    v13 = (*(int (__thiscall **)(NiD3DVertexShader *))(*(_DWORD *)VertexShader + 0x50))(VertexShader);// NiD3DPass application: pass render states, then texture-stage/sampler state and texture binding, then disable unused stages. /*0x75fdb0*/
    (*v12)(LODWORD(MEMORY[0xB3F9B0][0x9A4]), v13); /*0x75fdbb*/
  }
  else
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)LODWORD(MEMORY[0xB3F9B0][0x9A4]) + 0xEC))(this->SoftwareVP); /*0x75fdd2*/
  }
  RenderStateGroup = this->RenderStateGroup; /*0x75fdd4*/
  if ( RenderStateGroup ) /*0x75fdd9*/
    NiD3DRenderStateGroup::SetRenderStates(RenderStateGroup);// Apply NiD3DRenderStateGroup before texture-stage iteration. /*0x75fddb*/
  end = this->Stages.end; /*0x75fde1*/
  for ( i = 0; i < end; v11 = OB_NiD3DTextureStage_ApplyForPass_010201A0(v17) ) /*0x75fde1*/
  {
    v17 = (NiD3DTextureStage *)*(&this->Stages.data->Stage + i);// Iterate every active NiD3DTextureStage through OB_NiD3DTextureStage_ApplyForPass_010201A0. /*0x75fdf3*/
    if ( !v17 ) /*0x75fdf8*/
      break; /*0x75fdf8*/
    ++i; /*0x75fdff*/
  }
  if ( i < dword_B28CB8 ) /*0x75fe10*/
    NiD3DTextureStage_DisableUnusedStages(i); /*0x75fe13*/
  return v11; /*0x75fe1b*/
}
