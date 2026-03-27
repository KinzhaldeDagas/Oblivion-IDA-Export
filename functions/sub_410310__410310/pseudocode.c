OSGlobals *sub_410310()
{
  OSGlobals *result; // eax

  result = OSGlobals;
  if ( OSGlobals->sound )
  {
    if ( bSoundEnabled_Audio )
      return (OSGlobals *)BinkSetSoundSystem(BinkOpenDirectSound, 0);
  }
  return result;
}
