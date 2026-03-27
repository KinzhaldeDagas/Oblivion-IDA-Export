char sub_7D7210()
{
  NiDX9Renderer *v0; // esi
  char result; // al

  v0 = g_Renderer;
  result = sub_7D7150();
  if ( v0->member.super.SceneState1 == 1 && !v0->member.super.SceneState2 )
  {
    result = v0->__vftable->super.EndScene((NiRenderer *)v0);
    if ( result )
      v0->member.super.SceneState1 = 2;
  }
  if ( v0->member.super.SceneState1 == 2 && !v0->member.super.SceneState2 )
  {
    result = ((int (__thiscall *)(NiDX9Renderer *))v0->__vftable->super.DisplayScene)(v0);
    if ( result )
    {
      ++v0->member.super.unk208;
      v0->member.super.SceneState1 = 0;
    }
  }
  return result;
}
