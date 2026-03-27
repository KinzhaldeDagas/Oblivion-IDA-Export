signed int __thiscall sub_7ABA90(_DWORD *this)
{
  signed int result; // eax

  result = *(this + 0x17) - 1 < 0 ? 0 : *(this + 0x17) - 1;
  *(this + 0x17) = result;
  if ( result <= 0 )
    *(this + 0x18) = 0;
  return result;
}
