std::exception *__thiscall sub_4146E0(std::exception *this, OB_stString28_010201A0 *source)
{
  std::exception::exception(this); /*0x414708*/
  *(_DWORD *)this = &std::logic_error::`vftable'; /*0x414712*/
  *((_DWORD *)this + 8) = 0; /*0x41471a*/
  *((_DWORD *)this + 9) = 0xF; /*0x41471d*/
  *((_BYTE *)this + 0x10) = 0; /*0x414729*/
  OB_stString28_AssignSubstring_010201A0((OB_stString28_010201A0 *)((char *)this + 0xC), source, 0, 0xFFFFFFFF); /*0x414731*/
  return this; /*0x414738*/
}
