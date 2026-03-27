int __thiscall sub_52E1C0(unsigned int *this)
{
  FormHeapFree(*(this + 4));
  *(this + 4) = 0;
  *((_WORD *)this + 0xB) = 0;
  *((_WORD *)this + 0xA) = 0;
  return 0;
}
