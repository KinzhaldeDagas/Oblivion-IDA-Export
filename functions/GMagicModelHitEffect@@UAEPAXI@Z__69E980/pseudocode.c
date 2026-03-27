MagicModelHitEffect *__thiscall MagicModelHitEffect::`scalar deleting destructor'(MagicModelHitEffect *this, char a2)
{
  MagicModelHitEffect::~MagicModelHitEffect(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
