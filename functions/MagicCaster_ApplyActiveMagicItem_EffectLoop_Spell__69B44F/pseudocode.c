int __usercall MagicCaster_ApplyActiveMagicItem_::EffectLoop_Spell@<eax>(
        _DWORD *a1@<edi>,
        int a2@<esi>,
        int a3@<ebp>,
        int a4,
        int a5,
        int a6,
        int a7,
        __int16 a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17)
{
  int v18; // [esp+0h] [ebp-Ch]

  *(float *)&v18 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)a2 + 0x2C))(a2, 0, 0.0); /*0x69b463*/
  ActiveEffect_Base_ApplyScalingFactor(a1, v18); /*0x69b466*/
  return MagicCaster_ApplyActiveMagicItem_::EffectLoop_CheckRange(
           a3,
           (int)a1,
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
           a14,
           a15,
           a16,
           a17);
}
