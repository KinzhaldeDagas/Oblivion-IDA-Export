int __thiscall sub_596440(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2; /*0x596440*/
  if ( a2 == 1 ) /*0x596447*/
  {
    *(this + 0xA) = a3; /*0x59644d*/
    return a3; /*0x596449*/
  }
  else if ( a2 == 2 ) /*0x596456*/
  {
    *(this + 0xB) = a3; /*0x59645c*/
  }
  return result; /*0x596450*/
}
