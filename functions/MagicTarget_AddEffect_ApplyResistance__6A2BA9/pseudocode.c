int __usercall MagicTarget_AddEffect_::ApplyResistance@<eax>(
        _DWORD *a1@<esi>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  ActiveEffect_Base_ApplyScalingFactor(a1, a10);
  return MagicTarget_AddEffect_::AddEffectToTarget();
}
