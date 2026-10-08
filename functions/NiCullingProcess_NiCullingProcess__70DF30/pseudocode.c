// CULLING audit 2026-09-27 (observed Oblivion behavior): Initializes 0x90-byte NiCullingProcess: UseAppendVirtual(+4)=0, VisibleGeo(+8)=constructor argument, Camera(+0x0C)=0, frustum(+0x10), plane set(+0x2C) and mask(+0x8C)=0x3F. SceneGraph constructor passes null. Do not assume a configured visible array on the ordinary world process.
NiCullingProcess *__thiscall NiCullingProcess_NiCullingProcess(
        NiCullingProcess *self,
        CullingVisibleGeometryArray *visibleArray)
{
  NiFrustumPlanes *p_Planes; // edi
  int i; // ebp

  self->vtbl = (NiCullingProcessVtbl *)&NiCullingProcess::`vftable'; /*0x70df4c*/
  self->UseAppendVirtual = 0; /*0x70df56*/
  NiFrustum::InitFrustum(&self->CameraFrustum, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0); /*0x70df61*/
  p_Planes = &self->Planes; /*0x70df69*/
  for ( i = 5; i >= 0; --i ) /*0x70df6b*/
  {
    sub_716DB0(p_Planes); /*0x70df72*/
    p_Planes = (NiFrustumPlanes *)((char *)p_Planes + 0x10); /*0x70df77*/
  }
  self->Planes.ActivePlanes = 0x3F; /*0x70df83*/
  self->VisibleGeo = visibleArray; /*0x70df8b*/
  self->Camera = 0; /*0x70df8e*/
  return self; /*0x70df8a*/
}
