char __thiscall sub_4E8AF0(_DWORD **this, _DWORD *a2)
{
  char result; // al

  result = 0;
  if ( a2 )
  {
    if ( *a2 == dword_B05E20 )
    {
      if ( (unsigned int)(a2[3] - 4) > 1 )
        return (*(char (__thiscall **)(_DWORD, _DWORD *))(**(this + 0xB) + 0x30))(*(this + 0xB), a2);
      else
        return 1;
    }
  }
  return result;
}
