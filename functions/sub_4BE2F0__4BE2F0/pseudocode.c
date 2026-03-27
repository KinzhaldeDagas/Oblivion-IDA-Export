unsigned int *__thiscall sub_4BE2F0(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 7);
  *this = (unsigned int)&ExteriorCellLoaderTask::`vftable';
  FormHeapFree(v4);
  *this = (unsigned int)&BSTask<__int64>::`vftable';
  InterlockedDecrement(&flt_B35B94);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
