int __userpurge MagicTarget_HasMagicItem_::EffectLoopNext@<eax>(_DWORD *this@<ecx>, char a2@<al>, int a3)
{
  _DWORD *v3; // ecx

  v3 = (_DWORD *)*(this + 1);
  if ( v3 )
    return MagicTarget_HasMagicItem_::EffectLoopTest(v3, a2, a3);
  else
    return MagicTarget_HasMagicItem_::Done_(a3);
}
