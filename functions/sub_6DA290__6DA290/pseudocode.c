int __thiscall sub_6DA290(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 6);
  if ( result )
    return *(_DWORD *)(result + 0x10);
  return result;
}
