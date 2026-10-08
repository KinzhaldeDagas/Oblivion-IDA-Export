char __thiscall sub_6D4A10(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // eax

  v5 = *(this + 3); /*0x6d4a14*/
  if ( v5 ) /*0x6d4a1b*/
    LOBYTE(v5) = (*(int (__cdecl **)(int))(4 * *(this + 4) + 0xB3D2C8))(v5); /*0x6d4a28*/
  if ( a2 && (LOBYTE(v5) = a3, a3) ) /*0x6d4a3b*/
  {
    *(this + 2) = a3; /*0x6d4a3d*/
    *(this + 3) = a2; /*0x6d4a44*/
    *(this + 4) = a4; /*0x6d4a47*/
    LOBYTE(v5) = byte_B3D3E8[a4]; /*0x6d4a4a*/
    *((_BYTE *)this + 0x48) = v5; /*0x6d4a50*/
  }
  else
  {
    *(this + 2) = 0; /*0x6d4a58*/
    *(this + 3) = 0; /*0x6d4a5b*/
    *(this + 4) = 0; /*0x6d4a5e*/
    *((_BYTE *)this + 0x48) = 0; /*0x6d4a61*/
  }
  return v5; /*0x6d4a53*/
}
