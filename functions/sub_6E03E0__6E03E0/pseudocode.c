char __thiscall sub_6E03E0(_DWORD *this, int a2)
{
  char result; // al

  result = sub_715F10(this, a2);
  if ( result )
  {
    if ( *(this + 0x10) )
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 0x10) + 0x24))(*(this + 0x10), a2);
    return 1;
  }
  return result;
}
