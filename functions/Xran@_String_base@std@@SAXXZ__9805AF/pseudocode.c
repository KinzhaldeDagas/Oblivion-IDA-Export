void __cdecl __noreturn std::_String_base::_Xran()
{
  _DWORD v0[10]; // [esp+10h] [ebp-50h] BYREF
  _DWORD v1[10]; // [esp+38h] [ebp-28h] BYREF
  int savedregs; // [esp+60h] [ebp+0h]

  savedregs = 0x44;
  sub_414750((int)v1, "invalid string position");
  v1[9] = 0;
  sub_4146E0((std::exception *)v0, v1);
  v0[0] = &std::out_of_range::`vftable';
  ThrowException__((int)v0, &_TI3_AVout_of_range_std__);
}
