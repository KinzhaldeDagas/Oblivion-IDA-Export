_WORD *__thiscall sub_8BB120(_WORD *this, char *Filename)
{
  FILE *v3; // eax

  *(this + 3) = 1;
  *((_DWORD *)this + 2) = 0xFFFFFFFF;
  *(_DWORD *)this = &off_A98274;
  *((_BYTE *)this + 0x10) = 1;
  v3 = fopen(Filename, "rb");
  *((_DWORD *)this + 3) = v3;
  *((_BYTE *)this + 0x10) = v3 != 0;
  return this;
}
