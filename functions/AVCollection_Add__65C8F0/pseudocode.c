double __thiscall AVCollection_Add(unsigned int **this, float *a2)
{
  float *v2; // eax
  double result; // st7

  v2 = a2;
  if ( !a2 )
    return AVCollection_Add_::Done(0);
  LOBYTE(a2) = *(_BYTE *)a2;
  switch ( (char)a2 )
  {
    case 0:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 0xB:
    case 0xD:
    case 0x1A:
    case 0x21:
    case 0x24:
    case 0x28:
    case 0x29:
    case 0x2E:
    case 0x2F:
    case 0x30:
    case 0x31:
    case 0x38:
      AVCollection_AddToArray(this, (int)a2, (unsigned int)v2);
      break;
    case 9:
      result = v2[1];
      (*(this + 2))[1] = *((unsigned int *)v2 + 1);
      FormHeapFree((unsigned int)v2);
      AVCollection_Add_::Done(a2);
      break;
    case 0xA:
      result = v2[1];
      (*(this + 3))[1] = *((unsigned int *)v2 + 1);
      FormHeapFree((unsigned int)v2);
      break;
    default:
      BSSimpleList_PushFront(this, (int)v2);
      break;
  }
  return result;
}
