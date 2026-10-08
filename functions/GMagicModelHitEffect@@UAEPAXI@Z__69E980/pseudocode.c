MagicModelHitEffect *__thiscall MagicModelHitEffect::`scalar deleting destructor'(MagicModelHitEffect *this, char a2)
{
  MagicModelHitEffect::~MagicModelHitEffect(this); /*0x69e983*/
  if ( (a2 & 1) != 0 ) /*0x69e98d*/
    FormHeapFree((unsigned int)this); /*0x69e990*/
  return this; /*0x69e99a*/
}
