int __cdecl Magic_GetShieldType(signed int a1)
{
  if ( a1 <= 0x4853494C )
  {
    if ( a1 == 0x4853494C )
      return Magic_GetShieldType_::ShockShield();
    if ( a1 != 0x444C4853 && a1 != 0x47444552 )
    {
      if ( a1 == 0x48534946 )
        return Magic_GetShieldType_::FireShield();
      return Magic_GetShieldType_::Return_0();
    }
    return Magic_GetShieldType_::Shield_ReflDmg_ResNmlWeap();
  }
  if ( a1 != 0x48535246 )
  {
    if ( a1 != 0x574E5352 )
      return Magic_GetShieldType_::Return_0();
    return Magic_GetShieldType_::Shield_ReflDmg_ResNmlWeap();
  }
  return Magic_GetShieldType_::FrostShield();
}
