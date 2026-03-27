char *__thiscall sub_682580(char *this)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((float *)this + 5) = Vector3_InitValue_;
  *((float *)this + 6) = *(&Vector3_InitValue_ + 1);
  *((float *)this + 7) = dword_B3F9B0;
  *((_DWORD *)this + 8) = 0;
  *(this + 0x24) = 1;
  return this;
}
