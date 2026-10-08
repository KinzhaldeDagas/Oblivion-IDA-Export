int __thiscall sub_9283B0(_WORD *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x1C, 0x29); /*0x9283bf*/
  *(_WORD *)(result + 4) = 0x1C; /*0x9283c2*/
  *(_WORD *)(result + 6) = 1; /*0x9283c8*/
  *(_DWORD *)result = &off_AA1958; /*0x9283ce*/
  *(_DWORD *)(result + 8) = 0x49742400; /*0x9283d4*/
  *(_DWORD *)(result + 0xC) = 0x3F4CCCCD; /*0x9283db*/
  *(_DWORD *)(result + 0x14) = 0x40000000; /*0x9283e2*/
  *(_DWORD *)(result + 0x10) = 0x3F800000; /*0x9283ee*/
  *(_DWORD *)(result + 0x18) = 0x3F800000; /*0x9283f1*/
  *(_WORD *)(result + 4) = *(this + 2); /*0x9283f8*/
  *(_WORD *)(result + 6) = *(this + 3); /*0x928400*/
  *(_DWORD *)(result + 8) = *((_DWORD *)this + 2); /*0x928407*/
  *(_DWORD *)(result + 0xC) = *((_DWORD *)this + 3); /*0x92840d*/
  *(_DWORD *)(result + 0x10) = *((_DWORD *)this + 4); /*0x928413*/
  *(_DWORD *)(result + 0x14) = *((_DWORD *)this + 5); /*0x928419*/
  *(_DWORD *)(result + 0x18) = *((_DWORD *)this + 6); /*0x92841f*/
  return result; /*0x928422*/
}
