int __thiscall sub_92AAE0(_DWORD *this, int a2)
{
  int result; // eax

  result = a2 + 1;
  if ( a2 + 1 >= *(_DWORD *)(*(this + 4) + 0x18) + *(_DWORD *)(*(this + 4) + 0x24) )
    return 0xFFFFFFFF;
  return result;
}
