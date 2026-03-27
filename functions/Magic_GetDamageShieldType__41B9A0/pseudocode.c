signed int __cdecl Magic_GetDamageShieldType(int a1)
{
  if ( a1 == 0x47444853 )
    return Magic_GetDamageShieldType_::SHDG();
  if ( a1 == 0x47444946 )
    return Magic_GetDamageShieldType_::FIDG();
  return a1 != 0x47445246 ? 0 : 2;
}
