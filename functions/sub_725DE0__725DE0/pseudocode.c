void __thiscall sub_725DE0(_DWORD *this, int a2, int a3, int a4)
{
  switch ( *(this + 1) ) /*0x725dfe*/
  {
    case 1: /*0x725dfe*/
    case 5: /*0x725dfe*/
    case 9: /*0x725dfe*/
      goto LABEL_5;
    case 2: /*0x725dfe*/
    case 6: /*0x725dfe*/
    case 0xA: /*0x725dfe*/
      goto LABEL_4;
    case 3: /*0x725dfe*/
    case 7: /*0x725dfe*/
    case 0xB: /*0x725dfe*/
      goto LABEL_3;
    case 4: /*0x725dfe*/
    case 8: /*0x725dfe*/
    case 0xC: /*0x725dfe*/
      *(_DWORD *)(a2 + 4 * (*(_DWORD *)a3)++) = 4; /*0x725e07*/
LABEL_3:
      *(_DWORD *)(a2 + 4 * (*(_DWORD *)a3)++) = 4; /*0x725e11*/
LABEL_4:
      *(_DWORD *)(a2 + 4 * (*(_DWORD *)a3)++) = 4; /*0x725e1d*/
LABEL_5:
      *(_DWORD *)(a2 + 4 * (*(_DWORD *)a3)++) = 4; /*0x725e29*/
      return; /*0x725e35*/
    case 0xD: /*0x725dfe*/
    case 0x11: /*0x725dfe*/
      goto LABEL_9;
    case 0xE: /*0x725dfe*/
    case 0x12: /*0x725dfe*/
      goto LABEL_8;
    case 0xF: /*0x725dfe*/
    case 0x13: /*0x725dfe*/
      goto LABEL_7;
    case 0x10: /*0x725dfe*/
    case 0x14: /*0x725dfe*/
      *(_DWORD *)(a2 + 4 * (*(_DWORD *)a3)++) = 2; /*0x725e3a*/
LABEL_7:
      *(_DWORD *)(a2 + 4 * (*(_DWORD *)a3)++) = 2; /*0x725e44*/
LABEL_8:
      *(_DWORD *)(a2 + 4 * (*(_DWORD *)a3)++) = 2; /*0x725e50*/
LABEL_9:
      *(_DWORD *)(a2 + 4 * (*(_DWORD *)a3)++) = 2; /*0x725e5c*/
      return; /*0x725e68*/
    case 0x15: /*0x725dfe*/
    case 0x19: /*0x725dfe*/
    case 0x1D: /*0x725dfe*/
      goto LABEL_13;
    case 0x16: /*0x725dfe*/
    case 0x1A: /*0x725dfe*/
    case 0x1E: /*0x725dfe*/
      goto LABEL_12;
    case 0x17: /*0x725dfe*/
    case 0x1B: /*0x725dfe*/
    case 0x1F: /*0x725dfe*/
      goto LABEL_11;
    case 0x18: /*0x725dfe*/
    case 0x1C: /*0x725dfe*/
    case 0x20: /*0x725dfe*/
      *(_DWORD *)(a2 + 4 * (*(_DWORD *)a3)++) = 1; /*0x725e6d*/
LABEL_11:
      *(_DWORD *)(a2 + 4 * (*(_DWORD *)a3)++) = 1; /*0x725e77*/
LABEL_12:
      *(_DWORD *)(a2 + 4 * (*(_DWORD *)a3)++) = 1; /*0x725e83*/
LABEL_13:
      *(_DWORD *)(a2 + 4 * (*(_DWORD *)a3)++) = 1; /*0x725e8f*/
      def_725DFE(a2, a3, a4); /*0x725e99*/
      return;
    default:
      JUMPOUT(0x725E9B); /*0x725e9b*/
  }
}
