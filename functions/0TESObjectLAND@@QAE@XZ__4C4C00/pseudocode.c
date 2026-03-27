TESObjectLAND *__thiscall TESObjectLAND::TESObjectLAND(TESObjectLAND *this)
{
  TESForm_constr((TESForm *)this);
  *((_DWORD *)this + 6) = &TESChildCell::`vftable';
  *(_DWORD *)this = &TESObjectLAND::`vftable'{for `TESObjectLAND'};
  *((_DWORD *)this + 6) = &TESObjectLAND::`vftable'{for `TESChildCell'};
  if ( !byte_B35BDC )
    sub_4C1840();
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_BYTE *)this + 4) = 0x36;
  *((_DWORD *)this + 9) = 0;
  ++dword_B35BE0;
  return this;
}
