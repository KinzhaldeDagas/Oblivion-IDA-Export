char __usercall Cmd_Cast_::CheckOnTouch@<al>(
        _DWORD *a1@<ebx>,
        int a2@<edi>,
        double a3@<st0>,
        int a4@<ebp>,
        TESObjectREFR *a5@<esi>,
        int a6,
        int a7,
        int a8,
        int a9)
{
  char v9; // al

  EffectItemList_HasTouchEffect((_DWORD *)(a9 + 0xC)); /*0x502060*/
  if ( v9 ) /*0x502067*/
    return Cmd_Cast_::CastOnTouch((int)a1, a2, a3); /*0x502068*/
  else
    return Cmd_Cast_::CastOnSelf(a1, a4, a5); /*0x502067*/
}
