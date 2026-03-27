int __thiscall TESPackage_LocationData_destr(_DWORD *this)
{
  *(_BYTE *)this = 0xFF;
  *(this + 1) = 0;
  *(this + 2) = 0;
  return 0;
}
