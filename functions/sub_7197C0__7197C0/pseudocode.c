NiNode *__thiscall sub_7197C0(NiCamera *this)
{
  NiNode *result; // eax

  result = sub_70C120(this);
  this->members.MinNearPlaneDist = this->members.super.m_worldTransform.rot.data[0][0];
  this->members.MaxFarNearRatio = this->members.super.m_worldTransform.rot.data[1][0];
  this->members.ViewPort.l = this->members.super.m_worldTransform.rot.data[2][0];
  ++LODWORD(this->members.WorldToCam[0][3]);
  return result;
}
