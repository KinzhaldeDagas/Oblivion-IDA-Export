int __thiscall TESObjectCELL_GetXCoordinate(TESObjectCELL *this)
{
  int *p_x; // eax

  if ( (this->members.flags0 & 1) != 0 )
    return 0;
  p_x = &this->members.coordOrLight.coords->x;
  if ( !p_x )
    return 0;
  else
    return *p_x;
}
