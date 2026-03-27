int __usercall MagicCaster_ApplyActiveMagicItem_::EffectLoop_ApplyOnTouch@<eax>(
        int a1@<eax>,
        char a2@<cl>,
        int a3@<ebx>,
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
        int a20,
        int a21,
        int a22,
        int a23,
        char a24)
{
  _DWORD *v24; // eax
  int v25; // eax

  if ( a1 == 1 )
  {
    if ( a2 )
      v24 = (_DWORD *)a20;
    else
      v24 = (_DWORD *)a21;
  }
  else
  {
    if ( !a2 )
      return MagicCaster_ApplyActiveMagicItem_::EffectLoop_DestroyActvEff(
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
               a17,
               a18);
    v24 = (_DWORD *)a20;
  }
  if ( a4 != v24 )
    *(_DWORD *)(a5 + 0x14) |= 0xEu;
  if ( !a13 )
    return MagicCaster_ApplyActiveMagicItem_::EffectLoop_ApplyOnTouch_NoTargetAOE(
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
             a20,
             a21,
             a22,
             a23,
             a24);
  v25 = (*(int (__thiscall **)(int))(*(_DWORD *)a6 + 0x30))(a6);
  if ( (**a13)(a13, a6, v25, a5, 0) )
    LOBYTE(a11) = 1;
  return MagicCaster_ApplyActiveMagicItem_::EffectLoop_ApplyOnTouch_TargetAOE(
           a3,
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
           a20,
           a21,
           a22,
           a23,
           a24);
}
