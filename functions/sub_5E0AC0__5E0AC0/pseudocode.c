double __thiscall sub_5E0AC0(_DWORD *this)
{
  if ( !*(this + 0x16) ) /*0x5e0ac1*/
    return (float)1.0; /*0x5e0ae1*/
  return (float)((double (__thiscall *)(_DWORD, _DWORD *))*(_DWORD *)(*(_DWORD *)*(this + 0x16) + 0x430))( /*0x5e0adb*/
                  *(this + 0x16),
                  this);
}
