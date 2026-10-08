TESObjectLAND *__thiscall TESObjectLAND::TESObjectLAND(TESObjectLAND *this)
{
  TESForm_constr((TESForm *)this); /*0x4c4c29*/
  *((_DWORD *)this + 6) = &TESChildCell::`vftable'; /*0x4c4c2e*/
  *(_DWORD *)this = &TESObjectLAND::`vftable'{for `TESObjectLAND'}; /*0x4c4c37*/
  *((_DWORD *)this + 6) = &TESObjectLAND::`vftable'{for `TESChildCell'}; /*0x4c4c3d*/
  if ( !unk_B35BDC ) /*0x4c4c44*/
    sub_4C1840(); /*0x4c4c50*/
  *((_DWORD *)this + 7) = 0; /*0x4c4c55*/
  *((_DWORD *)this + 8) = 0; /*0x4c4c58*/
  *((_BYTE *)this + 4) = 0x36; /*0x4c4c5b*/
  *((_DWORD *)this + 9) = 0; /*0x4c4c5f*/
  ++unk_B35BE0; /*0x4c4c62*/
  return this; /*0x4c4c6b*/
}
