NiCullingProcess *__thiscall NiCullingProcess_NiCullingProcess(NiCullingProcess *this, void *a2)
{
  NiFrustumPlanes *p_Planes; // edi
  int i; // ebp

  this->vtbl = (NiCullingProcessVtbl *)&NiCullingProcess::`vftable';
  this->UseAppendVirtual = 0;
  NiFrustum::InitFrustum(&this->CameraFrustum, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0);
  p_Planes = &this->Planes;
  for ( i = 5; i >= 0; --i )
  {
    sub_716DB0(p_Planes);
    p_Planes = (NiFrustumPlanes *)((char *)p_Planes + 0x10);
  }
  this->Planes.ActivePlanes = 0x3F;
  this->VisibleGeo = a2;
  this->Camera = 0;
  return this;
}
