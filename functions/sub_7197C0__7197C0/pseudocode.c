void __thiscall sub_7197C0(NiCamera *this)
{
  NiAVObject_UpdateWorldTransform((NiAVObject *)this); /*0x7197c3*/
  this->members.MinNearPlaneDist = this->members.super.m_worldTransform.rot.data[0][0]; /*0x7197cb*/
  this->members.MaxFarNearRatio = this->members.super.m_worldTransform.rot.data[1][0]; /*0x7197d4*/
  this->members.ViewPort.l = this->members.super.m_worldTransform.rot.data[2][0]; /*0x7197dd*/
  ++LODWORD(this->members.WorldToCam[0][3]); /*0x7197e3*/
}
