int __usercall MagicCaster_ApplyActiveMagicItem_::EffectLoop_ApplyOnSelf@<eax>(
        int a1@<esi>,
        int a2,
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
        int a13)
{
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x28))(a1) )
    LOBYTE(a6) = 1;
  return MagicCaster_ApplyActiveMagicItem_::EffectLoop_DestroyActvEff(
           a2,
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
           a13);
}
