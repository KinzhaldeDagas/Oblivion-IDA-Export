char __thiscall TESPackage_LocationData_SetRadius(_DWORD *this, int a2)
{
  char result; // al

  result = *(_BYTE *)this; /*0x5697c0*/
  if ( *(_BYTE *)this != 0xFF && result != 1 ) /*0x5697c8*/
  {
    *(this + 1) = a2; /*0x5697ce*/
    return a2; /*0x5697ca*/
  }
  return result; /*0x5697d1*/
}
