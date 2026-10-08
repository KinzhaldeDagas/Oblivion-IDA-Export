char __thiscall sub_634CB0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // esi

  *(this + 0x7B) = 0; /*0x634cb7*/
  v3 = (_DWORD *)a2[0xF]; /*0x634cc1*/
  if ( v3 ) /*0x634cc6*/
  {
    v3 = (_DWORD *)sub_4D96F0(a2, v3, "Bip01"); /*0x634cce*/
    if ( v3 ) /*0x634cd5*/
    {
      v4 = (_DWORD *)v3[3]; /*0x634cd8*/
      if ( v4 ) /*0x634cdd*/
      {
        while ( 1 ) /*0x634ced*/
        {
          LOBYTE(v3) = (*(int (__thiscall **)(_DWORD *))(*v4 + 4))(v4) == (_DWORD)&stru_B3F52C; /*0x634ced*/
          if ( (_BYTE)v3 ) /*0x634cf2*/
            break; /*0x634cf2*/
          v4 = (_DWORD *)v4[0xD]; /*0x634cf4*/
          if ( !v4 ) /*0x634cf9*/
            return (char)v3; /*0x634cf9*/
        }
        *(this + 0x7B) = v4; /*0x634d00*/
      }
    }
  }
  return (char)v3; /*0x634cfc*/
}
