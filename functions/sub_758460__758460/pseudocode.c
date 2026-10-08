int __thiscall sub_758460(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax
  char v6; // dl

  result = *(this + 3); /*0x758464*/
  if ( result ) /*0x75846c*/
    result = (*(int (__cdecl **)(int))(4 * *(this + 4) + 0xB3D2C8))(result); /*0x758479*/
  if ( a2 && a3 ) /*0x75848c*/
  {
    v6 = byte_B3D3E8[a4]; /*0x758492*/
    *(this + 3) = a2; /*0x758498*/
    *((_BYTE *)this + 0x14) = v6; /*0x75849c*/
    *(this + 2) = a3; /*0x75849f*/
    *(this + 4) = a4; /*0x7584a2*/
    return a4; /*0x75848e*/
  }
  else
  {
    *(this + 2) = 0; /*0x7584ab*/
    *(this + 3) = 0; /*0x7584ae*/
    *(this + 4) = 0; /*0x7584b1*/
    *((_BYTE *)this + 0x14) = 0; /*0x7584b4*/
  }
  return result; /*0x75849b*/
}
