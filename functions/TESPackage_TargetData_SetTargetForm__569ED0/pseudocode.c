int __thiscall TESPackage_TargetData_SetTargetForm(_DWORD *this, int a2)
{
  int result; // eax

  if ( *(_BYTE *)this == 1 )
  {
    *(this + 1) = a2;
    return a2;
  }
  return result;
}
