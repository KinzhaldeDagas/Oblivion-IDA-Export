char sub_7D7210()
{
  NiDX9Renderer *v0; // esi
  char result; // al

  v0 = renderer; /*0x7d7211*/
  result = NiRenderer_DrainRenderTargetGroupStack(); /*0x7d7217*/
  if ( v0->member.super.SceneState1 == 1 && !v0->member.super.SceneState2 ) /*0x7d7225*/
  {
    result = v0->__vftable->super.EndScene((NiRenderer *)v0); /*0x7d7238*/
    if ( result ) /*0x7d723c*/
      v0->member.super.SceneState1 = 2; /*0x7d723e*/
  }
  if ( v0->member.super.SceneState1 == 2 && !v0->member.super.SceneState2 ) /*0x7d7251*/
  {
    result = ((int (__thiscall *)(NiDX9Renderer *))v0->__vftable->super.DisplayScene)(v0); /*0x7d7264*/
    if ( result ) /*0x7d7268*/
    {
      ++v0->member.super.unk208; /*0x7d726a*/
      v0->member.super.SceneState1 = 0; /*0x7d7271*/
    }
  }
  return result; /*0x7d727b*/
}
