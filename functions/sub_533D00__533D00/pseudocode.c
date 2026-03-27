signed int __thiscall sub_533D00(_DWORD **this, int a2, int a3)
{
  signed int result; // eax

  result = 1;
  if ( *(this + 2) )
  {
    (*(void (__thiscall **)(_DWORD, int, int))(**(this + 2) + 0xC))(*(this + 2), a2, a3);
    return 0;
  }
  return result;
}
