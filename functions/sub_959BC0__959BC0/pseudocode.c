_DWORD *__thiscall sub_959BC0(_DWORD *this)
{
  int v2; // edi

  *(this + 5) = 0;
  *(this + 6) = &NiTArray<NiPick::Record *>::`vftable';
  *((_WORD *)this + 0x10) = 0;
  *((_WORD *)this + 0x13) = 1;
  *((_WORD *)this + 0x11) = 0;
  *((_WORD *)this + 0x12) = 0;
  *(this + 7) = 0;
  *this = 0;
  *(this + 1) = 0;
  *(this + 2) = 1;
  *(this + 3) = 1;
  *((_BYTE *)this + 0x10) = 1;
  *((_BYTE *)this + 0x11) = 0;
  v2 = *(this + 5);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *(this + 5) = 0;
  }
  *((_BYTE *)this + 0x2C) = 0;
  *((_BYTE *)this + 0x2D) = 0;
  *((_BYTE *)this + 0x2E) = 0;
  *((_BYTE *)this + 0x2F) = 0;
  *(this + 0xA) = 0;
  return this;
}
