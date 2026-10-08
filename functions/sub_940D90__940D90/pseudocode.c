char *__thiscall sub_940D90(char *this)
{
  char **v2; // edi

  *((_WORD *)this + 3) = 1; /*0x940d95*/
  *(_DWORD *)this = &off_AA21EC; /*0x940d9b*/
  v2 = (char **)(this + 0x14); /*0x940da3*/
  *((_DWORD *)this + 2) = 0; /*0x940da8*/
  *((_DWORD *)this + 3) = 0; /*0x940dab*/
  *((_DWORD *)this + 4) = 0x80000000; /*0x940dae*/
  sub_8B0E10((char **)this + 5, 0); /*0x940db5*/
  *((_DWORD *)this + 8) = 0; /*0x940dbd*/
  *((_DWORD *)this + 9) = 0; /*0x940dc0*/
  *((_DWORD *)this + 0xA) = 0x80000000; /*0x940dc3*/
  sub_942B70((char **)this + 0xB, 0); /*0x940dca*/
  sub_942B70((char **)this + 0xE, 0); /*0x940dd2*/
  *((_DWORD *)this + 0x11) = 0xFFFFFFFF; /*0x940dda*/
  *((_DWORD *)this + 0x12) = 0xFFFFFFFF; /*0x940de1*/
  *((_DWORD *)this + 0x13) = 0; /*0x940de8*/
  *((_DWORD *)this + 0x14) = 0; /*0x940deb*/
  sub_8B0E10((char **)this + 0x15, 0); /*0x940dee*/
  sub_8B0E10((char **)this + 0x18, 0); /*0x940df6*/
  sub_8B0E80(v2, (unsigned int)unk_BA8764, 0xFFFFFFFF); /*0x940e04*/
  sub_8B0E80(v2, (unsigned int)unk_BA871C, 0xFFFFFFFF); /*0x940e12*/
  sub_8B0E80(v2, (unsigned int)unk_BA8788, 0xFFFFFFFF); /*0x940e20*/
  return this; /*0x940e25*/
}
