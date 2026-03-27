int __thiscall sub_890720(_DWORD *this)
{
  int result; // eax

  result = *(this + 0xA8);
  if ( result != 0xB )
  {
    *(this + 0x7B) = result;
    *(this + 0xA8) = 0xB;
  }
  return result;
}
