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
  this->Left = a2;
  this->Ortho = a8;
  this->Right = a3;
  this->Top = a4;
  this->Bottom = a5;
  this->Near = a6;
  this->Far = a7;
  return this;
}
