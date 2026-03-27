int __thiscall sub_8E8840(_DWORD *this, int a2)
{
  int result; // eax

  result = a2 + 1;
  if ( a2 + 1 >= *(this + 5) )
    return 0xFFFFFFFF;
  return result;
}
