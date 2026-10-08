void SoundManager_CombatMusicStart()
{
  char *sound; // ecx

  if ( !unk_B3B90C ) /*0x6136b0*/
  {
    sound = (char *)MEMORY[0xB33398]->sound; /*0x6136be*/
    if ( sound ) /*0x6136c3*/
      sub_6ACD10(sound, 4u, 0, COERCE_INT(1.0)); /*0x6136cf*/
  }
  ++unk_B3B90C; /*0x6136d4*/
}
