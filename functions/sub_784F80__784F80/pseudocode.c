// Oblivion 1.2.0.416: std::out_of_range copy constructor. Copies the std::logic_error base through 0x414900, then installs the out_of_range vftable; both observed objects retain the same 0x28-byte layout.
OB_std_out_of_range_010201A0 *__thiscall OB_std_out_of_range_CopyCtor_010201A0(
        OB_std_out_of_range_010201A0 *this,
        const OB_std_out_of_range_010201A0 *other)
{
  OB_std_logic_error_CopyCtor_010201A0((OB_std_logic_error_010201A0 *)this, (const OB_std_logic_error_010201A0 *)other); /*0x784f88*/
  this->vftable = &std::out_of_range::`vftable'; /*0x784f8d*/
  return this; /*0x784f95*/
}
