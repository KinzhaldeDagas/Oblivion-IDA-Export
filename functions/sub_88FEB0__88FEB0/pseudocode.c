int __thiscall sub_88FEB0(_DWORD *this, int a2)
{
  int result; // eax

  result = *(_DWORD *)(*(_DWORD *)(a2 + 0x28) + 0x1C) & 0x3F;
  if ( (_BYTE)result == 0x14 )
  {
    result = *(this + 0x19);
    if ( result )
      *(this + 0x19) = --result;
  }
  return result;
}
