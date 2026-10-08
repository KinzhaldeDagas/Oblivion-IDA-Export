int __thiscall TESPackage_LocationData_GetRadius(_DWORD *this)
{
  if ( *(_BYTE *)this == 0xFF || *(_BYTE *)this == 1 ) /*0x5697a8*/
    return 0; /*0x5697ae*/
  else
    return *(this + 1); /*0x5697aa*/
}
