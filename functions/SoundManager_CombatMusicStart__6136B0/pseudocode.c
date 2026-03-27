void SoundManager_CombatMusicStart()
{
  void *sound; // ecx

  if ( !dword_B3B90C )
  {
    sound = OSGlobals->sound;
    if ( sound )
      sub_6ACD10(sound, 4u, 0, COERCE_INT(1.0));
  }
  ++dword_B3B90C;
}
