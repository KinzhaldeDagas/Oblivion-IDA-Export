// AVU decode: resolves effect-specific resistance AV from effect setting +0x68, excluding -1 and the same AV as the magic-item bucket.
int __userpurge Actor_MagicTarget_CalcResFactor_::GetTargetEffectItemResistance@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        int a3@<ebp>,
        int a4@<esi>,
        int a5,
        float a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // eax

  if ( !a2 ) /*0x5e5378*/
    return Actor_MagicTarget_CalcResFactor_::GetCasterLuck(a3, 0, a4, a5, a6, a7); /*0x5e5378*/
  v11 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a11 + 0xC) + 0x1C) + 0x68);// EffectSetting +0x68 supplies a second resistance actor value; it is skipped when absent or identical to the item-level bucket. /*0x5e5384*/
  if ( v11 == 0xFFFFFFFF || v11 == a1 ) /*0x5e538e*/
    return Actor_MagicTarget_CalcResFactor_::GetCasterLuck(a3, a2, a4, a5, a6, a7); /*0x5e538e*/
  ((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)a2 + 0x288))(a2, v11); /*0x5e539b*/
  return Actor_MagicTarget_CalcResFactor_::GetCasterLuck(a3, a2, a4, a5, a6, a7);
}
