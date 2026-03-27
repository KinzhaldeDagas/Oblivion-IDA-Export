int __thiscall sub_4BA060(unsigned __int16 *this, unsigned __int8 a2)
{
  __int16 v2; // dx
  unsigned __int16 v3; // ax

  LOBYTE(v2) = a2;
  if ( a2 == 0xFF )
    return (*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 0x130))(this);
  v3 = *(this + 0x29);
  if ( !v3 )
    return (*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 0x130))(this);
  if ( a2 >= v3 )
    v2 = a2 % v3;
  return *(_DWORD *)(*((_DWORD *)this + 0x13) + 4 * (unsigned __int8)v2);
}
