int __thiscall TESPackage_TargetData_SetTargetFormID(_DWORD *this, int a2)
{
  int result; // eax

  if ( *(_BYTE *)this == 2 ) /*0x569ee3*/
  {
    *(this + 1) = a2; /*0x569ee9*/
    return a2; /*0x569ee5*/
  }
  return result; /*0x569eec*/
}
