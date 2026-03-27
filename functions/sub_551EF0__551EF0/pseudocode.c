void __thiscall sub_551EF0(unsigned int *this)
{
  if ( *(this + 0xC) >= 0x10 )
    FormHeapFree(*(this + 7));
  *(this + 0xC) = 0xF;
  *(this + 0xB) = 0;
  *((_BYTE *)this + 0x1C) = 0;
  if ( *(this + 3) )
    FormHeapFree(*(this + 3));
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
}
