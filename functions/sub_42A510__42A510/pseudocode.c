char *__thiscall sub_42A510(char *this)
{
  *(this + 4) = 0x3E;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraOblivionEntry::`vftable';
  *(_QWORD *)(this + 0xC) = *(_QWORD *)&Vector3_InitValue_;
  *((float *)this + 5) = dword_B3F9B0;
  *((_DWORD *)this + 6) = 0;
  return this;
}
