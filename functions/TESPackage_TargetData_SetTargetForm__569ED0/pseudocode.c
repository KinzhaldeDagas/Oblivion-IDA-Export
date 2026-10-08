int __thiscall TESPackage_TargetData_SetTargetForm(_DWORD *this, int a2)
{
  int result; // eax

  if ( *(_BYTE *)this == 1 ) /*0x569ed3*/
  {
    *(this + 1) = a2; /*0x569ed9*/
    return a2; /*0x569ed5*/
  }
  return result; /*0x569edc*/
}
