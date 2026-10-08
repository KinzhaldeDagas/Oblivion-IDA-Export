// Oblivion runtime_error constructor from the 28-byte SpeedTree small string: constructs std::exception, installs runtime_error vftable, initializes SSO state, and copies the message.
OB_std_runtime_error_010201A0 *__thiscall OB_std_runtime_error_CtorFromString_010201A0(
        OB_std_runtime_error_010201A0 *this,
        const OB_stString28_010201A0 *message)
{
  std::exception::exception((std::exception *)this); /*0x6f7df8*/
  *(_DWORD *)this->exceptionBase = &std::runtime_error::`vftable'; /*0x6f7e02*/
  this->message.size = 0; /*0x6f7e0a*/
  this->message.capacity = 0xF; /*0x6f7e0d*/
  this->message.storage.inlineData[0] = 0; /*0x6f7e19*/
  OB_stString28_AssignSubstring_010201A0(&this->message, message, 0, 0xFFFFFFFF); /*0x6f7e21*/
  return this; /*0x6f7e28*/
}
