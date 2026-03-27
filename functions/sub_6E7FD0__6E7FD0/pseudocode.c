int __thiscall sub_6E7FD0(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 4);
  if ( result )
    return *(_DWORD *)(result + 8);
  return result;
}
