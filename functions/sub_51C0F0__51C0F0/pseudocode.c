int __thiscall sub_51C0F0(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a3;
  if ( (unsigned int)(a3 - 0xC) <= 0x14 )
    *(this + a2 + 0x11) = a3;
  return result;
}
