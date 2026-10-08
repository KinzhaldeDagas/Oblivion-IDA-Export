int __thiscall sub_9280C0(_WORD *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x18, 0x29); /*0x9280cf*/
  *(_WORD *)(result + 4) = 0x18; /*0x9280d2*/
  *(_WORD *)(result + 6) = 1; /*0x9280d8*/
  *(_DWORD *)result = &off_AA1938; /*0x9280de*/
  *(_DWORD *)(result + 0xC) = 0x3F800000; /*0x9280e4*/
  *(_DWORD *)(result + 0x10) = 0x49742400; /*0x9280eb*/
  *(_DWORD *)(result + 0x14) = 0xC9742400; /*0x9280f2*/
  *(_DWORD *)(result + 8) = 0x3F4CCCCD; /*0x9280f9*/
  *(_WORD *)(result + 4) = *(this + 2); /*0x928104*/
  *(_WORD *)(result + 6) = *(this + 3); /*0x92810c*/
  *(_DWORD *)(result + 8) = *((_DWORD *)this + 2); /*0x928113*/
  *(_DWORD *)(result + 0xC) = *((_DWORD *)this + 3); /*0x928119*/
  *(_DWORD *)(result + 0x10) = *((_DWORD *)this + 4); /*0x92811f*/
  *(_DWORD *)(result + 0x14) = *((_DWORD *)this + 5); /*0x928125*/
  return result; /*0x928128*/
}
