bool __thiscall sub_6D6230(float *this, int a2)
{
  double v3; // st7

  if ( !(_WORD)a2 ) /*0x6d623d*/
  {
    if ( !*((_DWORD *)this + 0xB) || !(*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 0x9C))(this, a2) ) /*0x6d6292*/
    {
      v3 = *(this + 3); /*0x6d629e*/
      return -flt_A7DEB4 != v3; /*0x6d629e*/
    }
    return 0; /*0x6d6296*/
  }
  if ( (unsigned __int16)a2 == 1 ) /*0x6d6242*/
  {
    if ( !*((_DWORD *)this + 0xB) || !(*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 0x9C))(this, a2) ) /*0x6d6276*/
    {
      v3 = *(this + 7); /*0x6d627c*/
      return -flt_A7DEB4 != v3; /*0x6d627f*/
    }
    return 0; /*0x6d629b*/
  }
  if ( (unsigned __int16)a2 != 2 /*0x6d625a*/
    || *((_DWORD *)this + 0xB) && (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 0x9C))(this, a2) )
  {
    return 0; /*0x6d625e*/
  }
  v3 = *(this + 0xA); /*0x6d6260*/
  return -flt_A7DEB4 != v3; /*0x6d629a*/
}
