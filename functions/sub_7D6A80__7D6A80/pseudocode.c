char __thiscall sub_7D6A80(NiDX9Renderer *this, NiRenderTargetGroup *a2, ClearFlags clearFlags)
{
  char result; // al

  if ( this->member.super.SceneState1 != 1 && this->member.super.SceneState2 != 1 || this->member.super.IsReady )
    return 0;
  if ( a2 )
  {
    NiDX9Renderer::LockRender(this);
    result = this->__vftable->super.BeginUsingRenderTargetGroup((NiRenderer *)this, a2, clearFlags);
    if ( result )
    {
      this->member.super.IsReady = 1;
    }
    else
    {
      NiDX9Renderer::UnLockRender(this);
      return 0;
    }
  }
  else
  {
    TESTexture::ClearComponentReferences(this);
    return 0;
  }
  return result;
}
