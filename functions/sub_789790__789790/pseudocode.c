// Oblivion IdvFileError copy constructor: copies the binary runtime_error base/message then installs IdvFileError vftable.
OB_IdvFileError_010201A0 *__thiscall OB_IdvFileError_CopyCtor_010201A0(
        OB_IdvFileError_010201A0 *this,
        const OB_IdvFileError_010201A0 *source)
{
  OB_std_runtime_error_CopyCtor_010201A0( /*0x789798*/
    (OB_std_runtime_error_010201A0 *)this,
    (const OB_std_runtime_error_010201A0 *)source);
  *(_DWORD *)this->exceptionBase = &IdvFileError::`vftable'; /*0x78979d*/
  return this; /*0x7897a5*/
}
