bool __thiscall sub_75D8B0(_DWORD **this, int a2)
{
  bool result; // al

  result = sub_71FDD0(this, a2);
  if ( result )
  {
    (*(void (__thiscall **)(_DWORD, int))(**(this + 0x1A) + 0x24))(*(this + 0x1A), a2);
    return 1;
  }
  return result;
}
