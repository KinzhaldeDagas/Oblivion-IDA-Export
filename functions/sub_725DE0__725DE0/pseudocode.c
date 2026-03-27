_DWORD *__thiscall sub_725DE0(_DWORD *this, int a2, _DWORD *a3, int a4)
{
  _DWORD *result; // eax

  result = a3;
  switch ( *(this + 1) )
  {
    case 1:
    case 5:
    case 9:
      goto LABEL_5;
    case 2:
    case 6:
    case 0xA:
      goto LABEL_4;
    case 3:
    case 7:
    case 0xB:
      goto LABEL_3;
    case 4:
    case 8:
    case 0xC:
      *(_DWORD *)(a2 + 4 * (*a3)++) = 4;
LABEL_3:
      *(_DWORD *)(a2 + 4 * (*a3)++) = 4;
LABEL_4:
      *(_DWORD *)(a2 + 4 * (*a3)++) = 4;
LABEL_5:
      *(_DWORD *)(a2 + 4 * (*a3)++) = 4;
      return result;
    case 0xD:
    case 0x11:
      goto LABEL_9;
    case 0xE:
    case 0x12:
      goto LABEL_8;
    case 0xF:
    case 0x13:
      goto LABEL_7;
    case 0x10:
    case 0x14:
      *(_DWORD *)(a2 + 4 * (*a3)++) = 2;
LABEL_7:
      *(_DWORD *)(a2 + 4 * (*a3)++) = 2;
LABEL_8:
      *(_DWORD *)(a2 + 4 * (*a3)++) = 2;
LABEL_9:
      *(_DWORD *)(a2 + 4 * (*a3)++) = 2;
      return result;
    case 0x15:
    case 0x19:
    case 0x1D:
      goto LABEL_13;
    case 0x16:
    case 0x1A:
    case 0x1E:
      goto LABEL_12;
    case 0x17:
    case 0x1B:
    case 0x1F:
      goto LABEL_11;
    case 0x18:
    case 0x1C:
    case 0x20:
      *(_DWORD *)(a2 + 4 * (*a3)++) = 1;
LABEL_11:
      *(_DWORD *)(a2 + 4 * (*a3)++) = 1;
LABEL_12:
      *(_DWORD *)(a2 + 4 * (*a3)++) = 1;
LABEL_13:
      *(_DWORD *)(a2 + 4 * (*a3)++) = 1;
      return (_DWORD *)def_725DFE(a2, a3, a4);
    default:
      JUMPOUT(0x725E9B);
  }
}
