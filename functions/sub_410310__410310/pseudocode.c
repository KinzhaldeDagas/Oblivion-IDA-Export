OSGlobals *sub_410310()
{
  OSGlobals *result; // eax

  result = MEMORY[0xB33398]; /*0x410310*/
  if ( MEMORY[0xB33398]->sound ) /*0x410315*/
  {
    if ( bSoundEnabled_Audio ) /*0x410322*/
      return (OSGlobals *)BinkSetSoundSystem(BinkOpenDirectSound, 0); /*0x41032d*/
  }
  return result; /*0x410333*/
}
