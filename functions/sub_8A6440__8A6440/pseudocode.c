int __thiscall sub_8A6440(int *this)
{
  int result; // eax

  result = *(this + 0x15);
  if ( result )
  {
    if ( *(_BYTE *)(result + 0x28) )
      return sub_8CBBB0(*(this + 2), *(this + 0x15));
  }
  return result;
}
