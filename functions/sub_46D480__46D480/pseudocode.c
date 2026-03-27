void __thiscall sub_46D480(unsigned int *this)
{
  if ( *(this + 1) )
  {
    FormHeapFree(*(this + 1));
    *(this + 1) = 0;
  }
  *(_BYTE *)this = 0;
}
