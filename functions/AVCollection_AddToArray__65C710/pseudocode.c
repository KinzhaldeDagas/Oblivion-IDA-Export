_DWORD *__thiscall AVCollection_AddToArray(unsigned int **this, int a2, unsigned int a3)
{
  _DWORD *v4; // eax
  unsigned int *inited; // eax
  _DWORD *result; // eax

  if ( !a3 && !*(this + 4) )
    return (_DWORD *)AVCollection_AddToArray_::Done(a2, 0);
  AVCollection_RemoveArrayNode(this, a2);
  if ( !a3 || 0.0 == *(float *)(a3 + 4) )
    return (_DWORD *)AVCollection_AddToArray_::Done(a2, a3);
  if ( !*(this + 4) )
  {
    v4 = (_DWORD *)FormHeapAlloc(0x48u);
    if ( v4 )
      inited = AVCollection_InitArray(v4);
    else
      inited = 0;
    *(this + 4) = inited;
  }
  result = (_DWORD *)(char)a2;
  switch ( (char)a2 )
  {
    case 0:
      (*(this + 4))[0xF] = a3;
      break;
    case 4:
      (*(this + 4))[0x10] = a3;
      break;
    case 5:
      (*(this + 4))[0xD] = a3;
      break;
    case 6:
      (*(this + 4))[6] = a3;
      break;
    case 7:
      result = *(this + 4);
      result[0xE] = a3;
      break;
    case 8:
      **(this + 4) = a3;
      break;
    case 0xB:
      (*(this + 4))[1] = a3;
      break;
    case 0xD:
      (*(this + 4))[0x11] = a3;
      return (_DWORD *)AVCollection_AddToArray_::Done(a2, a3);
    case 0x1A:
      (*(this + 4))[0xC] = a3;
      break;
    case 0x21:
      result = *(this + 4);
      result[0xB] = a3;
      break;
    case 0x24:
      (*(this + 4))[4] = a3;
      break;
    case 0x28:
      result = *(this + 4);
      result[2] = a3;
      break;
    case 0x29:
      (*(this + 4))[0xA] = a3;
      break;
    case 0x2E:
      result = *(this + 4);
      result[8] = a3;
      break;
    case 0x2F:
      (*(this + 4))[9] = a3;
      break;
    case 0x30:
      (*(this + 4))[3] = a3;
      break;
    case 0x31:
      result = *(this + 4);
      result[5] = a3;
      break;
    case 0x38:
      (*(this + 4))[7] = a3;
      break;
    default:
      return (_DWORD *)AVCollection_AddToArray_::Done(a2, a3);
  }
  return result;
}
