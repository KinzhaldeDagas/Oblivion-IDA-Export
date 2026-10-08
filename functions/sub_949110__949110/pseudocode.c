int __thiscall sub_949110(_DWORD *this)
{
  int result; // eax

  result = *(this + 3) & 0x3FFFFFFF; /*0x949116*/
  if ( result > *(this + 2) + 0x46 ) /*0x949120*/
  {
    result = sub_948DF0((int)(this + 1), 0); /*0x949128*/
    *(_BYTE *)result = 0x70; /*0x949130*/
    *(_BYTE *)(result + 1) = 0; /*0x949133*/
    *(_WORD *)(result + 2) = 0; /*0x949137*/
    *(_WORD *)(result + 4) = 0; /*0x94913d*/
  }
  return result; /*0x949144*/
}
