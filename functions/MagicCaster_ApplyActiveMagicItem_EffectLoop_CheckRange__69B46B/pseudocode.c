int __usercall MagicCaster_ApplyActiveMagicItem_::EffectLoop_CheckRange@<eax>(
        int a1@<ebp>,
        int a2@<edi>,
        int a3,
        int a4,
        int a5,
        int a6,
        __int16 a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  if ( *(_DWORD *)(a1 + 0x10) || HIBYTE(a7) )
    return MagicCaster_ApplyActiveMagicItem_::EffectLoop_ApplyOnTouch(HIBYTE(a7));
  if ( a1 != a16 )
    *(_DWORD *)(a2 + 0x14) |= 0xEu;
  return MagicCaster_ApplyActiveMagicItem_::EffectLoop_ApplyOnSelf(a3, a4, a5, a6, a7);
}
