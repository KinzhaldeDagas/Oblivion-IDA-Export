NiDX92DBufferData *__thiscall NiRenderTargetGroup::GetRenderTargetHeightIndex(NiRenderTargetGroup *this, int a2)
{
  Ni2DBuffer *v2; // eax

  v2 = this->members.RenderTargets[a2];
  if ( v2 )
    return v2->members.data;
  else
    return 0;
}
