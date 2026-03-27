bool __thiscall sub_6606A0(_DWORD *this)
{
  _DWORD *v1; // esi
  bool i; // bl

  v1 = (_DWORD *)*(this + 0x16B);
  for ( i = 0; v1; v1 = (_DWORD *)v1[1] )
  {
    if ( !*v1 )
      break;
    if ( i )
      break;
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*v1 + 0x190))(*v1) )
    {
      if ( *v1 )
        i = sub_5E6C60((Actor *)*v1);
    }
  }
  return i;
}
