int __thiscall sub_6D9480(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 7);
  if ( result )
    return *(_DWORD *)(result + 8);
  return result;
}
