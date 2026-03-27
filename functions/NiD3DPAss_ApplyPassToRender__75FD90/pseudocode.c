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
  void (__thiscall **p_SetSoftwareVertexProcessing)(NiDX9RenderState, UInt8); // esi
  int v13; // eax
  NiD3DRenderStateGroup *RenderStateGroup; // ecx
  unsigned int end; // ebx
  unsigned int i; // esi
  NiD3DTextureStage *v17; // ecx

  VertexShader = this->VertexShader;
  v11 = 0;
  if ( VertexShader )
  {
    p_SetSoftwareVertexProcessing = &renderStateG->vtbl->SetSoftwareVertexProcessing;
    v13 = (*(int (__thiscall **)(NiD3DVertexShader *))(*(_DWORD *)VertexShader + 0x50))(VertexShader);
    ((void (__thiscall *)(NiDX9RenderState *, int))*p_SetSoftwareVertexProcessing)(renderStateG, v13);
  }
  else
  {
    ((void (__stdcall *)(_DWORD))renderStateG->vtbl->SetSoftwareVertexProcessing)(this->SoftwareVP);
  }
  RenderStateGroup = this->RenderStateGroup;
  if ( RenderStateGroup )
    NiD3DRenderStateGroup::SetRenderStates(RenderStateGroup);
  end = this->Stages.end;
  for ( i = 0; i < end; v11 = sub_772400(v17) )
  {
    v17 = (NiD3DTextureStage *)*(&this->Stages.data->Stage + i);
    if ( !v17 )
      break;
    ++i;
  }
  if ( i < dword_B28CB8 )
    sub_771790(i);
  return v11;
}
