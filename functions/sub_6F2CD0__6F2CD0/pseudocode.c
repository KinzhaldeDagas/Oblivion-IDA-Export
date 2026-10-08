void __thiscall sub_6F2CD0(_DWORD *this, char *a2, _BYTE *a3)
{
  _DWORD *v4; // eax
  char *v5; // ecx
  _BYTE *v6; // edi

  *(this + 1) = 0; /*0x6f2cdd*/
  *(this + 2) = 0; /*0x6f2ce0*/
  *(this + 3) = 0; /*0x6f2ce3*/
  if ( a2 ) /*0x6f2ce6*/
  {
    v4 = sub_412E70(a2); /*0x6f2cf5*/
    *(this + 3) = &a2[(_DWORD)v4]; /*0x6f2d02*/
    *(this + 1) = v4; /*0x6f2d05*/
    *(this + 2) = v4; /*0x6f2d08*/
    v5 = a2; /*0x6f2d0b*/
    v6 = v4; /*0x6f2d0d*/
    do /*0x6f2d21*/
    {
      *v6 = *a3; /*0x6f2d17*/
      --v5; /*0x6f2d19*/
      ++v6; /*0x6f2d1c*/
    }
    while ( v5 ); /*0x6f2d21*/
    *(this + 2) = (char *)v4 + (_DWORD)a2; /*0x6f2d25*/
  }
}
