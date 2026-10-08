// 3DTheft decode: TESPackage_SetLocation allocates package->location when needed and copies a 0x0C LocationData record; null source clears location data.
char __thiscall TESPackage_SetLocation(_DWORD *this, char *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax

  if ( !a2 ) /*0x565e2a*/
    return TESPackage_SetLocation_::ClearLocationData((int)this, 0); /*0x565e2a*/
  if ( !*(this + 9) ) /*0x565e2c*/
  {
    v3 = (_DWORD *)FormHeapAlloc(0xCu); /*0x565e34*/
    if ( v3 ) /*0x565e4a*/
      v4 = TESPackage_LocationData_constr(v3); /*0x565e4e*/
    else
      v4 = 0; /*0x565e55*/
    *(this + 9) = v4; /*0x565e5f*/
  }
  return TeSPackage_LocationData_CopyFrom((TESPackage *)*(this + 9), a2, 0); /*0x565e6d*/
}
