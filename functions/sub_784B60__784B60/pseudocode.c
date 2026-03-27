void __thiscall sub_784B60(unsigned int *this)
{
  sub_784A20(this + 0x13);
  sub_784A20(this + 0xF);
  if ( *(this + 0xC) )
    FormHeapFree(*(this + 0xC));
  *(this + 0xC) = 0;
  *(this + 0xD) = 0;
  *(this + 0xE) = 0;
  sub_784A20(this + 7);
  sub_784A20(this + 3);
}
