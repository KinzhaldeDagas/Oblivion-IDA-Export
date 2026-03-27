char *__thiscall sub_940D90(char *this)
{
  char **v2; // edi

  *((_WORD *)this + 3) = 1;
  *(_DWORD *)this = &off_AA21EC;
  v2 = (char **)(this + 0x14);
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0x80000000;
  sub_8B0E10((char **)this + 5, 0);
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 0xA) = 0x80000000;
  sub_942B70(this + 0x2C);
  sub_942B70(this + 0x38);
  *((_DWORD *)this + 0x11) = 0xFFFFFFFF;
  *((_DWORD *)this + 0x12) = 0xFFFFFFFF;
  *((_DWORD *)this + 0x13) = 0;
  *((_DWORD *)this + 0x14) = 0;
  sub_8B0E10((char **)this + 0x15, 0);
  sub_8B0E10((char **)this + 0x18, 0);
  sub_8B0E80(v2, (unsigned int)&unk_BA8764, 0xFFFFFFFF);
  sub_8B0E80(v2, (unsigned int)&unk_BA871C, 0xFFFFFFFF);
  sub_8B0E80(v2, (unsigned int)&unk_BA8788, 0xFFFFFFFF);
  return this;
}
