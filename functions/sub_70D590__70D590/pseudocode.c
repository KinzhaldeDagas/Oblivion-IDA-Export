NiCamera *__thiscall sub_70D590(NiCamera *this)
{
  double v2; // st5
  double v3; // st4
  float y; // ecx
  float z; // edx

  NiAVObject::NiAVObject((NiAVObject *)this); /*0x70d5b9*/
  this->vtbl = (NiAVObjectVtbl *)&NiCamera::`vftable'; /*0x70d5d0*/
  NiFrustum::SetOrtho(&this->members.Frustum, 0); /*0x70d5d6*/
  this->members.ViewPort.l = 0.0; /*0x70d5dd*/
  this->members.ViewPort.r = 0.0; /*0x70d5e5*/
  this->members.ViewPort.t = 0.0; /*0x70d5eb*/
  this->members.ViewPort.b = 0.0; /*0x70d5f1*/
  this->members.Frustum.Ortho = 0; /*0x70d5f9*/
  this->members.Frustum.Near = 1.0; /*0x70d600*/
  this->members.Frustum.Far = fConstant_2; /*0x70d60c*/
  v2 = kHeadBodyNormalMatchRadius; /*0x70d612*/
  this->members.Frustum.Top = kHeadBodyNormalMatchRadius; /*0x70d618*/
  v3 = flt_A45E4C; /*0x70d61e*/
  this->members.Frustum.Bottom = flt_A45E4C; /*0x70d624*/
  this->members.Frustum.Left = v3; /*0x70d62a*/
  this->members.Frustum.Right = v2; /*0x70d62c*/
  this->members.MinNearPlaneDist = kFaceEarNormalMatchRadius; /*0x70d638*/
  this->members.MaxFarNearRatio = flt_A5A04C; /*0x70d644*/
  this->members.ViewPort.t = 1.0; /*0x70d64a*/
  this->members.ViewPort.r = 1.0; /*0x70d650*/
  this->members.LODAdjust = 1.0;                // Pass330 decode: the per-light NiCamera constructor initializes LODAdjust (+0x120) to 1.0; ShadowSceneLight::Render does not override it before caster traversal. /*0x70d656*/
  this->members.ViewPort.b = 0.0; /*0x70d65c*/
  this->members.ViewPort.l = 0.0; /*0x70d662*/
  NiAVObject_UpdateWorldTransform((NiAVObject *)this); /*0x70d668*/
  sub_70CC90(this); /*0x70d66f*/
  y = this->members.super.m_worldTransform.pos.y; /*0x70d67a*/
  z = this->members.super.m_worldTransform.pos.z; /*0x70d680*/
  this->members.super.m_kWorldBound.Center.x = this->members.super.m_worldTransform.pos.x; /*0x70d686*/
  this->members.super.m_kWorldBound.Center.y = y; /*0x70d689*/
  this->members.super.m_kWorldBound.Center.z = z; /*0x70d68c*/
  return this; /*0x70d691*/
}
