int __thiscall sub_9296A0(_DWORD *this, int a2)
{
  int result; // eax

  result = a2 + 1;
  if ( a2 + 1 >= *(this + 8) )
    return 0xFFFFFFFF;
  return result;
}
