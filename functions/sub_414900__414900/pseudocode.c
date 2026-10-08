// Oblivion 1.2.0.416: std::logic_error copy constructor. Copies the 0x0C-byte std::exception base, installs the logic_error vftable, initializes the 28-byte SSO message at +0x0C, then assigns the source message.
OB_std_logic_error_010201A0 *__thiscall OB_std_logic_error_CopyCtor_010201A0(
        OB_std_logic_error_010201A0 *this,
        const OB_std_logic_error_010201A0 *other)
{
  std::exception::exception((std::exception *)this, (const struct std::exception *)other); /*0x41492e*/
  this->vftable = &std::logic_error::`vftable'; /*0x41493a*/
  this->message.capacity = 0xF; /*0x414944*/
  this->message.size = 0; /*0x41494b*/
  this->message.storage.inlineData[0] = 0; /*0x414953*/
  OB_stString28_AssignSubstring_010201A0(&this->message, &other->message, 0, 0xFFFFFFFF); /*0x414956*/
  return this; /*0x41495d*/
}
