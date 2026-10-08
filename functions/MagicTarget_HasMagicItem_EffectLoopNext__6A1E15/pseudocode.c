int __userpurge MagicTarget_HasMagicItem_::EffectLoopNext@<eax>(_DWORD *this@<ecx>, char a2@<al>, int a3@<esi>, int a4)
{
  _DWORD *v4; // ecx

  v4 = (_DWORD *)*(this + 1); /*0x6a1e15*/
  if ( v4 ) /*0x6a1e1a*/
    return MagicTarget_HasMagicItem_::EffectLoopTest(v4, a2, a3, a4); /*0x6a1e1a*/
  else
    return MagicTarget_HasMagicItem_::Done_(a4); /*0x6a1e1b*/
}
