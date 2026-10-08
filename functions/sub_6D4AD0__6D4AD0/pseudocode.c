char __thiscall sub_6D4AD0(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // eax

  v5 = *(this + 9); /*0x6d4ad4*/
  if ( v5 ) /*0x6d4adb*/
    LOBYTE(v5) = (*(int (__cdecl **)(int))(4 * *(this + 0xA) + 0xB3D2C8))(v5); /*0x6d4ae8*/
  if ( a2 && (LOBYTE(v5) = a3, a3) ) /*0x6d4afb*/
  {
    *(this + 8) = a3; /*0x6d4afd*/
    *(this + 9) = a2; /*0x6d4b04*/
    *(this + 0xA) = a4; /*0x6d4b07*/
    LOBYTE(v5) = byte_B3D3E8[a4]; /*0x6d4b0a*/
    *((_BYTE *)this + 0x4A) = v5; /*0x6d4b10*/
  }
  else
  {
    *(this + 8) = 0; /*0x6d4b18*/
    *(this + 9) = 0; /*0x6d4b1b*/
    *(this + 0xA) = 0; /*0x6d4b1e*/
    *((_BYTE *)this + 0x4A) = 0; /*0x6d4b21*/
  }
  return v5; /*0x6d4b13*/
}
