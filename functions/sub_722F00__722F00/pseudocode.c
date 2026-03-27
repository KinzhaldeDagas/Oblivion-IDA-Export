unsigned int __thiscall sub_722F00(_DWORD *this, _BYTE *a2, char a3, bool *a4)
{
  unsigned int result; // eax

  result = sub_707D80(this, a2, a3, a4);
  if ( *(this + 0x2E) )
  {
    *((_WORD *)this + 0xC) |= 4u;
    *a2 = 1;
    *((_WORD *)this + 0xC) |= 2u;
    *a4 = 0;
  }
  return result;
}
