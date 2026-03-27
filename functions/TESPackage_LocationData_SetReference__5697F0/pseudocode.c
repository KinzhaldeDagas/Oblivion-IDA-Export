int __thiscall TESPackage_LocationData_SetReference(_DWORD *this, int a2)
{
  int result; // eax

  if ( !*(_BYTE *)this )
  {
    *(this + 2) = a2;
    return a2;
  }
  return result;
}
