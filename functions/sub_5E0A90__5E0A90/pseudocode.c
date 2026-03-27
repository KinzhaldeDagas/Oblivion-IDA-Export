int __thiscall sub_5E0A90(_DWORD **this, int a2)
{
  int result; // eax

  result = 0;
  if ( *(this + 0x16) )
    return (*(int (__thiscall **)(_DWORD, _DWORD **, int))(**(this + 0x16) + 0x218))(*(this + 0x16), this, a2);
  return result;
}
