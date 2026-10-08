int __thiscall sub_717930(NiGeometry *this, NiDX9Renderer *a2)
{
  int result; // eax

  NiGeometry::Render(this, a2); /*0x717939*/
  result = 1; /*0x71793e*/
  if ( (a2->member.super.SceneState1 == 1 || a2->member.super.SceneState2 == 1) && a2->member.super.IsReady == 1 ) /*0x717959*/
    return ((int (__thiscall *)(NiDX9Renderer *, NiGeometry *))a2->__vftable->super.RenderLines)(a2, this); /*0x717966*/
  return result; /*0x717968*/
}
