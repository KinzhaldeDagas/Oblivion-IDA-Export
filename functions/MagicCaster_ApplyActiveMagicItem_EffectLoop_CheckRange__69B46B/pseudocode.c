int __usercall MagicCaster_ApplyActiveMagicItem_::EffectLoop_CheckRange@<eax>(
        _DWORD *a1@<ebp>,
        int a2@<edi>,
        int a3@<esi>,
        int a4@<ebx>,
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
        _DWORD *a18,
        int a19,
        int a20,
        int a21,
        char a22)
{
  int v22; // eax

  v22 = a1[4]; /*0x69b46b*/
  if ( v22 || BYTE1(a9) ) /*0x69b478*/
    return MagicCaster_ApplyActiveMagicItem_::EffectLoop_ApplyOnTouch( /*0x69b474*/
             v22,
             SBYTE1(a9),
             a4,
             a1,
             a2,
             a3,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             (unsigned __int8 (__thiscall ***)(_DWORD, int, int, int, _DWORD))a11,
             a12,
             a13,
             a14,
             a15,
             a16,
             a17,
             (int)a18,
             a19,
             a20,
             a21,
             a22);
  if ( a1 != a18 ) /*0x69b47e*/
    *(_DWORD *)(a2 + 0x14) |= 0xEu; /*0x69b480*/
  return MagicCaster_ApplyActiveMagicItem_::EffectLoop_ApplyOnSelf(
           a3,
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
           a16);
}
