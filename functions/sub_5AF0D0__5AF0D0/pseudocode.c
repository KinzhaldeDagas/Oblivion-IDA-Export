int __thiscall sub_5AF0D0(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2; /*0x5af0d0*/
  switch ( a2 ) /*0x5af0d7*/
  {
    case 1: /*0x5af0d7*/
      *(this + 0xA) = a3; /*0x5af0dd*/
      return a3; /*0x5af0d9*/
    case 2: /*0x5af0d7*/
      *(this + 0xB) = a3; /*0x5af0ec*/
      break;
    case 5: /*0x5af0d7*/
      *(this + 0xD) = a3; /*0x5af0fb*/
      return a3; /*0x5af0f7*/
    case 3: /*0x5af0d7*/
      *(this + 0x5E) = a3; /*0x5af10a*/
      break;
    case 4: /*0x5af0d7*/
      *(this + 0xC) = a3; /*0x5af11c*/
      return a3; /*0x5af118*/
    case 0xB: /*0x5af0d7*/
      *(this + 0x27) = a3; /*0x5af12b*/
      break;
    case 0xC: /*0x5af0d7*/
      *(this + 0x31) = a3; /*0x5af13d*/
      return a3; /*0x5af139*/
    case 0xD: /*0x5af0d7*/
      *(this + 0x3B) = a3; /*0x5af14f*/
      break;
    case 0xE: /*0x5af0d7*/
      *(this + 0x45) = a3; /*0x5af161*/
      return a3; /*0x5af15d*/
    case 0xF: /*0x5af0d7*/
      *(this + 0x4F) = a3; /*0x5af173*/
      break;
    case 0x14: /*0x5af0d7*/
      *(this + 0x51) = a3; /*0x5af185*/
      return a3; /*0x5af181*/
  }
  return result; /*0x5af0e0*/
}
