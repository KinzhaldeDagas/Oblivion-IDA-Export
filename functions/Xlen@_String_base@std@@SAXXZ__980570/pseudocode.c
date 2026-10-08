void __cdecl __noreturn std::_String_base::_Xlen()
{
  _DWORD v0[10]; // [esp+10h] [ebp-50h] BYREF
  OB_stString28_010201A0 v1; // [esp+38h] [ebp-28h] BYREF
  int v2; // [esp+5Ch] [ebp-4h]

  sub_414750(&v1, "string too long"); /*0x980584*/
  v2 = 0; /*0x980589*/
  sub_4146E0((std::exception *)v0, &v1); /*0x980594*/
  v0[0] = &std::length_error::`vftable'; /*0x9805a2*/
  ThrowException__((DWORD)v0, &_TI3_AVlength_error_std__); /*0x9805a9*/
}
