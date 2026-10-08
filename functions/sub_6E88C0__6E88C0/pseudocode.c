int __thiscall sub_6E88C0(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax
  char v6; // dl

  result = *(this + 3); /*0x6e88c4*/
  if ( result ) /*0x6e88cc*/
    result = (*(int (__cdecl **)(int))(4 * *(this + 4) + 0xB3D340))(result); /*0x6e88d9*/
  if ( a2 && a3 ) /*0x6e88ec*/
  {
    v6 = unk_B3D406[a4]; /*0x6e88f2*/
    *(this + 3) = a2; /*0x6e88f8*/
    *((_BYTE *)this + 0x14) = v6; /*0x6e88fc*/
    *(this + 2) = a3; /*0x6e88ff*/
    *(this + 4) = a4; /*0x6e8902*/
    return a4; /*0x6e88ee*/
  }
  else
  {
    *(this + 2) = 0; /*0x6e890b*/
    *(this + 3) = 0; /*0x6e890e*/
    *(this + 4) = 0; /*0x6e8911*/
    *((_BYTE *)this + 0x14) = 0; /*0x6e8914*/
  }
  return result; /*0x6e88fb*/
}
