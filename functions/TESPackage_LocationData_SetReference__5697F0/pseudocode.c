int __thiscall TESPackage_LocationData_SetReference(_DWORD *this, int a2)
{
  int result; // eax

  if ( !*(_BYTE *)this ) /*0x5697f0*/
  {
    *(this + 2) = a2; /*0x5697f9*/
    return a2; /*0x5697f5*/
  }
  return result; /*0x5697fc*/
}
