int __thiscall sub_59FAB0(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2 - 1; /*0x59fab4*/
  switch ( a2 ) /*0x59fac7*/
  {
    case 1: /*0x59fac7*/
      *(this + 0xA) = a3; /*0x59fad2*/
      break; /*0x59fad5*/
    case 2: /*0x59fac7*/
      *(this + 0xB) = a3; /*0x59fadc*/
      result = a3; /*0x59fad8*/
      break; /*0x59fadf*/
    case 3: /*0x59fac7*/
      *(this + 0xC) = a3; /*0x59fae6*/
      break; /*0x59fae9*/
    case 0xE: /*0x59fac7*/
      *(this + 0x11) = a3; /*0x59fb18*/
      result = a3; /*0x59fb14*/
      break; /*0x59fb1b*/
    case 0xF: /*0x59fac7*/
      *(this + 0x12) = a3; /*0x59fb22*/
      break; /*0x59fb25*/
    case 0x10: /*0x59fac7*/
      *(this + 0x14) = a3; /*0x59fb36*/
      break; /*0x59fb39*/
    case 0x11: /*0x59fac7*/
      *(this + 0x15) = a3; /*0x59fb40*/
      result = a3; /*0x59fb3c*/
      break; /*0x59fb43*/
    case 0x12: /*0x59fac7*/
      *(this + 0x16) = a3; /*0x59fb4a*/
      break; /*0x59fb4d*/
    case 0x13: /*0x59fac7*/
      *(this + 0x17) = a3; /*0x59fb54*/
      result = a3; /*0x59fb50*/
      break; /*0x59fb57*/
    case 0x15: /*0x59fac7*/
      *(this + 0x18) = a3; /*0x59fb5e*/
      break; /*0x59fb61*/
    case 0x16: /*0x59fac7*/
      *(this + 0x19) = a3; /*0x59fb68*/
      result = a3; /*0x59fb64*/
      break; /*0x59fb6b*/
    case 0x17: /*0x59fac7*/
      *(this + 0x1A) = a3; /*0x59fb72*/
      break; /*0x59fb72*/
    case 0x1F: /*0x59fac7*/
      *(this + 0xD) = a3; /*0x59faf0*/
      result = a3; /*0x59faec*/
      break; /*0x59faf3*/
    case 0x20: /*0x59fac7*/
      *(this + 0xE) = a3; /*0x59fafa*/
      break; /*0x59fafd*/
    case 0x21: /*0x59fac7*/
      *(this + 0xF) = a3; /*0x59fb04*/
      result = a3; /*0x59fb00*/
      break; /*0x59fb07*/
    case 0x22: /*0x59fac7*/
      *(this + 0x10) = a3; /*0x59fb0e*/
      break; /*0x59fb11*/
    case 0x24: /*0x59fac7*/
      *(this + 0x13) = a3; /*0x59fb2c*/
      result = a3; /*0x59fb28*/
      break; /*0x59fb2f*/
    default:
      return result;
  }
  return result; /*0x59fad5*/
}
