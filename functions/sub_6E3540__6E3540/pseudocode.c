int __thiscall sub_6E3540(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax
  char v6; // dl

  result = *(this + 3); /*0x6e3544*/
  if ( result ) /*0x6e354c*/
    result = (*(int (__cdecl **)(int))(4 * *(this + 4) + 0xB3D2C8))(result); /*0x6e3559*/
  if ( a2 && a3 && (result = a4) != 0 ) /*0x6e3574*/
  {
    v6 = byte_B3D3E8[a4]; /*0x6e3576*/
    *(this + 3) = a2; /*0x6e357c*/
    *((_BYTE *)this + 0x14) = v6; /*0x6e3580*/
    *(this + 2) = a3; /*0x6e3583*/
    *(this + 4) = a4; /*0x6e3586*/
  }
  else
  {
    *(this + 2) = 0; /*0x6e358f*/
    *(this + 3) = 0; /*0x6e3592*/
    *((_BYTE *)this + 0x14) = 0; /*0x6e3595*/
    *(this + 4) = 0; /*0x6e3598*/
  }
  return result; /*0x6e357f*/
}
