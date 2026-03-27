void __thiscall sub_556EC0(unsigned int *this)
{
  if ( *(this + 8) )
    FormHeapFree(*(this + 8));
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 0xA) = 0;
  if ( *(this + 6) >= 0x10 )
    FormHeapFree(*(this + 1));
  *(this + 5) = 0;
  *(this + 6) = 0xF;
  *((_BYTE *)this + 4) = 0;
}
