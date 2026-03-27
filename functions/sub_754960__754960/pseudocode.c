bool __thiscall sub_754960(float *this, int a2)
{
  if ( !sub_75EED0(this, a2) )
    return 0;
  if ( *((_DWORD *)this + 0xB) )
  {
    if ( !*(_DWORD *)(a2 + 0x2C)
      || *(_DWORD *)(a2 + 0x2C)
      && !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 0xB) + 0x2C))(
            *((_DWORD *)this + 0xB),
            *(_DWORD *)(a2 + 0x2C)) )
    {
      return 0;
    }
  }
  else if ( *(_DWORD *)(a2 + 0x2C) )
  {
    return 0;
  }
  return *(float *)(a2 + 0x30) == *(this + 0xC);
}
