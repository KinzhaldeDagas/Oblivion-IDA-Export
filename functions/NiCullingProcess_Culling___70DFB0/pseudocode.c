// CULLING audit 2026-09-27 (observed Oblivion behavior): Base NiCullingProcess culler, not BSCullingProcess-specific. Object bound is +0x20; six planes start at process+0x2C; ActivePlanes at +0x8C. Tests active bits, rejects result 2, clears result-1 bits for descendant traversal, then restores saved mask after virtual object OnVisible(+0x7C). Mask zero directly dispatches OnVisible. CULLING's full-six-plane guard repeats work at the known geometry boundary; a native rejection is not a plugin saved draw.
void __thiscall NiCullingProcess_CullBoundAndDispatch(NiCullingProcess *self, NiAVObject *object)
{
  unsigned int v3; // edi
  NiFrustumPlanes *p_Planes; // ebx
  int v5; // eax
  UInt32 ActivePlanes; // [esp+4h] [ebp-4h]

  ActivePlanes = self->Planes.ActivePlanes; /*0x70dfbc*/
  if ( ActivePlanes ) /*0x70dfc0*/
  {
    v3 = 0; /*0x70dfd6*/
    p_Planes = &self->Planes; /*0x70dfd8*/
    do /*0x70e019*/
    {
      if ( ((1 << v3) & self->Planes.ActivePlanes) != 0 ) /*0x70dfef*/
      {
        v5 = NiBound_ClassifyAgainstPlane(&object->members.m_kWorldBound, p_Planes->CullingPlanes); /*0x70dff9*/
        if ( v5 == 2 ) /*0x70e001*/
          break; /*0x70e001*/
        if ( v5 == 1 ) /*0x70e006*/
          self->Planes.ActivePlanes &= ~(1 << v3); /*0x70e00a*/
      }
      ++v3; /*0x70e010*/
      p_Planes = (NiFrustumPlanes *)((char *)p_Planes + 0x10); /*0x70e013*/
    }
    while ( v3 < 6 ); /*0x70e019*/
    if ( v3 == 6 ) /*0x70e021*/
      object->vtbl->OnVisible(object, self); /*0x70e02d*/
    self->Planes.ActivePlanes = ActivePlanes; /*0x70e033*/
  }
  else
  {
    object->vtbl->OnVisible(object, self); /*0x70dfcc*/
  }
}
