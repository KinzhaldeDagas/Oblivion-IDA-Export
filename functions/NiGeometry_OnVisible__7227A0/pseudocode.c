// CULLING audit 2026-09-27 (observed Oblivion behavior): Geometry OnVisible wrapper forwards (process in stack, geometry in ECX) to process submission function 0x70E1A0. Twelve native data xrefs correspond to CULLING's known +0x7C vtable slots. This is not evidence that every rendering route passes those slots.
const void *__thiscall NiGeometry::OnVisible(NiGeometry *this, NiCullingProcess *a2)
{
  return NiCullingProcess::OnVisible(a2, this); /*0x7227aa*/
}
