NiNode *__thiscall sub_73D1E0(NiCamera *this)
{
  NiNode *result; // eax

  result = sub_725410(this);
  this->members.ViewPort.r = this->members.super.m_worldTransform.rot.data[0][0];
  this->members.ViewPort.t = this->members.super.m_worldTransform.rot.data[1][0];
  this->members.ViewPort.b = this->members.super.m_worldTransform.rot.data[2][0];
  ++LODWORD(this->members.WorldToCam[0][3]);
  return result;
}
