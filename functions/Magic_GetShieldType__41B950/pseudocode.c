int __cdecl Magic_GetShieldType(signed int a1)
{
  if ( a1 <= 0x4853494C ) /*0x41b959*/
  {
    if ( a1 == 0x4853494C ) /*0x41b95b*/
      return Magic_GetShieldType_::ShockShield(); /*0x41b95b*/
    if ( a1 != 0x444C4853 && a1 != 0x47444552 ) /*0x41b969*/
    {
      if ( a1 == 0x48534946 ) /*0x41b970*/
        return Magic_GetShieldType_::FireShield(); /*0x41b971*/
      return Magic_GetShieldType_::Return_0(); /*0x41b970*/
    }
    return Magic_GetShieldType_::Shield_ReflDmg_ResNmlWeap(); /*0x41b969*/
  }
  if ( a1 != 0x48535246 ) /*0x41b983*/
  {
    if ( a1 != 0x574E5352 ) /*0x41b98a*/
      return Magic_GetShieldType_::Return_0(); /*0x41b98b*/
    return Magic_GetShieldType_::Shield_ReflDmg_ResNmlWeap(); /*0x41b962*/
  }
  return Magic_GetShieldType_::FrostShield();
}
