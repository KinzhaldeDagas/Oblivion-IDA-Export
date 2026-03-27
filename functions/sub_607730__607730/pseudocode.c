int __thiscall sub_607730(_DWORD *this)
{
  int result; // eax

  result = *(this + 0x17);
  if ( result )
    *(_DWORD *)(result + 0x28) = 0;
  return result;
}
