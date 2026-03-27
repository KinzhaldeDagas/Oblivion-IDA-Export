signed int __thiscall sub_69C600(_DWORD *this)
{
  signed int result; // eax

  result = 1;
  if ( *(this + 0x22) == 1 || (*(this + 2) & 0x20) != 0 )
    return 0;
  return result;
}
