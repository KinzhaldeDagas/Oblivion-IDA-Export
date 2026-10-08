int __thiscall sub_7176D0(NiGeometry *this, NiDX9Renderer *a2)
{
  int result; // eax

  NiGeometry::Render(this, a2); /*0x7176d9*/
  result = 1; /*0x7176de*/
  if ( (a2->member.super.SceneState1 == 1 || a2->member.super.SceneState2 == 1) && a2->member.super.IsReady == 1 ) /*0x7176f9*/
    return ((int (__thiscall *)(NiDX9Renderer *, NiGeometry *))a2->__vftable->super.RenderTriShape2)(a2, this); /*0x717706*/
  return result; /*0x717708*/
}
