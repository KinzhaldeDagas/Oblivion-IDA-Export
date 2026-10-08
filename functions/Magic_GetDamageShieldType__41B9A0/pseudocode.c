signed int __cdecl Magic_GetDamageShieldType(int a1)
{
  if ( a1 == 0x47444853 ) /*0x41b9a9*/
    return Magic_GetDamageShieldType_::SHDG(); /*0x41b9a9*/
  if ( a1 == 0x47444946 ) /*0x41b9b0*/
    return Magic_GetDamageShieldType_::FIDG(); /*0x41b9b0*/
  return a1 != 0x47445246 ? 0 : 2;
}
