char __thiscall sub_6D4A70(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // eax

  v5 = *(this + 6); /*0x6d4a74*/
  if ( v5 ) /*0x6d4a7b*/
    LOBYTE(v5) = (*(int (__cdecl **)(int))(4 * *(this + 7) + 0xB3D2C8))(v5); /*0x6d4a88*/
  if ( a2 && (LOBYTE(v5) = a3, a3) ) /*0x6d4a9b*/
  {
    *(this + 5) = a3; /*0x6d4a9d*/
    *(this + 6) = a2; /*0x6d4aa4*/
    *(this + 7) = a4; /*0x6d4aa7*/
    LOBYTE(v5) = byte_B3D3E8[a4]; /*0x6d4aaa*/
    *((_BYTE *)this + 0x49) = v5; /*0x6d4ab0*/
  }
  else
  {
    *(this + 5) = 0; /*0x6d4ab8*/
    *(this + 6) = 0; /*0x6d4abb*/
    *(this + 7) = 0; /*0x6d4abe*/
    *((_BYTE *)this + 0x49) = 0; /*0x6d4ac1*/
  }
  return v5; /*0x6d4ab3*/
}
