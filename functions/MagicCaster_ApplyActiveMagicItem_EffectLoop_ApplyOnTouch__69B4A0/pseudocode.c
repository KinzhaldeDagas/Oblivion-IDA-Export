int __usercall MagicCaster_ApplyActiveMagicItem_::EffectLoop_ApplyOnTouch@<eax>(
        int a1@<eax>,
        char a2@<cl>,
        TESObjectREFR *a3@<ebx>,
        _DWORD *a4@<ebp>,
        int a5@<edi>,
        int a6@<esi>,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        unsigned __int8 (__thiscall ***a13)(_DWORD, int, int, int, _DWORD),
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        _DWORD *a20,
        _DWORD *a21,
        __int64 a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37)
{
  _DWORD *v37; // eax
  int v38; // eax

  if ( a1 == 1 ) /*0x69b4a3*/
  {
    if ( a2 ) /*0x69b4b5*/
      v37 = a20; /*0x69b4b7*/
    else
      v37 = a21; /*0x69b4bd*/
  }
  else
  {
    if ( !a2 ) /*0x69b4a7*/
      return MagicCaster_ApplyActiveMagicItem_::EffectLoop_DestroyActvEff( /*0x69b4a7*/
               a3,
               (void (__thiscall ***)(_DWORD, int))a5,
               a6,
               a7,
               a8,
               a9,
               a10,
               a11,
               a12,
               (int)a13,
               a14,
               a15,
               a16,
               a17,
               a18,
               a19,
               (int)a20,
               (int)a21,
               a22,
               a23,
               a24,
               a25,
               a26,
               a27,
               a28,
               a29,
               a30,
               a31,
               a32,
               a33,
               a34,
               a35,
               a36,
               a37);
    v37 = a20; /*0x69b4ad*/
  }
  if ( a4 != v37 ) /*0x69b4c3*/
    *(_DWORD *)(a5 + 0x14) |= 0xEu; /*0x69b4c5*/
  if ( !a13 ) /*0x69b4ce*/
    return MagicCaster_ApplyActiveMagicItem_::EffectLoop_ApplyOnTouch_NoTargetAOE( /*0x69b4ce*/
             a2,
             a4,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             0,
             a14,
             a15,
             a16,
             a17,
             a18,
             a19,
             (int)a20,
             (int)a21,
             a22,
             SHIDWORD(a22),
             a23);
  v38 = (*(int (__thiscall **)(int))(*(_DWORD *)a6 + 0x30))(a6); /*0x69b4d7*/
  if ( (**a13)(a13, a6, v38, a5, 0) ) /*0x69b4e6*/
    LOBYTE(a11) = 1; /*0x69b4ec*/
  return MagicCaster_ApplyActiveMagicItem_::EffectLoop_ApplyOnTouch_TargetAOE(
           (int)a3,
           a4,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           (int)a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           (int)a20,
           (int)a21,
           a22,
           SHIDWORD(a22),
           a23);
}
