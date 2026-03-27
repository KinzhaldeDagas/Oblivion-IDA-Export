_DWORD *__thiscall sub_52E150(_DWORD *this)
{
  *this = 0;
  *(this + 1) = 0x32;
  *(this + 2) = 0;
  *((_BYTE *)this + 0xC) = 0;
  *(this + 4) = 0;
  *((_WORD *)this + 0xA) = 0;
  *((_WORD *)this + 0xB) = 0;
  FormHeapFree(0);
  *(this + 4) = 0;
  *((_WORD *)this + 0xB) = 0;
  *((_WORD *)this + 0xA) = 0;
  return this;
}
