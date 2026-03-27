int __userpurge MagicTarget_RemoveEffects_::RemoveEffect_@<eax>(
        ActiveEffect *a1@<esi>,
        char a2@<bpl>,
        double a3@<st0>,
        int a4,
        int a5,
        int a6)
{
  ActiveEffect_Base_Remove(a1, a2, a3, 1);
  return MagicTarget_RemoveEffects_::Done_(a4, a5, a6);
}
