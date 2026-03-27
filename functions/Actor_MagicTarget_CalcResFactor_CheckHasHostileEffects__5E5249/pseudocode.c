int __userpurge Actor_MagicTarget_CalcResFactor_::CheckHasHostileEffects@<eax>(
        void *ebx0@<ebx>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        _DWORD *a7)
{
  if ( EffectItemList_HasHostile((_DWORD *)ebx0 + 3) )
    return Actor_MagicTarget_CalcResFactor_::CheckIsWearable(ebx0, a2, a3, a4, a5, a6, a7);
  else
    return Actor_MagicTarget_CalcResFactor_::Return_1f(a2, a3, a4);
}
