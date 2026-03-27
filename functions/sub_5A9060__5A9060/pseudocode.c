void __thiscall sub_5A9060(unsigned int *this)
{
  FormHeapFree(*(this + 6));
  *(this + 6) = 0;
  *((_WORD *)this + 0xF) = 0;
  *((_WORD *)this + 0xE) = 0;
  FormHeapFree(*(this + 4));
  *(this + 4) = 0;
  *((_WORD *)this + 0xB) = 0;
  *((_WORD *)this + 0xA) = 0;
  FormHeapFree(*this);
  *this = 0;
  *((_WORD *)this + 3) = 0;
  *((_WORD *)this + 2) = 0;
}
