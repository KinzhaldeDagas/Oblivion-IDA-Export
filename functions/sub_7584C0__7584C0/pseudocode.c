int __thiscall sub_7584C0(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax
  char v6; // dl

  result = *(this + 7); /*0x7584c3*/
  if ( result ) /*0x7584c9*/
    result = (*(int (__cdecl **)(int))(4 * *(this + 8) + 0xB3D2C8))(result); /*0x7584d6*/
  if ( a2 && a3 ) /*0x7584e9*/
  {
    v6 = unk_B3D406[a4]; /*0x7584ef*/
    *(this + 7) = a2; /*0x7584f5*/
    *((_BYTE *)this + 0x24) = v6; /*0x7584f9*/
    *(this + 6) = a3; /*0x7584fc*/
    *(this + 8) = a4; /*0x7584ff*/
    return a4; /*0x7584eb*/
  }
  else
  {
    *(this + 6) = 0; /*0x758507*/
    *(this + 7) = 0; /*0x75850e*/
    *((_BYTE *)this + 0x24) = 0; /*0x758515*/
  }
  return result; /*0x7584f8*/
}
