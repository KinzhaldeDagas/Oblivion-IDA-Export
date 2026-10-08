OB_std_runtime_error_010201A0 *__thiscall sub_6F8AD0(
        OB_std_runtime_error_010201A0 *this,
        OB_std_runtime_error_010201A0 *source)
{
  OB_std_runtime_error_CopyCtor_010201A0(this, source); /*0x6f8ad8*/
  *(_DWORD *)this->exceptionBase = &std::ios_base::failure::`vftable'; /*0x6f8add*/
  return this; /*0x6f8ae5*/
}
