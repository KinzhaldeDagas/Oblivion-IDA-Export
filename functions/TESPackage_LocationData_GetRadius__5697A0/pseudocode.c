int __thiscall TESPackage_LocationData_GetRadius(_DWORD *this)
{
  if ( *(_BYTE *)this == 0xFF || *(_BYTE *)this == 1 )
    return 0;
  else
    return *(this + 1);
}
