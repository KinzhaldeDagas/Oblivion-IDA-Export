void __fastcall sub_4AE070(TESForm *this)
{
  if ( (this->member.flags & 8) == 0 )
  {
    sub_4B3D30(this);
    sub_46E220((_DWORD *)this + 0xFFFFFFFD, this != (TESForm *)0xC ? this : 0);
    TESForm_SetIsLinked(this, 1);
  }
}
