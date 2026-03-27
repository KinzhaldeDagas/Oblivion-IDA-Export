int __thiscall sub_763020(_DWORD **this, int a2)
{
  int result; // eax

  result = a2;
  if ( a2 )
  {
    if ( *(_DWORD *)(a2 + 0x1C) )
      return (*(int (__thiscall **)(_DWORD, int))(**(this + 0x228) + 0x18))(*(this + 0x228), a2);
  }
  return result;
}
