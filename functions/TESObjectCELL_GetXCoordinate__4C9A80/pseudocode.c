int __thiscall TESObjectCELL_GetXCoordinate(TESObjectCELL *this)
{
  int *p_x; // eax

  if ( (this->members.flags0 & 1) != 0 ) /*0x4c9a84*/
    return 0; /*0x4c9a84*/
  p_x = &this->members.coordOrLight.coords->x; /*0x4c9a86*/
  if ( !p_x ) /*0x4c9a8b*/
    return 0; /*0x4c9a90*/
  else
    return *p_x; /*0x4c9a8d*/
}
