int __thiscall sub_42BC00(_DWORD *this)
{
  int result; // eax

  result = *(this + 0xC);
  if ( result == 0xFFFFFFFF )
    return *(this + 0x52);
  return result;
}
