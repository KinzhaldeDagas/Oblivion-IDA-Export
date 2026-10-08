UInt32 __thiscall NiRenderTargetGroup_GetTargetWidth(NiRenderTargetGroup *this, int index)
{
  Ni2DBuffer *v2; // eax

  v2 = this->members.RenderTargets[index]; /*0x9a1f24*/
  if ( v2 ) /*0x9a1f2a*/
    return v2->members.width; /*0x9a1f2c*/
  else
    return 0; /*0x9a1f32*/
}
