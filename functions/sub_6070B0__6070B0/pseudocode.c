_DWORD *__thiscall sub_6070B0(_DWORD *this, unsigned int a2, int a3, int a4, int a5, int a6, int a7)
{
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 2) = a3;
  *(this + 5) = a5;
  *(this + 6) = a6;
  *(this + 1) = a2;
  *this = 0;
  *(this + 3) = a4;
  *((_BYTE *)this + 0x10) = 0;
  *((_BYTE *)this + 0x11) = 0;
  *(this + 9) = a7;
  *((_BYTE *)this + 0x2C) = 0;
  *(this + 0xA) = sub_675EF0(&ActorProcessManager_ptr, a2, a4) + 1;
  return this;
}
