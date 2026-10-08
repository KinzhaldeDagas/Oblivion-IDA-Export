int __userpurge MagicTarget_RemoveEffects_::RemoveEffect@<eax>(
        ActiveEffect *a1@<esi>,
        char a2@<bpl>,
        double a3@<st0>,
        _DWORD *a4@<edi>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  ActiveEffect_Base_Remove(a1, a2, a3, 1); /*0x6a1fee*/
  return MagicTarget_RemoveEffects_::EffectLoop_Next(a4, a5, a6, a7, a8, a9);
}
