bool __thiscall sub_5E5640(_DWORD **this)
{
  int v1; // eax
  bool result; // al

  result = 0;
  if ( *(this + 0x16) )
  {
    v1 = (*(int (__thiscall **)(_DWORD))(**(this + 0x16) + 0x2D0))(*(this + 0x16));
    if ( v1 >= 2 && v1 <= 5 )
      return 1;
  }
  return result;
}
