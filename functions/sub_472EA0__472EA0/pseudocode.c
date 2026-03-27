bool __thiscall sub_472EA0(_DWORD *this)
{
  _DWORD *v2; // eax

  if ( *(this + 0x34) )
    return 0;
  v2 = (_DWORD *)*(this + 0x33);
  if ( !v2 )
    return 1;
  if ( !v2[4] )
    return 0;
  return *v2 == 3;
}
