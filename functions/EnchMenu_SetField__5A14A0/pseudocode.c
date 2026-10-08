int __thiscall EnchMenu_SetField(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2 - 2; /*0x5a14a4*/
  switch ( a2 ) /*0x5a14b0*/
  {
    case 2: /*0x5a14b0*/
      *(this + 0xF) = a3; /*0x5a14bb*/
      result = a3; /*0x5a14b7*/
      break; /*0x5a14be*/
    case 3: /*0x5a14b0*/
      *(this + 0x11) = a3; /*0x5a14cf*/
      result = a3; /*0x5a14cb*/
      break; /*0x5a14d2*/
    case 4: /*0x5a14b0*/
      *(this + 0x14) = a3; /*0x5a14d9*/
      break; /*0x5a14dc*/
    case 5: /*0x5a14b0*/
      *(this + 0x12) = a3; /*0x5a14e3*/
      result = a3; /*0x5a14df*/
      break; /*0x5a14e6*/
    case 6: /*0x5a14b0*/
      *(this + 0x15) = a3; /*0x5a14f7*/
      result = a3; /*0x5a14f3*/
      break; /*0x5a14fa*/
    case 7: /*0x5a14b0*/
      *(this + 0x16) = a3; /*0x5a1501*/
      break; /*0x5a1504*/
    case 8: /*0x5a14b0*/
      *(this + 0x17) = a3; /*0x5a150b*/
      result = a3; /*0x5a1507*/
      break; /*0x5a150e*/
    case 9: /*0x5a14b0*/
      *(this + 0x18) = a3; /*0x5a1515*/
      break; /*0x5a1518*/
    case 0xA: /*0x5a14b0*/
      *(this + 0x19) = a3; /*0x5a151f*/
      result = a3; /*0x5a151b*/
      break; /*0x5a1522*/
    case 0xB: /*0x5a14b0*/
      *(this + 0x1B) = a3; /*0x5a1533*/
      result = a3; /*0x5a152f*/
      break; /*0x5a1536*/
    case 0xC: /*0x5a14b0*/
      *(this + 0x1A) = a3; /*0x5a1529*/
      break; /*0x5a152c*/
    case 0xD: /*0x5a14b0*/
      *(this + 0x13) = a3; /*0x5a14ed*/
      break; /*0x5a14f0*/
    case 0xE: /*0x5a14b0*/
      *(this + 0x1C) = a3; /*0x5a153d*/
      break; /*0x5a1540*/
    case 0xF: /*0x5a14b0*/
      *(this + 0x1D) = a3; /*0x5a1547*/
      result = a3; /*0x5a1543*/
      break; /*0x5a154a*/
    case 0x10: /*0x5a14b0*/
      *(this + 0x1E) = a3; /*0x5a1551*/
      break; /*0x5a1554*/
    case 0x11: /*0x5a14b0*/
      *(this + 0x1F) = a3; /*0x5a155b*/
      result = a3; /*0x5a1557*/
      break; /*0x5a155e*/
    case 0x14: /*0x5a14b0*/
      *(this + 0x20) = a3; /*0x5a1565*/
      break; /*0x5a156b*/
    case 0x16: /*0x5a14b0*/
      *(this + 0x21) = a3; /*0x5a1572*/
      result = a3; /*0x5a156e*/
      break; /*0x5a1578*/
    case 0x18: /*0x5a14b0*/
      *(this + 0x10) = a3; /*0x5a14c5*/
      break; /*0x5a14c8*/
    case 0x19: /*0x5a14b0*/
      *(this + 0x23) = a3; /*0x5a157f*/
      break; /*0x5a1585*/
    case 0x1A: /*0x5a14b0*/
      *(this + 0x22) = a3; /*0x5a158c*/
      result = a3; /*0x5a1588*/
      break; /*0x5a1588*/
    default:
      return result;
  }
  return result; /*0x5a14be*/
}
