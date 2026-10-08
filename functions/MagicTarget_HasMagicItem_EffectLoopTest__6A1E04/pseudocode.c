int __userpurge MagicTarget_HasMagicItem_::EffectLoopTest@<eax>(
        _DWORD *this@<ecx>,
        char al0@<al>,
        int a3@<esi>,
        int a4)
{
  if ( al0 ) /*0x6a1e06*/
    return MagicTarget_HasMagicItem_::Done_(a4); /*0x6a1e06*/
  if ( *this && *(_DWORD *)(*this + 8) == a3 ) /*0x6a1e11*/
    return MagicTarget_HasMagicItem_::EffectLoopNext(this, 1, a4); /*0x6a1e14*/
  return MagicTarget_HasMagicItem_::EffectLoopNext(this, 0, a4);
}
