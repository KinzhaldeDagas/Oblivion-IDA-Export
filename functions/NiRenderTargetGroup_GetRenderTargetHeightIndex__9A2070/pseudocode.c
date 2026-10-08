NiDX92DBufferData *__thiscall NiRenderTargetGroup::GetRenderTargetHeightIndex(NiRenderTargetGroup *this, int a2)
{
  Ni2DBuffer *v2; // eax

  v2 = this->members.RenderTargets[a2]; /*0x9a2074*/
  if ( v2 ) /*0x9a207a*/
    return v2->members.data; /*0x9a207c*/
  else
    return 0; /*0x9a2082*/
}
