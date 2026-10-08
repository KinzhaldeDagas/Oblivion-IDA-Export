// CULLING audit 2026-09-27 (observed Oblivion behavior): Geometry submission boundary reached by 0x7227A0. With +0x08 array: +0x04 UseAppendVirtual selects vtable+0x0C, otherwise append to {data +0,size +4,capacity +8,growBy +0xC}. Without array: accumulator+0x58 registers geometry; absent accumulator or false low-byte result invokes geometry Render(+0x84). CULLING's rendererForwards observes entry handoffs, not this branch outcome or GPU draws.
const void *__thiscall NiCullingProcess::OnVisible(NiCullingProcess *this, NiGeometry *a2)
{
  const void **VisibleGeo; // esi
  const void *result; // eax
  const void *v4; // eax
  NiAccumulator *accumulator; // ecx

  VisibleGeo = (const void **)this->VisibleGeo; /*0x70e1a1*/
  if ( VisibleGeo ) /*0x70e1a6*/
  {
    if ( this->UseAppendVirtual ) /*0x70e1a8*/
    {
      return (const void *)this->vtbl->AppendVirtual(this, a2); /*0x70e1b4*/
    }
    else
    {
      v4 = VisibleGeo[2]; /*0x70e1b6*/
      if ( VisibleGeo[1] == v4 ) /*0x70e1bc*/
        sub_732200(VisibleGeo, (unsigned int)VisibleGeo[3] + (_DWORD)v4); /*0x70e1c6*/
      result = *VisibleGeo; /*0x70e1ce*/
      *((_DWORD *)*VisibleGeo + (_DWORD)VisibleGeo[1]) = a2; /*0x70e1d4*/
      VisibleGeo[1] = (char *)VisibleGeo[1] + 1; /*0x70e1d7*/
    }
  }
  else
  {
    accumulator = renderer->member.super.accumulator; /*0x70e1e5*/
    if ( !accumulator ) /*0x70e1ee*/
      return ((const void *(__thiscall *)(NiGeometry *, NiDX9Renderer *))a2->__vftable->Render)(a2, renderer); /*0x70e1ee*/
    result = (const void *)(*(int (__thiscall **)(NiAccumulator *, NiGeometry *))(*(_DWORD *)accumulator + 0x58))( /*0x70e1f6*/
                             accumulator,
                             a2);
    if ( !(_BYTE)result )                       // NiAVObject culling traversal reached by the observed shader/geometry failure stack; this is downstream of malformed or absent render-property state, not a weapon-type dispatch. /*0x70e1fa*/
      return ((const void *(__thiscall *)(NiGeometry *, NiDX9Renderer *))a2->__vftable->Render)(a2, renderer); /*0x70e20d*/
  }
  return result; /*0x70e1db*/
}
