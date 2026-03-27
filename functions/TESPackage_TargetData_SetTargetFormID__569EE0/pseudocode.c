int __thiscall TESPackage_TargetData_SetTargetFormID(_DWORD *this, int a2)
{
  int result; // eax

  if ( *(_BYTE *)this == 2 )
  {
    *(this + 1) = a2;
    return a2;
  }
  return result;
}
