// CULLING goal 2026-09-27: NiTriShape render entry first calls geometry base Render for state/controller work, then only in an active ready scene dispatches renderer virtual +0x160. This is not the terminal D3D draw; observation/rejection at later layers must preserve required preceding side effects.
//
// CULLING pipeline clarification 2026-09-27: renderer slot +0x160 resolves to 0x7693E0 in the authoritative NiDX9Renderer table, the same implementation used by the TriStrips +0x164 slot. Distinct virtual slots converge before shader dispatch.
int __thiscall sub_717690(NiGeometry *this, NiDX9Renderer *a2)
{
  int result; // eax

  NiGeometry::Render(this, a2); /*0x717699*/
  result = 1; /*0x71769e*/
  if ( (a2->member.super.SceneState1 == 1 || a2->member.super.SceneState2 == 1) && a2->member.super.IsReady == 1 ) /*0x7176b9*/
    return ((int (__thiscall *)(NiDX9Renderer *, NiGeometry *))a2->__vftable->super.RenderTriShape)(a2, this); /*0x7176c6*/
  return result; /*0x7176c8*/
}
