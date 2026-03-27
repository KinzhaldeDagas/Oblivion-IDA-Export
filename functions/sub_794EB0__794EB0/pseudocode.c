void __thiscall sub_794EB0(unsigned int *this)
{
  if ( *(this + 1) )
    FormHeapFree(*(this + 1));
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
}
