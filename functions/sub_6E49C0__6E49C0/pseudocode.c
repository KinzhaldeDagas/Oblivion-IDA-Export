bool __thiscall sub_6E49C0(float *this, int a2)
{
  double v3; // st7

  if ( !(_WORD)a2 ) /*0x6e49cd*/
  {
    if ( !(*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 0x9C))(this, a2) ) /*0x6e4a14*/
    {
      v3 = *(this + 7); /*0x6e4a1c*/
      return -flt_A7DEB4 != v3; /*0x6e4a1c*/
    }
    return 0; /*0x6e4a14*/
  }
  if ( (unsigned __int16)a2 == 1 ) /*0x6e49d2*/
  {
    if ( !(*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 0x9C))(this, a2) ) /*0x6e49fa*/
    {
      v3 = *(this + 0xB); /*0x6e4a00*/
      return -flt_A7DEB4 != v3; /*0x6e4a03*/
    }
    return 0; /*0x6e4a19*/
  }
  if ( (unsigned __int16)a2 != 2 || (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 0x9C))(this, a2) ) /*0x6e49e4*/
    return 0; /*0x6e49e8*/
  v3 = *(this + 0xE); /*0x6e49ea*/
  return -flt_A7DEB4 != v3; /*0x6e4a18*/
}
