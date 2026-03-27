int __userpurge MagicTarget_RemoveEffects_::EffectLoop_Check@<eax>(
        _DWORD *a1@<eax>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  if ( a1[1] || *a1 )
    return MagicTarget_RemoveEffects_::EffectLoop_Body(a2, a3, a4, a5, a6);
  else
    return MagicTarget_RemoveEffects_::Done_(a2, a3, a4);
}
