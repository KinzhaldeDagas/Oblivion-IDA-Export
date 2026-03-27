int __thiscall sub_6D2A10(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 4);
  if ( result )
    return *(_DWORD *)(result + 0x10);
  return result;
}
