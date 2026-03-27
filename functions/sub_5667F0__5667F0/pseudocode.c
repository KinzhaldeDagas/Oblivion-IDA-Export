void __thiscall sub_5667F0(TESForm *this)
{
  _DWORD *v2; // ecx
  _DWORD *v3; // ecx

  if ( (this->member.flags & 8) == 0 )
  {
    v2 = *((_DWORD **)this + 9);
    if ( v2 )
      sub_569B20(v2, this);
    v3 = *((_DWORD **)this + 0xA);
    if ( v3 )
      sub_56A140(v3, this);
    if ( this != (TESForm *)0xFFFFFFCC )
      sub_56A480((UInt32 *)this + 0xD, this);
    TESForm_SetIsLinked(this, 1);
  }
}
