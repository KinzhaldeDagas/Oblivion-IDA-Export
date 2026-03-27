char __thiscall sub_56A9C0(_DWORD *this, unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // esi
  bool v4; // zf

  v2 = a2;
  v3 = a2;
  if ( a2 - 0x1000 > 0x170 )
  {
    if ( a2 <= 0x170 )
      v2 = a2 + 0x1000;
  }
  else
  {
    v3 = a2 - 0x1000;
  }
  if ( v3 <= 0x170 )
  {
    *(this + 2) = 0;
    *(this + 3) = 0;
    *(this + 4) = 0;
    *((_WORD *)this + 4) = v3;
    if ( v2 <= 0x1136 )
    {
      if ( v2 == 0x1136 )
      {
LABEL_14:
        *(_BYTE *)this &= 0x1Fu;
        if ( (*(_BYTE *)this & 4) == 0 )
          *((float *)this + 1) = 1.0;
      }
      else
      {
        v2 -= 0x1001;
        switch ( v2 )
        {
          case 0:
            LOBYTE(v2) = *(_BYTE *)this & 0x1F | 0x80;
            v4 = (*(_BYTE *)this & 4) == 0;
            *(_BYTE *)this = v2;
            if ( v4 )
              *((float *)this + 1) = flt_A2FE7C;
            break;
          case 0x3D:
          case 0x3F:
          case 0x42:
          case 0x43:
          case 0x44:
          case 0x45:
          case 0x46:
          case 0x47:
          case 0x5A:
          case 0x64:
          case 0x65:
          case 0x66:
          case 0x67:
          case 0x69:
          case 0x6E:
          case 0x6F:
            goto LABEL_14;
          case 0x6A:
            LOBYTE(v2) = *(_BYTE *)this & 0x1F | 0x20;
            v4 = (*(_BYTE *)this & 4) == 0;
            *(_BYTE *)this = v2;
            if ( v4 )
              *((float *)this + 1) = 0.0;
            break;
          case 0xF6:
            *(this + 3) = 0x21;
            goto LABEL_14;
          default:
            return v2;
        }
      }
    }
  }
  return v2;
}
