int __usercall MagicTarget_AddEffect_::ApplyResistance@<eax>(
        _DWORD *a1@<esi>,
        char a2@<bpl>,
        int a3@<edi>,
        double a4@<st1>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  ActiveEffect_Base_ApplyScalingFactor(a1, a13); /*0x6a2bb3*/
  return MagicTarget_AddEffect_::AddEffectToTarget(a2, a3, (int)a1, a4, *(float *)&a13, a5, a6, a7);
}
