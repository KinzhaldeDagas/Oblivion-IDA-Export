char __thiscall sub_674860(PlayerCharacter **this, PlayerCharacter *a2, int a3)
{
  PlayerCharacter **v3; // eax

  if ( !a2 || a2 == reference ) /*0x67486e*/
    return 1; /*0x6748a1*/
  v3 = this + 0x18; /*0x674870*/
  if ( this != (PlayerCharacter **)0xFFFFFFA0 ) /*0x674876*/
  {
    while ( *v3 && a3 > 0 ) /*0x674888*/
    {
      if ( *v3 == a2 ) /*0x67488c*/
        return 1; /*0x67489e*/
      v3 = (PlayerCharacter **)v3[1]; /*0x67488e*/
      if ( !v3 ) /*0x674893*/
        return 0; /*0x674893*/
    }
  }
  return 0; /*0x674898*/
}
