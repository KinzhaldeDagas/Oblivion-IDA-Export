int __thiscall sub_8A7210(_DWORD *this)
{
  int result; // eax

  if ( (*(this + 5))-- == 1 )
    return (*(int (__thiscall **)(_DWORD *, int))(*this + 8))(this, 1);
  return result;
}
