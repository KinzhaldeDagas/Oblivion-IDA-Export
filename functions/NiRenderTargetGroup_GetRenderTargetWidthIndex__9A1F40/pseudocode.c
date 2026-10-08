UInt32 __thiscall NiRenderTargetGroup_GetTargetHeight(NiRenderTargetGroup *this, int index)
{
  Ni2DBuffer *v2; // eax

  v2 = this->members.RenderTargets[index]; /*0x9a1f44*/
  if ( v2 ) /*0x9a1f4a*/
    return v2->members.height; /*0x9a1f4c*/
  else
    return 0; /*0x9a1f52*/
}
