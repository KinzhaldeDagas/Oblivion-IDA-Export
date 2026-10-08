_BYTE *__thiscall NiFrustum::InitFrustum(
        NiFrustum *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        char a8)
{
  this->Left = a2; /*0x70de7a*/
  this->Ortho = a8; /*0x70de80*/
  this->Right = a3; /*0x70de83*/
  this->Top = a4; /*0x70de8a*/
  this->Bottom = a5; /*0x70de91*/
  this->Near = a6; /*0x70de98*/
  this->Far = a7; /*0x70de9f*/
  return this; /*0x70dea2*/
}
