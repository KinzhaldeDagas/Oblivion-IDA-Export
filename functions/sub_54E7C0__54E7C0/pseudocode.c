char __thiscall sub_54E7C0(_DWORD *this)
{
  int v2; // edi

  v2 = 0;
  if ( !*(this + 4) )
    return 1;
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 0x54))(this, v2)
       || *(float *)(*(this + 3) + 4 * v2) <= 0.0 )
  {
    if ( (unsigned int)++v2 >= *(this + 4) )
      return 1;
  }
  return 0;
}
