char __thiscall sub_674860(PlayerCharacter **this, PlayerCharacter *a2, int a3)
{
  PlayerCharacter **v3; // eax

  if ( !a2 || a2 == TESDataHandler_g_PlayerRef )
    return 1;
  v3 = this + 0x18;
  if ( this != (PlayerCharacter **)0xFFFFFFA0 )
  {
    while ( *v3 && a3 > 0 )
    {
      if ( *v3 == a2 )
        return 1;
      v3 = (PlayerCharacter **)v3[1];
      if ( !v3 )
        return 0;
    }
  }
  return 0;
}
