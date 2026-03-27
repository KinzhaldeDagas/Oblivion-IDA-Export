char __thiscall TESPackage_SetLocation(_DWORD *this, char *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax

  if ( !a2 )
    return TESPackage_SetLocation_::ClearLocationData((int)this, 0);
  if ( !*(this + 9) )
  {
    v3 = (_DWORD *)FormHeapAlloc(0xCu);
    if ( v3 )
      v4 = TESPackage_LocationData_constr(v3);
    else
      v4 = 0;
    *(this + 9) = v4;
  }
  return TeSPackage_LocationData_CopyFrom((char *)*(this + 9), a2, 0);
}
