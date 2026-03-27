bool __thiscall sub_68A140(_DWORD *this)
{
  bool result; // al

  result = 1;
  if ( *(this + 1) )
    return *(this + 2) == 0;
  return result;
}
