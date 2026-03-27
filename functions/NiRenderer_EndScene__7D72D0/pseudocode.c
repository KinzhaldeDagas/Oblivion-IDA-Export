char NiRenderer_EndScene()
{
  NiDX9Renderer *v0; // esi
  char result; // al

  v0 = g_Renderer;
  result = sub_7D7150();
  if ( v0->member.super.SceneState2 == 1 && !v0->member.super.SceneState1 )
  {
    result = v0->__vftable->super.EndScene((NiRenderer *)v0);
    if ( result )
      v0->member.super.SceneState2 = 0;
  }
  return result;
}
