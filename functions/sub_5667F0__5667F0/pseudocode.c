void __thiscall sub_5667F0(TESForm *this)
{
  _DWORD *v2; // ecx
  _DWORD *v3; // ecx

  if ( (this->member.flags & 8) == 0 ) /*0x5667fb*/
  {
    v2 = *((_DWORD **)this + 9); /*0x5667fd*/
    if ( v2 ) /*0x566802*/
      sub_569B20(v2, this); /*0x566805*/
    v3 = *((_DWORD **)this + 0xA); /*0x56680a*/
    if ( v3 ) /*0x56680f*/
      sub_56A140(v3, this); /*0x566812*/
    if ( this != (TESForm *)0xFFFFFFCC ) /*0x56681c*/
      sub_56A480((UInt32 *)this + 0xD, this); /*0x56681f*/
    TESForm_SetIsLinked(this, 1); /*0x566828*/
  }
}
