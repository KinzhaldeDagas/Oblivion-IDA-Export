int __thiscall sub_716BA0(NiRenderer *this, _DWORD *Size)
{
  size_t v4; // [esp-4h] [ebp-Ch]

  LODWORD(v4) = Size; /*0x716ba6*/
  sub_721610(this, v4); /*0x716ba9*/
  return sub_713620(Size, (int)&this->members.propertyState); /*0x716bb9*/
}
