int __thiscall sub_9283B0(_WORD *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x1C, 0x29);
  *(_WORD *)(result + 4) = 0x1C;
  *(_WORD *)(result + 6) = 1;
  *(_DWORD *)result = &off_AA1958;
  *(_DWORD *)(result + 8) = 0x49742400;
  *(_DWORD *)(result + 0xC) = 0x3F4CCCCD;
  *(_DWORD *)(result + 0x14) = 0x40000000;
  *(_DWORD *)(result + 0x10) = 0x3F800000;
  *(_DWORD *)(result + 0x18) = 0x3F800000;
  *(_WORD *)(result + 4) = *(this + 2);
  *(_WORD *)(result + 6) = *(this + 3);
  *(_DWORD *)(result + 8) = *((_DWORD *)this + 2);
  *(_DWORD *)(result + 0xC) = *((_DWORD *)this + 3);
  *(_DWORD *)(result + 0x10) = *((_DWORD *)this + 4);
  *(_DWORD *)(result + 0x14) = *((_DWORD *)this + 5);
  *(_DWORD *)(result + 0x18) = *((_DWORD *)this + 6);
  return result;
}
