int __thiscall sub_6D2A20(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 4);
  if ( result )
    return *(_DWORD *)(result + 0xC);
  return result;
}
