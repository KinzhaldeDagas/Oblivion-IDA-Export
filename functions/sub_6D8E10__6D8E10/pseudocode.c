int __thiscall sub_6D8E10(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax
  char v6; // dl

  result = *(this + 3); /*0x6d8e14*/
  if ( result ) /*0x6d8e1c*/
    result = (*(int (__cdecl **)(int))(4 * *(this + 4) + 0xB3D2F8))(result); /*0x6d8e29*/
  if ( a2 && a3 ) /*0x6d8e3c*/
  {
    v6 = byte_B3D3F4[a4]; /*0x6d8e42*/
    *(this + 3) = a2; /*0x6d8e48*/
    *((_BYTE *)this + 0x14) = v6; /*0x6d8e4c*/
    *(this + 2) = a3; /*0x6d8e4f*/
    *(this + 4) = a4; /*0x6d8e52*/
    return a4; /*0x6d8e3e*/
  }
  else
  {
    *(this + 2) = 0; /*0x6d8e5b*/
    *(this + 3) = 0; /*0x6d8e5e*/
    *(this + 4) = 0; /*0x6d8e61*/
    *((_BYTE *)this + 0x14) = 0; /*0x6d8e64*/
  }
  return result; /*0x6d8e4b*/
}
