int __thiscall sub_5D68D0(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2; /*0x5d68d0*/
  switch ( a2 ) /*0x5d68d7*/
  {
    case 3: /*0x5d68d7*/
      *(this + 0xA) = a3; /*0x5d68dd*/
      return a3; /*0x5d68d9*/
    case 4: /*0x5d68d7*/
      *(this + 0xB) = a3; /*0x5d68ec*/
      break;
    case 5: /*0x5d68d7*/
      *(this + 0xC) = a3; /*0x5d68fb*/
      return a3; /*0x5d68f7*/
    case 6: /*0x5d68d7*/
      *(this + 0xD) = a3; /*0x5d690a*/
      break;
    case 8: /*0x5d68d7*/
      *(this + 0xE) = a3; /*0x5d6919*/
      return a3; /*0x5d6915*/
    case 9: /*0x5d68d7*/
      *(this + 0xF) = a3; /*0x5d6928*/
      break;
    case 0xA: /*0x5d68d7*/
      *(this + 0x10) = a3; /*0x5d6937*/
      return a3; /*0x5d6933*/
    case 0xB: /*0x5d68d7*/
      *(this + 0x11) = a3; /*0x5d6946*/
      break;
  }
  return result; /*0x5d68e0*/
}
