char __thiscall sub_55E810(_DWORD *this, int a2)
{
  int v3; // edi

  v3 = 0;
  if ( !*(this + 2) )
    return 0;
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, int))(*this + 0x14))(this, v3, a2) )
  {
    if ( (unsigned int)++v3 >= *(this + 2) )
      return 0;
  }
  return 1;
}
