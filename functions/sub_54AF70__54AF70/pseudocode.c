bool __thiscall sub_54AF70(_DWORD *this, int a2)
{
  switch ( a2 )
  {
    case 0:
      return *(this + 0x31) == 0;
    case 2:
      return *(this + 0x1A) == 0;
    case 3:
      return *(this + 0x48) == 0;
  }
  return 1;
}
