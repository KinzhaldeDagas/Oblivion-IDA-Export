int __thiscall sub_7F2130(_DWORD *this, int a2, __int16 a3)
{
  int result; // eax

  result = *(this + 0x3C);
  if ( result )
  {
    *(_DWORD *)(result + 8) = a2;
    *(_WORD *)(result + 0xC) = a3;
  }
  return result;
}
