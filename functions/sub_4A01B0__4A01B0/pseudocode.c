unsigned __int8 __thiscall sub_4A01B0(_BYTE *this, int a2)
{
  unsigned __int8 result; // al
  int v3; // edx

  result = *(this + 0xEC); /*0x4a01b0*/
  if ( result != 1 ) /*0x4a01b8*/
  {
    v3 = result; /*0x4a01ba*/
    result = a2; /*0x4a01bd*/
    if ( a2 != v3 ) /*0x4a01c3*/
      *(this + 0xEC) = a2; /*0x4a01c5*/
  }
  return result; /*0x4a01cb*/
}
