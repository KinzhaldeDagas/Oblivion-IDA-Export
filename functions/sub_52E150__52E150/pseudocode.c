// TESResponse defaults before TRDT overlay: DWORD0=0, DWORD4=50, DWORD8=0, byte12=0; bytes13..15 are not explicitly initialized. Response text starts empty.
TESResponse *__thiscall TESResponse::TESResponse(TESResponse *this)
{
  *(_DWORD *)this->trdt = 0; /*0x52e177*/
  *(_DWORD *)&this->trdt[4] = 0x32; /*0x52e179*/
  *(_DWORD *)&this->trdt[8] = 0; /*0x52e180*/
  this->trdt[0xC] = 0; /*0x52e183*/
  this->responseText.m_data = 0; /*0x52e186*/
  this->responseText.m_dataLen = 0; /*0x52e189*/
  this->responseText.m_bufLen = 0; /*0x52e18d*/
  FormHeapFree(0); /*0x52e194*/
  this->responseText.m_data = 0; /*0x52e19c*/
  this->responseText.m_bufLen = 0; /*0x52e19f*/
  this->responseText.m_dataLen = 0; /*0x52e1a3*/
  return this; /*0x52e1a9*/
}
