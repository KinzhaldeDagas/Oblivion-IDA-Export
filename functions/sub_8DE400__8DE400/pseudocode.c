_DWORD *__thiscall sub_8DE400(_DWORD *this, int a2)
{
  int v3; // edx
  int v4; // esi

  *(this + 7) = a2;
  *this = &off_A9A4E4;
  *((_WORD *)this + 0x11) = 0xFFFF;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *((_BYTE *)this + 0x24) = 0;
  *((_BYTE *)this + 0x25) = 0;
  *((_WORD *)this + 3) = 1;
  *((_BYTE *)this + 0x26) = 0;
  *((_BYTE *)this + 0x27) = 0;
  *((_BYTE *)this + 0x28) = 1;
  *((_BYTE *)this + 0x29) = 1;
  *((_BYTE *)this + 0x2A) = 0xFD;
  *((_BYTE *)this + 0x2B) = 0;
  *(this + 0xB) = 0;
  *(this + 0xC) = 0;
  *(this + 0xE) = 0;
  *(this + 0xF) = 0x80000001;
  *(this + 0xD) = this + 0x10;
  v3 = *(_DWORD *)(a2 + 0x7C);
  v4 = *(_DWORD *)(v3 + 0x1BF8);
  *((_WORD *)this + 0x2C) = *(_DWORD *)(v3 + 0x1BFC);
  *((_WORD *)this + 0x2D) = v4;
  *(this + 0x11) = this + 0x14;
  *(this + 0x12) = 0;
  *(this + 0x13) = 0x80000001;
  *(this + 0x15) = (unsigned __int16)v4;
  *(this + 0x17) = 0;
  *(this + 0x18) = 0;
  *(this + 0x19) = 0x80000000;
  *(this + 0x1A) = 0xC1200000;
  return this;
}
