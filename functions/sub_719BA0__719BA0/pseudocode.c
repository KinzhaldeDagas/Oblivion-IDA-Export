int __thiscall sub_719BA0(NiGeometry *this, NiDX9Renderer *a2)
{
  int result; // eax

  NiGeometry::Render(this, a2); /*0x719ba9*/
  result = 1; /*0x719bae*/
  if ( (a2->member.super.SceneState1 == 1 || a2->member.super.SceneState2 == 1) && a2->member.super.IsReady == 1 ) /*0x719bc9*/
    return ((int (__thiscall *)(NiDX9Renderer *, NiGeometry *))a2->__vftable->super.RenderTriStrips2)(a2, this); /*0x719bd6*/
  return result; /*0x719bd8*/
}
