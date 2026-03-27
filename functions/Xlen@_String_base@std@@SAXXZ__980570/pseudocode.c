void __cdecl __noreturn std::_String_base::_Xlen()
{
  _DWORD v0[10]; // [esp+10h] [ebp-50h] BYREF
  _DWORD v1[10]; // [esp+38h] [ebp-28h] BYREF

  sub_414750((int)v1, "string too long");
  v1[9] = 0;
  sub_4146E0((std::exception *)v0, v1);
  v0[0] = &std::length_error::`vftable';
  ThrowException__((int)v0, &_TI3_AVlength_error_std__);
}
