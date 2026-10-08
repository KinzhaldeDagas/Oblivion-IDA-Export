char __thiscall sub_6D4B30(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // eax

  v5 = *(this + 0xC); /*0x6d4b34*/
  if ( v5 ) /*0x6d4b3b*/
    LOBYTE(v5) = (*(int (__cdecl **)(int))(4 * *(this + 0xD) + 0xB3D2C8))(v5); /*0x6d4b48*/
  if ( a2 && (LOBYTE(v5) = a3, a3) ) /*0x6d4b5b*/
  {
    *(this + 0xB) = a3; /*0x6d4b5d*/
    *(this + 0xC) = a2; /*0x6d4b64*/
    *(this + 0xD) = a4; /*0x6d4b67*/
    LOBYTE(v5) = byte_B3D3E8[a4]; /*0x6d4b6a*/
    *((_BYTE *)this + 0x4B) = v5; /*0x6d4b70*/
  }
  else
  {
    *(this + 0xB) = 0; /*0x6d4b78*/
    *(this + 0xC) = 0; /*0x6d4b7b*/
    *(this + 0xD) = 0; /*0x6d4b7e*/
    *((_BYTE *)this + 0x4B) = 0; /*0x6d4b81*/
  }
  return v5; /*0x6d4b73*/
}
