MagicShaderHitEffect *__thiscall MagicShaderHitEffect::`scalar deleting destructor'(
        MagicShaderHitEffect *this,
        char a2)
{
  MagicShaderHitEffect::~MagicShaderHitEffect(this); /*0x6a16d3*/
  if ( (a2 & 1) != 0 ) /*0x6a16dd*/
    FormHeapFree((unsigned int)this); /*0x6a16e0*/
  return this; /*0x6a16ea*/
}
