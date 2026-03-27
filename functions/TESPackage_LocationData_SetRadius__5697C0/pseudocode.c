char __thiscall TESPackage_LocationData_SetRadius(_DWORD *this, int a2)
{
  char result; // al

  result = *(_BYTE *)this;
  if ( *(_BYTE *)this != 0xFF && result != 1 )
  {
    *(this + 1) = a2;
    return a2;
  }
  return result;
}
