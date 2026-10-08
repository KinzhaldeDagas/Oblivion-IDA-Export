int __thiscall sub_6D9E40(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax
  char v6; // dl

  result = *(this + 3); /*0x6d9e44*/
  if ( result ) /*0x6d9e4c*/
    result = (*(int (__cdecl **)(int))(4 * *(this + 4) + 0xB3D2E0))(result); /*0x6d9e59*/
  if ( a2 && a3 ) /*0x6d9e6c*/
  {
    v6 = unk_B3D3EE[a4]; /*0x6d9e72*/
    *(this + 3) = a2; /*0x6d9e78*/
    *((_BYTE *)this + 0x14) = v6; /*0x6d9e7c*/
    *(this + 2) = a3; /*0x6d9e7f*/
    *(this + 4) = a4; /*0x6d9e82*/
    return a4; /*0x6d9e6e*/
  }
  else
  {
    *(this + 2) = 0; /*0x6d9e8b*/
    *(this + 3) = 0; /*0x6d9e8e*/
    *(this + 4) = 0; /*0x6d9e91*/
    *((_BYTE *)this + 0x14) = 0; /*0x6d9e94*/
  }
  return result; /*0x6d9e7b*/
}
