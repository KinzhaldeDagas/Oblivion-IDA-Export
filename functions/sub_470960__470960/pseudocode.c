// CustomAnimSupport decode: anim-map lookup helper used by playback, validators, and save/load restore to test an encoded group key.
char __thiscall sub_470960(_DWORD *this, int a2, _DWORD *a3)
{
  int **v4; // edi

  v4 = *(int ***)(*(this + 2) + 4 * (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2)); /*0x470974*/
  if ( !v4 ) /*0x470979*/
    return 0; /*0x470999*/
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))( /*0x470991*/
             this,
             a2,
             *((unsigned __int16 *)v4 + 2)) )
  {
    v4 = (int **)*v4; /*0x470993*/
    if ( !v4 ) /*0x470997*/
      return 0; /*0x470997*/
  }
  *a3 = v4[2]; /*0x4709aa*/
  return 1; /*0x470999*/
}
