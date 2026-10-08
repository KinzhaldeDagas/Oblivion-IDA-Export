int __thiscall sub_5A8DC0(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2; /*0x5a8dc0*/
  if ( a2 == 1 ) /*0x5a8dc7*/
  {
    *(this + 0xA) = a3; /*0x5a8dcd*/
    return a3; /*0x5a8dc9*/
  }
  else if ( a2 == 2 ) /*0x5a8dd6*/
  {
    *(this + 0xD) = a3; /*0x5a8ddc*/
  }
  return result; /*0x5a8dd0*/
}
