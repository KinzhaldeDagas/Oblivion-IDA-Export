int __thiscall TESPackage_TargetData_SetType(unsigned __int8 *this, int a2)
{
  int result; // eax

  result = a2;
  if ( *this != a2 )
  {
    *this = a2;
    result = (unsigned __int8)a2;
    if ( !(_BYTE)a2
      || (result = (unsigned __int8)a2 - 1, (unsigned __int8)a2 == 1)
      || (result = (unsigned __int8)a2 - 2, (unsigned __int8)a2 == 2) )
    {
      *((_DWORD *)this + 1) = 0;
    }
  }
  return result;
}
