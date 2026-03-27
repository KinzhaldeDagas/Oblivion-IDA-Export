void __thiscall NiCullingProcess::SetFrustum(NiCullingProcess *this, NiFrustum *a2)
{
  NiCamera *Camera; // edx

  Camera = this->Camera;
  if ( Camera )
  {
    qmemcpy(&this->CameraFrustum, a2, sizeof(this->CameraFrustum));
    sub_717A40(&this->Planes, &this->CameraFrustum, &Camera->members.super.m_worldTransform);
    this->Planes.ActivePlanes = 0x3F;
  }
}
