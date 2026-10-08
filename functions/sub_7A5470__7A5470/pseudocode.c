// CProjectedShadow constructor: zeros right/up/out vectors and initializes the embedded 28-byte SpeedTree string for the shadow-map filename.
OB_CProjectedShadow_010201A0 *__thiscall OB_CProjectedShadow_ctor_010201A0(OB_CProjectedShadow_010201A0 *this)
{
  this->right.z = 0.0; /*0x7a5474*/
  this->right.y = 0.0; /*0x7a5479*/
  this->right.x = 0.0; /*0x7a547c*/
  this->up.z = 0.0; /*0x7a547e*/
  this->up.y = 0.0; /*0x7a5481*/
  this->up.x = 0.0; /*0x7a5484*/
  this->out.z = 0.0; /*0x7a5487*/
  this->out.y = 0.0; /*0x7a548a*/
  this->out.x = 0.0; /*0x7a548d*/
  *(_DWORD *)&this->selfShadowMapString[0x18] = 0xF; /*0x7a5490*/
  *(_DWORD *)&this->selfShadowMapString[0x14] = 0; /*0x7a5497*/
  this->selfShadowMapString[4] = 0; /*0x7a549a*/
  return this; /*0x7a549d*/
}
