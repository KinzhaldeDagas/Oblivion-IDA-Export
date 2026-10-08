// CULLING goal 2026-09-27: base geometry Render sets renderer propertyState from geometry+0xAC and dynamicEffectState from +0xB0, then invokes attached controller callbacks. It is a state/update stage, not proof of a GPU draw. Preserve these semantics when choosing later submission guards.
NiDX9Renderer *__thiscall NiGeometry::Render(NiGeometry *this, NiDX9Renderer *a2)
{
  NiDX9Renderer *result; // eax
  NiInterpController *i; // esi

  result = a2; /*0x722a16*/
  a2->member.super.propertyState = this->member.unk0AC; /*0x722a1a*/
  a2->member.super.dynamicEffectState = this->member.unk0B0; /*0x722a24*/
  for ( i = this->member.super.super.m_controller; i; i = (NiInterpController *)i->member.next ) /*0x722a2c*/
    result = (NiDX9Renderer *)((int (__thiscall *)(NiInterpController *))i->vtbl->super.Unk_1A)(i); /*0x722a37*/
  return result; /*0x722a40*/
}
