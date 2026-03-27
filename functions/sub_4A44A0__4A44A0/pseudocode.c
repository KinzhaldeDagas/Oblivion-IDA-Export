char __thiscall sub_4A44A0(_DWORD *this)
{
  char result; // al

  if ( this )
  {
    while ( *this )
    {
      result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*this + 0x1C))(*this);
      if ( !result )
        return result;
    }
  }
  return 1;
}
