int __thiscall sub_772100(unsigned int *this)
{
  int v2; // eax
  int result; // eax
  int v4; // esi

  v2 = *(this + 5);
  if ( v2 )
    sub_77CB50(*(_DWORD *)(v2 + 8));
  result = sub_773620(*(this + 3));
  v4 = *(this + 1);
  if ( v4 )
  {
    result = InterlockedDecrement((volatile LONG *)(v4 + 4));
    if ( !result )
      return (**(int (__thiscall ***)(int, int))v4)(v4, 1);
  }
  return result;
}
