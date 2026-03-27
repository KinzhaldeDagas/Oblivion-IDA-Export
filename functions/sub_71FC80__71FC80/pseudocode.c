int __thiscall sub_71FC80(unsigned int *this, unsigned __int16 a2, unsigned int a3)
{
  int v4; // eax
  int result; // eax

  v4 = *(this + 0x12);
  if ( a3 != v4 )
  {
    if ( v4 )
      FormHeapFree(*(this + 0x12));
  }
  *((_WORD *)this + 0x20) = a2;
  *(this + 0x12) = a3;
  result = 3 * a2;
  *(this + 0x11) = result;
  return result;
}
