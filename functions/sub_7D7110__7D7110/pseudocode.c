void sub_7D7110()
{
  NiRenderTargetGroup *v0; // eax

  if ( dword_B45D74 )
  {
    sub_7D6B00(g_Renderer);
    sub_7D7030();
    v0 = (NiRenderTargetGroup *)sub_7D6B70();
    if ( !v0 )
      v0 = g_Renderer->__vftable->super.GetDefaultRTGroup((NiRenderer *)g_Renderer);
    sub_7D6A80(g_Renderer, v0, kClear_NONE);
  }
}
