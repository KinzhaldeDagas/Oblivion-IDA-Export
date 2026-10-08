BSTempEffectParticle *__thiscall BSTempEffectParticle::`scalar deleting destructor'(
        BSTempEffectParticle *this,
        char a2)
{
  BSTempEffectParticle_Destructor(this); /*0x5708d3*/
  if ( (a2 & 1) != 0 ) /*0x5708dd*/
    FormHeapFree((unsigned int)this); /*0x5708e0*/
  return this; /*0x5708ea*/
}
