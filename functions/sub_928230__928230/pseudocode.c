int __thiscall sub_928230(_WORD *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x18, 0x29);
  *(_WORD *)(result + 4) = 0x18;
  *(_WORD *)(result + 6) = 1;
  *(_DWORD *)result = &off_AA1948;
  *(_DWORD *)(result + 0x10) = 0x49742400;
  *(_DWORD *)(result + 0x14) = 0xC9742400;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 0xC) = 0;
  *(_WORD *)(result + 4) = *(this + 2);
  *(_WORD *)(result + 6) = *(this + 3);
  *(_DWORD *)(result + 8) = *((_DWORD *)this + 2);
  *(_DWORD *)(result + 0xC) = *((_DWORD *)this + 3);
  *(_DWORD *)(result + 0x10) = *((_DWORD *)this + 4);
  *(_DWORD *)(result + 0x14) = *((_DWORD *)this + 5);
  return result;
}
