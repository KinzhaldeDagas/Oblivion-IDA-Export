void __thiscall BSStringT_Clear(unsigned int *this)
{
  FormHeapFree(*this);
  *this = 0;
  *((_WORD *)this + 3) = 0;
  *((_WORD *)this + 2) = 0;
}
