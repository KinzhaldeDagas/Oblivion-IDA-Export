// Oblivion runtime_error copy constructor: copies the std::exception base, installs runtime_error vftable, initializes the embedded 28-byte SSO string, and copies the source message.
OB_std_runtime_error_010201A0 *__thiscall OB_std_runtime_error_CopyCtor_010201A0(
        OB_std_runtime_error_010201A0 *this,
        const OB_std_runtime_error_010201A0 *source)
{
  std::exception::exception((std::exception *)this, (const struct std::exception *)source); /*0x6f85de*/
  *(_DWORD *)this->exceptionBase = &std::runtime_error::`vftable'; /*0x6f85ea*/
  this->message.capacity = 0xF; /*0x6f85f4*/
  this->message.size = 0; /*0x6f85fb*/
  this->message.storage.inlineData[0] = 0; /*0x6f8603*/
  OB_stString28_AssignSubstring_010201A0(&this->message, &source->message, 0, 0xFFFFFFFF); /*0x6f8606*/
  return this; /*0x6f860d*/
}
