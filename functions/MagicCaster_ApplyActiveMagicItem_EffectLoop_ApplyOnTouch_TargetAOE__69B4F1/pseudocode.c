int __usercall MagicCaster_ApplyActiveMagicItem_::EffectLoop_ApplyOnTouch_TargetAOE@<eax>(
        int a1@<ebx>,
        _DWORD *a2@<ebp>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        char a20)
{
  if ( EffectItem_GetArea(a2) <= 0 || !a1 )
    return MagicCaster_ApplyActiveMagicItem_::EffectLoop_DestroyActvEff(
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14);
  (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x174))(a1);
  return MagicCaster_ApplyActiveMagicItem_::EffectLoop_ApplyOnTouch_AOE(a1, a3, a4, a5, a6);
}
