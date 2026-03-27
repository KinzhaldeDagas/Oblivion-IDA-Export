__int16 __thiscall sub_412000(_DWORD **this, char a2)
{
  __int16 v2; // ax

  v2 = 0x20;
  if ( !a2 )
    v2 = 0x22;
  if ( *(this + 0xA) )
    return (*(int (__thiscall **)(_DWORD, int))(**(this + 0xA) + 8))(*(this + 0xA), 1) + v2 + 2;
  else
    return v2 + 2;
}
