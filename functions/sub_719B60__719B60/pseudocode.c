// CULLING goal 2026-09-27: NiTriStrips render entry first calls geometry base Render for state/controller work, then only in an active ready scene dispatches renderer virtual +0x164. Distinct renderer entry from triangle-list +0x160; do not import another engine's slot map.
//
// CULLING pipeline clarification 2026-09-27: renderer slot +0x164 resolves to 0x7693E0, shared with TriShape slot +0x160. Do not count these as separate terminal draw implementations.
int __thiscall sub_719B60(NiGeometry *this, NiDX9Renderer *a2)
{
  int result; // eax

  NiGeometry::Render(this, a2); /*0x719b69*/
  result = 1; /*0x719b6e*/
  if ( (a2->member.super.SceneState1 == 1 || a2->member.super.SceneState2 == 1) && a2->member.super.IsReady == 1 ) /*0x719b89*/
    return ((int (__thiscall *)(NiDX9Renderer *, NiGeometry *))a2->__vftable->super.RenderTriStrips)(a2, this); /*0x719b96*/
  return result; /*0x719b98*/
}
