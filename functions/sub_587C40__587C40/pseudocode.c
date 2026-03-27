int __thiscall sub_587C40(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2;
  if ( (unsigned int)(a2 - 1) <= 0x2F )
    *(this + a2 + 9) = a3;
  return result;
}
