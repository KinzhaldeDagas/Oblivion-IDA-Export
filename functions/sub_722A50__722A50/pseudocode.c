// 2026-10-08 verified Oblivion behavior: ECX geometry, raw stack modelData, RET4. Null modelData returns without mutation. Non-null reads collision at+A8, invokes vtable+54 then+50 with no stack arguments, then assigns geometryData+B4 through smart pointer helper. Correspondence to decoded Fallout/Xenon NiGeometry::SetModelData8224D988 is strong by control/call/data flow, but Fallout UpdateWorldData receives an update-data argument whereas Oblivion does not; offsets/ABI are not transplanted. Collision/destructor callbacks forbid treating this as an isolated pointer store. V265 keeps complete-call exclusion and old-pose revocation; only fresh subsequent owner proofs may publish.
void __thiscall NiGeometry_SetModelData(NiGeometry *self, NiGeometryData *modelData)
{
  void *m_spCollision; // ecx

  if ( modelData ) /*0x722a5a*/
  {
    m_spCollision = self->member.super.m_spCollision; /*0x722a5c*/
    if ( m_spCollision ) /*0x722a64*/
    {
      (*(void (__thiscall **)(void *))(*(_DWORD *)m_spCollision + 0x54))(m_spCollision); /*0x722a6b*/
      (*(void (__thiscall **)(void *))(*(_DWORD *)self->member.super.m_spCollision + 0x50))(self->member.super.m_spCollision); /*0x722a78*/
    }
    NiSmartPointer_Set__((Ni2DBuffer **)&self->member.geomData, (Ni2DBuffer *)modelData); /*0x722a81*/
  }
}
