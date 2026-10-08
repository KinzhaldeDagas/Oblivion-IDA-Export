char __thiscall sub_56A9C0(_DWORD *this, unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // esi
  bool v4; // zf

  v2 = a2; /*0x56a9c0*/
  v3 = a2; /*0x56a9d1*/
  if ( a2 - 0x1000 > 0x170 ) /*0x56a9d3*/
  {
    if ( a2 <= 0x170 ) /*0x56a9e2*/
      v2 = a2 + 0x1000; /*0x56a9e4*/
  }
  else
  {
    v3 = a2 - 0x1000; /*0x56a9d5*/
  }
  if ( v3 <= 0x170 ) /*0x56a9ef*/
  {
    *(this + 2) = 0; /*0x56a9f8*/
    *(this + 3) = 0; /*0x56a9fb*/
    *(this + 4) = 0; /*0x56a9fe*/
    *((_WORD *)this + 4) = v3; /*0x56aa01*/
    if ( v2 <= 0x1136 ) /*0x56aa05*/
    {
      if ( v2 == 0x1136 ) /*0x56aa07*/
      {
LABEL_14:
        *(_BYTE *)this &= 0x1Fu; /*0x56aa58*/
        if ( (*(_BYTE *)this & 4) == 0 ) /*0x56aa5e*/
          *((float *)this + 1) = 1.0; /*0x56aa62*/
      }
      else
      {
        v2 -= 0x1001; /*0x56aa09*/
        switch ( v2 ) /*0x56aa1c*/
        {
          case 0: /*0x56aa1c*/
            LOBYTE(v2) = *(_BYTE *)this & 0x1F | 0x80; /*0x56aa27*/
            v4 = (*(_BYTE *)this & 4) == 0; /*0x56aa29*/
            *(_BYTE *)this = v2; /*0x56aa2b*/
            if ( v4 ) /*0x56aa2d*/
              *((float *)this + 1) = flt_A2FE7C; /*0x56aa36*/
            break; /*0x56aa39*/
          case 0x3D: /*0x56aa1c*/
          case 0x3F: /*0x56aa1c*/
          case 0x42: /*0x56aa1c*/
          case 0x43: /*0x56aa1c*/
          case 0x44: /*0x56aa1c*/
          case 0x45: /*0x56aa1c*/
          case 0x46: /*0x56aa1c*/
          case 0x47: /*0x56aa1c*/
          case 0x5A: /*0x56aa1c*/
          case 0x64: /*0x56aa1c*/
          case 0x65: /*0x56aa1c*/
          case 0x66: /*0x56aa1c*/
          case 0x67: /*0x56aa1c*/
          case 0x69: /*0x56aa1c*/
          case 0x6E: /*0x56aa1c*/
          case 0x6F: /*0x56aa1c*/
            goto LABEL_14;
          case 0x6A: /*0x56aa1c*/
            LOBYTE(v2) = *(_BYTE *)this & 0x1F | 0x20; /*0x56aa40*/
            v4 = (*(_BYTE *)this & 4) == 0; /*0x56aa42*/
            *(_BYTE *)this = v2; /*0x56aa44*/
            if ( v4 ) /*0x56aa46*/
              *((float *)this + 1) = 0.0; /*0x56aa4b*/
            break; /*0x56aa4e*/
          case 0xF6: /*0x56aa1c*/
            *(this + 3) = 0x21; /*0x56aa51*/
            goto LABEL_14; /*0x56aa51*/
          default:
            return v2;
        }
      }
    }
  }
  return v2; /*0x56aa65*/
}
