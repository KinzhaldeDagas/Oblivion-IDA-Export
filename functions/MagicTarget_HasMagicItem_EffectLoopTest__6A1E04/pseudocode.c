int __userpurge MagicTarget_HasMagicItem_::EffectLoopTest@<eax>(_DWORD *this@<ecx>, char al0@<al>, int a3)
{
  if ( al0 )
    return MagicTarget_HasMagicItem_::Done_(a3);
  else
    return MagicTarget_HasMagicItem_::EffectLoopNext(this, a3);
}
