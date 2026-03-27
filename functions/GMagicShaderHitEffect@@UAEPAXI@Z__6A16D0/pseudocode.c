MagicShaderHitEffect *__thiscall MagicShaderHitEffect::`scalar deleting destructor'(
        MagicShaderHitEffect *this,
        char a2)
{
  MagicShaderHitEffect::~MagicShaderHitEffect(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
