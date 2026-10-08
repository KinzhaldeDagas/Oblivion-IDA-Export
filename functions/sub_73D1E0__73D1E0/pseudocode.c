void __thiscall sub_73D1E0(NiCamera *this)
{
  sub_725410(this); /*0x73d1e3*/
  this->members.ViewPort.r = this->members.super.m_worldTransform.rot.data[0][0]; /*0x73d1eb*/
  this->members.ViewPort.t = this->members.super.m_worldTransform.rot.data[1][0]; /*0x73d1f4*/
  this->members.ViewPort.b = this->members.super.m_worldTransform.rot.data[2][0]; /*0x73d1fd*/
  ++LODWORD(this->members.WorldToCam[0][3]); /*0x73d203*/
}
