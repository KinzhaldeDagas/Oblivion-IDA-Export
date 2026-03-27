UInt32 __thiscall NiRenderTargetGroup::GetRenderTargetIndex(NiRenderTargetGroup *this, int index)
{
  Ni2DBuffer *v2; // eax

  v2 = this->members.RenderTargets[index];
  if ( v2 )
    return v2->members.width;
  else
    return 0;
}
