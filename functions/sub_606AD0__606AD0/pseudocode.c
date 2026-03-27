bool __thiscall sub_606AD0(_DWORD *this, int a2)
{
  _DWORD *i; // eax

  for ( i = (_DWORD *)*(this + 0xF); i; i = (_DWORD *)i[1] )
  {
    if ( *i == a2 )
      break;
  }
  return i != 0;
}
