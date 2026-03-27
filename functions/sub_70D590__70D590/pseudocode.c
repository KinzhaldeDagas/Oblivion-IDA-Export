NiCamera *__thiscall sub_70D590(NiCamera *this)
{
  double v2; // st5
  double v3; // st4
  float y; // ecx
  float z; // edx

  NiAVObject::NiAVObject((NiAVObject *)this);
  this->vtbl = (NiAVObjectVtbl *)&NiCamera::`vftable';
  NiFrustum::SetOrtho(&this->members.Frustum, 0);
  this->members.ViewPort.l = 0.0;
  this->members.ViewPort.r = 0.0;
  this->members.ViewPort.t = 0.0;
  this->members.ViewPort.b = 0.0;
  this->members.Frustum.Ortho = 0;
  this->members.Frustum.Near = 1.0;
  this->members.Frustum.Far = fConstant_2;
  v2 = flt_A3D65C;
  this->members.Frustum.Top = flt_A3D65C;
  v3 = flt_A45E4C;
  this->members.Frustum.Bottom = flt_A45E4C;
  this->members.Frustum.Left = v3;
  this->members.Frustum.Right = v2;
  this->members.MinNearPlaneDist = flt_A2FAAC;
  this->members.MaxFarNearRatio = flt_A5A04C;
  this->members.ViewPort.t = 1.0;
  this->members.ViewPort.r = 1.0;
  this->members.LODAdjust = 1.0;
  this->members.ViewPort.b = 0.0;
  this->members.ViewPort.l = 0.0;
  sub_70C120(this);
  sub_70CC90(this);
  y = this->members.super.m_worldTransform.pos.y;
  z = this->members.super.m_worldTransform.pos.z;
  this->members.super.m_kWorldBound.Center.x = this->members.super.m_worldTransform.pos.x;
  this->members.super.m_kWorldBound.Center.y = y;
  this->members.super.m_kWorldBound.Center.z = z;
  return this;
}
