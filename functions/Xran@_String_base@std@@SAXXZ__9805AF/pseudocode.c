void __cdecl __noreturn std::_String_base::_Xran()
{
  _DWORD v0[10]; // [esp+10h] [ebp-50h] BYREF
  OB_stString28_010201A0 v1; // [esp+38h] [ebp-28h] BYREF
  int v2; // [esp+5Ch] [ebp-4h]
  int savedregs; // [esp+60h] [ebp+0h]

  savedregs = 0x44; /*0x9805af*/
  sub_414750(&v1, "invalid string position"); /*0x9805c3*/
  v2 = 0; /*0x9805c8*/
  sub_4146E0((std::exception *)v0, &v1); /*0x9805d3*/
  v0[0] = &std::out_of_range::`vftable'; /*0x9805e1*/
  ThrowException__((DWORD)v0, &_TI3_AVout_of_range_std__); /*0x9805e8*/
}
