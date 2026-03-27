bool __thiscall sub_5E6B70(_DWORD **this)
{
  int v1; // eax
  bool result; // al

  result = 0;
  if ( *(this + 0x16) )
  {
    v1 = (*(int (__thiscall **)(_DWORD))(**(this + 0x16) + 0x184))(*(this + 0x16));
    if ( v1 )
    {
      if ( *(_BYTE *)(v1 + 0x20) == 0x13 )
        return 1;
    }
  }
  return result;
}
