// CULLING audit 2026-09-27 (observed Oblivion behavior): With nonnull process.Camera(+0x0C), copies 0x1C-byte NiFrustum to +0x10, rebuilds planes at +0x2C using camera world transform(+0x64), then sets ActivePlanes(+0x8C)=0x3F. Reading planes at Process-hook entry is premature. A caller's zero mask before Process is overwritten by this setup.
void __thiscall NiCullingProcess::SetFrustum(NiCullingProcess *this, NiFrustum *a2)
{
  NiCamera *Camera; // edx

  Camera = this->Camera; /*0x70e043*/
  if ( Camera ) /*0x70e048*/
  {
    qmemcpy(&this->CameraFrustum, a2, sizeof(this->CameraFrustum)); /*0x70e05e*/
    NiFrustumPlanes_SetFromFrustumAndTransform( /*0x70e064*/
      &this->Planes,
      &this->CameraFrustum,
      &Camera->members.super.m_worldTransform);
    this->Planes.ActivePlanes = 0x3F; /*0x70e06a*/
  }
}
