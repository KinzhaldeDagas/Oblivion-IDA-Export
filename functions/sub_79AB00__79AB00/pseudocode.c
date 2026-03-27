int __thiscall sub_79AB00(unsigned int *this)
{
  if ( *(this + 6) >= 0x10 )
    FormHeapFree(*(this + 1));
  *(this + 6) = 0xF;
  *(this + 5) = 0;
  *((_BYTE *)this + 4) = 0;
  return 0;
}
