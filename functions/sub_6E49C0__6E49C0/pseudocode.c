bool __thiscall sub_6E49C0(float *this, int a2)
{
  double v3; // st7

  if ( !(_WORD)a2 )
  {
    if ( !(*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 0x9C))(this, a2) )
    {
      v3 = *(this + 7);
      return -flt_A7DEB4 != v3;
    }
    return 0;
  }
  if ( (unsigned __int16)a2 == 1 )
  {
    if ( !(*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 0x9C))(this, a2) )
    {
      v3 = *(this + 0xB);
      return -flt_A7DEB4 != v3;
    }
    return 0;
  }
  if ( (unsigned __int16)a2 != 2 || (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 0x9C))(this, a2) )
    return 0;
  v3 = *(this + 0xE);
  return -flt_A7DEB4 != v3;
}
